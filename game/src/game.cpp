#include "fruit/game.hpp"
#include "fruit/model_pose.hpp"
#include "fruit/ui.hpp"
#include <sstream>
#include <stdexcept>
namespace fruit {
const char *modeName(Mode m) {
    return m == Mode::Classic ? "CLASSIC" : m == Mode::Zen ? "ZEN" : "ARCADE";
}
const FruitDefinition &Game::randomFruit() {
    unsigned total = 0;
    for (auto &f : config_.fruits)
        if (f.chance > 0)
            total += unsigned(f.chance);
    unsigned pick = random_.bounded(total);
    for (auto &f : config_.fruits)
        if (f.chance > 0) {
            if (pick < unsigned(f.chance))
                return f;
            pick -= unsigned(f.chance);
        }
    return config_.fruits.front();
}
void Game::report(bool ended) {
    stats.score = score;
    stats.bestCombo = bestCombo;
    stats.ended = ended;
    if (mode == Mode::Classic)
        while (score >= recoveryAt_) {
            if (misses)
                --misses;
            recoveryAt_ += 100;
        }
    if (ended)
        stats.lifetime[std::string("games_") + modeName(mode)] = 1;
    if (progress_)
        progress_->observe(config_, stats);
}
void Game::awardBonuses() {
    std::map<std::string, int> totals = stats.specific;
    totals["score"] = score;
    totals["combo_bonus"] = comboBonus;
    totals["best_combo"] = bestCombo;
    totals["dropped"] = stats.dropped;
    totals["bombs_hit"] = stats.bombs;
    std::map<std::string, BonusDefinition> groups;
    std::vector<BonusDefinition> fallback;
    for (const auto &b : config_.bonuses) {
        if (b.totals.rfind("default", 0) == 0) {
            fallback.push_back(b);
            continue;
        }
        int total = 0;
        std::istringstream keys(b.totals);
        std::string key;
        while (std::getline(keys, key, ','))
            total += totals[key];
        bool matches = true;
        for (const auto &condition : b.conditions) {
            if (condition.first == "valuesEqual") {
                matches = matches && !firstFruit.empty() && firstFruit == stats.lastFruit;
                continue;
            }
            auto dash = condition.first.find('-');
            std::string op = condition.first.substr(0, dash);
            int v = dash == std::string::npos ? total : totals[condition.first.substr(dash + 1)];
            int required = std::stoi(condition.second);
            if (op == "min")
                matches = matches && v >= required;
            else if (op == "max")
                matches = matches && v <= required;
            else if (op == "equals")
                matches = matches && v == required;
            else if (op == "multiple")
                matches = matches && required > 0 && v % required == 0;
            else
                matches = false;
        }
        if (matches && (!groups.count(b.totals) || groups[b.totals].points < b.points))
            groups[b.totals] = b;
    }
    for (const auto &entry : groups)
        roundBonuses.push_back(entry.second);
    roundBonuses.insert(roundBonuses.end(), fallback.begin(), fallback.end());
    // FUN_0007523c shuffles eligible groups before retaining the three largest awards.
    for (std::size_t n = roundBonuses.size(); n > 1; --n)
        std::swap(roundBonuses[n - 1], roundBonuses[random_.bounded(unsigned(n))]);
    std::stable_sort(roundBonuses.begin(), roundBonuses.end(),
                     [](const auto &a, const auto &b) { return a.points > b.points; });
    if (roundBonuses.size() > 3)
        roundBonuses.resize(3);
    for (const auto &b : roundBonuses)
        score += b.points;
}
void Game::finishRound() {
    if (screen == Screen::Results)
        return;
    finishCombo();
    if (mode == Mode::Arcade)
        awardBonuses();
    if (mode == Mode::Zen) {
        bestComboStar = classifyCombo(bestComboFruit_);
        const auto &textures = comboStarTextures(bestComboStar);
        if (!textures.empty())
            bestComboTexture = textures[cosmeticRandom_.bounded(unsigned(textures.size()))];
    }
    screen = Screen::Results;
    report(true);
    // Original fruit fact strings and per-fruit associations, rather than replacement prose.
    std::vector<const FruitDefinition *> choices;
    for (const auto &f : config_.fruits)
        if (!f.facts.empty() && stats.specific[f.name] > 0)
            choices.push_back(&f);
    if (choices.empty())
        for (const auto &f : config_.fruits)
            if (!f.facts.empty())
                choices.push_back(&f);
    if (!choices.empty()) {
        auto f = choices[random_.bounded(unsigned(choices.size()))];
        factFruit = f->name;
        std::vector<std::string> unread;
        for (const auto &key : f->facts)
            if (!progress_ || !progress_->factsRead.count(key))
                unread.push_back(key);
        auto &facts = unread.empty() ? f->facts : unread;
        factKey = facts[random_.bounded(unsigned(facts.size()))];
        if (progress_)
            progress_->readFact(config_, factFruit, factKey);
    }
    events_.push_back({"game-over"});
}
void Game::uiPointer(long long id, Vec2 p, int phase) {
    if (phase == 0) {
        if (screen == Screen::Swag && p.x < ui::CatalogWidth) {
            collectionContacts_[id] = {p, p, false};
            catalogVelocity_ = catalogDragDelta_ = 0;
        } else
            uiClick(p);
        return;
    }
    auto contact = collectionContacts_.find(id);
    if (contact == collectionContacts_.end())
        return;
    if (screen == Screen::Swag) {
        auto &c = contact->second;
        c.dragged = c.dragged || length(p - c.start) > 5;
        if (c.dragged) {
            float maximum = std::max(
                0.f, ui::CatalogTop + float(config_.items.size()) * ui::CatalogRowHeight - 320);
            float before = catalogScroll;
            catalogScroll = std::clamp(catalogScroll + p.y - c.previous.y, 0.f, maximum);
            catalogDragDelta_ += catalogScroll - before;
        }
        c.previous = p;
        if (phase == 2 && !c.dragged && p.x < ui::CatalogWidth)
            uiClick(p);
    }
    if (phase == 2)
        collectionContacts_.erase(contact);
}
bool Game::uiContact(Vec2 p) const {
    if (screen == Screen::Swag)
        return p.x < ui::CatalogWidth;
    if (!sliceScreen())
        return true;
    if (screen == Screen::Playing)
        return ui::Pause.contains(p);
    if (screen == Screen::Menu || screen == Screen::Results)
        return false;
    return screen == Screen::Home && (ui::Music.contains(p) || ui::Sound.contains(p));
}
void Game::uiClick(Vec2 p) {
    if (progress_ && screen != Screen::Playing && screen != Screen::Results &&
        screen != Screen::Menu && screen != Screen::Swag && screen != Screen::Dojo &&
        screen != Screen::About) {
        if (ui::music(screen == Screen::Paused).contains(p)) {
            progress_->musicEnabled = !progress_->musicEnabled;
            progress_->dirty = true;
            return;
        }
        if (ui::sound(screen == Screen::Paused).contains(p)) {
            progress_->soundEnabled = !progress_->soundEnabled;
            progress_->dirty = true;
            return;
        }
    }
    if (screen == Screen::Playing) {
        if (ui::Pause.contains(p))
            pause();
        return;
    }
    if (screen == Screen::Paused) {
        if (ui::RetryPaused.contains(p))
            start(mode);
        else if (ui::Resume.contains(p))
            pause();
        else if (ui::QuitPaused.contains(p))
            home();
        return;
    }

    if (screen == Screen::Home || screen == Screen::Dojo)
        return;
    if (screen == Screen::Swag) {
        if (p.x < ui::CatalogWidth) {
            int index = int(
                std::floor((320 - p.y - ui::CatalogTop + catalogScroll) / ui::CatalogRowHeight));
            if (index >= 0 && index < int(config_.items.size()))
                catalogPreview = index;
        }
        return;
    }
    if (screen == Screen::About) {
        if (p.y < 45) {
            screen = p.x > 400 ? Screen::Dojo : Screen::Achievements;
            page = 0;
        }
        return;
    }
    if (screen != Screen::Achievements)
        return;
    if (p.y < 45) {
        if (p.x > 400) {
            screen = Screen::Dojo;
            page = 0;
        } else if (p.x < 80)
            page = std::max(0, page - 1);
        else if (p.x > 320)
            page = std::min(page + 1, 8);
        return;
    }
}
void Game::start(Mode m) {
    sceneTarget_.reset();
    menuCut_.reset();
    selectionRegrow_ = 0;
    menuSelection_.reset();
    menuTransition_ = 0;
    mode = m;
    screen = Screen::Playing;
    score = misses = bestCombo = 0;
    stats = {};
    stats.mode = int(m);
    roundBonuses.clear();
    firstFruit.clear();
    comboBonus = 0;
    blitz = {};
    bestComboStar = ComboStar::None;
    bestComboTexture.clear();
    bestComboFruit_.clear();
    comboOrdered_.clear();
    if (progress_) {
        progress_->beginRound();
        stats.previousBest = progress_->best[std::size_t(m)];
    }
    comboKinds_.clear();
    comboAfterTimer_ = false;
    ending_ = 0;
    recoveryAt_ = 100;
    factKey.clear();
    factFruit.clear();
    remaining = m == Mode::Zen ? 90.f : m == Mode::Arcade ? 60.f : 0.f;
    elapsed = flash = 0;
    auto intro = config_.power("ready_set_go");
    introRemaining = m == Mode::Arcade && intro ? intro->duration : 0;
    waveNumber_ = comboCount_ = 0;
    comboTimer_ = 0;
    waveTimer_ = .6f;
    waveWaitForEntities_ = false;
    criticalMultiplier_ = m == Mode::Zen ? 0.f : 1.f;
    pending_.clear();
    bodies.clear();
    bladeParticles.clear();
    fuseParticles.clear();
    fuseEmissions_.clear();
    particles.clear();
    popups.clear();
    powers.clear();
    pointers.clear();
    collectionContacts_.clear();
    events_.clear();
    events_.push_back({"game-start"});
}
void Game::menu() {
    sceneTarget_.reset();
    menuCut_.reset();
    selectionRegrow_ = 0;
    menuTime_ = 0;
    collectionContacts_.clear();
    catalogScroll = 0;
    catalogPreview = 1;
    menuSelection_.reset();
    menuTransition_ = 0;
    particles.clear();
    popups.clear();
    screen = Screen::Menu;
    pointers.clear();
    bodies.clear();
    bladeParticles.clear();
    fuseParticles.clear();
    fuseEmissions_.clear();
    pending_.clear();
    powers.clear();
}
void Game::pause() {
    if (screen == Screen::Playing) {
        screen = Screen::Paused;
        pointers.clear();
    } else if (screen == Screen::Paused)
        screen = Screen::Playing;
}
void Game::spawn(const std::string &type, const SpawnDefinition &s) {
    std::string name = type;
    if (name == "random" || name == "1fruit")
        name = randomFruit().name;
    bool bomb = name == "bomb";
    if (bomb && mode == Mode::Zen)
        return;
    const auto *f = config_.fruit(name);
    if (!f && !bomb)
        return;
    Body b;
    b.id = nextId_++;
    b.bomb = bomb;
    b.fruit = name;
    b.model = bomb ? "bomb" : f->model + "_single";
    b.radius = (bomb ? config_.bombSize : f->scale) * .5f;
    // Presentation launch calibration is isolated here; original launch-space mapping is still
    // under review.
    b.position = {random_.range(70.f, 410.f), -65.f, 0};
    b.velocity = {random_.range(s.horizontalMin, s.horizontalMax) * 240.f,
                  random_.range(620.f, 760.f) * s.verticalScale, 0};
    b.rotation = random_.range(0.f, 6.2831853f);
    b.spin = random_.range(-2.f, 2.f);
    if (s.placement == "LEFT" || s.placement == "RIGHT" || s.placement == "LEFT_RIGHT") {
        bool left =
            s.placement == "LEFT" || (s.placement == "LEFT_RIGHT" && random_.bounded(2) == 0);
        b.position.x = left ? -10.f : 490.f;
        b.velocity.x = (left ? 1.f : -1.f) * std::abs(b.velocity.x);
    }
    if (s.customGravity)
        b.acceleration = s.gravity * 850.f;
    bodies.push_back(b);
    events_.push_back({"fruit-throw"});
}
void Game::scheduleWave() {
    const auto &list = mode == Mode::Classic ? config_.classic
                       : mode == Mode::Zen   ? config_.zen
                                             : config_.arcade;
    int number = waveNumber_;
    int games = progress_ ? progress_->count(std::string("games_") + modeName(mode)) : 0;
    for (auto &p : powers)
        if (p.name == "speed")
            number = -200;
        else if (p.name == "freeze" && number >= 0)
            number = -100;
    std::vector<const WaveDefinition *> eligible;
    float total = 0;
    for (auto &w : list)
        if (number >= w.number && number <= w.until && games >= w.gamesMin && games <= w.gamesMax &&
            w.chance > 0) {
            eligible.push_back(&w);
            total += std::max(0.f, w.chance + w.chanceGrowth * float(waveNumber_));
        }
    if (eligible.empty()) {
        int latest = -1000000;
        for (auto &w : list)
            if (w.number >= 0 && w.number <= waveNumber_)
                latest = std::max(latest, w.number);
        for (auto &w : list)
            if (w.number == latest && games >= w.gamesMin && games <= w.gamesMax) {
                eligible.push_back(&w);
                total += w.chance;
            }
    }
    if (eligible.empty()) {
        waveTimer_ = 1;
        return;
    }
    float pick = random_.range(0.f, total);
    auto chosen = eligible.back();
    for (auto w : eligible) {
        pick -= std::max(0.f, w->chance + w->chanceGrowth * float(waveNumber_));
        if (pick <= 0) {
            chosen = w;
            break;
        }
    }
    float delay = chosen->beforeDelay;
    for (auto &s : chosen->spawns) {
        int growth = std::max(0, waveNumber_ - chosen->number);
        int lo = std::max(0, s.min + int(s.minIncrement * float(growth))),
            hi = std::max(lo, s.max + int(s.maxIncrement * float(growth)));
        int count = std::min(32, random_.range(lo, hi));
        std::string same = randomFruit().name;
        for (int i = 0; i < count; ++i) {
            auto type =
                s.types.empty() ? "random" : s.types[random_.bounded(unsigned(s.types.size()))];
            if (type == "1fruit")
                type = same;
            pending_.push_back({delay, type, s});
            delay += std::max(0.f, s.delay + s.delayIncrement * float(growth));
        }
    }
    if (mode == Mode::Arcade) {
        for (auto &override : config_.arcadeOverrides) {
            if (override.types.empty() || override.chance <= 0)
                continue;
            float chance = override.chance * (powers.empty() ? 1.f : override.disableWhenPowered);
            int attempts = 0;
            for (auto &pending : pending_) {
                if (attempts >= override.perWave)
                    break;
                if (pending.type == "bomb")
                    continue;
                if (random_.range(0.f, 100.f) < chance) {
                    pending.type = override.types[random_.bounded(unsigned(override.types.size()))];
                    ++attempts;
                }
            }
        }
    }
    waveWaitForEntities_ = chosen->waitForEntities;
    criticalMultiplier_ = chosen->criticalMultiplier;
    waveTimer_ =
        std::max(0.f, chosen->nextDelay + chosen->nextDelayIncrement *
                                              float(std::max(0, waveNumber_ - chosen->number)));
    ++waveNumber_;
}
void Game::finishCombo() {
    if (comboCount_ >= 3) {
        int multiplier = 1;
        for (auto &p : powers)
            if (p.name == "score_mult")
                multiplier = 2;
        int bonus = comboCount_;
        if (mode == Mode::Arcade && !config_.arcadeCombo.empty()) {
            auto it = config_.arcadeCombo.upper_bound(comboCount_);
            if (it != config_.arcadeCombo.begin())
                bonus = std::prev(it)->second;
        }
        score += bonus * multiplier;
        comboBonus += bonus * multiplier;
        if (comboCount_ > bestCombo) {
            bestCombo = comboCount_;
            bestComboFruit_ = comboOrdered_;
        }
        if (mode == Mode::Arcade) {
            int award = blitz.combo();
            if (award) {
                score += award * multiplier;
                popups.push_back(
                    {config_.text("ArcadeMode_0" + std::to_string(std::min(blitz.stage, 6) + 3)) +
                         " +" + std::to_string(award * multiplier),
                     comboPosition_ + Vec2{0, 25}, 1.5f});
                events_.push_back({"combo-blitz-" + std::to_string(std::min(blitz.stage, 6))});
            }
        }
        popups.push_back({std::to_string(comboCount_) + " FRUIT COMBO", comboPosition_, 1.3f});
        events_.push_back({"combo"});
        if (comboAfterTimer_ && mode == Mode::Zen)
            ++stats.lateCombos;
        if (comboKinds_.size() == 1 && comboKinds_.count("coconut"))
            stats.coconutCombo = std::max(stats.coconutCombo, comboCount_);
        stats.lifetime["strawberry_combo_total"] += comboKinds_["strawberry"];
        report();
    }
    comboCount_ = 0;
    comboTimer_ = 0;
    comboKinds_.clear();
    comboOrdered_.clear();
    comboAfterTimer_ = false;
}
void Game::hit(std::size_t index, Vec2 point) {
    Body b = bodies[index];
    bodies.erase(bodies.begin() + static_cast<std::ptrdiff_t>(index));
    if (b.bomb) {
        finishCombo();
        ++stats.bombs;
        if (mode == Mode::Arcade)
            blitz.reset();
        flash = .35f;
        events_.push_back({"bomb-explode"});
        if (mode == Mode::Classic) {
            finishRound();
        } else {
            score = std::max(0, score - 10);
            popups.push_back({"-10", point, 1});
        }
        return;
    }
    auto f = config_.fruit(b.fruit);
    if (!f)
        return;
    int multiplier = 1;
    for (auto &p : powers)
        if (p.name == "score_mult")
            multiplier = 2;
    std::string kind = b.fruit == "apple_red" ? "apple" : b.fruit;
    ++stats.fruits;
    ++stats.specific[kind];
    ++stats.lifetime["fruit_total"];
    ++stats.lifetime[kind + "_total"];
    stats.consecutive = stats.lastFruit == kind ? stats.consecutive + 1 : 1;
    stats.lastFruit = kind;
    if (firstFruit.empty())
        firstFruit = kind;
    stats.streaks[kind] = std::max(stats.streaks[kind], stats.consecutive);
    stats.streaks["ANY"] = std::max(stats.streaks["ANY"], stats.consecutive);
    ++comboKinds_[kind];
    comboOrdered_.push_back(b.fruit);
    if (mode == Mode::Arcade)
        blitz.slice();
    comboAfterTimer_ = comboAfterTimer_ || (mode == Mode::Zen && remaining <= 0);
    int gain = f->score;
    // FUN_000256f8 gates criticals at score >= 2; FUN_00024030 excludes
    // zero-alpha juice and fruit worth at least the critical award. The native
    // changing chance counter is still unrecovered; retain the base denominator.
    if (score >= 2 && !f->noCritical && f->colour[3] != 0 && f->score < config_.criticalScore &&
        criticalMultiplier_ > 0 &&
        random_.bounded(unsigned(std::max(1.f, config_.criticalChance / criticalMultiplier_))) ==
            0) {
        gain = config_.criticalScore;
        ++stats.specific["crit"];
        if (kind == "mango")
            ++stats.specific["mangocrit"];
        popups.push_back({"CRITICAL +" + std::to_string(gain * multiplier), point, 1});
        events_.push_back({"critical"});
    }
    if (b.fruit == "dragon")
        popups.push_back({"ULTRA RARE +50", point, 1.3f});
    score += gain * multiplier;
    if (mode == Mode::Classic)
        while (score >= recoveryAt_) {
            if (misses)
                --misses;
            recoveryAt_ += 100;
        }
    report();
    ++comboCount_;
    comboTimer_ = .12f;
    comboPosition_ = point;
    events_.push_back({f->sounds.empty() ? "splatter-medium-1"
                                         : f->sounds[random_.bounded(unsigned(f->sounds.size()))]});
    if (!f->power.empty() && mode == Mode::Arcade) {
        auto def = config_.power(f->power);
        if (def) {
            auto found = std::find_if(powers.begin(), powers.end(),
                                      [&](auto &p) { return p.name == def->name; });
            if (found == powers.end())
                powers.push_back({def->name, def->duration});
            else
                found->remaining = def->duration;
            popups.push_back({f->power == "score_mult" ? "DOUBLE SCORE"
                              : f->power == "speed"    ? "FRENZY"
                                                       : "FREEZE",
                              point, 1.2f});
            events_.push_back({f->power == "freeze"  ? "bonus-banana-freeze"
                               : f->power == "speed" ? "bonus-banana-frenzy"
                                                     : "bonus-banana-x2"});
        }
    }
    // Native MAD associates cut-piece names. The renderer resolves these; physical separation is an
    // adapter.
    for (int side = 0; side < 2; ++side) {
        Body half = b;
        half.id = nextId_++;
        half.piece = true;
        half.model = f->model + "#" + std::to_string(side);
        half.velocity.x += (side ? 120.f : -120.f);
        half.velocity.y += 50;
        half.spin = side ? 3.f : -3.f;
        half.age = 0;
        bodies.push_back(half);
    }
    for (int i = 0; i < 18; ++i) {
        float angle = random_.range(0.f, 6.2831853f), speed = random_.range(40.f, 150.f);
        particles.push_back({point,
                             {std::cos(angle) * speed, std::sin(angle) * speed},
                             random_.range(.4f, 1.f),
                             f->colour});
    }
}
void Game::cutMenuFruit(const Body &fruit) {
    menuCut_ = Vec2{fruit.position.x, fruit.position.y};
    // Store the anchor rather than the current bob offset for hit/render lookup.
    if (screen == Screen::Swag)
        menuCut_ = ui::CatalogSelect;
    if (fruit.bomb)
        return;
    std::string base = fruit.model.substr(0, fruit.model.find("_single"));
    for (int side = 0; side < 2; ++side) {
        Body half = fruit;
        half.id = nextId_++;
        half.model = base + "#" + std::to_string(side);
        half.piece = true;
        half.velocity = {side ? 120.f : -120.f, 65, 0};
        half.spin = side ? 3.f : -3.f;
        bodies.push_back(half);
    }
}
void Game::navigate(Screen target, const Body &fruit) {
    if (sceneTarget_)
        return;
    cutMenuFruit(fruit);
    sceneTarget_ = target;
    sceneExit_ = 1;
    events_.push_back({fruit.bomb ? "bomb-explode" : "splatter-medium-1"});
}
Body Game::menuBody(const std::string &model, Vec2 position, float radius, int phase) const {
    Body b;
    b.model = model;
    b.bomb = model == "bomb";
    b.position = {position.x, position.y + 3.f * std::sin(float(menuTime_) * 1.4f + float(phase)),
                  0};
    b.radius = radius;
    b.age = float(menuTime_) + float(phase) * 1.5f;
    b.rotation =
        b.bomb ? .12f * std::sin(float(menuTime_) * .75f) : float(menuTime_) * .75f + float(phase);
    return b;
}
void Game::pointer(long long id, Vec2 p, bool down) {
    if (sceneTarget_)
        return;
    if (screen == Screen::Swag) {
        auto previous = pointers.find(id);
        if (down && previous != pointers.end() && previous->second.down &&
            length(p - previous->second.previous) > .5f) {
            Vec2 from = previous->second.previous;
            if (distance_to_segment(ui::CatalogBack, from, p) <= 25) {
                navigate(Screen::Dojo, menuBody("bomb", ui::CatalogBack, 23.375f));
                menuCut_ = ui::CatalogBack;
                return;
            }
            if (distance_to_segment(ui::CatalogSelect, from, p) <= 25 && progress_ &&
                catalogPreview >= 0 && catalogPreview < int(config_.items.size())) {
                const auto &item = config_.items[std::size_t(catalogPreview)];
                if (selectionRegrow_ <= 0) {
                    bool equipped = progress_->equip(config_, item.id);
                    events_.push_back({equipped ? "splatter-medium-1" : "equip-locked"});
                    if (equipped) {
                        cutMenuFruit(menuBody("pineapple_single", ui::CatalogSelect, 27.625f));
                        selectionRegrow_ = .6f;
                    }
                }
            }
        }
    }
    if (screen == Screen::Results) {
        auto found = pointers.find(id);
        if (down && found != pointers.end() && found->second.down &&
            length(p - found->second.previous) > .5f) {
            auto previous = found->second.previous;
            if (distance_to_segment(ui::RetryFruit, previous, p) <= ui::ResultFruitRadius) {
                start(mode);
                return;
            }
            if (distance_to_segment(ui::QuitFruit, previous, p) <= ui::ResultFruitRadius) {
                home();
                return;
            }
        }
    }

    if (screen == Screen::Menu && !menuSelection_) {
        auto found = pointers.find(id);
        if (down && found != pointers.end() && found->second.down &&
            length(p - found->second.previous) > .5f &&
            distance_to_segment(ui::ModeBackBomb, found->second.previous, p) <=
                ui::ModeBackRadius) {
            home();
            events_.push_back({"menu-bomb"});
            return;
        }
    }
    auto &ptr = pointers[id];
    if (!sliceScreen()) {
        ptr.down = false;
        return;
    }
    if (down) {
        if (!ptr.down)
            ptr.stroke = ++strokes_;
        ptr.moved = ptr.moved || (ptr.down && length(p - ptr.previous) > .5f);
        if ((screen == Screen::Home || screen == Screen::Dojo) && ptr.down &&
            length(p - ptr.previous) > .5f) {
            bool homeScreen = screen == Screen::Home;
            const auto *positions = homeScreen ? ui::HomeFruitPositions : ui::DojoFruitPositions;
            for (int i = 0; i < (homeScreen ? 4 : 3); ++i) {
                float radius = homeScreen ? ui::HomeFruitRadii[i] : ui::DojoFruitRadii[i];
                if (distance_to_segment(positions[i], ptr.previous, p) > radius)
                    continue;
                if (homeScreen && i >= 2) {
                    if (i == 2)
                        offlineNotice = 3;
                    else
                        quitRequested = true;
                } else {
                    Screen target = homeScreen ? (i == 0 ? Screen::Menu : Screen::Dojo)
                                    : i == 2   ? Screen::Home
                                    : i == 0   ? Screen::Swag
                                               : Screen::About;
                    const char *homeModels[] = {"watermelon_single", "mango_single"};
                    const char *dojoModels[] = {"pineapple_single", "plum_single", "bomb"};
                    navigate(target, menuBody(homeScreen ? homeModels[i] : dojoModels[i],
                                              positions[i], radius, i));
                    menuCut_ = positions[i];
                    page = 0;
                }
                ptr.down = false;
                break;
            }
        } else if (screen == Screen::Menu && ptr.down && !menuSelection_ &&
                   length(p - ptr.previous) > .5f) {
            for (auto &item : menuFruits()) {
                auto position = menuFruitPosition(item);
                if (distance_to_segment(position, ptr.previous, p) > item.radius * .85f)
                    continue;
                auto fruit = config_.fruit(item.fruit);
                if (!fruit)
                    break;
                menuSelection_ = item.mode;
                menuTransition_ = .35f;
                for (int side = 0; side < 2; ++side) {
                    Body half;
                    half.id = nextId_++;
                    half.fruit = item.fruit;
                    half.model = fruit->model + "#" + std::to_string(side);
                    half.position = {position.x, position.y, 0};
                    half.rotation = menuFruitRotation(item);
                    half.age = menuFruitTumble() / .45f;
                    half.radius = item.radius;
                    half.piece = true;
                    half.velocity = {side ? 120.f : -120.f, 65, 0};
                    half.spin = side ? 3.f : -3.f;
                    bodies.push_back(half);
                }
                events_.push_back({fruit->sounds.empty() ? "splatter-medium-1" : fruit->sounds[0]});
                break;
            }
        } else if (screen == Screen::Playing && ptr.down && length(p - ptr.previous) > .5f) {
            for (std::size_t i = 0; i < bodies.size();) {
                auto &b = bodies[i];
                if (!b.piece && distance_to_segment({b.position.x, b.position.y}, ptr.previous,
                                                    p) <= b.radius * .85f) {
                    hit(i, p);
                    if (screen != Screen::Playing)
                        break;
                } else
                    ++i;
            }
        }
        if (ptr.trail.empty()) {
            ptr.trail.push_back({p, BladeLife});
        } else {
            TrailPoint last = ptr.trail.back();
            float distance = length(p - last.p);
            if (distance > .5f) {
                // Resample sparse mouse/touch events so even a two-event slash has a tapered body.
                int samples = std::clamp(int(std::ceil(distance / 4.f)), 1, 64);
                for (int i = 1; i <= samples; ++i) {
                    float fraction = float(i) / float(samples);
                    ptr.trail.push_back({last.p + (p - last.p) * fraction,
                                         last.life + (BladeLife - last.life) * fraction});
                }
                if (ptr.trail.size() > 128)
                    ptr.trail.erase(ptr.trail.begin(), ptr.trail.end() - 128);
            }
        }
    }
    ptr.previous = p;
    ptr.down = down;
    if (!down && screen == Screen::Playing)
        finishCombo();
}
void Game::update(float rawDt) {
    float real = original_frame_delta(rawDt), speed = 1;
    offlineNotice = std::max(0.f, offlineNotice - real);
    if (screen == Screen::Home || screen == Screen::Dojo || screen == Screen::Menu ||
        screen == Screen::Swag)
        menuTime_ += real;
    if (screen == Screen::Swag) {
        if (catalogDragDelta_ != 0 && real > 0) {
            catalogVelocity_ = std::clamp(catalogDragDelta_ / real, -1200.f, 1200.f);
            catalogDragDelta_ = 0;
        } else if (collectionContacts_.empty()) {
            float maximum = std::max(
                0.f, ui::CatalogTop + float(config_.items.size()) * ui::CatalogRowHeight - 320);
            float target = catalogScroll + catalogVelocity_ * real;
            catalogScroll = std::clamp(target, 0.f, maximum);
            catalogVelocity_ *= std::exp(-8.f * real);
            if (target != catalogScroll || std::abs(catalogVelocity_) < 1.f)
                catalogVelocity_ = 0;
        }
    } else
        catalogVelocity_ = catalogDragDelta_ = 0;
    for (auto &particle : fuseParticles) {
        particle.remaining -= real;
        particle.position = particle.position + particle.velocity * real;
        particle.velocity = particle.velocity + particle.effect.gravity * real;
    }
    fuseParticles.erase(std::remove_if(fuseParticles.begin(), fuseParticles.end(),
                                       [](const auto &p) { return p.remaining <= 0; }),
                        fuseParticles.end());
    auto emitFuse = [&](const Body &bomb, std::size_t key) {
        for (std::size_t n = 0; n < config_.bombEffects.size(); ++n) {
            const auto &fx = config_.bombEffects[n];
            auto &accumulator = fuseEmissions_[key * config_.bombEffects.size() + n];
            accumulator += real * fx.rate;
            while (accumulator >= 1) {
                accumulator -= 1;
                if (fuseParticles.size() >= 128)
                    continue;
                Vec2 velocity{cosmeticRandom_.range(fx.velocityMin.x, fx.velocityMax.x),
                              cosmeticRandom_.range(fx.velocityMin.y, fx.velocityMax.y)};
                fuseParticles.push_back({bombFuse(bomb), velocity, fx, fx.life});
            }
        }
    };
    if (screen == Screen::Home && !menuFruitCut(ui::HomeQuit))
        emitFuse(menuBody("bomb", ui::HomeQuit, ui::HomeFruitRadii[3], 3), 0);
    else if (screen == Screen::Dojo && !menuFruitCut(ui::DojoFruitPositions[2]))
        emitFuse(menuBody("bomb", ui::DojoFruitPositions[2], ui::DojoFruitRadii[2], 2), 0);
    else if (screen == Screen::Swag && !menuFruitCut(ui::CatalogBack))
        emitFuse(menuBody("bomb", ui::CatalogBack, 23.375f), 0);
    else if (screen == Screen::Menu)
        emitFuse(menuBody("bomb", ui::ModeBackBomb, ui::ModeBackRadius), 0);
    else if (screen == Screen::Playing) {
        std::size_t key = 1;
        for (const auto &bomb : bodies)
            if (bomb.bomb && !bomb.piece)
                emitFuse(bomb, key++);
    }
    for (auto &particle : bladeParticles) {
        particle.remaining -= real;
        particle.position = particle.position + particle.velocity * real;
        particle.velocity = particle.velocity + particle.effect.gravity * real;
    }
    bladeParticles.erase(std::remove_if(bladeParticles.begin(), bladeParticles.end(),
                                        [](const auto &p) { return p.remaining <= 0; }),
                         bladeParticles.end());
    for (auto &entry : pointers) {
        auto &ptr = entry.second;
        auto item = progress_ ? config_.item(progress_->selectedBlade) : nullptr;
        if (ptr.down && ptr.moved && item && sliceScreen()) {
            for (std::size_t n = 0; n < item->effects.size(); ++n) {
                const auto &fx = item->effects[n];
                auto &accumulator = ptr.emissions[n];
                accumulator += real * fx.rate;
                while (accumulator >= 1) {
                    accumulator -= 1;
                    if (bladeParticles.size() >= 128)
                        continue;
                    Vec2 velocity{cosmeticRandom_.range(fx.velocityMin.x, fx.velocityMax.x),
                                  cosmeticRandom_.range(fx.velocityMin.y, fx.velocityMax.y)};
                    bladeParticles.push_back({ptr.previous, velocity, fx, fx.life});
                }
            }
        }
        ptr.moved = false;
    }
    for (auto it = pointers.begin(); it != pointers.end();) {
        auto &pts = it->second.trail;
        for (auto &point : pts)
            point.life -= real;
        pts.erase(
            std::remove_if(pts.begin(), pts.end(), [](auto &point) { return point.life <= 0; }),
            pts.end());
        if (pts.empty() && !it->second.down)
            it = pointers.erase(it);
        else
            ++it;
    }
    if (progress_) {
        if (!progress_->notifications.empty())
            progress_->notifications.front().life -= real;
        progress_->notifications.erase(std::remove_if(progress_->notifications.begin(),
                                                      progress_->notifications.end(),
                                                      [](const auto &n) { return n.life <= 0; }),
                                       progress_->notifications.end());
    }
    if (screen == Screen::Home || screen == Screen::Dojo || screen == Screen::Swag) {
        for (auto &half : bodies) {
            integrate(half.position, half.velocity, half.acceleration, real);
            half.rotation += half.spin * real;
            half.age += real;
        }
        bodies.erase(std::remove_if(bodies.begin(), bodies.end(),
                                    [](const Body &b) { return b.position.y < -150; }),
                     bodies.end());
        if (selectionRegrow_ > 0) {
            selectionRegrow_ = std::max(0.f, selectionRegrow_ - real);
            if (selectionRegrow_ == 0)
                menuCut_.reset();
        }
        if (sceneTarget_) {
            // FUN_0003d41c decays the outgoing scene by .75 per original frame.
            sceneExit_ *= std::pow(.75f, real * 60.f);
            if (sceneExit_ <= .001f) {
                screen = *sceneTarget_;
                sceneTarget_.reset();
                menuCut_.reset();
                bodies.clear();
                fuseParticles.clear();
                pointers.clear();
                collectionContacts_.clear();
            }
        }
        return;
    }

    if (screen == Screen::Menu) {
        if (menuSelection_) {
            for (auto &half : bodies) {
                integrate(half.position, half.velocity, half.acceleration, real);
                half.rotation += half.spin * real;
                half.age += real;
            }
            menuTransition_ -= real;
            if (menuTransition_ <= 0) {
                Mode selected = *menuSelection_;
                start(selected);
            }
        }
        return;
    }
    if (screen != Screen::Playing)
        return;
    if (introRemaining > 0) {
        float used = std::min(real, introRemaining);
        introRemaining = std::max(0.f, introRemaining - real);
        real -= used;
        if (real <= 0)
            return;
    }
    float clockDt = real;
    for (auto &p : powers) {
        if (auto def = config_.power(p.name)) {
            speed = std::min(speed, def->speed);
            // Power duration uses wall time; slowClock modifies only the round clock.
            float active = std::min(real, p.remaining);
            clockDt = std::min(clockDt, real - active * (1.f - def->clockSpeed));
        }
        p.remaining -= real;
    }
    powers.erase(
        std::remove_if(powers.begin(), powers.end(), [](auto &p) { return p.remaining <= 0; }),
        powers.end());
    float dt = real * speed;
    if (mode == Mode::Arcade)
        blitz.update(real, config_.arcadeSpeedLoss);
    elapsed += real;
    flash = std::max(0.f, flash - real);
    if (mode != Mode::Classic) {
        remaining = std::max(0.f, remaining - clockDt);
        if (remaining <= 0) {
            ending_ += real;
            if (ending_ >= .8f) {
                finishRound();
                return;
            }
        }
    }
    if (comboTimer_ > 0) {
        comboTimer_ -= real;
        if (comboTimer_ <= 0)
            finishCombo();
    }
    // FUN_00085a70 / FUN_0008a1a4: next-wave delay begins after launch processing,
    // and waitForEntities waves also wait for the prior fruit/pieces to clear.
    bool waiting = !pending_.empty() || (waveWaitForEntities_ && !bodies.empty());
    if (!waiting) {
        waveTimer_ -= dt;
        if (waveTimer_ <= 0 && (mode == Mode::Classic || remaining > 0))
            scheduleWave();
    }
    for (auto i = pending_.begin(); i != pending_.end();) {
        i->delay -= dt;
        if (i->delay <= 0 && (mode == Mode::Classic || remaining > 0)) {
            spawn(i->type, i->spawn);
            i = pending_.erase(i);
        } else
            ++i;
    }
    for (auto &b : bodies) {
        integrate(b.position, b.velocity, b.acceleration, dt);
        b.rotation += b.spin * dt;
        b.age += real;
        if (b.position.y > 0)
            b.entered = true;
    }
    for (auto i = bodies.begin(); i != bodies.end();) {
        if ((i->entered && i->position.y < -80) || i->age > 8) {
            if (!i->piece && !i->bomb) {
                ++stats.dropped;
                report();
            }
            if (!i->piece && !i->bomb && mode == Mode::Classic) {
                ++misses;
                events_.push_back({"fruit-miss"});
                if (misses >= 3) {
                    finishCombo();
                    finishRound();
                }
            }
            i = bodies.erase(i);
        } else
            ++i;
    }
    for (auto &p : particles) {
        p.life -= dt;
        p.position = p.position + p.velocity * dt;
        p.velocity.y -= 600 * dt;
    }
    particles.erase(
        std::remove_if(particles.begin(), particles.end(), [](auto &p) { return p.life <= 0; }),
        particles.end());
    for (auto &p : popups) {
        p.life -= real;
        p.position.y += 22 * real;
    }
    popups.erase(std::remove_if(popups.begin(), popups.end(), [](auto &p) { return p.life <= 0; }),
                 popups.end());
}
void Game::debugSpawn(const std::string &name, Vec2 pos) {
    SpawnDefinition s;
    spawn(name, s);
    if (!bodies.empty()) {
        auto &b = bodies.back();
        b.position = {pos.x, pos.y, 0};
        b.velocity = {0, 0, 0};
        b.acceleration = {0, 0, 0};
        b.entered = true;
    }
}
std::vector<Event> Game::takeEvents() {
    auto out = std::move(events_);
    events_.clear();
    return out;
}
} // namespace fruit
