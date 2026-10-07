#pragma once
#include "math.hpp"
#include <string>
#include <vector>
namespace fruit {
// Native enum order at 0xe32d0, classifier FUN_00076120, textures FUN_000767b0.
enum class ComboStar {
    None = -1,
    Three,
    Four,
    Five,
    Six,
    AllDifferent,
    SevenPlus,
    Apples,
    Oranges,
    Pineapples,
    Watermelons,
    Kiwis,
    Mangoes,
    Strawberries,
    Pears,
    Bananas,
    Limes,
    Lemons,
    Coconuts,
    Passionfruits,
    Alphabetical,
    FullHouse,
    TwoPairs,
    ThreeOfAKind,
    FourOfAKind,
    Pattern
};
ComboStar classifyCombo(const std::vector<std::string> &orderedFruit);
const char *comboStarName(ComboStar);
const std::vector<std::string> &comboStarTextures(ComboStar);
struct ComboBlitz {
    int stage = 0, best = 0;
    float energy = 0, interval = 0, window = 0;
    // FUN_00085f44: accumulation cap 14, activation >2.9, promotion every 2.5.
    int combo();
    void slice(); // FUN_000855c8 adds .05 to the normalized expiry window, capped at 1.
    void update(float dt, float speedLoss);
    void reset();
};
} // namespace fruit
