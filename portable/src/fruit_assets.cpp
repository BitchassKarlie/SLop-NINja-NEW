#include "fruit_assets.hpp"
#include <cstring>
#include <fstream>
#include <iterator>
#include <stdexcept>
namespace fruit {
namespace {
unsigned u16(const std::vector<std::uint8_t> &b, std::size_t o) {
    if (o > b.size() || b.size() - o < 2)
        throw std::runtime_error("truncated u16");
    return b[o] | (unsigned(b[o + 1]) << 8);
}
unsigned u32(const std::vector<std::uint8_t> &b, std::size_t o) {
    return u16(b, o) | (u16(b, o + 2) << 16);
}
float f32(const std::vector<std::uint8_t> &b, std::size_t o) {
    static_assert(sizeof(float) == 4, "32-bit floats required");
    auto n = u32(b, o);
    float f;
    std::memcpy(&f, &n, 4);
    return f;
}
} // namespace
std::vector<std::uint8_t> read_file(const std::string &path) {
    std::ifstream f(path, std::ios::binary);
    if (!f)
        throw std::runtime_error("cannot open " + path);
    return {std::istreambuf_iterator<char>(f), std::istreambuf_iterator<char>()};
}
Image decode_texture(const std::vector<std::uint8_t> &b) {
    if (b.size() < 16)
        throw std::runtime_error("short texture header");
    unsigned fmt = u32(b, 4);
    Image im;
    im.width = u16(b, 12);
    im.height = u16(b, 14);
    if (fmt < 403 || fmt > 405 || !im.width || !im.height ||
        b.size() != 16 + std::size_t(im.width) * im.height * 2)
        throw std::runtime_error("unsupported texture layout");
    im.rgba.reserve(std::size_t(im.width) * im.height * 4);
    for (std::size_t i = 16; i < b.size(); i += 2) {
        unsigned v = u16(b, i), r, g, bl, a;
        if (fmt == 404) {
            r = (v >> 12) * 17;
            g = ((v >> 8) & 15) * 17;
            bl = ((v >> 4) & 15) * 17;
            a = (v & 15) * 17;
        } else if (fmt == 405) {
            r = (v >> 11) * 255 / 31;
            g = ((v >> 5) & 63) * 255 / 63;
            bl = (v & 31) * 255 / 31;
            a = 255;
        } else {
            r = (v >> 11) * 255 / 31;
            g = ((v >> 6) & 31) * 255 / 31;
            bl = ((v >> 1) & 31) * 255 / 31;
            a = (v & 1) * 255;
        }
        for (unsigned c : {r, g, bl, a})
            im.rgba.push_back(std::uint8_t(c));
    }
    return im;
}
std::vector<Mesh> decode_model(const std::vector<std::uint8_t> &b) {
    std::vector<Mesh> out;
    for (std::size_t o = 0; o + 23 <= b.size(); ++o) {
        if (std::memcmp(b.data() + o, "HBR0", 4) || u32(b, o + 4) || u32(b, o + 8))
            continue;
        auto size = u32(b, o + 12);
        auto s = o + 16;
        if (size > b.size() - s)
            continue;
        auto e = s + size;
        if (size < 7 || b[s] != 0 || b[s + 1] != 0 || b[s + 2] != 0x21)
            continue;
        auto ni = u32(b, s + 3);
        if (ni % 3 || std::size_t(ni) * 2 > e - s - 7)
            continue;
        auto a = s + 7 + std::size_t(ni) * 2;
        if (e - a < 9 || b[a] != 0 || b[a + 2] != 1 || b[a + 3] != 0 || b[a + 4] != 0x12)
            continue;
        unsigned stride = b[a + 1] == 0xff ? 36 : (b[a + 1] == 0xe3 ? 32 : 0);
        auto nv = u32(b, a + 5);
        auto v = a + 9;
        if (!stride || std::size_t(nv) * stride != e - v)
            continue;
        Mesh m;
        m.indices.reserve(ni);
        m.vertices.reserve(nv);
        for (unsigned i = 0; i < ni; ++i) {
            auto idx = u16(b, s + 7 + i * 2);
            if (idx >= nv)
                throw std::runtime_error("bad model index");
            m.indices.push_back(std::uint16_t(idx));
        }
        for (unsigned i = 0; i < nv; ++i) {
            auto p = v + std::size_t(i) * stride;
            Vertex x{};
            if (stride == 36)
                for (unsigned j = 0; j < 4; ++j)
                    x.colour[j] = b[p + 8 + j];
            for (unsigned j = 0; j < 2; ++j)
                x.uv[j] = f32(b, p + j * 4);
            for (unsigned j = 0; j < 3; ++j) {
                x.normal[j] = f32(b, p + (stride == 36 ? 12 : 8) + j * 4);
                x.position[j] = f32(b, p + stride - 12 + j * 4);
            }
            m.vertices.push_back(x);
        }
        out.push_back(std::move(m));
    }
    if (out.empty())
        throw std::runtime_error("no supported mesh chunks");
    return out;
}
} // namespace fruit
