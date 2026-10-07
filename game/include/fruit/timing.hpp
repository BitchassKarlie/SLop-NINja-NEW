#pragma once
#include <algorithm>
#include <cmath>
namespace fruit {
// Wall-clock accumulation keeps physics independent of presentation rate.
class FixedStepClock {
  public:
    static constexpr double step = 1.0 / 60.0;
    static constexpr float delta = 1.f / 60.f;
    int advance(double elapsed) {
        // Treat long OS suspensions as a pause; bound work to 15 ticks per frame.
        pending_ += std::clamp(elapsed, 0.0, 0.25);
        int ticks = static_cast<int>(std::floor((pending_ + 1e-10) / step));
        pending_ = std::max(0.0, pending_ - ticks * step);
        return ticks;
    }
    void reset() {
        pending_ = 0;
    }

  private:
    double pending_ = 0;
};
} // namespace fruit
