#pragma once
#include "game.hpp"
namespace fruit {
// Native FUN_00023078 multiplies the XML scale by .01. Exported meshes
// share these units; their bounding extents must not rescale individual fruit.
inline float modelScale(const Body &body) {
    return body.radius * .02f;
}
inline Vec3 rotateModel(const Body &body, Vec3 v) {
    const float ca = std::cos(body.rotation), sa = std::sin(body.rotation);
    const float ct = body.bomb ? 1.f : std::cos(body.age * .45f);
    const float st = body.bomb ? 0.f : std::sin(body.age * .45f);
    Vec3 roll{v.x * ct + v.z * st, v.y, -v.x * st + v.z * ct};
    const float tilt = body.bomb ? -.8f : .8f;
    Vec3 p{roll.x, roll.y * .6f - roll.z * tilt, roll.y * tilt + roll.z * .6f};
    return {p.x * ca - p.y * sa, p.x * sa + p.y * ca, p.z};
}
inline Vec2 bombFuse(const Body &body) {
    // Fuse tip in the recovered bomb mesh, transformed with the same pose.
    auto p = rotateModel(body, {0, 0, 78.34f});
    return {body.position.x + p.x * modelScale(body), body.position.y + p.y * modelScale(body)};
}
} // namespace fruit
