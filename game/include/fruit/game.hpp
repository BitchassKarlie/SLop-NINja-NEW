#pragma once
#include "combos.hpp"
#include "config.hpp"
#include "progress.hpp"
#include <map>
#include <optional>
namespace fruit {
enum class Mode { Classic, Zen, Arcade };
enum class Screen { Menu, Playing, Paused, Results, Home, Dojo, Swag, Achievements, About };
struct MenuFruit {
    Mode mode;
    const char *fruit;
    Vec2 position;
    float radius, ringSize;
};
// FUN_00044c88: centered (-70,71), (88,48), (19,-76); 480 x 320 screen.
inline const std::array<MenuFruit, 3> &menuFruits() {
    static const std::array<MenuFruit, 3> fruits{
        {{Mode::Classic, "watermelon", {170, 231}, 35.625f, 135},
         {Mode::Zen, "apple_red", {328, 208}, 27, 114.75f},
         {Mode::Arcade, "banana", {259, 84}, 22.5f, 114.75f}}};
    return fruits;
}
inline constexpr float BladeLife = .22f;
struct Body {
    std::uint64_t id = 0;
    std::string fruit, model;
    Vec3 position, velocity, acceleration{0, -850, 0};
    float radius = 30, rotation = 0, spin = 0, age = 0;
    bool bomb = false, piece = false, entered = false;
};
struct Particle {
    Vec2 position, velocity;
    float life = 0;
    std::array<unsigned char, 4> colour;
};
struct Popup {
    std::string text;
    Vec2 position;
    float life = 0;
};
struct Event {
    std::string sound;
};
struct TrailPoint {
    Vec2 p;
    float life = BladeLife;
};
struct BladeParticle {
    Vec2 position, velocity;
    BladeEffect effect;
    float remaining = 0;
};
struct Pointer {
    std::map<std::size_t, float> emissions;
    bool moved = false;
    unsigned stroke = 0;
    Vec2 previous;
    bool down = false;
    std::vector<TrailPoint> trail;
};
struct ActivePower {
    std::string name;
    float remaining = 0;
};
class Game {
    const Config &config_;
    Random random_;
    Random cosmeticRandom_{0x12345678};
    unsigned strokes_ = 0;
    Progress *progress_ = nullptr;
    std::map<std::string, int> comboKinds_;
    std::vector<std::string> comboOrdered_, bestComboFruit_;
    bool comboAfterTimer_ = false;
    float ending_ = 0;
    int recoveryAt_ = 100;
    void report(bool ended = false);
    std::uint64_t nextId_ = 1;
    float waveTimer_ = 0, comboTimer_ = 0;
    bool waveWaitForEntities_ = false;
    float criticalMultiplier_ = 1;
    int waveNumber_ = 0, comboCount_ = 0;
    Vec2 comboPosition_;
    std::vector<Event> events_;
    std::optional<Mode> menuSelection_;
    float menuTransition_ = 0;
    double menuTime_ = 0;
    std::optional<Screen> sceneTarget_;
    std::optional<Vec2> menuCut_;
    float sceneExit_ = 1, selectionRegrow_ = 0;
    void cutMenuFruit(const Body &);
    void navigate(Screen, const Body &);
    std::map<std::size_t, float> fuseEmissions_;
    struct CollectionContact {
        Vec2 previous, start;
        bool dragged = false;
    };
    std::map<long long, CollectionContact> collectionContacts_;
    float catalogVelocity_ = 0, catalogDragDelta_ = 0;
    struct Pending {
        float delay;
        std::string type;
        SpawnDefinition spawn;
    };
    std::vector<Pending> pending_;
    const FruitDefinition &randomFruit();
    void scheduleWave();
    void spawn(const std::string &, const SpawnDefinition &);
    void hit(std::size_t, Vec2);
    void finishCombo();

  public:
    std::vector<BonusDefinition> roundBonuses;
    RoundStats stats;
    std::string firstFruit;
    int comboBonus = 0;
    ComboBlitz blitz;
    ComboStar bestComboStar = ComboStar::None;
    std::string bestComboTexture;
    void awardBonuses();
    std::string factKey, factFruit;
    int page = 0;
    float catalogScroll = 0;
    int catalogPreview = 1;
    bool quitRequested = false;
    float offlineNotice = 0;
    Screen screen = Screen::Menu;
    Mode mode = Mode::Classic;
    int score = 0, misses = 0, bestCombo = 0;
    float remaining = 0, elapsed = 0, flash = 0, introRemaining = 0;
    std::vector<BladeParticle> bladeParticles;
    std::vector<BladeParticle> fuseParticles;
    std::vector<Body> bodies;
    std::vector<Particle> particles;
    std::vector<Popup> popups;
    std::map<long long, Pointer> pointers;
    std::vector<ActivePower> powers;
    explicit Game(const Config &c, std::uint64_t seed = 0xdeadbeefULL)
        : config_(c), random_(seed) {}
    void attachProgress(Progress &p) {
        progress_ = &p;
    }
    Progress *progress() const {
        return progress_;
    }
    bool sliceScreen() const {
        return screen == Screen::Playing || screen == Screen::Menu || screen == Screen::Home ||
               screen == Screen::Dojo || screen == Screen::Results || screen == Screen::Swag;
    }
    void home() {
        menu();
        screen = Screen::Home;
        offlineNotice = 3;
    }
    bool uiContact(Vec2) const;
    void uiClick(Vec2);
    void uiPointer(long long id, Vec2, int phase);
    void resetContacts() {
        pointers.clear();
        collectionContacts_.clear();
        catalogVelocity_ = catalogDragDelta_ = 0;
    }
    void finishRound();
    std::optional<Mode> menuSelection() const {
        return menuSelection_;
    }
    Vec2 menuFruitPosition(const MenuFruit &item) const {
        float phase = float(item.mode) * 1.9f;
        return item.position + Vec2{0, 3.f * std::sin(float(menuTime_ * 1.4) + phase)};
    }
    float menuFruitRotation(const MenuFruit &item) const {
        return float(std::fmod(menuTime_ * .7 + double(item.mode), 6.283185307));
    }
    float menuRingAngle(const MenuFruit &item) const {
        return float(std::fmod(
            menuTime_ * (item.mode == Mode::Zen ? -12 : 12) + double(item.mode) * 15, 360.0));
    }
    double menuTime() const {
        return menuTime_;
    }
    float menuSceneOpacity() const {
        return sceneTarget_ ? sceneExit_ : 1.f;
    }
    bool menuFruitCut(Vec2 p) const {
        return menuCut_ && length(p - *menuCut_) < 1.f;
    }
    Body menuBody(const std::string &, Vec2, float, int = 0) const;
    float menuFruitTumble() const {
        return float(std::fmod(menuTime_ * .45, 6.283185307));
    }
    void start(Mode);
    void update(float);
    void pointer(long long id, Vec2 p, bool down);
    void pause();
    void menu();
    void debugSpawn(const std::string &, Vec2);
    std::vector<Event> takeEvents();
    const Config &config() const {
        return config_;
    }
    int waveNumber() const {
        return waveNumber_;
    }
};
const char *modeName(Mode);
} // namespace fruit
