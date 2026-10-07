#pragma once
#include <algorithm>
#include <cmath>
#include <cstdint>
namespace fruit {
struct Vec2 {
    float x = 0, y = 0;
    Vec2 operator+(Vec2 v) const {
        return {x + v.x, y + v.y};
    }
    Vec2 operator-(Vec2 v) const {
        return {x - v.x, y - v.y};
    }
    Vec2 operator*(float s) const {
        return {x * s, y * s};
    }
};
struct Vec3 {
    float x = 0, y = 0, z = 0;
    Vec3 operator+(Vec3 v) const {
        return {x + v.x, y + v.y, z + v.z};
    }
    Vec3 operator*(float s) const {
        return {x * s, y * s, z * s};
    }
};
inline float dot(Vec2 a, Vec2 b) {
    return a.x * b.x + a.y * b.y;
}
inline float length(Vec2 a) {
    return std::sqrt(dot(a, a));
}
inline float distance_to_segment(Vec2 p, Vec2 a, Vec2 b) {
    Vec2 d = b - a;
    float n = dot(d, d);
    float t = n > 0 ? std::clamp(dot(p - a, d) / n, 0.f, 1.f) : 0;
    return length(p - (a + d * t));
}
// FUN_00092780; native callers advance the 64-bit LCG and scale its upper word.
class Random {
    std::uint64_t state_;

  public:
    explicit Random(std::uint64_t seed = 0xdeadbeefULL) : state_(seed) {}
    std::uint32_t next() {
        state_ = state_ * 0x5d588b656c078965ULL + 0x269ec3ULL;
        return std::uint32_t(state_ >> 32);
    }
    unsigned bounded(unsigned n) {
        return n ? unsigned((std::uint64_t(next()) * n) >> 32) : 0;
    }
    float unit() {
        return float(next() >> 8) / 16777216.f;
    }
    float range(float a, float b) {
        return a + (b - a) * unit();
    }
    int range(int a, int b) {
        return a + int(bounded(unsigned(std::max(0, b - a) + 1)));
    }
};
// FUN_0002f8f4, DAT_0002fa2c=0.01 and DAT_0002fa30=0.032.
inline float original_frame_delta(float dt) {
    return std::isfinite(dt) ? std::clamp(dt, 0.01f, 0.032f) : 0.01f;
}
// Unsliced ballistic branch of FUN_0002765c: p += v*dt + a*dt^2/2; v += a*dt.
inline void integrate(Vec3 &p, Vec3 &v, Vec3 a, float dt) {
    p = p + v * dt + a * (dt * dt * 0.5f);
    v = v + a * dt;
}
} // namespace fruit
