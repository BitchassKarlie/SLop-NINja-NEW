#include "fruit/audio.hpp"
#include "fruit/music_stream.hpp"
#include "fruit_assets.hpp"
#include <algorithm>
#include <cctype>
#include <cstring>
#define STB_VORBIS_HEADER_ONLY
#include "stb_vorbis.c"
namespace fruit {
Audio::Audio(std::filesystem::path a, bool enable) : assets_(std::move(a)) {
    if (!enable)
        return;
    SDL_AudioSpec want{};
    want.freq = 48000;
    want.format = AUDIO_F32SYS;
    want.channels = 2;
    want.samples = 1024;
    want.callback = callback;
    want.userdata = this;
    device_ = SDL_OpenAudioDevice(nullptr, 0, &want, nullptr, 0);
    if (device_)
        SDL_PauseAudioDevice(device_, 0);
}
Audio::~Audio() {
    if (device_)
        SDL_CloseAudioDevice(device_);
}
std::shared_ptr<Audio::Clip> Audio::load(const std::string &name) {
    auto it = cache_.find(name);
    if (it != cache_.end())
        return it->second;
    auto path = assets_ / "original" / name;
    if (!std::filesystem::exists(path))
        return {};
    auto bytes = read_file(path.string());
    int channels = 0, rate = 0;
    short *pcm = nullptr;
    int frames = stb_vorbis_decode_memory(bytes.data(), int(bytes.size()), &channels, &rate, &pcm);
    if (frames <= 0 || rate <= 0 || channels <= 0) {
        free(pcm);
        return {};
    }
    auto c = std::make_shared<Clip>();
    std::size_t target = std::size_t(frames) * 48000 / std::size_t(rate);
    c->samples.resize(target * 2);
    for (std::size_t i = 0; i < target; ++i) {
        double source = double(i) * double(rate) / 48000.;
        auto index = std::min(std::size_t(source), std::size_t(frames - 1));
        auto next = std::min(index + 1, std::size_t(frames - 1));
        float t = float(source - double(index));
        for (std::size_t ch = 0; ch < 2; ++ch) {
            auto channel = channels == 1 ? 0 : ch;
            float a = float(pcm[index * std::size_t(channels) + channel]) / 32768.f,
                  b = float(pcm[next * std::size_t(channels) + channel]) / 32768.f;
            c->samples[i * 2 + ch] = a + (b - a) * t;
        }
    }
    free(pcm);
    cache_[name] = c;
    return c;
}
void Audio::play(std::string n, float gain, bool loop) {
    if (!device_)
        return;
    std::transform(n.begin(), n.end(), n.begin(),
                   [](unsigned char c) { return char(std::tolower(c)); });
    if (n == "fruit-throw")
        n = "throw-fruit";
    if (n == "fruit-miss")
        n = "miss";
    if (n.find('/') == std::string::npos)
        n = "sound/" + n + ".ogg";
    if (n.rfind("music/", 0) == 0) {
        auto stream =
            std::make_shared<MusicStream>(read_file((assets_ / "original" / n).string()), loop);
        if (!stream->valid())
            return;
        SDL_LockAudioDevice(device_);
        music_ = std::move(stream);
        musicGain_ = gain;
        SDL_UnlockAudioDevice(device_);
        return;
    }
    if (!soundEnabled_)
        return;
    auto clip = load(n);
    if (!clip)
        return;
    SDL_LockAudioDevice(device_);
    if (voices_.size() < 32)
        voices_.push_back({clip, 0, gain, loop});
    SDL_UnlockAudioDevice(device_);
}
void Audio::settings(bool music, bool sound) {
    if (device_)
        SDL_LockAudioDevice(device_);
    musicEnabled_ = music;
    soundEnabled_ = sound;
    if (!sound)
        voices_.clear();
    if (device_)
        SDL_UnlockAudioDevice(device_);
}
void Audio::stop() {
    if (!device_)
        return;
    SDL_LockAudioDevice(device_);
    voices_.clear();
    music_.reset();
    SDL_UnlockAudioDevice(device_);
}
void Audio::callback(void *ctx, Uint8 *stream, int length) {
    std::memset(stream, 0, std::size_t(length));
    static_cast<Audio *>(ctx)->mix(reinterpret_cast<float *>(stream), length / int(sizeof(float)));
}
void Audio::mix(float *out, int count) {
    if (music_)
        music_->mix(out, count, musicEnabled_ ? musicGain_ : 0);
    for (auto &v : voices_)
        for (int i = 0; i < count; ++i) {
            if (v.cursor >= v.clip->samples.size()) {
                if (!v.loop)
                    break;
                v.cursor = 0;
            }
            out[i] += v.clip->samples[v.cursor++] * (soundEnabled_ ? v.gain : 0);
        }
    voices_.erase(
        std::remove_if(voices_.begin(), voices_.end(),
                       [](auto &v) { return !v.loop && v.cursor >= v.clip->samples.size(); }),
        voices_.end());
    for (int i = 0; i < count; ++i)
        out[i] = std::clamp(out[i], -1.f, 1.f);
}
} // namespace fruit
