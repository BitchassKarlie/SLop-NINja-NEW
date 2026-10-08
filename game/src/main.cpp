#include "fruit/audio.hpp"
#include "fruit/game.hpp"
#include "fruit/renderer.hpp"
#include "fruit/save.hpp"
#include "fruit/timing.hpp"
#include <fstream>
#include <iostream>
#include <memory>
#include <optional>
#include <vector>
#ifdef __VITA__
#include <psp2/io/stat.h>
#endif
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
// clang-format off
EM_ASYNC_JS(void, loadWebSaves, (), {
 FS.mkdir("/saves");
 FS.mount(IDBFS, {}, "/saves");
 await new Promise(function(resolve) {
  FS.syncfs(true, function(error) {
   if (error) console.warn("Save storage unavailable", error);
   resolve();
  });
 });
});
EM_ASYNC_JS(void, flushWebSaves, (), {
 await new Promise(function(resolve) {
  FS.syncfs(false, function(error) { if (error) console.warn(error); resolve(); });
 });
});
// clang-format on
#endif
using namespace fruit;
namespace {
std::filesystem::path assetsPath(const std::optional<std::filesystem::path> &requested) {
    if (requested)
        return *requested;
    char *raw = SDL_GetBasePath();
    std::filesystem::path base = raw ? raw : ".";
    SDL_free(raw);
    for (auto candidate : {base / "assets", base / "../Resources/assets",
                           std::filesystem::path("assets"), base / "../assets"})
        if (std::filesystem::exists(candidate / "config/xml/fruitlist.xml"))
            return candidate;
    throw std::runtime_error("Assets not found. Pass --assets /path/to/assets");
}

} // namespace
int main(int argc, char **argv) {
    SDL_Window *window = nullptr;
    SDL_Renderer *rawRenderer = nullptr;
    try {
        bool headless = false, muted = false, demo = false, menuCapture = false, autoplay = false;
        Mode selectedMode = Mode::Zen;
        int frames = 0;
        std::string screenshot;
        std::optional<std::filesystem::path> requested, saveDirectory;
        std::uint64_t seed = 0xdeadbeefULL;
#ifdef __EMSCRIPTEN__
        requested = "/assets";
        saveDirectory = "/saves";
        loadWebSaves();
#elif defined(__VITA__)
        requested = "app0:/assets";
        // Only the front screen slices; ignore rear-panel contacts.
        SDL_setenv("VITA_DISABLE_TOUCH_BACK", "1", 1);
        SDL_SetHint(SDL_HINT_RENDER_DRIVER, "VITA gxm");
        saveDirectory = "ux0:/data/fruit-ninja/saves";
        // Native mkdir handles Vita mount prefixes without POSIX parent traversal.
        sceIoMkdir("ux0:/data/fruit-ninja", 0777);
        sceIoMkdir("ux0:/data/fruit-ninja/saves", 0777);
        std::ofstream("ux0:/data/fruit-ninja/startup.log") << "Starting native GXM build\n";
#elif defined(__3DS__)
        requested = "romfs:/assets";
        saveDirectory = "sdmc:/3ds/fruit-ninja/saves";
#endif
        for (int i = 1; i < argc; ++i) {
            std::string a = argv[i];
            auto next = [&]() {
                if (i + 1 >= argc)
                    throw std::runtime_error("missing argument for " + a);
                return std::string(argv[++i]);
            };
            if (a == "--assets")
                requested = next();
            else if (a == "--save-dir")
                saveDirectory = next();
            else if (a == "--headless")
                headless = true;
            else if (a == "--mute")
                muted = true;
            else if (a == "--autoplay")
                autoplay = true;
            else if (a == "--mode") {
                auto m = next();
                if (m == "classic")
                    selectedMode = Mode::Classic;
                else if (m == "zen")
                    selectedMode = Mode::Zen;
                else if (m == "arcade")
                    selectedMode = Mode::Arcade;
                else
                    throw std::runtime_error("mode must be classic, zen or arcade");
            } else if (a == "--demo")
                demo = true;
            else if (a == "--menu-capture")
                menuCapture = true;
            else if (a == "--frames")
                frames = std::stoi(next());
            else if (a == "--screenshot")
                screenshot = next();
            else if (a == "--seed")
                seed = std::stoull(next());
            else if (a == "--help") {
                std::cout << "Fruit Ninja native reconstruction\n--assets PATH --headless --mute "
                             "--frames N --mode classic|zen|arcade --autoplay --demo "
                             "--menu-capture --screenshot capture.bmp --save-dir PATH --seed "
                             "N\nControls: drag mouse/touch to slice, 1/2/3 choose modes, Esc/P "
                             "pause, Enter resume/retry, M menu.\n";
                return 0;
            } else
                throw std::runtime_error("unknown option " + a);
        }
        if (headless) {
            SDL_setenv("SDL_VIDEODRIVER", "dummy", 1);
            SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
            if (frames <= 0)
                frames = 300;
        }
        SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");
        SDL_SetHint(SDL_HINT_MOUSE_TOUCH_EVENTS, "0");
        Uint32 sdlSubsystems = SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER | SDL_INIT_EVENTS;
#ifdef __wii__
        // The Wii SDL port exposes the Wiimote Plus button through its joystick driver.
        sdlSubsystems |= SDL_INIT_JOYSTICK;
#endif
        if (SDL_Init(sdlSubsystems) != 0)
            throw std::runtime_error(SDL_GetError());
        int width = 960, height = 640;
        int position = SDL_WINDOWPOS_CENTERED;
        Uint32 windowFlags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI |
                             (headless ? SDL_WINDOW_HIDDEN : SDL_WINDOW_SHOWN);
#ifdef __VITA__
        width = 960;
        height = 544;
        windowFlags = SDL_WINDOW_SHOWN;
#elif defined(__wii__)
        width = 640;
        height = 480;
        windowFlags = SDL_WINDOW_SHOWN;
#elif defined(__3DS__)
        width = 320;
        height = 240;
        position = SDL_WINDOWPOS_CENTERED_DISPLAY(1);
        windowFlags = SDL_WINDOW_SHOWN;
#endif
        window = SDL_CreateWindow("Fruit Ninja - Native Reconstruction", position, position, width,
                                  height, windowFlags);
        if (!window)
            throw std::runtime_error(SDL_GetError());
        rawRenderer = SDL_CreateRenderer(
            window, -1, headless ? SDL_RENDERER_SOFTWARE : SDL_RENDERER_ACCELERATED);
        if (!rawRenderer)
            rawRenderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
        if (!rawRenderer)
            throw std::runtime_error(SDL_GetError());
#ifdef __wii__
        // The OGC SDL backend draws its system cursor from the Wiimote IR pointer.
        SDL_ShowCursor(SDL_ENABLE);
        SDL_JoystickEventState(SDL_ENABLE);
        std::vector<SDL_Joystick *> wiiJoysticks;
        for (int i = 0; i < SDL_NumJoysticks(); ++i) {
            if (auto *joystick = SDL_JoystickOpen(i))
                wiiJoysticks.push_back(joystick);
        }
#endif
        {
            auto assets = assetsPath(requested);
            auto config = Config::load(assets);
            Game game(config, seed);
            Renderer renderer(rawRenderer, window, assets);
            renderer.validateAssets(config);
#ifdef __VITA__
            std::ofstream("ux0:/data/fruit-ninja/startup.log", std::ios::app)
                << "Original assets loaded; renderer ready\n";
#endif
            Audio audio(assets, !muted && !headless);
            char *pref = SDL_GetPrefPath("FruitNative", "FruitNinjaReconstruction");
            std::filesystem::path savePath =
                saveDirectory
                    ? *saveDirectory
                    : (pref ? std::filesystem::path(pref) : std::filesystem::path("saves"));
            SDL_free(pref);
            Save save(savePath / "scores.txt");
            game.attachProgress(save);
            audio.settings(save.musicEnabled, save.soundEnabled);
            bool lastMusicEnabled = save.musicEnabled, lastSoundEnabled = save.soundEnabled;
            if (!menuCapture)
                game.home();
            if (!save.unlocked(config, save.selectedBlade))
                save.selectedBlade = "ORIGINAL_SLASH";
            if (!save.unlocked(config, save.selectedBackground))
                save.selectedBackground = "background1";
            if (audio.available())
                audio.play("music/music-menu.ogg", .22f, true);
            if (headless && !menuCapture)
                game.start(selectedMode);
            if (demo) {
                game.start(Mode::Classic);
                game.debugSpawn("bomb", {240, 240});
                for (int i = 0; i < 7; ++i)
                    game.debugSpawn(config.fruits[std::size_t(i)].name,
                                    {55 + float(i) * 61, 115 + float(i % 2) * 58});
            }
            // Every physical contact has one lifecycle; UI contacts stay captured until release.
            std::map<std::pair<SDL_TouchID, SDL_FingerID>, std::int64_t> contacts;
            std::map<std::int64_t, bool> captured;
            std::int64_t nextContact = 1;
            auto touch = [&](SDL_TouchID device, SDL_FingerID finger, Vec2 p, int phase) {
                auto key = std::make_pair(device, finger);
                if (phase == 0) {
                    if (p.x < 0 || p.x > 480 || p.y < 0 || p.y > 320)
                        return;
                    auto id = nextContact++;
                    contacts[key] = id;
                    bool ui = game.uiContact(p);
                    captured[id] = ui;
                    if (ui)
                        game.uiPointer(id, p, 0);
                    else
                        game.pointer(id, p, true);
                } else {
                    auto it = contacts.find(key);
                    if (it == contacts.end())
                        return;
                    auto id = it->second;
                    if (captured[id])
                        game.uiPointer(id, p, phase);
                    else {
                        auto before = game.screen;
                        game.pointer(id, p, phase != 2);
                        if (before != game.screen) {
                            captured[id] = true;
                            auto pointer = game.pointers.find(id);
                            if (pointer != game.pointers.end())
                                pointer->second.down = false;
                        }
                    }
                    if (phase == 2) {
                        captured.erase(id);
                        contacts.erase(it);
                    }
                }
            };
            Uint32 sliceMouseMask = SDL_BUTTON_LMASK;
#ifdef __wii__
            // devkitPro SDL maps Wiimote B to left click and A to right click.
            sliceMouseMask |= SDL_BUTTON_RMASK;
#endif
            auto isSliceMouseButton = [&](Uint8 button) {
                return (sliceMouseMask & SDL_BUTTON(button)) != 0;
            };
            Uint32 pressedSliceMouseButtons = 0;
            auto mouseSliceButton = [&](Uint8 button, bool pressed, Vec2 p) {
                const Uint32 buttonMask = SDL_BUTTON(button);
                if ((sliceMouseMask & buttonMask) == 0)
                    return;
                const bool wasPressed = (pressedSliceMouseButtons & sliceMouseMask) != 0;
                if (pressed) {
                    pressedSliceMouseButtons |= buttonMask;
                    if (!wasPressed)
                        touch(-1, 0, p, 0);
                } else {
                    pressedSliceMouseButtons &= ~buttonMask;
                    if (wasPressed && (pressedSliceMouseButtons & sliceMouseMask) == 0)
                        touch(-1, 0, p, 2);
                }
            };
            auto activate = [&]() {
                if (game.screen == Screen::Paused)
                    game.pause();
                else if (game.screen == Screen::Results)
                    game.start(game.mode);
                else if (game.screen == Screen::Home)
                    game.menu();
                else if (game.screen == Screen::Menu)
                    game.start(Mode::Classic);
            };
            bool running = true;
            int count = 0;
            Uint64 last = SDL_GetPerformanceCounter();
            const double frequency = double(SDL_GetPerformanceFrequency());
            double deadline = double(last);
            FixedStepClock clock;
            Screen previous = game.screen;
            while (running && (frames <= 0 || count < frames)) {
                const Screen frameScreen = game.screen;
                bool resetClock = false;
                SDL_Event e;
                while (SDL_PollEvent(&e)) {
                    if (e.type == SDL_QUIT)
                        running = false;
                    else if (e.type == SDL_WINDOWEVENT &&
                             (e.window.event == SDL_WINDOWEVENT_FOCUS_LOST ||
                              e.window.event == SDL_WINDOWEVENT_FOCUS_GAINED)) {
                        resetClock = true;
                        if (e.window.event == SDL_WINDOWEVENT_FOCUS_LOST &&
                            game.screen == Screen::Playing)
                            game.pause();
                        contacts.clear();
                        captured.clear();
                        pressedSliceMouseButtons = 0;
                        game.resetContacts();
                    } else if (e.type == SDL_KEYDOWN && !e.key.repeat) {
                        auto key = e.key.keysym.sym;
                        if (key == SDLK_ESCAPE || key == SDLK_p)
                            game.pause();
                        else if (key == SDLK_m)
                            game.home();
                        else if (key == SDLK_1 || key == SDLK_2 || key == SDLK_3)
                            game.start(static_cast<Mode>(key - SDLK_1));
                        else if (key == SDLK_RETURN)
                            activate();
#ifdef __wii__
                    } else if (e.type == SDL_JOYBUTTONDOWN && e.jbutton.button == 5) {
                        // Wiimote Plus is button 5 in the Wii SDL joystick mapping.
                        activate();
#endif
                    } else if (e.type == SDL_MOUSEBUTTONDOWN &&
                               isSliceMouseButton(e.button.button) &&
                               e.button.which != SDL_TOUCH_MOUSEID) {
                        mouseSliceButton(e.button.button, true,
                                         renderer.point(float(e.button.x), float(e.button.y)));
                    } else if (e.type == SDL_MOUSEBUTTONUP &&
                               isSliceMouseButton(e.button.button) &&
                               e.button.which != SDL_TOUCH_MOUSEID) {
                        mouseSliceButton(e.button.button, false,
                                         renderer.point(float(e.button.x), float(e.button.y)));
                    } else if (e.type == SDL_MOUSEMOTION &&
                               e.motion.which != SDL_TOUCH_MOUSEID &&
                               (e.motion.state & sliceMouseMask))
                        touch(-1, 0, renderer.point(float(e.motion.x), float(e.motion.y)), 1);
                    else if (e.type == SDL_FINGERDOWN || e.type == SDL_FINGERMOTION ||
                             e.type == SDL_FINGERUP) {
                        // Finger coordinates are normalized to the full window.
                        auto p = renderer.touchPoint(e.tfinger.x, e.tfinger.y);
                        touch(e.tfinger.touchId, e.tfinger.fingerId, p,
                              e.type == SDL_FINGERDOWN ? 0 : (e.type == SDL_FINGERUP ? 2 : 1));
                    }
                }
                auto now = SDL_GetPerformanceCounter();
                if (resetClock || game.screen != frameScreen) {
                    clock.reset();
                    last = now;
                }
                int ticks = headless ? 1 : clock.advance(double(now - last) / frequency);
                last = now;
                for (int tick = 0; tick < ticks; ++tick) {
                    if (!demo)
                        game.update(FixedStepClock::delta);
                    // A menu selection stroke cannot spill into the newly started game.
                    if (previous == Screen::Menu && game.screen == Screen::Playing)
                        for (auto &contact : captured)
                            contact.second = true;
                    if (autoplay && game.screen == Screen::Playing) {
                        std::vector<Vec2> targets;
                        for (auto &b : game.bodies)
                            if (!b.piece && !b.bomb && b.position.y > 60 && b.position.y < 280)
                                targets.push_back({b.position.x, b.position.y});
                        for (auto p : targets) {
                            game.pointer(-2, {p.x - 50, p.y}, true);
                            game.pointer(-2, {p.x + 50, p.y}, true);
                            game.pointer(-2, {p.x + 50, p.y}, false);
                            if (game.screen != Screen::Playing)
                                break;
                        }
                    }
                }
                if (game.screen == Screen::Results && previous != Screen::Results) {
                    save.dirty = true;
                    save.record(int(game.mode), game.score);
#ifdef __EMSCRIPTEN__
                    // clang-format off
                    EM_ASM({ FS.syncfs(false, function(error) { if (error) console.warn(error); }); });
                    // clang-format on
#endif
                }
                if (lastMusicEnabled != save.musicEnabled ||
                    lastSoundEnabled != save.soundEnabled) {
                    audio.settings(save.musicEnabled, save.soundEnabled);
                    lastMusicEnabled = save.musicEnabled;
                    lastSoundEnabled = save.soundEnabled;
                }
                if (save.dirty && (game.screen != previous || count % 120 == 0)) {
                    save.write();
                    save.dirty = false;
#ifdef __EMSCRIPTEN__
                    EM_ASM({
                        FS.syncfs(
                            false, function(error) {
                                if (error)
                                    console.warn(error);
                            });
                    });
#endif
                }
                if (game.screen != previous && audio.available()) {
                    audio.stop();
                    audio.play(game.screen != Screen::Playing && game.screen != Screen::Paused &&
                                       game.screen != Screen::Results
                                   ? "music/music-menu.ogg"
                                   : "music/background.ogg",
                               .18f, true);
                }
                previous = game.screen;
                for (auto &event : game.takeEvents())
                    audio.play(event.sound);
                if (game.quitRequested)
                    running = false;
                renderer.draw(game, save.best);
                ++count;
                if (!headless) {
                    // Absolute deadlines avoid accumulating rounding error from millisecond sleeps.
                    deadline += frequency * FixedStepClock::step;
                    double current = double(SDL_GetPerformanceCounter());
                    if (current > deadline) {
                        deadline = current;
#ifdef __EMSCRIPTEN__
                        // Even slow frames must return control for browser input/audio.
                        emscripten_sleep(1);
#endif
                    }
                    while ((current = double(SDL_GetPerformanceCounter())) < deadline) {
                        double milliseconds = (deadline - current) * 1000.0 / frequency;
#ifdef __EMSCRIPTEN__
                        emscripten_sleep(milliseconds >= 1.0 ? unsigned(milliseconds) : 1);
#else
                        SDL_Delay(milliseconds >= 1.0 ? Uint32(milliseconds) : 0);
#endif
                    }
                }
            }
            if (save.dirty) {
                save.write();
#ifdef __EMSCRIPTEN__
                flushWebSaves();
#endif
            }
            if (!screenshot.empty())
                renderer.screenshot(screenshot);
            std::cout << "frames=" << count << " score=" << game.score
                      << " bodies=" << game.bodies.size() << " waves=" << game.waveNumber() << "\n";
        }
#ifdef __wii__
        for (auto *joystick : wiiJoysticks)
            SDL_JoystickClose(joystick);
#endif
        SDL_DestroyRenderer(rawRenderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 0;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << "\n";
#ifdef __VITA__
        std::ofstream("ux0:/data/fruit-ninja/startup.log", std::ios::app)
            << "Startup error: " << e.what() << "\n";
#endif
        if (rawRenderer)
            SDL_DestroyRenderer(rawRenderer);
        if (window)
            SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
}
