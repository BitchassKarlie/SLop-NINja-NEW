#include "fruit/game.hpp"
#include "fruit/model_pose.hpp"
#include "fruit/save.hpp"
#include "fruit/timing.hpp"
#include "fruit/ui.hpp"
#include <cmath>
#include <fstream>
#include <iostream>
#include <stdexcept>
using namespace fruit;
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
int main(int argc, char **argv) {
    try {
        require(argc == 2, "assets argument required");
        auto c = Config::load(argv[1]);
        require(c.fruits.size() > 20, "fruit configuration incomplete");
        require(!c.classic.empty() && !c.zen.empty() && !c.arcade.empty(), "wave config missing");
        require(c.power("freeze")->duration == 7, "original freeze duration");
        require(c.power("score_mult")->multiplier == 2, "score multiplier");
        require(original_frame_delta(0) == .01f && original_frame_delta(1) == .032f,
                "original frame clamp");
        Vec3 p{}, v{10, 20, 0};
        integrate(p, v, {0, -10, 0}, 1);
        require(p.x == 10 && p.y == 15 && v.y == 10, "ballistic integration");
        Random rng;
        require(rng.next() == 0x0457f41aU, "original RNG sequence");
        require(distance_to_segment({5, 1}, {0, 0}, {10, 0}) == 1, "continuous slice collision");
        for (auto &item : menuFruits()) {
            Game menu(c);
            menu.pointer(100, item.position, true);
            menu.pointer(100, item.position, false);
            require(menu.screen == Screen::Menu && !menu.menuSelection(),
                    "tap must not choose mode");
            menu.pointer(101, item.position + Vec2{-55, 0}, true);
            menu.pointer(101, item.position + Vec2{55, 0}, true);
            require(menu.menuSelection() == item.mode, "slice chooses matching menu fruit");
            require(menu.bodies.size() == 2 && menu.bodies[0].piece, "menu fruit splits visibly");
            require(menu.score == 0, "menu cut must not award gameplay score");
            require(menu.pointers[101].trail.size() > 2, "sparse swipe resampled for blade");
            menu.pointer(101, item.position + Vec2{55, 0}, false);
            for (int frame = 0; frame < 30; ++frame)
                menu.update(1.f / 60.f);
            require(menu.screen == Screen::Playing && menu.mode == item.mode,
                    "selected mode starts after cut animation");
            require(menu.score == 0 && menu.powers.empty(),
                    "menu selection leaves clean game state");
        }
        Game animated(c);
        Game contactRouting(c);
        require(!contactRouting.uiContact(ui::ModeBackBomb),
                "mode back bomb contact must reach slicer");
        contactRouting.start(Mode::Classic);
        require(contactRouting.uiContact({ui::Pause.x + 18, 320 - ui::Pause.y - 18}) &&
                    !contactRouting.uiContact({435, 18}),
                "pause contact follows visible button, not stale top-right region");
        contactRouting.finishRound();
        require(!contactRouting.uiContact(ui::RetryFruit) &&
                    !contactRouting.uiContact(ui::QuitFruit),
                "result fruit contacts reach slicer");
        contactRouting.home();
        require(contactRouting.uiContact({ui::Music.x + 14, 320 - ui::Music.y - 14}),
                "music button contact reaches menu UI");
        Game modeBack(c);
        modeBack.uiClick(ui::ModeBackBomb);
        modeBack.pointer(9, ui::ModeBackBomb, true);
        modeBack.pointer(9, ui::ModeBackBomb, false);
        require(modeBack.screen == Screen::Menu, "mode back bomb requires a slice");
        modeBack.pointer(10, ui::ModeBackBomb + Vec2{-35, 0}, true);
        modeBack.pointer(10, ui::ModeBackBomb + Vec2{35, 0}, true);
        require(modeBack.screen == Screen::Home, "mode back bomb slice opens home");
        const auto &classicMenu = menuFruits()[0];
        auto initialPosition = animated.menuFruitPosition(classicMenu);
        for (int frame = 0; frame < 90; ++frame)
            animated.update(1.f / 60.f);
        auto movingPosition = animated.menuFruitPosition(classicMenu);
        require(length(movingPosition - initialPosition) > 1.f, "menu fruit bobs over time");
        require(animated.menuRingAngle(classicMenu) > 10.f &&
                    animated.menuFruitRotation(classicMenu) > .5f,
                "menu rings and fruit rotate");
        animated.pointer(7, movingPosition + Vec2{-45, 0}, true);
        animated.pointer(7, movingPosition + Vec2{45, 0}, true);
        require(animated.menuSelection() == Mode::Classic, "moving menu fruit remains sliceable");
        require(animated.bodies[0].position.y == movingPosition.y,
                "cut halves start at the displayed fruit position");
        animated.menu();
        require(animated.menuRingAngle(classicMenu) == 0, "returning to menu resets presentation");
        Game menuMiss(c);
        menuMiss.pointer(1, {0, 310}, true);
        menuMiss.pointer(1, {480, 310}, true);
        require(!menuMiss.menuSelection(), "swiping outside fruits must not select a mode");
        menuMiss.pointer(1, {480, 310}, false);
        for (int frame = 0; frame < 30; ++frame)
            menuMiss.update(1.f / 60.f);
        require(menuMiss.pointers.empty(), "menu blade fades and released contacts expire");
        Game zen(c);
        zen.start(Mode::Zen);
        zen.debugSpawn("apple", {200, 150});
        zen.pointer(1, {150, 150}, true);
        zen.pointer(1, {250, 150}, true);
        require(zen.score == 1, "one score per fruit");
        require(zen.bodies.size() == 2 && zen.bodies[0].piece, "cut fruit pieces");
        zen.pointer(1, {150, 150}, true);
        require(zen.score == 1, "cannot slice twice");
        zen.pause();
        float time = zen.remaining;
        zen.update(.03f);
        require(zen.remaining == time, "pause stops clock");
        zen.pause();
        zen.update(.03f);
        require(zen.remaining < time, "resume restarts clock");
        Game combo(c);
        combo.start(Mode::Zen);
        for (int i = 0; i < 3; ++i)
            combo.debugSpawn("apple", {float(100 + i * 80), 150});
        combo.pointer(2, {50, 150}, true);
        combo.pointer(2, {310, 150}, true);
        combo.pointer(2, {310, 150}, false);
        require(combo.score == 6 && combo.bestCombo == 3, "three fruit combo");
        Game classic(c);
        classic.start(Mode::Classic);
        classic.debugSpawn("bomb", {200, 150});
        classic.pointer(1, {150, 150}, true);
        classic.pointer(1, {250, 150}, true);
        require(classic.screen == Screen::Results, "classic bomb ends game");
        Game arcade(c);
        arcade.start(Mode::Arcade);
        arcade.score = 25;
        arcade.debugSpawn("bomb", {200, 150});
        arcade.pointer(1, {150, 150}, true);
        arcade.pointer(1, {250, 150}, true);
        require(arcade.score == 15 && arcade.screen == Screen::Playing, "arcade bomb penalty");
        arcade.debugSpawn("freeze", {200, 180});
        arcade.pointer(1, {150, 180}, true);
        arcade.pointer(1, {250, 180}, true);
        require(!arcade.powers.empty() && arcade.powers[0].remaining == 7,
                "banana activates original config duration");
        require(c.power("freeze")->clockSpeed == 0 && c.power("ready_set_go")->duration == 2 &&
                    c.power("score_mult")->duration == 8,
                "original power clock and duration definitions");
        Game countdown(c);
        countdown.start(Mode::Arcade);
        for (int frame = 0; frame < 90; ++frame)
            countdown.update(1.f / 60.f);
        require(countdown.remaining == 60 && countdown.waveNumber() == 0 &&
                    countdown.bodies.empty() && countdown.introRemaining > 0,
                "Arcade ready sequence preserves the full round and delays waves");
        countdown.pause();
        float introTime = countdown.introRemaining;
        countdown.update(.03f);
        require(countdown.introRemaining == introTime, "pause freezes Arcade intro");
        countdown.pause();
        for (int frame = 0; frame < 40; ++frame)
            countdown.update(1.f / 60.f);
        require(countdown.introRemaining == 0 && countdown.remaining < 60,
                "Arcade clock starts after ready sequence");
        Game frozen(c);
        frozen.start(Mode::Arcade);
        frozen.introRemaining = 0;
        frozen.debugSpawn("freeze", {200, 150});
        frozen.pointer(78, {150, 150}, true);
        frozen.pointer(78, {250, 150}, true);
        frozen.pointer(78, {250, 150}, false);
        for (int frame = 0; frame < 120; ++frame)
            frozen.update(1.f / 60.f);
        require(frozen.remaining == 60 && frozen.powers[0].remaining < 5.01f &&
                    frozen.waveNumber() > 0,
                "freeze stops only the clock while fruit and power duration advance");
        frozen.powers[0].remaining = .01f;
        frozen.update(.02f);
        require(std::abs(frozen.remaining - 59.99f) < .0001f && frozen.powers.empty(),
                "clock resumes for the unpowered portion of an expiry tick");
        frozen.update(.02f);
        require(std::abs(frozen.remaining - 59.97f) < .0001f, "freeze expiry restores clock speed");
        require(c.classic[0].criticalMultiplier == 1 && c.zen[0].criticalMultiplier == 0,
                "native per-wave critical modifiers load");
        auto criticalConfig = c;
        criticalConfig.criticalChance = 1;
        Game criticalGame(criticalConfig);
        criticalGame.start(Mode::Classic);
        auto cut = [](Game &g, const std::string &name, long long id) {
            g.debugSpawn(name, {240, 160});
            g.pointer(id, {205, 160}, true);
            g.pointer(id, {275, 160}, true);
            g.pointer(id, {275, 160}, false);
        };
        cut(criticalGame, "apple", 801);
        cut(criticalGame, "apple", 802);
        require(criticalGame.score == 2 && criticalGame.stats.specific["crit"] == 0,
                "first two points cannot be critical");
        cut(criticalGame, "banana", 803);
        require(criticalGame.stats.specific["crit"] == 0,
                "zero-alpha juice fruit cannot be critical");
        cut(criticalGame, "apple", 804);
        require(criticalGame.stats.specific["crit"] == 1, "eligible fruit uses critical modifier");
        auto disabledConfig = criticalConfig;
        for (auto &w : disabledConfig.classic)
            w.criticalMultiplier = 0;
        Game disabledCritical(disabledConfig);
        disabledCritical.start(Mode::Classic);
        disabledCritical.score = 2;
        for (int frame = 0; frame < 40; ++frame)
            disabledCritical.update(1.f / 60.f);
        disabledCritical.bodies.clear();
        cut(disabledCritical, "apple", 805);
        require(disabledCritical.stats.specific["crit"] == 0,
                "wave criticalChance zero disables criticals");
        Game missed(c);
        missed.start(Mode::Classic);
        for (int i = 0; i < 3; ++i) {
            missed.debugSpawn("apple", {200, -90});
        }
        missed.update(.01f);
        require(missed.misses == 3 && missed.screen == Screen::Results, "classic three misses");
        Game timed(c);
        timed.start(Mode::Zen);
        timed.remaining = .01f;
        timed.update(.02f);
        require(timed.screen == Screen::Playing && timed.remaining == 0,
                "timer allows final Zen combo");
        for (int i = 0; i < 60; ++i)
            timed.update(1.f / 60.f);
        require(timed.screen == Screen::Results, "timer finishes after grace window");
        Game a(c, 42), b(c, 42);
        a.start(Mode::Arcade);
        b.start(Mode::Arcade);
        for (int i = 0; i < 600; ++i) {
            a.update(1.f / 60.f);
            b.update(1.f / 60.f);
        }
        require(a.bodies.size() == b.bodies.size() && a.waveNumber() == b.waveNumber(),
                "deterministic waves");
        for (std::size_t i = 0; i < a.bodies.size(); ++i)
            require(a.bodies[i].fruit == b.bodies[i].fruit &&
                        a.bodies[i].position.x == b.bodies[i].position.x,
                    "deterministic body simulation");
        // Equal wall time must produce identical gameplay at low/high presentation rates.
        auto simulate = [&](int renderHz) {
            Game game(c, 12345);
            game.start(Mode::Zen);
            FixedStepClock clock;
            int ticks = 0;
            for (int frame = 0; frame < renderHz * 12; ++frame) {
                int due = clock.advance(1.0 / renderHz);
                ticks += due;
                for (int i = 0; i < due; ++i)
                    game.update(FixedStepClock::delta);
            }
            require(ticks == 720, "60 simulation ticks per elapsed second");
            return game;
        };
        auto reference = simulate(60);
        for (int hz : {30, 75, 120, 144, 240}) {
            auto game = simulate(hz);
            require(game.waveNumber() == reference.waveNumber() &&
                        game.bodies.size() == reference.bodies.size() &&
                        game.score == reference.score,
                    "frame-rate independent game state");
            for (std::size_t i = 0; i < game.bodies.size(); ++i)
                require(game.bodies[i].position.x == reference.bodies[i].position.x &&
                            game.bodies[i].position.y == reference.bodies[i].position.y,
                        "frame-rate independent fruit trajectories");
        }
        FixedStepClock stalled;
        require(stalled.advance(20) == 15, "suspension catch-up bounded");
        stalled.reset();
        require(stalled.advance(0) == 0, "resume drops suspended time");
        auto temp = std::filesystem::temp_directory_path() / "fruit-native-core-test";
        std::filesystem::remove_all(temp);
        Save save(temp / "scores.txt");
        save.record(0, 123);
        Save reload(temp / "scores.txt");
        require(reload.best[0] == 123, "persistent high scores");
        reload.record(0, 2);
        require(reload.best[0] == 123, "scores cannot regress");
        require(c.strings.size() == 840 && c.items.size() == 13 && c.achievements.size() == 37,
                "all original strings, active cosmetics and achievement rules recovered");
        require(c.text("DOJO_TEXT_00") == "ORIGINAL BLADE", "string table index resolution");
        require(c.text("FRUIT_FACT_00").find("10,000") != std::string::npos,
                "original Sensei fact decoded");
        Progress profile;
        require(profile.unlocked(c, "ORIGINAL_SLASH") && profile.unlocked(c, "SHINY_RED_SLASH"),
                "default blades available");
        require(!profile.equip(c, "ICE_BLADE") && !profile.equip(c, "unknown"),
                "locked and unknown items cannot be equipped");
        RoundStats stats;
        stats.mode = 0;
        stats.score = 125;
        stats.lifetime["fruit_total"] = 150;
        stats.lifetime["banana_total"] = 49;
        profile.beginRound();
        profile.observe(c, stats);
        require(profile.earned.count("261454") && profile.earned.count("261464") &&
                    profile.earned.count("261524"),
                "score and lifetime achievements");
        require(profile.unlocked(c, "background9"), "unsullied score unlock");
        require(!profile.unlocked(c, "DISCO_SLASH"), "unlock threshold exact");
        profile.observe(c, stats);
        require(profile.count("fruit_total") == 150,
                "observing unchanged round cannot duplicate lifetime progress");
        stats.lifetime["banana_total"] = 50;
        profile.observe(c, stats);
        require(profile.equip(c, "DISCO_SLASH"), "lifetime banana unlock equips blade");
        stats.streaks["pineapple"] = 3;
        stats.streaks["pear"] = 3;
        stats.streaks["ANY"] = 4;
        stats.specific["crit"] = 6;
        stats.specific["mangocrit"] = 1;
        stats.bestCombo = 6;
        profile.observe(c, stats);
        require(profile.unlocked(c, "SPARKLE_SLASH") && profile.earned.count("324144") &&
                    profile.earned.count("324524") && profile.earned.count("261654") &&
                    profile.earned.count("324154") && profile.earned.count("350264"),
                "streak, critical and combo achievements");
        stats.lifetime["watermelon_total"] = 250;
        stats.lifetime["passionfruit_total"] = 75;
        stats.lifetime["strawberry_combo_total"] = 40;
        stats.lifetime["freeze_total"] = 20;
        profile.observe(c, stats);
        require(profile.unlocked(c, "background4") && profile.unlocked(c, "background5") &&
                    profile.unlocked(c, "BUTTERFLY_KNIFE") && profile.unlocked(c, "ICE_BLADE"),
                "remaining lifetime cosmetics unlock");
        profile.readFact(c, "strawberry", "FRUIT_FACT_270");
        profile.readFact(c, "strawberry", "FRUIT_FACT_270");
        profile.readFact(c, "strawberry", "FRUIT_FACT_271");
        profile.readFact(c, "strawberry", "FRUIT_FACT_272");
        require(profile.count("strawberry_facts") == 3 && profile.unlocked(c, "background3"),
                "three distinct strawberry facts unlock Sensei backdrop");
        stats.score = 50;
        stats.ended = true;
        profile.observe(c, stats);
        require(profile.unlocked(c, "AMERICAN_SLASH"), "exact ending score unlock");
        RoundStats tied;
        tied.previousBest = 123;
        tied.score = 123;
        tied.ended = true;
        profile.observe(c, tied);
        require(profile.earned.count("261724"), "tie compares previous personal best");
        Progress dropped;
        RoundStats sullied;
        sullied.score = 125;
        sullied.dropped = 1;
        dropped.observe(c, sullied);
        require(!dropped.unlocked(c, "background9"),
                "restored life does not erase a dropped fruit");
        Game late(c);
        late.attachProgress(profile);
        late.start(Mode::Zen);
        late.remaining = .01f;
        late.update(.02f);
        for (int i = 0; i < 3; ++i)
            late.debugSpawn("coconut", {float(100 + i * 80), 150});
        late.pointer(99, {50, 150}, true);
        late.pointer(99, {310, 150}, true);
        late.pointer(99, {310, 150}, false);
        require(profile.unlocked(c, "FLAME_BLADE") && profile.earned.count("374004"),
                "late Zen combo and Lovely Bunch unlocks");
        late.finishRound();
        require(!late.factKey.empty() && profile.factsRead.count(late.factKey),
                "Sensei result fact shown and remembered");
        require(!c.item("ICE_BLADE")->effects.empty() && !c.item("FLAME_BLADE")->effects.empty(),
                "original cosmetic emitters parsed including case mismatch");
        profile.equip(c, "ICE_BLADE");
        Game effects(c);
        effects.attachProgress(profile);
        effects.start(Mode::Zen);
        for (int frame = 0; frame < 12; ++frame) {
            effects.pointer(12, {float(20 + frame * 20), 160}, true);
            effects.update(1.f / 60.f);
        }
        require(!effects.bladeParticles.empty() && effects.bladeParticles.size() <= 128,
                "moving selected blade emits bounded original particles");
        effects.pointer(12, {240, 160}, false);
        for (int frame = 0; frame < 180; ++frame)
            effects.update(1.f / 60.f);
        require(effects.bladeParticles.empty(), "blade effects expire after release");
        require(classifyCombo({"apple", "apple", "apple"}) == ComboStar::Apples, "Zen all apples");
        require(classifyCombo({"apple", "apple_red", "apple"}) == ComboStar::Pattern,
                "native red and green apple identities remain distinct");
        require(classifyCombo({"pear", "pear", "pear", "plum", "plum"}) == ComboStar::FullHouse,
                "Zen full house");
        require(classifyCombo({"pear", "plum", "pear", "plum", "pear"}) == ComboStar::Pattern,
                "alternating pattern outranks full house");
        require(classifyCombo({"mango", "pear", "pear", "plum", "plum"}) == ComboStar::TwoPairs,
                "Zen two pairs with singleton first");
        require(classifyCombo({"pear", "pear", "pear", "plum"}) == ComboStar::ThreeOfAKind,
                "Zen three of a kind");
        require(classifyCombo({"pear", "pear", "pear", "pear", "plum", "plum"}) ==
                    ComboStar::FourOfAKind,
                "Zen four of a kind");
        require(classifyCombo({"apple", "pear", "plum", "mango", "banana", "lime", "lemon"}) ==
                    ComboStar::AllDifferent,
                "different fruit outranks large combo fallback");
        require(classifyCombo({"dragon", "dragon", "dragon"}) == ComboStar::Three,
                "unknown single-fruit group falls back to count");
        require(classifyCombo({"apple", "pear"}) == ComboStar::None, "no award without a combo");
        ComboBlitz meter;
        require(meter.combo() == 0 && meter.combo() == 0 && meter.combo() == 5 && meter.stage == 1,
                "three combos activate original blitz threshold");
        require(meter.combo() == 0 && meter.combo() == 0 && meter.combo() == 10,
                "promotion uses 2.5 combo interval");
        for (int i = 0; i < 30; ++i) {
            int bonus = meter.combo();
            require(bonus <= 30, "blitz award capped at thirty");
        }
        require(meter.stage > 6 && meter.best == meter.stage && meter.energy == 14,
                "native uncapped counter with capped energy");
        meter.update(3.8f, 4);
        require(meter.stage > 0 && meter.window < .1f, "blitz expiry counts real time");
        float window = meter.window;
        meter.slice();
        require(meter.window > window, "individual fruit extends active blitz expiry");
        meter.update(1, 4);
        require(meter.stage == 0 && meter.energy == 0 && meter.best > 0,
                "blitz expiry resets chain but preserves round best");
        Game streak(c);
        streak.start(Mode::Arcade);
        auto swipeCombo = [&](Game &g) {
            for (int i = 0; i < 3; ++i)
                g.debugSpawn("apple", {float(100 + i * 80), 150});
            g.pointer(321, {50, 150}, true);
            g.pointer(321, {310, 150}, true);
            g.pointer(321, {310, 150}, false);
        };
        for (int i = 0; i < 3; ++i)
            swipeCombo(streak);
        require(streak.blitz.stage == 1 && streak.score >= 20,
                "Arcade gameplay awards combo blitz");
        streak.debugSpawn("bomb", {200, 150});
        streak.pointer(322, {150, 150}, true);
        streak.pointer(322, {250, 150}, true);
        require(streak.blitz.stage == 0, "Arcade bomb breaks blitz chain");
        Game zenAward(c);
        zenAward.start(Mode::Zen);
        swipeCombo(zenAward);
        zenAward.finishRound();
        require(zenAward.bestComboStar == ComboStar::Apples &&
                    zenAward.bestComboTexture == "star_its_apples",
                "Zen results classify best ordered combo");
        require(c.bombEffects.size() == 2 && c.bombEffects[0].rate == 50 &&
                    c.bombEffects[1].rate == 40 && c.bombEffects[1].directional,
                "bomb smoke and directional sparks come from original emitter XML");
        Body pineapple;
        pineapple.radius = 25;
        require(std::abs(modelScale(pineapple) - .5f) < .0001f,
                "model units use native scale rather than leaf/fuse bounding extent");
        Game animatedSwag(c);
        animatedSwag.screen = Screen::Swag;
        auto beforeAnimation =
            animatedSwag.menuBody("pineapple_single", ui::CatalogSelect, 27.625f);
        for (int frame = 0; frame < 60; ++frame)
            animatedSwag.update(1.f / 60.f);
        auto afterAnimation = animatedSwag.menuBody("pineapple_single", ui::CatalogSelect, 27.625f);
        require(afterAnimation.age > beforeAnimation.age &&
                    afterAnimation.rotation != beforeAnimation.rotation &&
                    afterAnimation.position.y != beforeAnimation.position.y,
                "Swag fruit continues tumbling and bobbing at 60 Hz");
        require(!animatedSwag.fuseParticles.empty() && animatedSwag.fuseParticles.size() <= 128,
                "catalog back bomb emits bounded smoke and spark particles");
        auto originalFuse = bombFuse(animatedSwag.menuBody("bomb", ui::CatalogBack, 23.375f));
        require(originalFuse.y > ui::CatalogBack.y + 20,
                "bomb fuse points upward and emitter follows the mesh pose");
        Game motion30(c), motion60(c);
        motion30.screen = motion60.screen = Screen::Swag;
        for (int frame = 0; frame < 30; ++frame)
            motion30.update(.032f);
        for (int frame = 0; frame < 60; ++frame)
            motion60.update(.016f);
        require(std::abs(motion30.menuTime() - motion60.menuTime()) < .00001,
                "UI motion advances by simulation time rather than rendered frame count");
        Game dojoAbout(c);
        dojoAbout.screen = Screen::Dojo;
        require(!dojoAbout.uiContact({410, 310}), "Dojo does not capture hidden audio controls");
        dojoAbout.pointer(40, ui::DojoFruitPositions[1] + Vec2{-45, 0}, true);
        dojoAbout.pointer(40, ui::DojoFruitPositions[1] + Vec2{45, 0}, true);
        for (int frame = 0; frame < 30; ++frame)
            dojoAbout.update(1.f / 60.f);
        require(dojoAbout.screen == Screen::About, "original Dojo plum opens About");
        dojoAbout.uiClick({240, 20});
        require(dojoAbout.screen == Screen::Achievements, "offline achievements remain accessible");
        Game navigation(c);
        navigation.home();
        navigation.pointer(1, ui::HomeNewGame + Vec2{-50, 0}, true);
        navigation.pointer(1, ui::HomeNewGame + Vec2{50, 0}, true);
        require(navigation.screen == Screen::Home && navigation.bodies.size() == 2,
                "menu cut shows both original fruit halves during exit");
        for (int frame = 0; frame < 30; ++frame)
            navigation.update(1.f / 60.f);
        require(navigation.screen == Screen::Menu, "slice New Game opens mode select");
        navigation.home();
        navigation.pointer(2, ui::HomeDojo + Vec2{-50, 0}, true);
        navigation.pointer(2, ui::HomeDojo + Vec2{50, 0}, true);
        for (int frame = 0; frame < 30; ++frame)
            navigation.update(1.f / 60.f);
        require(navigation.screen == Screen::Dojo, "slice Dojo fruit opens Dojo");
        navigation.pointer(2, {160, 75}, false);
        navigation.pointer(3, ui::DojoFruitPositions[0] + Vec2{-50, 0}, true);
        navigation.pointer(3, ui::DojoFruitPositions[0] + Vec2{50, 0}, true);
        for (int frame = 0; frame < 30; ++frame)
            navigation.update(1.f / 60.f);
        require(navigation.screen == Screen::Swag, "Dojo swag opens cosmetics");
        Game feint(c);
        feint.home();
        feint.offlineNotice = 0;
        feint.pointer(20, ui::HomeFeint, true);
        feint.pointer(20, ui::HomeFeint, false);
        require(feint.offlineNotice == 0, "Feint requires slicing, not a tap");
        feint.pointer(21, ui::HomeFeint + Vec2{-40, 0}, true);
        feint.pointer(21, ui::HomeFeint + Vec2{40, 0}, true);
        require(feint.screen == Screen::Home && feint.offlineNotice > 0,
                "Feint slice reports unavailable offline service");
        feint.pointer(21, ui::HomeFeint, false);
        feint.pointer(22, ui::HomeQuit + Vec2{-40, 0}, true);
        feint.pointer(22, ui::HomeQuit + Vec2{40, 0}, true);
        require(feint.quitRequested, "home quit bomb requests application exit");
        Game catalog(c);
        Progress catalogProgress;
        catalog.attachProgress(catalogProgress);
        catalog.screen = Screen::Swag;
        require(catalog.uiContact({150, 200}) && !catalog.uiContact(ui::CatalogSelect),
                "catalog list captures drags while selection fruit captures slices");
        catalog.uiPointer(30, {230, 170}, 0);
        catalog.uiPointer(30, {230, 170}, 2);
        require(catalog.catalogPreview == 1 && catalogProgress.selectedBlade == "ORIGINAL_SLASH",
                "catalog tap previews an item without equipping it");
        catalog.pointer(31, ui::CatalogSelect, true);
        catalog.pointer(31, ui::CatalogSelect, false);
        require(catalogProgress.selectedBlade == "ORIGINAL_SLASH", "select fruit needs slicing");
        catalog.pointer(32, ui::CatalogSelect + Vec2{-35, 0}, true);
        catalog.pointer(32, ui::CatalogSelect + Vec2{35, 0}, true);
        require(catalogProgress.selectedBlade == "SHINY_RED_SLASH", "slice select equips preview");
        require(catalog.menuFruitCut(ui::CatalogSelect) && catalog.bodies.size() == 2,
                "successful catalog selection renders original cut-piece meshes");
        catalog.pointer(32, ui::CatalogSelect, false);
        for (int frame = 0; frame < 40; ++frame)
            catalog.update(1.f / 60.f);
        require(!catalog.menuFruitCut(ui::CatalogSelect),
                "selection pineapple regrows after slicing");
        catalog.catalogPreview = 2;
        catalog.pointer(33, ui::CatalogSelect + Vec2{-35, 0}, true);
        catalog.pointer(33, ui::CatalogSelect + Vec2{35, 0}, true);
        require(catalogProgress.selectedBlade == "SHINY_RED_SLASH", "locked preview cannot equip");
        require(!catalog.menuFruitCut(ui::CatalogSelect),
                "locked selection does not animate a cut");
        catalog.uiPointer(34, {140, 100}, 0);
        catalog.uiPointer(34, {140, 300}, 1);
        catalog.uiPointer(34, {140, 300}, 2);
        require(catalog.catalogScroll == 200 && catalog.catalogPreview == 2,
                "vertical drag scrolls without selecting a crossed row");
        catalog.uiPointer(35, {140, 100}, 0);
        catalog.uiPointer(35, {140, 3000}, 1);
        catalog.uiPointer(35, {140, 3000}, 2);
        require(catalog.catalogScroll ==
                    ui::CatalogTop + float(c.items.size()) * ui::CatalogRowHeight - 320,
                "catalog clamps at last item");
        catalog.pointer(36, ui::CatalogBack + Vec2{-35, 0}, true);
        catalog.pointer(36, ui::CatalogBack + Vec2{35, 0}, true);
        for (int frame = 0; frame < 30; ++frame)
            catalog.update(1.f / 60.f);
        require(catalog.screen == Screen::Dojo, "slice catalog back bomb returns to Dojo");
        Game inertia(c);
        inertia.screen = Screen::Swag;
        inertia.uiPointer(400, {140, 130}, 0);
        inertia.uiPointer(400, {140, 180}, 1);
        inertia.update(1.f / 60.f);
        inertia.uiPointer(400, {140, 180}, 2);
        float dragEnd = inertia.catalogScroll;
        inertia.update(1.f / 60.f);
        require(inertia.catalogScroll > dragEnd, "catalog scroll continues after drag release");
        inertia.resetContacts();
        float focusEnd = inertia.catalogScroll;
        inertia.update(1.f / 60.f);
        require(inertia.catalogScroll == focusEnd, "focus loss clears inertial input state");
        // UI controls are handled by the core, not a desktop-only event wrapper.
        Game controls(c);
        controls.start(Mode::Classic);
        controls.uiClick({ui::Pause.x + 18, 320 - ui::Pause.y - 18});
        require(controls.screen == Screen::Paused, "original pause icon hit region");
        controls.uiClick({ui::Resume.x + 30, 320 - ui::Resume.y - 30});
        require(controls.screen == Screen::Playing, "original play icon resumes");
        controls.attachProgress(catalogProgress);
        controls.pause();
        bool oldMusic = catalogProgress.musicEnabled;
        controls.uiClick({ui::PausedMusic.x + 16, 320 - ui::PausedMusic.y - 16});
        require(catalogProgress.musicEnabled != oldMusic && controls.screen == Screen::Paused,
                "pause audio controls use their visible centered positions");
        controls.pause();
        controls.score = 42;
        controls.pause();
        controls.uiClick({ui::RetryPaused.x + 30, 320 - ui::RetryPaused.y - 30});
        require(controls.screen == Screen::Playing && controls.score == 0,
                "pause retry resets round");
        controls.pause();
        controls.uiClick({ui::QuitPaused.x + 30, 320 - ui::QuitPaused.y - 30});
        require(controls.screen == Screen::Home, "pause quit returns home");
        controls.start(Mode::Zen);
        controls.finishRound();
        controls.pointer(301, ui::RetryFruit, true);
        controls.pointer(301, ui::RetryFruit, false);
        require(controls.screen == Screen::Results, "result retry requires a slice, not a tap");
        controls.pointer(302, ui::RetryFruit + Vec2{-45, 0}, true);
        controls.pointer(302, ui::RetryFruit + Vec2{45, 0}, true);
        require(controls.screen == Screen::Playing && controls.mode == Mode::Zen,
                "slice original result apple to retry same mode");
        controls.finishRound();
        controls.pointer(303, ui::QuitFruit + Vec2{-45, 0}, true);
        controls.pointer(303, ui::QuitFruit + Vec2{45, 0}, true);
        require(controls.screen == Screen::Home, "slice result bomb to return home");
        auto waveConfig = c;
        auto wave = c.classic.front();
        wave.number = 0;
        wave.until = 10000;
        wave.nextDelay = .1f;
        wave.spawns.front().min = wave.spawns.front().max = 1;
        wave.spawns.front().delay = 0;
        wave.waitForEntities = true;
        waveConfig.classic = {wave};
        Game gated(waveConfig);
        gated.start(Mode::Classic);
        for (int frame = 0; frame < 90; ++frame)
            gated.update(1.f / 60.f);
        require(gated.waveNumber() == 1 && !gated.bodies.empty(),
                "wait-for-entities wave cannot overlap live fruit");
        gated.bodies.clear();
        gated.update(1.f / 60.f);
        require(gated.waveNumber() == 1, "next delay begins when entities clear");
        for (int frame = 0; frame < 10; ++frame)
            gated.update(1.f / 60.f);
        require(gated.waveNumber() == 2, "next wave follows clear plus configured delay");
        waveConfig.classic.front().waitForEntities = false;
        Game overlap(waveConfig);
        overlap.start(Mode::Classic);
        for (int frame = 0; frame < 90; ++frame)
            overlap.update(1.f / 60.f);
        require(overlap.waveNumber() > 1, "explicit nonwaiting waves retain overlap");
        Game bonus(c);
        bonus.start(Mode::Arcade);
        bonus.score = 10;
        bonus.stats.dropped = 1;
        bonus.finishRound();
        require(bonus.roundBonuses.size() == 3 && bonus.score > 10,
                "Arcade original bonus table awards three bonuses");
        int finalScore = bonus.score;
        bonus.finishRound();
        require(bonus.score == finalScore, "round bonuses awarded once");
        navigation.attachProgress(profile);
        navigation.home();
        navigation.uiClick({ui::Music.x + 14, 320 - ui::Music.y - 14});
        navigation.uiClick({ui::Sound.x + 14, 320 - ui::Sound.y - 14});
        require(!profile.musicEnabled && !profile.soundEnabled && profile.dirty,
                "menu music and sound icons update persistent settings");
        Save full(temp / "progress.txt");
        full.musicEnabled = false;
        full.soundEnabled = false;
        full.earned = profile.earned;
        full.counters = profile.counters;
        full.factsRead = profile.factsRead;
        full.selectedBlade = "ICE_BLADE";
        full.selectedBackground = "background3";
        full.write();
        Save restored(temp / "progress.txt");
        require(!restored.musicEnabled && !restored.soundEnabled, "audio settings survive reload");
        require(restored.earned == full.earned && restored.counters == full.counters &&
                    restored.factsRead == full.factsRead && restored.selectedBlade == "ICE_BLADE" &&
                    restored.selectedBackground == "background3",
                "full progression and selections survive reload");
        {
            std::ofstream old(temp / "legacy.txt");
            old << "FRUIT_NATIVE 1\n123 200 99\n";
        }
        Save legacy(temp / "legacy.txt");
        legacy.write();
        Save migrated(temp / "legacy.txt");
        require(migrated.best == std::array<int, 3>{123, 200, 99},
                "legacy score migration preserves all modes");
        std::filesystem::remove_all(temp);
        std::cout << "PASS: config, native RNG/clamp, physics, continuous slices, combos, modes, "
                     "powers, pause, deterministic waves, saves\n";
        return 0;
    } catch (const std::exception &e) {
        std::cerr << "FAIL: " << e.what() << "\n";
        return 1;
    }
}
