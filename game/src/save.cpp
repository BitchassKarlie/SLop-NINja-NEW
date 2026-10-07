#include "fruit/save.hpp"
#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdexcept>
namespace fruit {
Save::Save(std::filesystem::path f) : file_(std::move(f)) {
    std::ifstream in(file_);
    std::string magic;
    int version = 0;
    std::array<int, 3> scores{};
    if (in >> magic >> version && magic == "FRUIT_NATIVE" && version == 1 &&
        in >> scores[0] >> scores[1] >> scores[2])
        for (std::size_t i = 0; i < 3; ++i)
            best[i] = std::max(0, scores[i]);
    else if (magic == "FRUIT_NATIVE" && version == 2) {
        std::string line;
        while (std::getline(in, line)) {
            std::istringstream row(line);
            std::string tag, key;
            int value = 0;
            row >> tag;
            if (tag == "best" && row >> scores[0] >> scores[1] >> scores[2])
                for (std::size_t i = 0; i < 3; ++i)
                    best[i] = std::max(0, scores[i]);
            else if (tag == "counter" && row >> std::quoted(key) >> value && value >= 0)
                counters[key] = value;
            else if (tag == "earned" && row >> std::quoted(key))
                earned.insert(key);
            else if (tag == "fact" && row >> std::quoted(key))
                factsRead.insert(key);
            else if (tag == "blade" && row >> std::quoted(key))
                selectedBlade = key;
            else if (tag == "audio") {
                int music = 1, sound = 1;
                if (row >> music >> sound) {
                    musicEnabled = music != 0;
                    soundEnabled = sound != 0;
                }
            } else if (tag == "background" && row >> std::quoted(key))
                selectedBackground = key;
        }
    }
}
void Save::record(int mode, int score) {
    if (mode < 0 || mode > 2)
        return;
    if (score > best[std::size_t(mode)]) {
        best[std::size_t(mode)] = score;
        write();
    }
}
void Save::write() const {
    std::filesystem::create_directories(file_.parent_path());
    auto temp = file_;
    temp += ".tmp";
    {
        std::ofstream f(temp, std::ios::trunc);
        f << "FRUIT_NATIVE 2\nbest " << best[0] << " " << best[1] << " " << best[2] << "\n";
        f << "audio " << musicEnabled << " " << soundEnabled << "\n";
        for (const auto &v : counters)
            f << "counter " << std::quoted(v.first) << " " << v.second << "\n";
        for (const auto &v : earned)
            f << "earned " << std::quoted(v) << "\n";
        for (const auto &v : factsRead)
            f << "fact " << std::quoted(v) << "\n";
        f << "blade " << std::quoted(selectedBlade) << "\nbackground "
          << std::quoted(selectedBackground) << "\n";
        if (!f)
            throw std::runtime_error("cannot write save");
    }
    std::error_code e;
    std::filesystem::rename(temp, file_, e);
    if (e) {
        std::filesystem::remove(file_, e);
        e.clear();
        std::filesystem::rename(temp, file_, e);
        if (e)
            throw std::runtime_error("cannot replace save");
    }
}
} // namespace fruit
