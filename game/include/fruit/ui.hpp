#pragma once
#include "math.hpp"
namespace fruit::ui {
struct Rect {
    float x, y, w, h; // Screen coordinates, 480 x 320, top-left origin.
    bool contains(Vec2 world) const {
        float sy = 320 - world.y;
        return world.x >= x && world.x <= x + w && sy >= y && sy <= y + h;
    }
};
inline constexpr Rect Music{400, 4, 32, 32}, Sound{440, 4, 32, 32};
// Settled home layout measured in the original APK showcase (1280x720).
inline constexpr Vec2 HomeNewGame{256, 96}, HomeDojo{94, 97};
inline constexpr Vec2 HomeFeint{388, 169}, HomeQuit{422, 53};
inline constexpr Vec2 HomeFruitPositions[] = {HomeNewGame, HomeDojo, HomeFeint, HomeQuit};
inline constexpr float HomeFruitRadii[] = {38, 25, 25, 25};
inline constexpr float HomeRingSizes[] = {256, 128, 104, 104};
// FUN_0003c860: Sensei center (-180,-47), title center (-184,-136).
inline constexpr Rect DojoSensei{-68, 79, 256, 256}, DojoTitle{-8, 264, 128, 64};
// FUN_0003d41c: centered (-18,-15), (145,42), (185,-106).
inline constexpr Vec2 DojoFruitPositions[] = {{222, 145}, {385, 202}, {425, 54}};
inline constexpr float DojoFruitRadii[] = {25, 23.375f, 22.6875f};
inline constexpr float DojoRingSizes[] = {257, 109, 106.425f};
inline constexpr float CatalogWidth = 296, CatalogTop = 35, CatalogRowHeight = 80;
inline constexpr Vec2 CatalogSelect{386, 270}, CatalogBack{426, 63};
inline constexpr Rect Pause{8, 280, 36, 36};
inline constexpr Rect RetryPaused{240, 116, 128, 128};
inline constexpr Rect Resume{112, 116, 128, 128};
inline constexpr Rect QuitPaused{416, 252, 64, 64};
inline constexpr Rect PausedMusic{204, 2, 32, 32}, PausedSound{244, 2, 32, 32};
inline constexpr Rect music(bool paused) {
    return paused ? PausedMusic : Music;
}
inline constexpr Rect sound(bool paused) {
    return paused ? PausedSound : Sound;
}
// FUN_00047810: centered (-163,-96) and (163,-96).
inline constexpr Vec2 RetryFruit{77, 64}, QuitFruit{403, 64};
inline constexpr float ResultFruitRadius = 30;
// FUN_00044c88: centered (195,-110).
inline constexpr Vec2 ModeBackBomb{435, 50};
inline constexpr float ModeBackRadius = 25, ModeBackRingSize = 93.5f;
// FUN_00044458: settled translation (314-120,14+15), texture size + 1.
inline constexpr Rect ZenSign{369.5f, 66.5f, 129, 129};
} // namespace fruit::ui
