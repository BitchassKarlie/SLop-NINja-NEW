#pragma once
#include "config.hpp"
#include <set>
namespace fruit {
struct RoundStats {
    int mode = 0, score = 0, fruits = 0, dropped = 0, bombs = 0, bestCombo = 0;
    int consecutive = 0, previousBest = 0, lateCombos = 0, coconutCombo = 0;
    bool ended = false;
    std::string lastFruit;
    std::map<std::string, int> specific, streaks, lifetime;
};
struct Notification {
    std::string title, texture;
    float life = 4;
};
class Progress {
    std::map<std::string, int> observed_;

  public:
    std::array<int, 3> best{0, 0, 0};
    std::map<std::string, int> counters;
    std::set<std::string> earned, factsRead;
    std::string selectedBlade = "ORIGINAL_SLASH", selectedBackground = "background1";
    std::vector<Notification> notifications;
    bool dirty = false, musicEnabled = true, soundEnabled = true;
    void beginRound();
    void observe(const Config &, const RoundStats &);
    void readFact(const Config &, const std::string &fruit, const std::string &key);
    bool unlocked(const Config &, const std::string &id) const;
    bool equip(const Config &, const std::string &id);
    int count(const std::string &key) const;
};
} // namespace fruit
