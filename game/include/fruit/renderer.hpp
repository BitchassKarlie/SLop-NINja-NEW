#pragma once
#include "fruit_assets.hpp"
#include "game.hpp"
#include <SDL.h>
#include <unordered_map>
namespace fruit {
struct Texture {
    SDL_Texture *handle = nullptr;
    int width = 0, height = 0;
};
struct Model {
    std::vector<Mesh> meshes;
};
class Renderer {
    SDL_Renderer *renderer_;
    SDL_Window *window_;
    float sceneOpacity_ = 1;
    void fitViewport();
    std::filesystem::path assets_;
    std::unordered_map<std::string, Texture> textures_;
    std::unordered_map<std::string, Model> models_;
    std::unordered_map<std::string, std::vector<std::string>> pieces_;
    struct Glyph {
        int x = 0, y = 0, w = 0, h = 0, ox = 0, oy = 0, advance = 0;
    };
    std::map<int, Glyph> glyphs_;
    std::array<std::map<int, Glyph>, 3> numberGlyphs_;
    std::array<Texture *, 3> numberFonts_{};
    Texture *font_ = nullptr;
    struct Triangle {
        float z;
        SDL_Vertex vertices[3];
    };
    std::vector<Triangle> triangles_;
    std::vector<SDL_Vertex> projected_, batch_;
    std::vector<float> depths_;
    void readFont();
    void text(const std::string &, float, float, float, SDL_Color, bool,
              const std::map<int, Glyph> &, Texture &);
    void number(int, float, float, float, bool = false, int = 0);
    void body(const Body &);
    void wrapped(const std::string &, float, float, float, float, int = 5,
                 SDL_Color = {255, 255, 255, 255});
    void ring(const std::string &, Vec2, float, float);
    void collection(const Game &);
    void blade(const Game &);
    void rectangle(float, float, float, float, SDL_Color);
    void label(const std::string &, float, float, float = 1, SDL_Color = {255, 255, 255, 255},
               bool = false);

  public:
    Renderer(SDL_Renderer *, SDL_Window *, std::filesystem::path);
    ~Renderer();
    Texture &texture(const std::string &);
    Model &model(const std::string &);
    void image(const std::string &, float, float, float, float, SDL_Color = {255, 255, 255, 255});
    void draw(const Game &, const std::array<int, 3> &highscores);
    void screenshot(const std::filesystem::path &);
    Vec2 point(float x, float y) const;
    Vec2 touchPoint(float x, float y) const;
    void validateAssets(const Config &);
};
} // namespace fruit
