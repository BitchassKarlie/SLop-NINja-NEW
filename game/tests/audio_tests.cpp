#include "fruit/music_stream.hpp"
#include "fruit_assets.hpp"
#include <algorithm>
#include <cmath>
#include <filesystem>
#include <iostream>
#include <stdexcept>
#include <vector>
#define STB_VORBIS_HEADER_ONLY
#include "stb_vorbis.c"
int main(int argc, char **argv) {
    try {
        if (argc != 2)
            throw std::runtime_error("assets argument required");
        unsigned count = 0;
        for (const auto &entry : std::filesystem::recursive_directory_iterator(
                 std::filesystem::path(argv[1]) / "original")) {
            if (entry.path().extension() != ".ogg")
                continue;
            auto data = fruit::read_file(entry.path().string());
            int channels = 0, rate = 0;
            short *pcm = nullptr;
            int frames = stb_vorbis_decode_memory(data.data(), static_cast<int>(data.size()),
                                                  &channels, &rate, &pcm);
            bool valid = frames > 0 && channels >= 1 && rate > 0 && pcm;
            free(pcm);
            if (!valid)
                throw std::runtime_error("cannot decode " + entry.path().string());
            ++count;
        }
        auto bytes = fruit::read_file(
            (std::filesystem::path(argv[1]) / "original/music/music-menu.ogg").string());
        fruit::MusicStream whole(bytes, true), chunks(bytes, true);
        if (!whole.valid() || !chunks.valid())
            throw std::runtime_error("stream decoder failed");
        // Run past the 25.5-second menu track's end to cover continuous looping.
        std::vector<float> reference(48000 * 2 * 28, 0.f), actual(reference.size(), 0.f);
        whole.mix(reference.data(), int(reference.size()), .3f);
        for (std::size_t offset = 0; offset < actual.size();) {
            int count = int(std::min<std::size_t>(2048, actual.size() - offset));
            chunks.mix(actual.data() + offset, count, .3f);
            offset += std::size_t(count);
        }
        if (actual != reference ||
            !std::all_of(actual.begin(), actual.end(), [](float v) { return std::isfinite(v); }))
            throw std::runtime_error("streaming depends on callback buffer size");
        if (std::none_of(actual.begin() + 48000 * 2 * 26, actual.end(),
                         [](float v) { return std::abs(v) > .001f; }))
            throw std::runtime_error("music did not loop");
        int decodeError = 0;
        auto decoder =
            stb_vorbis_open_memory(bytes.data(), int(bytes.size()), &decodeError, nullptr);
        if (!decoder)
            throw std::runtime_error("reference decoder failed");
        auto info = stb_vorbis_get_info(decoder);
        std::vector<float> source((std::size_t(info.sample_rate) + 2) * std::size_t(info.channels));
        int decoded = stb_vorbis_get_samples_float_interleaved(decoder, info.channels,
                                                               source.data(), int(source.size()));
        stb_vorbis_close(decoder);
        if (decoded < int(info.sample_rate) + 1)
            throw std::runtime_error("reference PCM too short");
        for (int frame = 0; frame < 48000; ++frame) {
            double position = double(frame) * double(info.sample_rate) / 48000.;
            auto index = std::size_t(position);
            float fraction = float(position - double(index));
            for (int channel = 0; channel < 2; ++channel) {
                auto ch = std::size_t(info.channels == 1 ? 0 : channel);
                float a = source[index * std::size_t(info.channels) + ch];
                float b = source[(index + 1) * std::size_t(info.channels) + ch];
                float expected = (a + (b - a) * fraction) * .3f;
                if (std::abs(reference[std::size_t(frame) * 2 + std::size_t(channel)] - expected) >
                    1e-5f)
                    throw std::runtime_error("streamed music differs from decoded source");
            }
        }
        fruit::MusicStream once(bytes, false);
        std::fill(actual.begin(), actual.end(), 0.f);
        once.mix(actual.data(), int(actual.size()), .3f);
        if (std::any_of(actual.begin() + 48000 * 2 * 26, actual.end(),
                        [](float v) { return v != 0.f; }))
            throw std::runtime_error("non-looping music did not end in silence");
        fruit::MusicStream corrupt({}, true);
        if (corrupt.valid())
            throw std::runtime_error("invalid Ogg accepted");
        std::cout << "PASS: " << count
                  << " original Ogg assets decode; music streaming/looping is chunk-independent\n";
        return count ? 0 : 1;
    } catch (const std::exception &e) {
        std::cerr << e.what() << "\n";
        return 1;
    }
}
