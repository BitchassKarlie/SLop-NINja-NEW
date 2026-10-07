#include "fruit/renderer.hpp"
#include "fruit/ui.hpp"
#include <iostream>
#include <stdexcept>
using namespace fruit;
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
int main(int argc, char **argv) {
    try {
        require(argc == 2 || argc == 3, "assets argument and optional capture directory");
        SDL_SetMainReady();
        SDL_setenv("SDL_VIDEODRIVER", "dummy", 1);
        SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");
        require(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) == 0, SDL_GetError());
        for (auto size : {Vec2{960, 640}, Vec2{1440, 900}, Vec2{800, 600}, Vec2{1280, 720}}) {
            auto window =
                SDL_CreateWindow("test", 0, 0, int(size.x), int(size.y), SDL_WINDOW_HIDDEN);
            require(window != nullptr, SDL_GetError());
            auto raw = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
            require(raw != nullptr, SDL_GetError());
            {
                Renderer renderer(raw, window, argv[1]);
                for (auto target : {Vec2{240, 160}, Vec2{120, 80}, Vec2{360, 240}}) {
                    int x = int(std::round(target.x * size.x / 480));
                    int y = int(std::round((320 - target.y) * size.y / 320));
                    SDL_Event event{};
                    event.type = SDL_MOUSEBUTTONDOWN;
                    event.button.windowID = SDL_GetWindowID(window);
                    event.button.button = SDL_BUTTON_LEFT;
                    event.button.x = x;
                    event.button.y = y;
                    require(SDL_PushEvent(&event) == 1, "push mouse");
                    bool seen = false;
                    while (SDL_PollEvent(&event))
                        if (event.type == SDL_MOUSEBUTTONDOWN) {
                            auto p = renderer.point(float(event.button.x), float(event.button.y));
                            require(std::abs(p.x - target.x) <= 1 && std::abs(p.y - target.y) <= 1,
                                    "mouse event mapped more than once");
                            seen = true;
                        }
                    require(seen, "mouse event missing");
                    event = {};
                    event.type = SDL_FINGERDOWN;
                    event.tfinger.windowID = SDL_GetWindowID(window);
                    event.tfinger.x = float(x) / size.x;
                    event.tfinger.y = float(y) / size.y;
                    require(SDL_PushEvent(&event) == 1, "push touch");
                    seen = false;
                    while (SDL_PollEvent(&event))
                        if (event.type == SDL_FINGERDOWN) {
                            auto p = renderer.touchPoint(event.tfinger.x, event.tfinger.y);
                            require(std::abs(p.x - target.x) <= 1 && std::abs(p.y - target.y) <= 1,
                                    "touch event differs from mouse");
                            seen = true;
                        }
                    require(seen, "touch event missing");
                }
                auto config = Config::load(argv[1]);
                Game game(config);
                renderer.draw(game, {});
                float sx, sy;
                SDL_RenderGetScale(raw, &sx, &sy);
                require(std::abs(sx - size.x / 480) < .001f && std::abs(sy - size.y / 320) < .001f,
                        "reference canvas must fill the display on both axes");
                // A full-canvas draw must reach every corner without letterbox bars.
                SDL_SetRenderDrawColor(raw, 30, 110, 190, 255);
                SDL_Rect canvas{0, 0, 480, 320};
                require(SDL_RenderFillRect(raw, &canvas) == 0, "fill full canvas");
                for (auto corner : {Vec2{0, 0}, Vec2{size.x - 1, 0}, Vec2{0, size.y - 1},
                                    Vec2{size.x - 1, size.y - 1}}) {
                    SDL_Rect pixel{int(corner.x), int(corner.y), 1, 1};
                    Uint8 rgba[4]{};
                    require(SDL_RenderReadPixels(raw, &pixel, SDL_PIXELFORMAT_RGBA32, rgba, 4) == 0,
                            "read canvas corner");
                    require(rgba[0] == 30 && rgba[1] == 110 && rgba[2] == 190,
                            "full-display canvas leaves uncovered pixels");
                }
                SDL_SetWindowSize(window, 1000, 500);
                renderer.draw(game, {});
                SDL_RenderGetScale(raw, &sx, &sy);
                require(std::abs(sx - 1000.f / 480) < .001f && std::abs(sy - 500.f / 320) < .001f,
                        "render scale must follow window resize");
                auto resized = renderer.point(750, 125);
                require(std::abs(resized.x - 360) < .001f && std::abs(resized.y - 240) < .001f,
                        "resized window input must use current window dimensions");
                SDL_SetWindowSize(window, int(size.x), int(size.y));
                game.start(Mode::Zen);
                renderer.draw(game, {});
                int width, height;
                SDL_GetRendererOutputSize(raw, &width, &height);
                SDL_Rect fullOutput{0, 0, width, height};
                std::vector<Uint8> before(std::size_t(width * height * 4));
                std::vector<Uint8> after(before.size());
                require(SDL_RenderReadPixels(raw, &fullOutput, SDL_PIXELFORMAT_RGBA32,
                                             before.data(), width * 4) == 0,
                        "read background");
                game.pointer(1, {50, 160}, true);
                game.pointer(1, {430, 160}, true);
                renderer.draw(game, {});
                require(SDL_RenderReadPixels(raw, &fullOutput, SDL_PIXELFORMAT_RGBA32, after.data(),
                                             width * 4) == 0,
                        "read textured blade");
                int brightPixels = 0;
                for (std::size_t i = 0; i < after.size(); i += 4)
                    if (int(after[i + 1]) > int(before[i + 1]) + 35 &&
                        int(after[i + 2]) > int(before[i + 2]) + 35)
                        ++brightPixels;
                require(brightPixels > 300,
                        "sparse swipe must draw a wide visible textured ribbon");
                int startX = 200 * width / 480, endX = 350 * width / 480;
                int lineY = height / 2;
                for (int x = startX; x < endX; ++x) {
                    auto i = std::size_t((lineY * width + x) * 4);
                    require(int(after[i + 1]) > int(before[i + 1]) + 35 &&
                                int(after[i + 2]) > int(before[i + 2]) + 35,
                            "blade must not have cracks between straight segments");
                }
                if (argc == 3 && size.x == 960) {
                    std::filesystem::create_directories(argv[2]);
                    renderer.screenshot(std::filesystem::path(argv[2]) / "blade.bmp");
                    Game menu(config);
                    menu.pointer(2, {45, 128}, true);
                    menu.pointer(2, {140, 140}, true);
                    menu.pointer(2, {270, 122}, true);
                    menu.pointer(2, {435, 142}, true);
                    renderer.draw(menu, {});
                    renderer.screenshot(std::filesystem::path(argv[2]) / "menu-blade.bmp");
                    menu.pointer(2, {435, 142}, false);
                    for (int frame = 0; frame < 20; ++frame)
                        menu.update(1.f / 60.f);
                    auto item = menuFruits()[0];
                    menu.pointer(3, item.position + Vec2{-50, 0}, true);
                    menu.pointer(3, item.position + Vec2{50, 0}, true);
                    for (int frame = 0; frame < 6; ++frame)
                        menu.update(1.f / 60.f);
                    renderer.draw(menu, {});
                    renderer.screenshot(std::filesystem::path(argv[2]) / "menu-cut.bmp");
                }
                Progress profile;
                game.attachProgress(profile);
                for (auto screen : {Screen::Home, Screen::Dojo, Screen::Swag, Screen::Achievements,
                                    Screen::Menu, Screen::About}) {
                    game.screen = screen;
                    if (screen == Screen::Home)
                        game.home();
                    for (int frame = 0; frame < 60; ++frame)
                        game.update(1.f / 60.f);
                    renderer.draw(game, {});
                    if (argc == 3 && size.x == 960)
                        renderer.screenshot(std::filesystem::path(argv[2]) /
                                            ("screen-" + std::to_string(int(screen)) + ".bmp"));
                }
                for (auto screen : {Screen::Dojo, Screen::Swag}) {
                    game.screen = screen;
                    renderer.draw(game, {});
                    require(SDL_RenderReadPixels(raw, &fullOutput, SDL_PIXELFORMAT_RGBA32,
                                                 before.data(), width * 4) == 0,
                            "read menu before animation");
                    for (int frame = 0; frame < 45; ++frame)
                        game.update(1.f / 60.f);
                    renderer.draw(game, {});
                    require(SDL_RenderReadPixels(raw, &fullOutput, SDL_PIXELFORMAT_RGBA32,
                                                 after.data(), width * 4) == 0,
                            "read animated menu");
                    require(before != after,
                            "menu graphics remain frozen across simulation updates");
                }
                if (argc == 3 && size.x == 960) {
                    for (auto screen : {Screen::Dojo, Screen::Swag}) {
                        game.screen = screen;
                        for (int frame = 0; frame < 60; ++frame) {
                            game.update(1.f / 60.f);
                            if (frame % 15 == 0) {
                                renderer.draw(game, {});
                                renderer.screenshot(std::filesystem::path(argv[2]) /
                                                    ("motion-" + std::to_string(int(screen)) + "-" +
                                                     std::to_string(frame) + ".bmp"));
                            }
                        }
                    }
                }
                for (const auto &item : config.items) {
                    profile.earned.insert(item.id);
                    profile.equip(config, item.id);
                    game.start(Mode::Zen);
                    game.pointer(7, {50, 160}, true);
                    game.pointer(7, {430, 160}, true);
                    for (int frame = 0; frame < 12; ++frame) {
                        game.pointer(7, {float(100 + frame * 20), 160}, true);
                        game.update(1.f / 60.f);
                    }
                    renderer.draw(game, {});
                }
                for (int page = 0; page < 9; ++page) {
                    game.screen = Screen::Achievements;
                    game.page = page;
                    renderer.draw(game, {});
                }
                for (std::size_t item = 0; item < config.items.size(); ++item) {
                    game.screen = Screen::Swag;
                    game.catalogPreview = int(item);
                    game.catalogScroll = std::min(
                        float(item) * ui::CatalogRowHeight,
                        ui::CatalogTop + float(config.items.size()) * ui::CatalogRowHeight - 320);
                    renderer.draw(game, {});
                }
                profile.selectedBackground = "background1";
                game.start(Mode::Zen);
                for (float seconds : {90.f, 59.f, 10.f, 9.f, 0.f}) {
                    game.remaining = seconds;
                    renderer.draw(game, {});
                }
                game.start(Mode::Classic);
                game.misses = 2;
                game.score = 123;
                renderer.draw(game, {});
                if (argc == 3 && size.x == 960)
                    renderer.screenshot(std::filesystem::path(argv[2]) / "classic-hud.bmp");
                game.pause();
                renderer.draw(game, {});
                if (argc == 3 && size.x == 960)
                    renderer.screenshot(std::filesystem::path(argv[2]) / "pause.bmp");
                game.start(Mode::Classic);
                game.debugSpawn("strawberry", {200, 150});
                game.pointer(9, {150, 150}, true);
                game.pointer(9, {250, 150}, true);
                game.pointer(9, {250, 150}, false);
                game.finishRound();
                game.pointers.clear();
                profile.notifications.clear();
                renderer.draw(game, {});
                if (argc == 3 && size.x == 960)
                    renderer.screenshot(std::filesystem::path(argv[2]) / "sensei-results.bmp");
                if (!profile.notifications.empty())
                    renderer.draw(game, {});
                for (int i = 0; i < 25; ++i)
                    for (const auto &texture : comboStarTextures(static_cast<ComboStar>(i)))
                        renderer.texture("textures/" + texture + ".tex");
                game.start(Mode::Zen);
                for (int i = 0; i < 3; ++i)
                    game.debugSpawn("coconut", {float(100 + i * 80), 150});
                game.pointer(45, {50, 150}, true);
                game.pointer(45, {310, 150}, true);
                game.pointer(45, {310, 150}, false);
                game.finishRound();
                game.pointers.clear();
                profile.notifications.clear();
                renderer.draw(game, {});
                if (argc == 3 && size.x == 960)
                    renderer.screenshot(std::filesystem::path(argv[2]) / "zen-star.bmp");
                game.start(Mode::Arcade);
                game.introRemaining = 1.2f;
                renderer.draw(game, {});
                if (argc == 3 && size.x == 960)
                    renderer.screenshot(std::filesystem::path(argv[2]) / "arcade-ready.bmp");
                game.introRemaining = .3f;
                renderer.draw(game, {});
                game.introRemaining = 0;
                game.powers = {{"freeze", 4}, {"speed", 3}, {"score_mult", 6}};
                renderer.draw(game, {});
                if (argc == 3 && size.x == 960)
                    renderer.screenshot(std::filesystem::path(argv[2]) / "arcade-powers.bmp");
                game.powers.clear();
                for (int stage = 1; stage <= 6; ++stage) {
                    game.blitz.stage = stage;
                    game.blitz.window = .7f;
                    renderer.draw(game, {});
                }
                if (argc == 3 && size.x == 960)
                    renderer.screenshot(std::filesystem::path(argv[2]) / "arcade-blitz.bmp");
                auto bomb = decode_model(read_file(
                    (std::filesystem::path(argv[1]) / "original/models/fruit/bomb.mmd").string()));
                bool hasColour = false;
                for (auto &mesh : bomb)
                    for (auto &v : mesh.vertices)
                        hasColour |= v.colour[0] != 255 || v.colour[1] != 255;
                require(hasColour, "bomb vertex colours lost");
            }
            SDL_DestroyRenderer(raw);
            SDL_DestroyWindow(window);
        }
        SDL_Quit();
        std::cout << "Mouse/touch mapping and textured blade passed at four window aspects; bomb "
                     "colours preserved\n";
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
