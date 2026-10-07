#include "fruit/renderer.hpp"
#include "fruit/model_pose.hpp"
#include "fruit/ui.hpp"
#include <fstream>
#include <regex>
#include <sstream>
#include <stdexcept>
namespace fruit {
namespace {
void check(int result) {
    if (result < 0)
        throw std::runtime_error(SDL_GetError());
}
std::vector<int> codepoints(const std::string &text) {
    std::vector<int> result;
    for (std::size_t i = 0; i < text.size();) {
        unsigned c = static_cast<unsigned char>(text[i++]);
        int extra = c < 128              ? 0
                    : (c & 0xe0) == 0xc0 ? 1
                    : (c & 0xf0) == 0xe0 ? 2
                    : (c & 0xf8) == 0xf0 ? 3
                                         : -1;
        if (extra < 0) {
            result.push_back('?');
            continue;
        }
        unsigned value = extra ? c & ((1u << (6 - extra)) - 1u) : c;
        bool valid = i + std::size_t(extra) <= text.size();
        for (int n = 0; n < extra && valid; ++n) {
            unsigned tail = static_cast<unsigned char>(text[i]);
            if ((tail & 0xc0) != 0x80) {
                valid = false;
                break;
            }
            ++i;
            value = (value << 6) | (tail & 0x3f);
        }
        static constexpr unsigned minimum[] = {0, 0x80, 0x800, 0x10000};
        valid = valid && value >= minimum[extra] && value <= 0x10ffff &&
                !(value >= 0xd800 && value <= 0xdfff);
        result.push_back(valid ? int(value) : '?');
    }
    return result;
}
float y(float world) {
    return 320 - world;
}
} // namespace
Renderer::Renderer(SDL_Renderer *r, SDL_Window *window, std::filesystem::path a)
    : renderer_(r), window_(window), assets_(std::move(a)) {
    // The reference APK stretches its 480x320 canvas to the full display. Disable
    // SDL logical-size event rewriting so raw mouse and normalized touch agree.
    check(SDL_RenderSetLogicalSize(r, 0, 0));
    fitViewport();
    SDL_SetRenderDrawBlendMode(r, SDL_BLENDMODE_BLEND);
    readFont();
}
Renderer::~Renderer() {
    for (auto &p : textures_)
        SDL_DestroyTexture(p.second.handle);
}
Texture &Renderer::texture(const std::string &name) {
    auto found = textures_.find(name);
    if (found != textures_.end())
        return found->second;
    auto im = decode_texture(read_file((assets_ / "original" / name).string()));
    Texture t;
    t.width = int(im.width);
    t.height = int(im.height);
    t.handle = SDL_CreateTexture(renderer_, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_STATIC,
                                 t.width, t.height);
    if (!t.handle)
        throw std::runtime_error(SDL_GetError());
    check(SDL_UpdateTexture(t.handle, nullptr, im.rgba.data(), t.width * 4));
    check(SDL_SetTextureBlendMode(t.handle, SDL_BLENDMODE_BLEND));
    SDL_SetTextureScaleMode(t.handle, SDL_ScaleModeLinear);
    return textures_.emplace(name, t).first->second;
}
Model &Renderer::model(const std::string &name) {
    auto found = models_.find(name);
    if (found != models_.end())
        return found->second;
    Model m;
    m.meshes =
        decode_model(read_file((assets_ / "original/models/fruit" / (name + ".mmd")).string()));
    return models_.emplace(name, std::move(m)).first->second;
}
void Renderer::image(const std::string &name, float x, float yy, float w, float h, SDL_Color tint) {
    auto &t = texture(name);
    SDL_SetTextureColorMod(t.handle, tint.r, tint.g, tint.b);
    SDL_SetTextureAlphaMod(t.handle, static_cast<Uint8>(float(tint.a) * sceneOpacity_));
    SDL_FRect dst{x, yy, w, h};
    check(SDL_RenderCopyF(renderer_, t.handle, nullptr, &dst));
}
void Renderer::rectangle(float x, float yy, float w, float h, SDL_Color c) {
    SDL_SetRenderDrawColor(renderer_, c.r, c.g, c.b, c.a);
    SDL_FRect r{x, yy, w, h};
    SDL_RenderFillRectF(renderer_, &r);
}
void Renderer::readFont() {
    auto load = [&](const std::string &name, std::map<int, Glyph> &glyphs) {
        std::ifstream f(assets_ / "original/fonts" / (name + ".fnt"));
        if (!f)
            throw std::runtime_error("Missing font: " + name);
        std::string line;
        std::regex pair("([a-zA-Z]+)=(-?[0-9]+)");
        while (std::getline(f, line)) {
            if (line.rfind("char ", 0) != 0)
                continue;
            std::map<std::string, int> a;
            for (std::sregex_iterator i(line.begin(), line.end(), pair), end; i != end; ++i)
                a[(*i)[1]] = std::stoi((*i)[2]);
            glyphs[a["id"]] = {a["x"],       a["y"],       a["width"],   a["height"],
                               a["xoffset"], a["yoffset"], a["xadvance"]};
        }
    };
    load("font_fruit_ninja", glyphs_);
    font_ = &texture("font_fruit_ninja_0.tex");
    const char *names[] = {"fruit_ninja_numbers", "fruit_ninja_numbers_silver",
                           "fruit_ninja_numbers_red"};
    for (int i = 0; i < 3; ++i) {
        load(names[i], numberGlyphs_[i]);
        numberFonts_[i] = &texture(std::string(names[i]) + "_0.tex");
    }
}
void Renderer::text(const std::string &value, float x, float yy, float scale, SDL_Color color,
                    bool center, const std::map<int, Glyph> &glyphs, Texture &font) {
    const auto letters = codepoints(value);
    float width = 0;
    for (int c : letters) {
        auto it = glyphs.find(c);
        if (it != glyphs.end())
            width += float(it->second.advance) * scale;
    }
    if (center)
        x -= width * .5f;
    SDL_SetTextureColorMod(font.handle, color.r, color.g, color.b);
    SDL_SetTextureAlphaMod(font.handle, static_cast<Uint8>(float(color.a) * sceneOpacity_));
    for (int c : letters) {
        auto it = glyphs.find(c);
        if (it == glyphs.end())
            continue;
        auto g = it->second;
        SDL_Rect src{g.x, g.y, g.w, g.h};
        SDL_FRect dst{x + float(g.ox) * scale, yy + float(g.oy) * scale, float(g.w) * scale,
                      float(g.h) * scale};
        check(SDL_RenderCopyF(renderer_, font.handle, &src, &dst));
        x += float(g.advance) * scale;
    }
}
void Renderer::label(const std::string &value, float x, float yy, float scale, SDL_Color color,
                     bool center) {
    text(value, x, yy, scale, color, center, glyphs_, *font_);
}
void Renderer::number(int value, float x, float yy, float scale, bool center, int font) {
    scale *= 58.f / float(numberGlyphs_[font].at('0').h);
    text(std::to_string(value), x, yy, scale, {255, 255, 255, 255}, center, numberGlyphs_[font],
         *numberFonts_[font]);
}
void Renderer::body(const Body &b) {
    std::string name = b.model;
    auto split = name.find('#');
    if (split != std::string::npos) {
        std::string base = name.substr(0, split);
        int part = std::stoi(name.substr(split + 1));
        auto it = pieces_.find(base);
        if (it == pieces_.end()) {
            std::vector<std::string> names;
            auto data = read_file((assets_ / "original/models/fruit" / (base + ".mad")).string());
            auto u16 = [&](std::size_t o) {
                if (o + 2 > data.size())
                    throw std::runtime_error("MAD bounds");
                return unsigned(data[o]) | (unsigned(data[o + 1]) << 8);
            };
            auto u32 = [&](std::size_t o) { return u16(o) | (u16(o + 2) << 16); };
            if (data.size() < 24)
                throw std::runtime_error("MAD header");
            std::size_t o = 22 + u16(20);
            unsigned n = u32(o + 8);
            o += 12;
            for (unsigned i = 0; i < n; ++i) {
                unsigned length = u16(o);
                o += 2;
                if (o + length + 4 > data.size())
                    throw std::runtime_error("MAD piece bounds");
                std::string p(data.begin() + std::ptrdiff_t(o),
                              data.begin() + std::ptrdiff_t(o + length));
                names.push_back(base + "_" + p);
                o += length + 4;
            }
            it = pieces_.emplace(base, names).first;
        }
        if (part >= int(it->second.size()))
            return;
        name = it->second[std::size_t(part)];
    }
    auto &m = model(name);
    const float scale = modelScale(b);
    auto rotate = [&](Vec3 v) { return rotateModel(b, v); };
    triangles_.clear();
    for (auto &mesh : m.meshes) {
        projected_.resize(mesh.vertices.size());
        depths_.resize(mesh.vertices.size());
        for (std::size_t i = 0; i < mesh.vertices.size(); ++i) {
            const auto &v = mesh.vertices[i];
            auto p = rotate({v.position[0], v.position[1], v.position[2]});
            auto n = rotate({v.normal[0], v.normal[1], v.normal[2]});
            float light = std::clamp(.78f + n.z * .20f - n.y * .10f, .4f, 1.f);
            auto c = static_cast<unsigned char>(light * 255);
            depths_[i] = p.z;
            projected_[i] = {{b.position.x + p.x * scale, y(b.position.y + p.y * scale)},
                             {static_cast<Uint8>(v.colour[0] * c / 255),
                              static_cast<Uint8>(v.colour[1] * c / 255),
                              static_cast<Uint8>(v.colour[2] * c / 255),
                              static_cast<Uint8>(v.colour[3] * (b.piece ? 1.f : sceneOpacity_))},
                             // Original models include small border overshoots (OpenFeint).
                             // SDL geometry requires normalized coordinates inside the texture.
                             {std::clamp(v.uv[0], 0.f, 1.f), std::clamp(v.uv[1], 0.f, 1.f)}};
        }
        for (std::size_t i = 0; i < mesh.indices.size(); i += 3) {
            Triangle t{};
            for (int j = 0; j < 3; ++j) {
                auto index = mesh.indices[i + std::size_t(j)];
                t.z += depths_[index];
                t.vertices[j] = projected_[index];
            }
            // Original GL uses CCW faces with back-face culling. Screen Y is inverted.
            const auto &a = t.vertices[0].position;
            const auto &c = t.vertices[1].position;
            const auto &d = t.vertices[2].position;
            float facing = (c.x - a.x) * (d.y - a.y) - (c.y - a.y) * (d.x - a.x);
            if (facing < 0)
                triangles_.push_back(t);
        }
    }
    std::sort(triangles_.begin(), triangles_.end(), [](auto &a, auto &c) { return a.z < c.z; });
    auto &atlas = texture("models/fruit/textures/fruit_atlas.tex");
    SDL_SetTextureColorMod(atlas.handle, 255, 255, 255);
    SDL_SetTextureAlphaMod(atlas.handle, 255);
    batch_.clear();
    batch_.reserve(triangles_.size() * 3);
    for (const auto &t : triangles_)
        batch_.insert(batch_.end(), std::begin(t.vertices), std::end(t.vertices));
    // Preserve painter order, but issue one geometry command instead of one per face.
    if (!batch_.empty())
        check(SDL_RenderGeometry(renderer_, atlas.handle, batch_.data(), int(batch_.size()),
                                 nullptr, 0));
}
void Renderer::blade(const Game &g) {
    const auto *item = g.progress() ? g.config().item(g.progress()->selectedBlade) : nullptr;
    auto &strip = texture("textures/" + (item ? item->bladeTexture : "blade") + ".tex");
    SDL_SetTextureColorMod(strip.handle, 255, 255, 255);
    SDL_SetTextureAlphaMod(strip.handle, 255);
    for (auto &contact : g.pointers) {
        const auto &points = contact.second.trail;
        if (points.size() < 2)
            continue;
        std::vector<SDL_Vertex> vertices;
        std::vector<int> indices;
        vertices.reserve(points.size() * 2);
        for (std::size_t i = 0; i < points.size(); ++i) {
            auto before = points[i ? i - 1 : i].p;
            auto after = points[i + 1 < points.size() ? i + 1 : i].p;
            Vec2 direction = after - before;
            float distance = length(direction);
            Vec2 normal = distance > .001f ? Vec2{-direction.y / distance, direction.x / distance}
                                           : Vec2{0, 1};
            float age = std::clamp(points[i].life / BladeLife, 0.f, 1.f);
            // Fade older samples and taper both ends; the original texture supplies the bright
            // core.
            float tail = std::min(1.f, 4.f * float(i) / float(points.size() - 1));
            float tip = std::min(1.f, float(points.size() - 1 - i) / 5.f);
            float halfWidth = 5.f * std::sqrt(age) * tail * tip;
            // A cool edge gradient complements the texture's white core and keeps SDL's
            // software backend on the shared-edge triangle path (no separately rounded blits).
            SDL_Color colour{255, 255, 255, static_cast<Uint8>(age * 255)};
            if (item && !item->colours.empty()) {
                auto rgb = item->colours[contact.second.stroke % item->colours.size()];
                colour.r = rgb[0];
                colour.g = rgb[1];
                colour.b = rgb[2];
            }
            for (int edge = 0; edge < 2; ++edge) {
                Vec2 p = points[i].p + normal * (edge ? halfWidth : -halfWidth);
                if (edge)
                    colour.r = static_cast<Uint8>(std::max(0, int(colour.r) - 1));
                vertices.push_back({{p.x, y(p.y)}, colour, {i % 2 ? 1.f : 0.f, edge ? 1.f : 0.f}});
            }
            if (i) {
                int a = int((i - 1) * 2), b = int(i * 2);
                indices.insert(indices.end(), {a, a + 1, b, a + 1, b + 1, b});
            }
        }
        check(SDL_RenderGeometry(renderer_, strip.handle, vertices.data(), int(vertices.size()),
                                 indices.data(), int(indices.size())));
    }
}
void Renderer::wrapped(const std::string &text, float x, float top, float width, float scale,
                       int maxLines, SDL_Color colour) {
    std::istringstream words(text);
    std::string word, line;
    int lines = 0;
    auto measure = [&](const std::string &s) {
        float result = 0;
        for (int c : codepoints(s)) {
            auto it = glyphs_.find(c);
            if (it != glyphs_.end())
                result += float(it->second.advance) * scale;
        }
        return result;
    };
    while (words >> word) {
        if (!line.empty() && measure(line + " " + word) > width) {
            label(line, x, top + float(lines++) * 44 * scale, scale, colour);
            line.clear();
            if (lines >= maxLines)
                return;
        }
        if (!line.empty())
            line += " ";
        line += word;
    }
    if (!line.empty() && lines < maxLines)
        label(line, x, top + float(lines) * 44 * scale, scale, colour);
}
void Renderer::ring(const std::string &name, Vec2 center, float size, float angle) {
    auto &t =
        texture(name.size() >= 4 && name.substr(name.size() - 4) == ".tex" ? name : name + ".tex");
    SDL_SetTextureColorMod(t.handle, 255, 255, 255);
    SDL_SetTextureAlphaMod(t.handle, static_cast<Uint8>(255 * sceneOpacity_));
    SDL_FRect dst{center.x - size * .5f, y(center.y) - size * .5f, size, size};
    check(SDL_RenderCopyExF(renderer_, t.handle, nullptr, &dst, angle, nullptr, SDL_FLIP_NONE));
}
void Renderer::collection(const Game &g) {
    bool swag = g.screen == Screen::Swag;
    auto progress = g.progress();
    if (swag) {
        auto rightText = [&](const std::string &value, float right, float top, float scale,
                             SDL_Color colour) {
            float width = 0;
            for (int c : codepoints(value)) {
                auto it = glyphs_.find(c);
                if (it != glyphs_.end())
                    width += float(it->second.advance) * scale;
            }
            label(value, right - width, top, scale, colour);
        };
        SDL_Rect listClip{0, 0, int(ui::CatalogWidth), 320};
        check(SDL_RenderSetClipRect(renderer_, &listClip));
        for (std::size_t i = 0; i < g.config().items.size(); ++i) {
            const auto &item = g.config().items[i];
            float top = ui::CatalogTop + float(i) * ui::CatalogRowHeight - g.catalogScroll;
            if (top + ui::CatalogRowHeight < 0 || top > 320)
                continue;
            bool unlocked = progress && progress->unlocked(g.config(), item.id);
            bool selected = progress && (item.id == progress->selectedBlade ||
                                         item.id == progress->selectedBackground);
            bool preview = int(i) == g.catalogPreview;

            SDL_Color colour{255, 255, 255, 255};
            rightText(g.config().text(item.title), 204, top + 19, .57f, colour);
            rightText(item.type == "BACKGROUND" ? "BACKGROUND" : "BLADE", 204, top + 46, .5f,
                      colour);
            std::string icon = item.type == "BACKGROUND" ? "item_" + item.texture : item.texture;
            image("textures/" + (unlocked ? icon : "locked_stroke") + ".tex", 208, top + 12, 64,
                  64);
            if (selected)
                image("textures/selected_sml.tex", 88, top + 39, 60, 30);
            if (item.id == "SHINY_RED_SLASH")
                image("textures/new_item_sml.tex", 5, top + 7, 40, 20);
            image("textures/scratch_deviders.tex", 0, top + 76, 284, 8);
            if (!preview)
                rectangle(0, top, ui::CatalogWidth - 12, ui::CatalogRowHeight, {0, 0, 0, 110});
        }
        check(SDL_RenderSetClipRect(renderer_, nullptr));
        image("textures/dialog_box_shop.tex", 260, 102, 235, 112);
        if (!g.config().items.empty()) {
            auto index =
                std::size_t(std::clamp(g.catalogPreview, 0, int(g.config().items.size()) - 1));
            const auto &item = g.config().items[index];
            bool unlocked = progress && progress->unlocked(g.config(), item.id);
            auto detail = g.config().text(unlocked ? item.description : item.requirement);
            auto percent = detail.find("%i");
            if (percent != std::string::npos)
                detail.replace(
                    percent, 2,
                    std::to_string(
                        std::max(0, item.target - (progress ? progress->count(item.counter) : 0))));
            wrapped(detail, 308, 147, 159, .35f, 4, {100, 74, 31, 255});
            bool selected = progress && (item.id == progress->selectedBlade ||
                                         item.id == progress->selectedBackground);
            ring(selected ? "textures/selected_ring.tex" : "textures/select_item.tex",
                 ui::CatalogSelect, 109, float(g.menuTime() * 12));
            if (!g.menuFruitCut(ui::CatalogSelect))
                body(g.menuBody("pineapple_single", ui::CatalogSelect, 27.625f));
        }
        ring("textures/back_icon.tex", ui::CatalogBack, 109, float(-g.menuTime() * 12));
        if (!g.menuFruitCut(ui::CatalogBack))
            body(g.menuBody("bomb", ui::CatalogBack, 23.375f));
        for (const auto &half : g.bodies)
            body(half);
        return;
    } else {
        label("ACHIEVEMENTS", 240, 8, .65f, {255, 235, 155, 255}, true);
        std::vector<const AchievementDefinition *> rules;
        for (const auto &r : g.config().achievements)
            if (!g.config().item(r.id))
                rules.push_back(&r);
        int page = std::clamp(g.page, 0, std::max(0, (int(rules.size()) - 1) / 3));
        for (int n = 0; n < 3 && page * 3 + n < int(rules.size()); ++n) {
            auto r = rules[std::size_t(page * 3 + n)];
            float top = 57.f + float(n) * 72;
            image("textures/" + r->texture + ".tex", 20, top, 58, 58);
            label(g.config().text(r->name), 87, top, .35f,
                  progress && progress->earned.count(r->id) ? SDL_Color{160, 255, 140, 255}
                                                            : SDL_Color{255, 235, 170, 255});
            auto suffix = r->name.substr(r->name.size() - 2);
            wrapped(g.config().text("ACHIEVEMENT_DESC_" + suffix), 87, top + 22, 350, .26f, 3);
        }
        label("PAGE " + std::to_string(page + 1) + " / 9", 240, 289, .34f, {255, 255, 255, 255},
              true);
    }
    label("< PREV", 35, 289, .32f);
    label("NEXT >", 355, 289, .32f);
    label("BACK", 445, 289, .32f, {255, 255, 255, 255}, true);
}
void Renderer::fitViewport() {
    int w, h;
    check(SDL_GetRendererOutputSize(renderer_, &w, &h));
    check(SDL_RenderSetScale(renderer_, float(w) / 480.f, float(h) / 320.f));
    // A null viewport uses exact output pixels, avoiding float truncation at edges.
    check(SDL_RenderSetViewport(renderer_, nullptr));
}
void Renderer::draw(const Game &g, const std::array<int, 3> &highscores) {
    fitViewport();
    SDL_SetRenderDrawColor(renderer_, 12, 12, 12, 255);
    SDL_RenderClear(renderer_);
    sceneOpacity_ = 1;
    bool gameplay =
        g.screen == Screen::Playing || g.screen == Screen::Paused || g.screen == Screen::Results;
    bool store = g.screen == Screen::Swag || g.screen == Screen::Achievements;
    auto bg = g.progress() ? g.config().item(g.progress()->selectedBackground) : nullptr;
    image("textures/" +
              std::string(store            ? "bg_store"
                          : gameplay && bg ? bg->texture
                                           : "gb_game") +
              ".tex",
          store ? -30 : 0, store ? -110 : 0, store ? 540 : 480, store ? 540 : 320);
    sceneOpacity_ = g.menuSceneOpacity();
    if (g.screen == Screen::Swag || g.screen == Screen::Achievements)
        collection(g);
    else if (g.screen == Screen::Home || g.screen == Screen::Dojo) {
        bool home = g.screen == Screen::Home;
        if (home) {
            image("textures/fruit_text.tex", 8, -16, 232, 116);
            image("textures/ninja_text.tex", 236, 34, 128, 64);
        } else {
            image("textures/dojo_sensei.tex",
                  ui::DojoSensei.x - (1 - sceneOpacity_) * ui::DojoSensei.w, ui::DojoSensei.y,
                  ui::DojoSensei.w, ui::DojoSensei.h);
            image("textures/dojo.tex", ui::DojoTitle.x, ui::DojoTitle.y, ui::DojoTitle.w,
                  ui::DojoTitle.h);
            image("textures/sml_title.tex", 350, -9, 130, 65);
        }
        const auto *positions = home ? ui::HomeFruitPositions : ui::DojoFruitPositions;
        const char *names[] = {"watermelon", "mango", "openfeint", "bomb"};
        const char *homeRings[] = {"newgame", "dojo_icon", "feint", "quit"};
        const char *dojoRings[] = {"senseis_swag", "about", "back_icon"};
        for (int n = 0; n < (home ? 4 : 3); ++n) {
            float size = home ? ui::HomeRingSizes[n] : ui::DojoRingSizes[n];
            ring("textures/" + std::string(home ? homeRings[n] : dojoRings[n]), positions[n], size,
                 float(g.menuTime() * (n == 1 ? -12 : 12)));
            std::string name = home     ? (n == 3 ? "bomb" : std::string(names[n]) + "_single")
                               : n == 0 ? "pineapple_single"
                               : n == 1 ? "plum_single"
                                        : "bomb";
            if (!g.menuFruitCut(positions[n]))
                body(g.menuBody(name, positions[n],
                                home ? ui::HomeFruitRadii[n] : ui::DojoFruitRadii[n], n));
        }
        for (const auto &half : g.bodies)
            body(half);
        if (!home)
            image("textures/new_item.tex", 257, 87, 64, 32);
        if (home) {
            image("textures/slice_fruit.tex", 2, 102, 120, 60);
            image("textures/new_item.tex", 126, 141, 64, 32);
            if (g.offlineNotice > 0) {
                image("textures/hud_unlocked_dialog.tex", 112, -12, 256, 64);
                Body logo;
                logo.model = "openfeint_single";
                logo.position = {133, 304, 0};
                logo.radius = 20;
                logo.age = 2.8f;
                body(logo);
                label("YOU ARE OFFLINE.", 162, 3, .38f, {40, 32, 15, 255});
            }
        }
    } else if (g.screen == Screen::About) {
        image("textures/credits.tex", -16, 32, 512, 256);
        label("ACHIEVEMENTS", 240, 280, .35f, {255, 235, 155, 255}, true);
        label("BACK", 445, 289, .32f, {255, 255, 255, 255}, true);
    } else if (g.screen == Screen::Menu) {
        image("textures/mode_sensei.tex", -5, 110, 105, 210);
        image("textures/mode_select.tex", 5, 283, 165, 41);
        image("textures/sml_title.tex", 350, -9, 130, 65);
        image("textures/zen_sign.tex", ui::ZenSign.x, ui::ZenSign.y, ui::ZenSign.w, ui::ZenSign.h);
        ring("textures/back_icon.tex", ui::ModeBackBomb, ui::ModeBackRingSize,
             float(g.menuTime() * -12));
        body(g.menuBody("bomb", ui::ModeBackBomb, ui::ModeBackRadius));

        const char *rings[] = {"textures/classic.tex", "textures/mode_2.tex",
                               "textures/arcade_mode.tex"};
        for (auto &item : menuFruits()) {
            auto i = static_cast<std::size_t>(item.mode);
            auto &ring = texture(rings[i]);
            SDL_FRect destination{item.position.x - item.ringSize * .5f,
                                  y(item.position.y) - item.ringSize * .5f, item.ringSize,
                                  item.ringSize};
            check(SDL_RenderCopyExF(renderer_, ring.handle, nullptr, &destination,
                                    g.menuRingAngle(item), nullptr, SDL_FLIP_NONE));
            if (!g.menuSelection() || *g.menuSelection() != item.mode) {
                Body fruit;
                auto definition = g.config().fruit(item.fruit);
                fruit.model = definition->model + "_single";
                auto position = g.menuFruitPosition(item);
                fruit.position = {position.x, position.y, 0};
                fruit.rotation = g.menuFruitRotation(item);
                fruit.age = g.menuFruitTumble() / .45f;
                fruit.radius = item.radius;
                body(fruit);
            }
        }
        for (auto &half : g.bodies)
            body(half);

    } else {
        for (const auto &power : g.powers)
            if (power.name == "freeze") {
                float fade =
                    std::clamp(std::min(7.f - power.remaining, power.remaining) / .75f, 0.f, 1.f);
                image("textures/ice_cover.tex", 0, 0, 480, 320,
                      {255, 255, 255, static_cast<Uint8>(fade * 255)});
            }
        for (auto &p : g.particles) {
            float alpha = std::clamp(p.life, 0.f, 1.f) * float(p.colour[3]);
            rectangle(p.position.x - 2, y(p.position.y) - 2, 4, 4,
                      {p.colour[0], p.colour[1], p.colour[2], static_cast<unsigned char>(alpha)});
        }
        for (auto &b : g.bodies)
            body(b);
        image("textures/hud_fruit.tex", -6, -8, 52, 52);
        number(g.score, 43, -5, .55f);
        label("BEST: " + std::to_string(highscores[std::size_t(g.mode)]), 7, 42, .23f,
              {255, 233, 175, 255});
        if (g.mode == Mode::Classic) {
            // FUN_0003466c / table 0xc445c: x/y/rotation/scale for all three lives.
            const float xs[] = {401, 428, 460}, ys[] = {10, 13, 18};
            const float sizes[] = {24, 32, 38.4f}, angles[] = {-5, 5, 10};
            auto &cross = texture("textures/hud_cross.tex");
            SDL_SetTextureColorMod(cross.handle, 255, 255, 255);
            SDL_SetTextureAlphaMod(cross.handle, 255);
            for (int i = 0; i < 3; ++i) {
                SDL_Rect src{i < g.misses ? 32 : 0, 0, 32, 32};
                SDL_FRect dst{xs[i] - sizes[i] * .5f, ys[i] - sizes[i] * .5f, sizes[i], sizes[i]};
                check(SDL_RenderCopyExF(renderer_, cross.handle, &src, &dst, angles[i], nullptr,
                                        SDL_FLIP_NONE));
            }
        } else {
            int time = int(std::ceil(g.remaining));
            time = std::max(0, time);
            std::string clock = std::to_string(time / 60) + ":" + (time % 60 < 10 ? "0" : "") +
                                std::to_string(time % 60);
            int font = time <= 10 ? 2 : 0;
            float scale = .45f * 58.f / float(numberGlyphs_[font].at('0').h);
            float width = 0;
            for (unsigned char c : clock)
                width += float(numberGlyphs_[font].at(c).advance) * scale;
            text(clock, 475 - width, -4, scale, {255, 255, 255, 255}, false, numberGlyphs_[font],
                 *numberFonts_[font]);
        }
        if (g.screen == Screen::Playing)
            image("textures/pause_button.tex", ui::Pause.x, ui::Pause.y, ui::Pause.w, ui::Pause.h);
        for (auto &p : g.popups)
            label(p.text, p.position.x, y(p.position.y), .48f,
                  {255, 242, 176, static_cast<unsigned char>(std::clamp(p.life, 0.f, 1.f) * 255)},
                  true);
        if (g.mode == Mode::Arcade && g.blitz.stage > 0) {
            image("textures/blitz_" + std::to_string(std::min(g.blitz.stage, 6)) + ".tex", 338, 49,
                  126, 63);
            rectangle(350, 111, 100, 4, {35, 20, 10, 160});
            rectangle(350, 111, 100 * g.blitz.window, 4, {255, 200, 55, 220});
        }
        float powerY = 51;
        for (const auto &p : g.powers) {
            auto def = g.config().power(p.name);
            if (!def || def->bar.empty())
                continue;
            image("textures/" + def->bar + ".tex", 8, powerY, 110, 27.5f);
            rectangle(20, powerY + 27, 86, 3, {25, 25, 25, 180});
            rectangle(20, powerY + 27, 86 * std::clamp(p.remaining / def->duration, 0.f, 1.f), 3,
                      {250, 232, 130, 240});
            if (p.name == "freeze")
                image("textures/clock_freeze.tex", 382, 0, 128, 64);
            if (p.name == "score_mult")
                image("textures/hud_x2_sign.tex", 86, 0, 46, 46);
            powerY += 37;
        }
        if (g.introRemaining > 0) {
            auto intro = g.config().power("ready_set_go");
            float t = intro && intro->duration > 0 ? g.introRemaining / intro->duration : 0;
            if (t <= .85f && t >= .45f) {
                float fade = std::clamp(std::min(.85f - t, t - .45f) / .1f, 0.f, 1.f);
                image("textures/arcade_60seconds.tex", 144, 112, 192, 96,
                      {255, 255, 255, static_cast<Uint8>(255 * fade)});
            } else if (t <= .4f) {
                // The XML names arcade_go, but that texture is absent from this APK.
                label("GO!", 240, 123, 1.5f, {255, 225, 65, 255}, true);
            }
        }
        if (g.flash > 0)
            rectangle(0, 0, 480, 320, {255, 70, 20, static_cast<unsigned char>(g.flash * 300)});
        if (g.screen == Screen::Paused || g.screen == Screen::Results) {
            rectangle(0, 0, 480, 320, {0, 0, 0, Uint8(g.screen == Screen::Paused ? 90 : 180)});
            if (g.screen == Screen::Results) {
                image("textures/sensei.tex", -5, 109, 170, 170);
                // FUN_0003fb6c selects a square Classic board and separate Zen/Arcade art.
                if (g.mode == Mode::Classic) {
                    image("textures/fact_board.tex", 238, 84, 172, 172);
                    wrapped(g.config().text(g.factKey), 253, 133, 144, .235f, 9, {76, 48, 22, 255});
                } else if (g.mode == Mode::Zen) {
                    image("textures/diolog_box_big.tex", 107, 42, 400, 200);
                    wrapped(g.config().text(g.factKey), 202, 168, 207, .195f, 4, {76, 48, 22, 255});
                } else {
                    image("textures/arcade_results_diolog_box.tex", 120, 111, 360, 90);
                    wrapped(g.config().text(g.factKey), 185, 130, 248, .22f, 6, {76, 48, 22, 255});
                }
                image(g.mode == Mode::Classic ? "textures/gameover.tex" : "textures/time_up.tex",
                      144, 3, 192, g.mode == Mode::Classic ? 48 : 24);
                image("textures/score.tex", 180, 35, 90, 22.5f);
                number(g.score, 280, 25, .5f, true);
                if (g.mode == Mode::Arcade) {
                    for (std::size_t i = 0; i < g.roundBonuses.size(); ++i) {
                        auto title = g.config().text(g.roundBonuses[i].title);
                        auto fmt = title.find("%i");
                        if (fmt != std::string::npos)
                            title.replace(fmt, 2, std::to_string(g.bestCombo));
                        label(title + " +" + std::to_string(g.roundBonuses[i].points), 163,
                              65 + float(i) * 14, .23f);
                    }
                }

                if (g.mode == Mode::Zen) {
                    label("BEST COMBO " + std::to_string(g.bestCombo), 307, 82, .3f,
                          {76, 48, 22, 255}, true);
                    if (!g.bestComboTexture.empty())
                        image("textures/" + g.bestComboTexture + ".tex", 235, 104, 148, 37);
                }
            } else {
                image("textures/pause_title.tex", 176, 80, 128, 32);
                const ui::Rect boxes[] = {ui::RetryPaused, ui::Resume, ui::QuitPaused};
                const char *art[] = {"retry_button", "play_button", "quit_title"};
                for (int i = 0; i < 3; ++i)
                    image("textures/" + std::string(art[i]) + ".tex", boxes[i].x, boxes[i].y,
                          boxes[i].w, boxes[i].h);
            }
            if (g.screen == Screen::Results) {
                const Vec2 positions[] = {ui::RetryFruit, ui::QuitFruit};
                const char *art[] = {"retry", "quit"};
                for (int i = 0; i < 2; ++i) {
                    image("textures/" + std::string(art[i]) + ".tex", positions[i].x - 54,
                          y(positions[i].y) - 54, 108, 108);
                    Body fruit;
                    fruit.model = i == 0 ? "apple_center_single" : "bomb";
                    fruit.position = {positions[i].x, positions[i].y, 0};
                    fruit.radius = ui::ResultFruitRadius;
                    fruit.bomb = i == 1;
                    body(fruit);
                }
            }
        }
    }
    sceneOpacity_ = 1;
    if (g.screen != Screen::Playing && g.screen != Screen::Results && g.screen != Screen::Menu &&
        g.screen != Screen::Swag && g.screen != Screen::Dojo && g.screen != Screen::About) {
        bool music = !g.progress() || g.progress()->musicEnabled;
        bool sound = !g.progress() || g.progress()->soundEnabled;
        auto musicBox = ui::music(g.screen == Screen::Paused);
        auto soundBox = ui::sound(g.screen == Screen::Paused);
        image(music ? "textures/music.tex" : "textures/music_cross.tex", musicBox.x, musicBox.y,
              musicBox.w, musicBox.h);
        image(sound ? "textures/sound.tex" : "textures/sound_cross.tex", soundBox.x, soundBox.y,
              soundBox.w, soundBox.h);
    }
    auto drawParticle = [&](const BladeParticle &particle) {
        float t = std::clamp(1.f - particle.remaining / particle.effect.life, 0.f, 1.f);
        float size = particle.effect.size + (particle.effect.endSize - particle.effect.size) * t;
        SDL_Color colour;
        auto channel = [&](std::size_t n) {
            return static_cast<Uint8>(
                float(particle.effect.colour[n]) +
                (float(particle.effect.endColour[n]) - float(particle.effect.colour[n])) * t);
        };
        colour = {channel(0), channel(1), channel(2), channel(3)};
        if (particle.effect.directional) {
            auto &t = texture("particles/" + particle.effect.texture + ".tex");
            SDL_SetTextureColorMod(t.handle, colour.r, colour.g, colour.b);
            SDL_SetTextureAlphaMod(t.handle, colour.a);
            SDL_FRect dst{particle.position.x - size * .5f, y(particle.position.y) - size * .5f,
                          size, size};
            float angle =
                std::atan2(-particle.velocity.y, particle.velocity.x) * 180.f / 3.14159265f;
            check(SDL_RenderCopyExF(renderer_, t.handle, nullptr, &dst, angle, nullptr,
                                    SDL_FLIP_NONE));
        } else
            image("particles/" + particle.effect.texture + ".tex", particle.position.x - size * .5f,
                  y(particle.position.y) - size * .5f, size, size, colour);
    };
    for (const auto &particle : g.fuseParticles)
        drawParticle(particle);
    for (const auto &particle : g.bladeParticles)
        drawParticle(particle);
    blade(g);
    if (g.progress() && !g.progress()->notifications.empty()) {
        const auto &n = g.progress()->notifications.front();
        rectangle(70, 2, 340, 48, {25, 38, 18, 235});
        std::string textureName = n.texture;
        std::transform(textureName.begin(), textureName.end(), textureName.begin(),
                       [](unsigned char c) { return char(std::tolower(c)); });
        image("textures/" + textureName + ".tex", 75, 4, 42, 42);
        wrapped(n.title, 124, 9, 275, .3f, 2);
    }
    SDL_RenderPresent(renderer_);
}
Vec2 Renderer::point(float x, float yy) const {
    int w, h;
    SDL_GetWindowSize(window_, &w, &h);
    return {x * 480.f / float(std::max(w, 1)), 320.f - yy * 320.f / float(std::max(h, 1))};
}
Vec2 Renderer::touchPoint(float x, float yy) const {
    return {x * 480.f, (1.f - yy) * 320.f};
}
void Renderer::screenshot(const std::filesystem::path &p) {
    int w, h;
    SDL_GetRendererOutputSize(renderer_, &w, &h);
    auto surface = SDL_CreateRGBSurfaceWithFormat(0, w, h, 32, SDL_PIXELFORMAT_RGBA32);
    if (!surface)
        throw std::runtime_error(SDL_GetError());
    SDL_Rect fullOutput{0, 0, w, h};
    SDL_FillRect(surface, nullptr, SDL_MapRGBA(surface->format, 12, 12, 12, 255));
    int result = SDL_RenderReadPixels(renderer_, &fullOutput, SDL_PIXELFORMAT_RGBA32,
                                      surface->pixels, surface->pitch);
    if (result == 0)
        result = SDL_SaveBMP(surface, p.string().c_str());
    SDL_FreeSurface(surface);
    check(result);
}
void Renderer::validateAssets(const Config &config) {
    texture("textures/bg_fruit_ninja.tex");
    texture("textures/hd_fruit_text.tex");
    texture("textures/hd_ninja_text.tex");
    texture("models/fruit/textures/fruit_atlas.tex");
    model("bomb");
    texture("textures/blade.tex");
    texture("textures/classic.tex");
    texture("textures/mode_2.tex");
    texture("textures/arcade_mode.tex");
    for (auto &f : config.fruits) {
        auto p = assets_ / "original/models/fruit" / (f.model + "_single.mmd");
        if (std::filesystem::exists(p))
            model(f.model + "_single");
    }
}
} // namespace fruit
