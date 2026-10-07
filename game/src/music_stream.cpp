#include "fruit/music_stream.hpp"
#include <algorithm>
#include <utility>
#define STB_VORBIS_HEADER_ONLY
#include "stb_vorbis.c"
namespace fruit {
MusicStream::MusicStream(std::vector<std::uint8_t> bytes, bool loop)
    : bytes_(std::move(bytes)), loop_(loop) {
    if (bytes_.empty())
        return;
    int error = 0;
    decoder_ = stb_vorbis_open_memory(bytes_.data(), int(bytes_.size()), &error, nullptr);
    if (!decoder_)
        return;
    auto info = stb_vorbis_get_info(decoder_);
    channels_ = info.channels;
    if (channels_ < 1 || channels_ > 2 || info.sample_rate == 0) {
        stb_vorbis_close(decoder_);
        decoder_ = nullptr;
        return;
    }
    increment_ = double(info.sample_rate) / 48000.;
    readFrame(a_);
    readFrame(b_);
}
MusicStream::~MusicStream() {
    if (decoder_)
        stb_vorbis_close(decoder_);
}
bool MusicStream::readFrame(std::array<float, 2> &frame) {
    if (cursor_ >= frames_) {
        frames_ = stb_vorbis_get_samples_float_interleaved(decoder_, channels_, buffer_.data(),
                                                           int(buffer_.size()));
        cursor_ = 0;
        if (!frames_ && loop_ && stb_vorbis_seek_start(decoder_))
            frames_ = stb_vorbis_get_samples_float_interleaved(decoder_, channels_, buffer_.data(),
                                                               int(buffer_.size()));
        if (!frames_) {
            frame = {};
            return false;
        }
    }
    auto index = std::size_t(cursor_++) * std::size_t(channels_);
    frame = {buffer_[index], buffer_[index + std::size_t(channels_ == 1 ? 0 : 1)]};
    return true;
}
void MusicStream::mix(float *output, int sampleCount, float gain) {
    if (!valid())
        return;
    for (int i = 0; i + 1 < sampleCount; i += 2) {
        for (int channel = 0; channel < 2; ++channel)
            output[i + channel] +=
                (a_[channel] + (b_[channel] - a_[channel]) * float(phase_)) * gain;
        phase_ += increment_;
        while (phase_ >= 1) {
            a_ = b_;
            readFrame(b_);
            phase_ -= 1;
        }
    }
}
} // namespace fruit
