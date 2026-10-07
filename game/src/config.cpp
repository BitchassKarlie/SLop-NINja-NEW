#include "fruit/config.hpp"
#include "tinyxml2.h"
#include <cctype>
#include <fstream>
#include <limits>
#include <sstream>
#include <stdexcept>
namespace fruit {
namespace {
using E = tinyxml2::XMLElement;
std::string str(const E *e, const char *k, std::string fallback = "") {
    auto p = e->Attribute(k);
    return p ? p : fallback;
}
float num(const E *e, const char *k, float fallback) {
    return e->FloatAttribute(k, fallback);
}
std::vector<std::string> split(std::string s) {
    std::vector<std::string> r;
    std::istringstream in(s);
    std::string a;
    while (std::getline(in, a, ',')) {
        auto first = a.find_first_not_of(" \r\n\t"), last = a.find_last_not_of(" \r\n\t");
        if (first != std::string::npos)
            r.push_back(a.substr(first, last - first + 1));
    }
    return r;
}
void load(tinyxml2::XMLDocument &d, const std::filesystem::path &p) {
    if (d.LoadFile(p.string().c_str()) != tinyxml2::XML_SUCCESS)
        throw std::runtime_error("XML " + p.string() + ": " + d.ErrorStr());
    if (!d.RootElement())
        throw std::runtime_error("empty XML");
}
std::vector<WaveDefinition> waves(const std::filesystem::path &p) {
    tinyxml2::XMLDocument d;
    load(d, p);
    std::vector<WaveDefinition> out;
    WaveDefinition defaults;
    for (auto e = d.RootElement()->FirstChildElement(); e; e = e->NextSiblingElement()) {
        std::string tag = e->Name();
        if (tag == "defaults") {
            defaults.dt = num(e, "dt", defaults.dt);
            defaults.dtIncrement = num(e, "dtSpInc", defaults.dtIncrement);
            defaults.beforeDelay = num(e, "beforeDelay", defaults.beforeDelay);
            defaults.criticalMultiplier = num(e, "criticalChance", defaults.criticalMultiplier);
            defaults.nextDelay = num(e, "nextDelay", defaults.nextDelay);
            defaults.nextDelayIncrement = num(e, "nextDelaySpInc", defaults.nextDelayIncrement);
            defaults.waitForEntities =
                e->BoolAttribute("waitForEntities", defaults.waitForEntities);
            continue;
        }
        if (tag != "WaveInfo")
            continue;
        WaveDefinition w = defaults;
        w.number = e->IntAttribute("waveNo", 0);
        auto until = str(e, "until");
        w.until = until == "forever" ? std::numeric_limits<int>::max()
                                     : e->IntAttribute("until", w.number);
        w.chance = num(e, "chance", 100);
        w.chanceGrowth = num(e, "chanceRegrowth", 0);
        w.criticalMultiplier = num(e, "criticalChance", w.criticalMultiplier);
        w.gamesMin = e->IntAttribute("gamesMin", 0);
        w.gamesMax = e->IntAttribute("gamesMax", 1000000);
        if (auto dt = e->FirstChildElement("Wave_dt")) {
            w.dt = num(dt, "dt", w.dt);
            w.dtIncrement = num(dt, "inc", w.dtIncrement);
        }
        if (auto delay = e->FirstChildElement("NextWaveDelay")) {
            w.nextDelay = num(delay, "wait", num(delay, "delay", w.nextDelay));
            w.nextDelayIncrement = num(delay, "waitSpinc", w.nextDelayIncrement);
            w.waitForEntities = delay->BoolAttribute("waitForEntities", w.waitForEntities);
        }
        for (auto s = e->FirstChildElement("Spawn"); s; s = s->NextSiblingElement("Spawn")) {
            SpawnDefinition x;
            x.types = split(str(s, "type", "random"));
            x.min = s->IntAttribute("min", 1);
            x.max = s->IntAttribute("max", x.min);
            x.delay = num(s, "delay", 0);
            x.delayIncrement = num(s, "delayinc", 0);
            x.verticalScale = num(s, "velYscale", 1);
            x.placement = str(s, "placement");
            x.minIncrement = num(s, "mininc", 0);
            x.maxIncrement = num(s, "maxinc", 0);
            x.horizontalMin = num(s, "horizmin", -.25f);
            x.horizontalMax = num(s, "horizmax", .25f);
            auto g = split(str(s, "gravity"));
            if (g.size() == 3) {
                x.gravity = {std::stof(g[0]), std::stof(g[1]), std::stof(g[2])};
                x.customGravity = true;
            }
            w.spawns.push_back(x);
        }
        out.push_back(w);
    }
    return out;
}
std::vector<unsigned char> bytes(const std::filesystem::path &path) {
    std::ifstream in(path, std::ios::binary);
    if (!in)
        throw std::runtime_error("missing string table: " + path.string());
    return {std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>()};
}
std::uint32_t word(const std::vector<unsigned char> &v, std::size_t at) {
    if (at > v.size() || v.size() - at < 4)
        throw std::runtime_error("truncated string table");
    return std::uint32_t(v[at]) | (std::uint32_t(v[at + 1]) << 8) |
           (std::uint32_t(v[at + 2]) << 16) | (std::uint32_t(v[at + 3]) << 24);
}
std::string terminated(const std::vector<unsigned char> &v, std::size_t at) {
    if (at >= v.size())
        throw std::runtime_error("invalid string offset");
    auto end = std::find(v.begin() + std::ptrdiff_t(at), v.end(), 0);
    if (end == v.end())
        throw std::runtime_error("unterminated string");
    return {v.begin() + std::ptrdiff_t(at), end};
}
void loadStrings(Config &c, const std::filesystem::path &a) {
    auto h = bytes(a / "original/stringtables/translations_header.str");
    auto v = bytes(a / "original/stringtables/translations_english_us.str");
    auto n = word(h, 72);
    if (word(h, 0) != 1 || word(v, 0) != 1 || n > 100000 || n != word(v, 72) ||
        76ULL + n * 40ULL > h.size() || 76ULL + n * 12ULL > v.size())
        throw std::runtime_error("invalid string table header");
    for (std::size_t i = 0; i < n; ++i) {
        auto index = word(h, 76 + i * 40 + 36);
        if (index >= n)
            throw std::runtime_error("invalid string index");
        c.strings.emplace(terminated(h, 76 + n * 40 + word(h, 76 + i * 40)),
                          terminated(v, 76 + n * 12 + word(v, 76 + index * 12)));
    }
}
} // namespace
Config Config::load(const std::filesystem::path &a) {
    Config c;
    loadStrings(c, a);
    tinyxml2::XMLDocument d;
    ::fruit::load(d, a / "config/xml/fruitlist.xml");
    auto r = d.RootElement();
    if (auto e = r->FirstChildElement("critical")) {
        c.criticalScore = e->IntAttribute("score", 10);
        c.criticalChance = num(e, "chance", 50);
    }
    if (auto e = r->FirstChildElement("bomb"))
        c.bombSize = num(e, "size", 55);
    for (auto e = r->FirstChildElement("FruitInfo"); e; e = e->NextSiblingElement("FruitInfo")) {
        FruitDefinition f;
        f.name = str(e, "name");
        f.model = str(e, "modelName", f.name);
        f.chance = e->IntAttribute("chance", 0);
        f.score = e->IntAttribute("score", 1);
        f.scale = num(e, "scale", 60);
        f.collision = num(e, "collision", 5);
        f.noCritical = e->BoolAttribute("noCritical", false);
        auto v = split(str(e, "colour"));
        for (std::size_t i = 0; i < v.size() && i < 4; ++i)
            f.colour[i] = static_cast<unsigned char>(std::clamp(std::stoi(v[i]), 0, 255));
        for (auto s = e->FirstChildElement("impact_sound"); s;
             s = s->NextSiblingElement("impact_sound"))
            f.sounds.push_back(s->GetText() ? s->GetText() : "");
        if (auto s = e->FirstChildElement("power"))
            f.power = str(s, "name");
        for (auto s = e->FirstChildElement("fact"); s; s = s->NextSiblingElement("fact"))
            if (s->GetText())
                f.facts.emplace_back(s->GetText());
        c.fruits.push_back(f);
    }
    c.classic = waves(a / "config/xml/originalwavelist.xml");
    c.zen = waves(a / "config/xml/zenwavelist.xml");
    c.arcade = waves(a / "config/xml/arcadewavelist.xml");
    tinyxml2::XMLDocument overrides;
    ::fruit::load(overrides, a / "config/xml/arcadewavelist.xml");
    if (auto defaults = overrides.RootElement()->FirstChildElement("defaults"))
        c.arcadeSpeedLoss = num(defaults, "speedLoss", 4);
    for (auto e = overrides.RootElement()->FirstChildElement("OverideProbability"); e;
         e = e->NextSiblingElement("OverideProbability")) {
        OverrideDefinition o;
        o.types = split(str(e, "types"));
        o.chance = num(e, "percentageChance", 0);
        o.perWave = e->IntAttribute("perWave", 1);
        o.waveCount = e->IntAttribute("waveCount", 1);
        o.disableWhenPowered = num(e, "disableWhenPowered", 1);
        c.arcadeOverrides.push_back(o);
    }
    tinyxml2::XMLDocument powers;
    ::fruit::load(powers, a / "config/xml/poweruplist.xml");
    for (auto e = powers.RootElement()->FirstChildElement("power"); e;
         e = e->NextSiblingElement("power")) {
        PowerDefinition p;
        p.name = str(e, "name");
        p.bar = str(e, "bar");
        if (auto s = e->FirstChildElement("time_mod")) {
            p.duration = num(s, "length", 0);
            p.clockSpeed = num(s, "slowClock", 1);
            if (auto dt = s->FirstChildElement("dt_speed"))
                p.speed = num(dt, "dt", 1);
        }
        if (auto s = e->FirstChildElement("wave_mod")) {
            p.duration = std::max(p.duration, num(s, "length", 0));
            p.waveOverride = s->IntAttribute("waveOveride", 0);
        }
        if (auto s = e->FirstChildElement("score_mod")) {
            p.duration = std::max(p.duration, num(s, "length", 0));
            if (auto m = s->FirstChildElement("multiplier"))
                p.multiplier = num(m, "gainMultiply", 1);
        }
        c.powers.push_back(p);
    }
    tinyxml2::XMLDocument particles;
    ::fruit::load(particles, a / "config/particles/particles_fast.xml");
    auto particleBody = particles.RootElement()->FirstChildElement("body");
    auto vector = [](std::string text) {
        Vec2 v;
        std::istringstream in(text);
        in >> v.x >> v.y;
        return v;
    };
    auto colour = [](std::string text) {
        std::array<unsigned char, 4> c{255, 255, 255, 255};
        std::istringstream in(text);
        int v;
        for (auto &channel : c)
            if (in >> v)
                channel = static_cast<unsigned char>(std::clamp(v, 0, 31) * 255 / 31);
        return c;
    };
    auto emitterEffects = [&](const std::string &emitterName) {
        std::vector<BladeEffect> effects;
        for (auto emitter = particleBody->FirstChildElement("emitter"); emitter;
             emitter = emitter->NextSiblingElement("emitter")) {
            auto name = str(emitter, "name");
            std::transform(name.begin(), name.end(), name.begin(),
                           [](unsigned char c) { return char(std::tolower(c)); });
            if (name != emitterName || name.empty())
                continue;
            for (auto set = emitter->FirstChildElement("particleSet"); set;
                 set = set->NextSiblingElement("particleSet")) {
                auto templateName = str(set, "name");
                for (auto t = particleBody->FirstChildElement("particleTemplate"); t;
                     t = t->NextSiblingElement("particleTemplate")) {
                    if (str(t, "name") != templateName)
                        continue;
                    BladeEffect fx;
                    if (auto e = t->FirstChildElement("type"))
                        fx.directional =
                            std::string(e->GetText() ? e->GetText() : "") == "Direction";
                    if (auto e = t->FirstChildElement("texture"))
                        fx.texture = str(e, "name");
                    if (auto e = set->FirstChildElement("particleNumber"))
                        fx.rate = num(e, "perSec", 0);
                    if (auto e = set->FirstChildElement("velocity")) {
                        fx.velocityMin = vector(str(e, "min"));
                        fx.velocityMax = vector(str(e, "max"));
                    }
                    if (auto e = t->FirstChildElement("life"))
                        fx.life = std::max(.01f, e->FloatText(30) / 60.f);
                    if (auto e = t->FirstChildElement("gravity"))
                        fx.gravity = vector(e->GetText() ? e->GetText() : "");
                    if (auto e = t->FirstChildElement("size")) {
                        fx.size = num(e, "startMin", 10);
                        fx.endSize = num(e, "endMin", 0);
                    }
                    if (auto e = t->FirstChildElement("color")) {
                        fx.colour = colour(str(e, "startMin"));
                        fx.endColour = colour(str(e, "endMin"));
                    }
                    if (!fx.texture.empty())
                        effects.push_back(fx);
                }
            }
        }
        return effects;
    };
    c.bombEffects = emitterEffects("bomb_smoke");
    tinyxml2::XMLDocument items;
    ::fruit::load(items, a / "config/xml/itemlist.xml");
    for (auto e = items.RootElement()->FirstChildElement("item"); e;
         e = e->NextSiblingElement("item")) {
        ItemDefinition i;
        i.id = str(e, "name");
        i.type = str(e, "type");
        i.title = str(e, "title");
        i.texture = str(e, "texture");
        std::transform(i.texture.begin(), i.texture.end(), i.texture.begin(),
                       [](unsigned char x) { return char(std::tolower(x)); });
        if (auto dsc = e->FirstChildElement("description"))
            i.description = dsc->GetText() ? dsc->GetText() : "";
        if (auto req = e->FirstChildElement("requirements")) {
            i.requirement = req->GetText() ? req->GetText() : "";
            i.counter = str(req, "total");
            i.target = req->IntAttribute("countDownFrom");
        }
        if (auto slash = e->FirstChildElement("slashModInfo")) {
            i.bladeTexture = str(slash, "texture", "blade");
            std::string emitterName = str(slash, "particles");
            i.effects = emitterEffects(emitterName);
            for (auto col = slash->FirstChildElement("colour"); col;
                 col = col->NextSiblingElement("colour")) {
                auto values = split(col->GetText() ? col->GetText() : "255,255,255");
                std::array<unsigned char, 3> rgb{255, 255, 255};
                for (std::size_t j = 0; j < std::min(values.size(), rgb.size()); ++j)
                    rgb[j] = static_cast<unsigned char>(std::clamp(std::stoi(values[j]), 0, 255));
                i.colours.push_back(rgb);
            }
        }
        c.items.push_back(i);
    }
    tinyxml2::XMLDocument achievements;
    ::fruit::load(achievements, a / "config/xml/achievementlist.xml");
    for (auto e = achievements.RootElement()->FirstChildElement("achievement"); e;
         e = e->NextSiblingElement("achievement")) {
        AchievementDefinition r;
        r.id = str(e, "id");
        r.type = str(e, "type");
        r.name = str(e, "name");
        r.mode = str(e, "mode");
        r.specific = str(e, "specific_type");
        r.texture = str(e, "texture");
        r.total = e->IntAttribute("total");
        r.points = e->IntAttribute("score");
        r.afterTimer = e->BoolAttribute("isGameOver");
        c.achievements.push_back(r);
    }
    tinyxml2::XMLDocument bonus;
    ::fruit::load(bonus, a / "config/xml/bonusawards.xml");
    for (auto e = bonus.RootElement()->FirstChildElement("combo"); e;
         e = e->NextSiblingElement("combo"))
        c.arcadeCombo[e->IntAttribute("length")] = e->IntAttribute("bonus");
    for (auto group = bonus.RootElement()->FirstChildElement("bonusType"); group;
         group = group->NextSiblingElement("bonusType"))
        for (auto e = group->FirstChildElement("bonus"); e; e = e->NextSiblingElement("bonus")) {
            BonusDefinition b;
            b.totals = str(group, "total");
            b.texture = str(e, "texture", str(group, "texture"));
            b.points = e->IntAttribute("points");
            b.title = e->GetText() ? e->GetText() : "";
            for (auto attr = e->FirstAttribute(); attr; attr = attr->Next()) {
                std::string key = attr->Name();
                if (key != "points" && key != "texture" && key != "achievement")
                    b.conditions[key] = attr->Value();
            }
            if (b.points > 0)
                c.bonuses.push_back(b);
        }
    if (c.fruits.empty() || c.classic.empty() || c.zen.empty() || c.arcade.empty())
        throw std::runtime_error("missing gameplay definitions");
    return c;
}
std::string Config::text(const std::string &key) const {
    auto it = strings.find(key);
    return it == strings.end() ? key : it->second;
}
const ItemDefinition *Config::item(const std::string &id) const {
    for (const auto &i : items)
        if (i.id == id)
            return &i;
    return nullptr;
}
const FruitDefinition *Config::fruit(const std::string &n) const {
    for (auto &f : fruits)
        if (f.name == n)
            return &f;
    return nullptr;
}
const PowerDefinition *Config::power(const std::string &n) const {
    for (auto &p : powers)
        if (p.name == n)
            return &p;
    return nullptr;
}
} // namespace fruit
