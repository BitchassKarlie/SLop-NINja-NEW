# Fruit Ninja — native C++ reconstruction

A buildable, playable C++17 project reconstructed from the supplied Fruit Ninja 1.5.4 APK. The application loads original meshes, textures, fonts, music and sound effects directly, and uses the recovered XML gameplay definitions. Gameplay runs in native C++ source code; desktop ports do not require Android or ARM emulation.

**This is a playable reconstruction baseline, not a complete, behavior-identical port of Fruit Ninja.** The remaining differences and unreconstructed systems are recorded in [game/RECONSTRUCTION_STATUS.md](game/RECONSTRUCTION_STATUS.md). The original decompilation and analyzed Ghidra project remain included to support continued reconstruction.

## Build and run

Complete configure/build/test/package scripts are provided for Windows, Linux, macOS, iOS, Android, WebAssembly, Vita and 3DS. See [platform/BUILDING.md](platform/BUILDING.md) for commands, SDK requirements, signing options and exact output paths. Start on Windows with `platform\windows\build.bat`; its executable remains `build-win-native/Release/fruit_ninja.exe`.

Gameplay now uses fixed 60 Hz simulation ticks and a separate 60 FPS presentation cap. It runs at the same speed on high-refresh displays and catches up after ordinary slow frames. Headless verification remains deterministic and does not wait for the frame cap.

## Automatic GitHub builds

Eight independent workflows in `.github/workflows` build Windows, Linux, macOS, iOS, Android, WASM, Vita and 3DS on pushes, pull requests and manual runs. Commit this folder's **contents at the repository root**, including `.github`, then download packages from the run's **Artifacts** section in GitHub's Actions tab. See [platform/ci/README.md](platform/ci/README.md) for setup and artifact names. No custom signing secrets are required for the default builds.

## Sensei, Dojo and progression

The main menu leads to mode selection and the Dojo by slicing fruit. Sensei appears on mode selection and presents original fruit facts after rounds. The Dojo exposes achievements and Sensei's Swag: eight blades and five backdrops, with the recovered unlock requirements, remaining counts, saved selections, blade textures, colors and particle trails. Progress and distinct facts persist alongside existing high scores.

Arcade uses the original combo and end-of-round bonus tables. Classic restores a lost life at each 100-point boundary; dropped-fruit statistics remain intact for unlock conditions. Zen keeps a short final slicing window for the Flame Blade objective. See [docs/PARITY.md](docs/PARITY.md) for the version-history audit, recovered evidence and outstanding differences.

## Controls

- Drag the left mouse button, or swipe with a finger, to slice.
- Slice a menu fruit to choose a mode: watermelon for Classic, red apple for Zen, banana for Arcade. Tapping the fruit or ring does not start a game; a short cut animation runs first.
- **1 / 2 / 3** remain optional shortcuts for Classic / Zen / Arcade.
- **Esc / P** pauses and resumes.
- **Enter** opens mode selection, starts, resumes or retries; **M** returns to the main menu.
- Multiple simultaneous touchscreen contacts are supported. Mouse dragging emulates one touch contact through the same down/move/up path; touch-generated mouse events are disabled to prevent duplicate strokes.
- Slice main-menu and Dojo fruit to navigate. In Swag, drag the left list to scroll and tap a row to preview it, then slice the pineapple to equip an unlocked blade or backdrop. Slice the back bomb to return to the Dojo. Achievements use the bottom page controls. Keyboard shortcuts are optional.
- Windows can resize the window: the 480×320 reference canvas stretches to fill the display, matching the supplied APK showcase. Mouse input uses window coordinates and touch uses normalized window coordinates; both map once, including resize and display scaling.

Classic ends after a bomb hit or three missed fruits. Zen has a 90-second timer. Arcade has a 60-second timer, bomb penalties and power bananas. Score rules and wave logic are reconstructed implementations; see the status document for fidelity limits.

## Source layout

| Path | Purpose |
| --- | --- |
| `game/include/fruit`, `game/src` | Gameplay core, configuration, renderer, audio, saves and native application |
| `game/tests` | Gameplay regression checks and original audio decoding checks |
| `portable` | Original TEX/MMD asset readers and inspection CLI |
| `platform` | Desktop, mobile, WASM, Vita and 3DS build/package scripts |
| `vendor` | Pinned SDL, tinyxml2 and stb_vorbis dependencies |
| `assets/original` | All 814 original packaged assets |
| `assets/config` | All 16 decoded original XML configurations |
| `assets/png`, `assets/obj` | 447 PNG textures and geometry from 122 models for editing/inspection |
| `android` | Recovered Android Java source and resources, retained as reference |
| `native-analysis` | 3,488 decompiled function references, call/reference maps and Ghidra project |
| `tools` | Conversion, configuration recovery and Ghidra export utilities |
| `docs/captures` | Rendered captures from the tested native application |

The active build uses `game`, `portable`, bundled dependencies and game assets. It does **not** compile the decompiler-reference `.c` files, recovered `android` Java, DEX or original `.so` files. The Android port compiles its new activity and bundled SDL Java bridge under `platform/android`.

## Automated checks and captures

```sh
ctest --test-dir build --output-on-failure
./build/fruit_ninja --headless --mute --mode zen --autoplay --frames 5402 --save-dir build/test-saves
./build/fruit_ninja --headless --mute --demo --frames 1 --screenshot build/fruits.bmp
./build/fruit_ninja --headless --mute --menu-capture --frames 1 --screenshot build/menu.bmp
```

`--autoplay` feeds the same pointer API used by player input. It is a verification tool. Captures are BMP files; `--assets PATH` can select an asset directory. `--seed N` makes simulation sampling repeatable. `--help` lists options.

Tested on Linux: strict C++ compilation, deterministic gameplay tests, all 116 Ogg decodes, SDL headless execution, rendered fruit/menu/results captures, and a complete 90-second automated Zen session. Address/undefined-behavior checks passed with leak detection disabled due to the execution environment's tracing limitation.

## Recover or reconvert assets

Python 3 and Pillow are needed only for PNG conversion, not to build or run the game:

```sh
python -m pip install Pillow
python tools/convert_textures.py assets/original assets/png
python tools/convert_models.py assets/original assets/obj
python tools/decode_config.py assets/original original/native/armeabi-v7a/libfruitninja.so assets/config
```

The converters target this specific APK. The original input APK SHA-256 is `d9582970c681ce5c2057f216f39075add46e91d432ab0001f99a35f5921e5a7c`.
