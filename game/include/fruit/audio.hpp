#pragma once
#include <SDL.h>
#include <filesystem>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>
namespace fruit {
class MusicStream;
class Audio {
    struct Clip {
        std::vector<float> samples;
    };
    struct Voice {
        std::shared_ptr<Clip> clip;
        std::size_t cursor = 0;
        float gain = 1;
        bool loop = false;
    };
    std::shared_ptr<MusicStream> music_;
    float musicGain_ = 1;
    bool musicEnabled_ = true, soundEnabled_ = true;
    SDL_AudioDeviceID device_ = 0;
    std::filesystem::path assets_;
    std::unordered_map<std::string, std::shared_ptr<Clip>> cache_;
    std::vector<Voice> voices_;
    static void callback(void *, Uint8 *, int);
    void mix(float *, int);
    std::shared_ptr<Clip> load(const std::string &);

  public:
    explicit Audio(std::filesystem::path, bool = true);
    ~Audio();
    void play(std::string, float = 0.7f, bool = false);
    void stop();
    void settings(bool music, bool sound);
    bool available() const {
        return device_ != 0;
    }
};
} // namespace fruit
