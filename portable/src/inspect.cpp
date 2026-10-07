#include "fruit_assets.hpp"
#include <fstream>
#include <iostream>
int main(int argc, char **argv) {
    try {
        if (argc < 2) {
            std::cerr << "Usage: fruit_inspect file.tex|file.mmd [output.rgba]\n";
            return 2;
        }
        auto b = fruit::read_file(argv[1]);
        std::string path = argv[1];
        if (path.size() >= 4 && path.substr(path.size() - 4) == ".tex") {
            auto im = fruit::decode_texture(b);
            std::cout << im.width << " " << im.height << " " << im.rgba.size() << "\n";
            if (argc >= 3) {
                std::ofstream out(argv[2], std::ios::binary);
                out.write(reinterpret_cast<const char *>(im.rgba.data()), im.rgba.size());
                if (!out)
                    throw std::runtime_error("write failed");
            }
        } else {
            auto ms = fruit::decode_model(b);
            for (auto &m : ms)
                std::cout << m.vertices.size() << " vertices " << m.indices.size() / 3
                          << " triangles\n";
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << "\n";
        return 1;
    }
}
