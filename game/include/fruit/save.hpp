#pragma once
#include "progress.hpp"
#include <filesystem>
namespace fruit {
class Save : public Progress {
    std::filesystem::path file_;

  public:
    explicit Save(std::filesystem::path);
    void record(int mode, int score);
    void write() const;
};
} // namespace fruit
