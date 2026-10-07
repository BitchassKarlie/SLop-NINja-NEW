#include "fruit/progress.hpp"
#include <limits>
namespace fruit {
namespace {
int value(const std::map<std::string, int> &map, const std::string &key) {
    auto it = map.find(key);
    return it == map.end() ? 0 : it->second;
}
} // namespace
int Progress::count(const std::string &key) const {
    return value(counters, key);
}
void Progress::beginRound() {
    observed_.clear();
}
bool Progress::unlocked(const Config &c, const std::string &id) const {
    if (!c.item(id))
        return false;
    for (const auto &r : c.achievements)
        if (r.id == id)
            return earned.count(id) != 0;
    return true; // Items without an active unlock rule are available in the recovered full version.
}
bool Progress::equip(const Config &c, const std::string &id) {
    if (!unlocked(c, id))
        return false;
    auto item = c.item(id);
    auto &selection = item->type == "BACKGROUND" ? selectedBackground : selectedBlade;
    if (selection != id) {
        selection = id;
        dirty = true;
    }
    return true;
}
void Progress::observe(const Config &c, const RoundStats &s) {
    for (const auto &entry : s.lifetime) {
        int delta = std::max(0, entry.second - value(observed_, entry.first));
        if (delta) {
            counters[entry.first] =
                int(std::min<long long>(std::numeric_limits<int>::max(),
                                        static_cast<long long>(count(entry.first)) + delta));
            dirty = true;
        }
        observed_[entry.first] = entry.second;
    }
    const char *modes[] = {"CLASSIC", "ZEN", "ARCADE"};
    if (s.mode < 0 || s.mode > 2)
        return;
    for (const auto &r : c.achievements) {
        if (earned.count(r.id) ||
            (r.mode != "ALL" && r.mode != "ANY" && r.mode.find(modes[s.mode]) == std::string::npos))
            continue;
        bool met = false;
        if (r.type == "SCORE")
            met = s.score >= r.total;
        else if (r.type == "SCORE_UNSULLIED")
            met = s.score >= r.total && s.dropped == 0;
        else if (r.type == "TOTAL")
            met = count("fruit_total") >= r.total;
        else if (r.type == "SPECIFIC") {
            bool lifetime =
                r.specific.find("_total") != std::string::npos || r.specific == "strawberry_facts";
            met = (lifetime ? count(r.specific) : value(s.specific, r.specific)) >= r.total;
        } else if (r.type == "CONSECUTIVE")
            met = value(s.streaks, r.specific) >= r.total;
        else if (r.type == "CONSECUTIVE_ANY")
            met = value(s.streaks, "ANY") >= r.total;
        else if (r.type == "END_SCORE")
            met = s.ended && (r.total == -1 ? s.previousBest > 0 && s.score == s.previousBest
                                            : s.score == r.total);
        else if (r.type == "COMBO")
            met = r.afterTimer ? s.lateCombos >= r.total : s.bestCombo >= r.total;
        else if (r.type == "COMBO_STAR")
            met = s.coconutCombo >= r.total;
        else if (r.type == "BONUS_ACHIEVED" && s.ended) {
            if (r.specific == "UNDER ACHIEVER")
                met = s.score <= r.total;
            else if (r.specific == "OVER ACHIEVER")
                met = s.score >= r.total;
            else if (r.specific == "BOMB MAGNET")
                met = s.score >= r.total && s.bombs >= 3;
        }
        if (met) {
            earned.insert(r.id);
            dirty = true;
            auto item = c.item(r.id);
            notifications.push_back(
                {c.text(r.name) + (item ? ": " + c.text(item->title) : ""), r.texture, 4});
        }
    }
}
void Progress::readFact(const Config &c, const std::string &fruit, const std::string &key) {
    if (key.empty() || !factsRead.insert(key).second)
        return;
    dirty = true;
    if (fruit == "strawberry")
        ++counters["strawberry_facts"];
    RoundStats s;
    observe(c, s);
}
} // namespace fruit
