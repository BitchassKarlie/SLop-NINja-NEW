#pragma once
#include "math.hpp"
#include <array>
#include <filesystem>
#include <map>
#include <string>
#include <vector>
namespace fruit {
struct FruitDefinition {
    std::string name, model;
    int chance = 0, score = 1;
    float scale = 60, collision = 5;
    std::array<unsigned char, 4> colour{255, 255, 255, 180};
    std::vector<std::string> sounds, facts;
    std::string power;
    bool noCritical = false;
};
struct SpawnDefinition {
    std::vector<std::string> types;
    int min = 1, max = 1;
    float delay = 0, delayIncrement = 0, minIncrement = 0, maxIncrement = 0, verticalScale = 1;
    std::string placement;
    float horizontalMin = -0.25f, horizontalMax = 0.25f;
    Vec3 gravity{0, -1, 0};
    bool customGravity = false;
};
struct WaveDefinition {
    int number = 0, until = 0;
    float chance = 100, chanceGrowth = 0, criticalMultiplier = 1;
    int gamesMin = 0, gamesMax = 1000000;
    float dt = 1, dtIncrement = 0, nextDelay = 1, nextDelayIncrement = 0, beforeDelay = 0;
    bool waitForEntities = true;
    std::vector<SpawnDefinition> spawns;
};
struct PowerDefinition {
    std::string name;
    float duration = 0, speed = 1, multiplier = 1, clockSpeed = 1;
    std::string bar;
    int waveOverride = 0;
};
struct OverrideDefinition {
    std::vector<std::string> types;
    float chance = 0, disableWhenPowered = 1;
    int perWave = 1, waveCount = 1;
};
struct BladeEffect {
    bool directional = false;
    std::string texture;
    float rate = 0, life = .5f, size = 10, endSize = 0;
    Vec2 velocityMin, velocityMax, gravity;
    std::array<unsigned char, 4> colour{255, 255, 255, 255}, endColour{255, 255, 255, 0};
};
struct ItemDefinition {
    std::vector<BladeEffect> effects;
    std::string id, type, title, description, requirement, counter, texture, bladeTexture = "blade";
    int target = 0;
    std::vector<std::array<unsigned char, 3>> colours;
};
struct AchievementDefinition {
    std::string id, type, name, mode, specific, texture;
    int total = 0, points = 0;
    bool afterTimer = false;
};
struct BonusDefinition {
    std::string totals, title, texture;
    int points = 0;
    std::map<std::string, std::string> conditions;
};
struct Config {
    std::vector<BladeEffect> bombEffects;
    std::map<int, int> arcadeCombo;
    std::vector<BonusDefinition> bonuses;
    std::map<std::string, std::string> strings;
    std::vector<ItemDefinition> items;
    std::vector<AchievementDefinition> achievements;
    std::string text(const std::string &key) const;
    const ItemDefinition *item(const std::string &id) const;
    std::vector<FruitDefinition> fruits;
    std::vector<WaveDefinition> classic, zen, arcade;
    std::vector<PowerDefinition> powers;
    std::vector<OverrideDefinition> arcadeOverrides;
    int criticalScore = 10;
    float criticalChance = 50, bombSize = 55, arcadeSpeedLoss = 4;
    static Config load(const std::filesystem::path &assets);
    const FruitDefinition *fruit(const std::string &name) const;
    const PowerDefinition *power(const std::string &name) const;
};
} // namespace fruit
