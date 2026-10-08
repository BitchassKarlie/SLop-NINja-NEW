# Native builds and packages

Run scripts from any directory. They resolve the project root themselves, stop on errors, configure before building, and put distributable outputs in `dist/`. Desktop scripts run the gameplay, audio, input/rendering and headless smoke checks. Dependencies for the native game are vendored. Android's SDK and Gradle dependencies need an initial download.

| Platform | Command from project root | Output |
| --- | --- | --- |
| Windows x64 | `platform\windows\build.bat` | `dist/fruit-ninja-windows-x64.zip` |
| Linux, host architecture | `sh platform/linux/build.sh` | `dist/linux-<architecture>.tar.gz` |
| macOS, Apple Silicon + Intel | `sh platform/macos/build.sh` | `dist/fruit-ninja-macos.zip` |
| iOS device, unsigned | `sh platform/ios/build.sh device` | `dist/fruit-ninja-ios-device.zip` |
| iOS simulator, host architecture | `sh platform/ios/build.sh simulator` | `dist/fruit-ninja-ios-simulator.zip` |
| Android, installable debug APK | `sh platform/android/build.sh debug` | `dist/android/fruit-ninja-debug.apk` |
| Android on Windows | `platform\android\build.bat -Kind debug` | Same APK output |

## Windows

Use Windows with Visual Studio 2022 or newer, the Desktop development with C++ workload, and CMake/CTest on PATH. The script uses the bundled static SDL and static MSVC runtime. Its default x64 application is `build-win-native/Release/fruit_ninja.exe`; assets sit beside it. Full output is in `windows-build.log`. `-SkipTests` omits test execution. `-Architecture ARM64` or `-Architecture Win32` selects another Visual Studio target and a separate build directory. Install that architecture's C++ tools. For cross builds, use `-SkipTests` if the host cannot execute the target binaries.

## Linux

Install a C++17 compiler, CMake and SDL2 development package, plus Python 3 for packaging. On Debian/Ubuntu: `sudo apt install build-essential cmake libsdl2-dev python3`. The default uses installed SDL when available; the package then requires the SDL2 runtime on its destination machine. Build on the oldest Linux distribution you intend to support to avoid newer glibc requirements.

`FRUIT_USE_SYSTEM_SDL=OFF sh platform/linux/build.sh` builds bundled SDL instead; desktop video/audio development headers are still needed. `JOBS=8` changes parallelism. The archive contains the executable and original assets. Extract it and run `./linux-<architecture>/fruit_ninja`. Linux packages support their build host's architecture, including ARM64 when built on an ARM64 host.

## macOS

Use macOS with full Xcode selected (`xcode-select`) and CMake on PATH. The default universal bundle targets macOS 11+ and contains arm64/x86_64 slices with bundled static SDL. `FRUIT_MAC_ARCHS=arm64` or `FRUIT_MAC_ARCHS=x86_64` requests one architecture. Set `MACOS_SIGN_IDENTITY` to a configured Apple signing identity to sign the bundle before packaging. Without it, the script produces a local build; notarization and release distribution are separate Apple account steps.

## iOS

Use macOS with full Xcode, the requested iOS/simulator SDK and CMake. Builds target iOS 13+ and preserve the game's landscape viewport and touch controls. The simulator script compiles for the Mac's architecture; install its application on a booted simulator with the printed `xcrun simctl install` command. The device script creates `dist/fruit-ninja-ios-device.ipa`: an **unsigned** arm64 application under `Payload/`, containing all textures, meshes, audio, XML, and the recovered app icon. Import this IPA into AltStore; AltStore signs it with your account. No `IOS_TEAM_ID` is needed for this path. The script verifies every bundled asset against the source before packaging. The simulator output remains a `.app` ZIP.

For a signed device archive, configure your Apple account/provisioning in Xcode and run:

```sh
IOS_TEAM_ID=YOUR_TEAM_ID sh platform/ios/build.sh device
```

For an exported IPA, also set `IOS_EXPORT_OPTIONS` to the absolute path of your Xcode-generated ExportOptions.plist:

```sh
IOS_TEAM_ID=YOUR_TEAM_ID IOS_EXPORT_OPTIONS=/absolute/path/ExportOptions.plist \
 sh platform/ios/build.sh device
```

The archive is `dist/fruit-ninja-ios.xcarchive`, and exported files are in `dist/ios/`. Export settings and provisioning must match your account and intended installation method. The old `platform/ios/configure.sh` entry point now forwards to the full build script.

## Android

Install JDK **17**, Android SDK Platform 34, NDK **26.3.11579264**, and SDK CMake **3.22.1** through Android Studio's SDK Manager. Set `ANDROID_HOME` to the SDK directory or create `platform/android/local.properties` with `sdk.dir=...`. The bundled Gradle wrapper uses Gradle 8.1.1 and Android Gradle Plugin 8.1.1. First builds need Internet access to download Gradle/plugin artifacts. Native SDL and game sources come from this project.

The APK includes armeabi-v7a, arm64-v8a and x86_64 native libraries and supports Android API 26+. `FruitActivity` unpacks the original/config assets into private application storage before starting native SDL, so existing file-based loaders work. Saves remain in private storage. Orientation is landscape and touch contacts use the same native input path as desktop.

`build.sh debug` creates a debug-signed, installable APK. `adb install -r dist/android/fruit-ninja-debug.apk` installs it. `build.sh release` creates an unsigned Release APK unless these variables are set: `ANDROID_KEYSTORE` (absolute path), `ANDROID_STORE_PASSWORD`, `ANDROID_KEY_ALIAS`, and `ANDROID_KEY_PASSWORD`. With them it creates a signed Release APK. `build.sh bundle` creates a Release AAB using the same optional signing configuration. Windows equivalents use `build.bat -Kind release` or `-Kind bundle`. Passwords are read from the environment, not stored in project files.

## WebAssembly (WASM)

Install/activate the Emscripten SDK (`emsdk_env.sh`, or `emsdk_env.bat` on Windows), CMake and Ninja. Run `sh platform/wasm/build.sh`, or `platform\wasm\build.bat` on Windows. The output is `dist/wasm/index.html` plus `index.js`, `index.wasm` and `index.data`; deploy all four files together.

Serve the directory over HTTP rather than opening the HTML as a local file:

```sh
python3 -m http.server 8000 --directory dist/wasm
```

Open `http://localhost:8000` and press **Start game** after loading finishes. Assets are preloaded at `/assets` in the browser's virtual filesystem. Asyncify yields for browser input/audio while preserving the fixed-step native loop. Scores use IndexedDB at `/saves`, loaded before play and flushed after results; persistence depends on the browser allowing storage for that origin. Mouse dragging and touch use the existing SDL slicing path. Emscripten obtains its SDL2 port on the first build, so its cache needs an initial Internet download. C++ exceptions are enabled for the existing loaders.

## PlayStation Vita

Install VitaSDK with its normal libraries/SDK stubs, CMake and Python 3; export `VITASDK`. On Windows, run through WSL/Linux or a compatible shell with a VitaSDK compiler built for that host:

```sh
VITASDK=/usr/local/vitasdk sh platform/vita/build.sh
```

Output: `dist/fruit-ninja-vita.vpk`. The script builds bundled SDL2's native GXM renderer, compiles the game, produces `eboot.bin`, creates a homebrew SFO and packages original assets, the recovered app icon as opaque 128x128 PNG-8, an opaque 280x158 startup gate, an 840x500 background, and matching LiveArea metadata. Artwork is validated for dimensions, palette, alpha, interlacing and size before uploading. The SELF is marked unrestricted for CFW and the renderer explicitly uses native GXM without optional PVR/Piglet modules. It does not package or run the Android APK/ARM game binary. Install the VPK through VitaShell. Its homebrew title ID defaults to `FNAT00001`; set `FRUIT_VITA_TITLE_ID` to another nine-character uppercase alphanumeric ID if needed.

The playfield keeps its 3:2 aspect ratio inside the Vita's 960x544 screen. The front touchscreen slices; rear touch is disabled to avoid accidental cuts. Saves use SDL's private `ux0:/data/FruitNative/FruitNinjaReconstruction` location. The native heap budget is 128 MiB and music now streams instead of allocating a complete decoded track. No external shader compiler/plugin or Android compatibility layer is required by this configuration.

## Nintendo 3DS

Install devkitPro's `3ds-dev` toolchain group plus its CMake support (`3ds-cmake`, with the common CMake packages resolved as dependencies), CMake and a build generator. Export `DEVKITPRO`; `DEVKITARM` defaults to its `devkitARM` subdirectory. Use the devkitPro/MSYS2 shell on Windows, or a native Linux/macOS installation:

```sh
DEVKITPRO=/opt/devkitpro sh platform/3ds/build.sh
```

Output: `dist/3ds/fruit-ninja/fruit-ninja.3dsx`, `.smdh`, and **`fruit-ninja.cia`**. Install the CIA with FBI on CFW to launch from HOME Menu, or use the 3DSX with Homebrew Launcher. Copy that `fruit-ninja` directory into `/3ds/` on the SD card and launch it from the Homebrew Launcher. CIA packaging uses makerom 0.18.4 and bannertool 1.2.0. On Linux x86_64, missing host tools are downloaded into the build directory from pinned releases with SHA-256 verification; other hosts require these tools on PATH. Set `FRUIT_3DSX_ONLY=1` to intentionally omit CIA packaging. The CIA has a stable homebrew title ID `000400000FF45100`, app icon/banner, and embedded RomFS. The original assets are embedded in RomFS, so no separate asset installation is required. `SDL2main` initializes RomFS; saves go to `sdmc:/3ds/fruit-ninja/saves`.

The game runs on the **bottom touchscreen**, 320x240, with the 480x320 playfield uniformly scaled and letterboxed. Stylus strokes drive the same contact lifecycle as desktop/touch ports. The top screen is unused. Bundled SDL's 3DS backend uses software rendering. Fruit transforms now run once per unique vertex and geometry is batched once per fruit, with reusable buffers and preserved back-face culling/depth order. New 3DS CPU/L2 acceleration is enabled by SDL and the CIA exheader. Reaching 60 FPS on actual handhelds remains a performance-validation task; simulation speed still uses fixed ticks. Music streaming bounds decoded audio memory. The native DSP audio backend requires the usual working 3DS homebrew DSP setup.

## Nintendo Wii

Install devkitPro's Wii toolchain (`wii-dev`), the SDL2 Wii port (`wii-sdl2`), and the ELF-to-DOL tools (`gamecube-tools`) from the devkitPro shell:

```sh
pacman -S wii-dev wii-sdl2 gamecube-tools
sh platform/wii/build.sh
```

The self-contained Homebrew Channel app is written to `dist/wii/fruit-ninja/`. Copy that folder to `apps/fruit-ninja/` on an SD card and launch it from the Homebrew Channel. The folder contains `boot.dol`, `meta.xml`, and the original/config game assets. The Wii build uses devkitPro's SDL2 OGC renderer and audio/input backends. The Wii Remote IR pointer controls the visible cursor; hold **A** or **B** while moving to slice, and press **+** to continue or start. Saves use SDL's Wii preference directory under `/apps/FruitNinjaReconstruction/` on the SD card.

### Validation of the additional targets

The existing shell scripts are syntax-checked; the native Linux build and all four suites have passed, and streaming tests cover buffer-size independence, looping and end-of-track silence. Emscripten, VitaSDK, devkitARM and devkitPPC are absent from the execution environment: the WASM, Vita, Wii and 3DS target binaries and browser/device execution have **not** been validated here. Use the scripts on an SDK-equipped host and retain full compiler output if an SDK-specific issue occurs.

### Implementation references

The configuration follows the bundled SDL2 `docs/README-vita.md` and `docs/README-n3ds.md`, [devkitPro's Wii SDL2 port](https://github.com/devkitPro/pacman-packages/tree/master/wii/SDL2), [Emscripten Asyncify](https://emscripten.org/docs/porting/asyncify.html), [VitaSDK toolchain](https://github.com/vitasdk/vita-toolchain/blob/master/cmake_toolchain/vita.toolchain.cmake), and [devkitPro 3dsxtool](https://github.com/devkitPro/3dstools/blob/master/src/3dsxtool.cpp). The SDK packaging helpers and original asset formats are retained.

## Timing and verification

Gameplay advances in fixed 1/60-second ticks. Presentation is capped at 60 FPS using performance-counter deadlines independently of display refresh/vsync. Slow frames run multiple simulation ticks; OS suspension gaps above 250 ms are treated as a pause rather than replaying a long backlog. Focus changes and user-initiated screen transitions reset accumulated time. Headless tests advance exactly one tick per requested frame without waiting.

The fixed clock still passes the recovered original frame clamp a valid 1/60-second delta; it never feeds that clamp a monitor-dependent frame interval. Timing tests compare complete fruit positions and wave state over 12 elapsed seconds at 30, 60, 75, 120, 144 and 240 rendered frames per second.

Validated here: Linux build/package, all four CTest suites, and the software-rendered 60 FPS cap. Windows, macOS, iOS, Android and Wii scripts/projects require platform SDKs and were not compiled or run in this environment. A 60 FPS target cannot guarantee hardware will finish every frame within 16.67 ms.

## Presentation and platform packaging changes

The menu's mode rings rotate, and intact menu fruit gently bobs and tumbles. Slice hit tests and cut halves share the displayed fruit position and rotation. The presentation rates are calibrated reconstruction values, not verified recovered animation constants. Gameplay remains at fixed 60 Hz.

Android launcher icons, iPhone/iPad icon variants, Vita LiveArea art and the 3DS icon/banner derive from recovered APK artwork. Run `python3 tools/generate_platform_artwork.py` with Pillow installed to regenerate the checked-in PNGs. Platform builds use the checked-in files and need only Python's standard library for package validation.
