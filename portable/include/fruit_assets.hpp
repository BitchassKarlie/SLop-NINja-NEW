#pragma once
#include <cstdint>
#include <string>
#include <vector>
namespace fruit {
struct Image {
    unsigned width = 0, height = 0;
    std::vector<std::uint8_t> rgba;
};
struct Vertex {
    float uv[2];
    std::uint8_t colour[4] = {255, 255, 255, 255};
    float normal[3];
    float position[3];
};
struct Mesh {
    std::vector<Vertex> vertices;
    std::vector<std::uint16_t> indices;
};
std::vector<std::uint8_t> read_file(const std::string &path);
Image decode_texture(const std::vector<std::uint8_t> &bytes);
std::vector<Mesh> decode_model(const std::vector<std::uint8_t> &bytes);
} // namespace fruit
