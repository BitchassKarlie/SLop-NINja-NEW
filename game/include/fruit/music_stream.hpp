#pragma once
#include <array>
#include <cstddef>
#include <cstdint>
#include <vector>
struct stb_vorbis;
namespace fruit {
// Compressed Ogg data and a small decode buffer; no full-track PCM allocation.
class MusicStream {
    std::vector<std::uint8_t> bytes_;
    stb_vorbis *decoder_ = nullptr;
    std::array<float, 4096> buffer_{};
    std::array<float, 2> a_{}, b_{};
    int channels_ = 0, frames_ = 0, cursor_ = 0;
    double phase_ = 0, increment_ = 1;
    bool loop_ = false;
    bool readFrame(std::array<float, 2> &);

  public:
    MusicStream(std::vector<std::uint8_t>, bool loop);
    ~MusicStream();
    MusicStream(const MusicStream &) = delete;
    MusicStream &operator=(const MusicStream &) = delete;
    bool valid() const {
        return decoder_ != nullptr;
    }
    void mix(float *output, int sampleCount, float gain);
};
} // namespace fruit
