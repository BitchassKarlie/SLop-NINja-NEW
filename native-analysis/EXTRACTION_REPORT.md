> Extraction checkpoint report. For the current native application, see the root README and game/RECONSTRUCTION_STATUS.md.

# Fruit Ninja 1.5.4 — APK recovery and native-port groundwork

This project recovers the supplied `fruitslicer.apk` (`com.halfbrick.fruitninja`, version 1.5.4, version code 1504). It is **not yet a buildable port of the game**. The original native gameplay is stripped ARM machine code. Decompiled pseudocode is included for reconstruction, but cannot be compiled directly into a PC or iOS executable.

The portable C++ asset library and inspection application **are buildable**. They load the original texture and model formats without Android, JNI or the original ARM library. There is no emulation, Android runtime, or replacement gameplay in this project.

## Recovered material

| Directory | Content | Status |
| --- | --- | --- |
| `android/java` | 184 Java source files reconstructed by JADX, including the Android shell and bundled SDKs | Reference source; not an Android Gradle project |
| `android/AndroidManifest.xml`, `android/res` | Decoded manifest and Android resources | Android-specific |
| `native-analysis/functions` | 3,488 individually exported Ghidra function pseudocode files | Not recompilable source; includes library routines and import thunks |
| `native-analysis/decompiled_reference.c` | Combined native pseudocode | Not recompilable source |
| `native-analysis/ghidra-project` | Analyzed Ghidra 10.4 project with types, references and disassembly | Open `FruitNinja.gpr` in Ghidra |
| `native-analysis/*.tsv` | Function index, call edges, strings/references and defined-data values | Navigation aids |
| `original/native` | Both packaged ARM native libraries | Preserved evidence; not portable binaries |
| `original/classes.dex` | Original Android bytecode | Preserved evidence |
| `assets/original` | All 814 packaged assets, byte-for-byte | Manifest records size and SHA-256 |
| `assets/png` | All 447 textures decoded to PNG | Verified against C++ decoder output |
| `assets/obj` | Geometry from all 122 MMD meshes as OBJ | Local mesh coordinates, normals and UVs; no material/scene reconstruction |
| `assets/config` | All 16 XML configs, decoded and parsed successfully | Original fruit, wave, item, achievement, power-up, particle and bonus data |
| `assets/model_metadata/mad_metadata.json` | Partial inspection of 92 MAD files | 88 parsed; four unsupported layouts retained in originals |
| `portable` | New portable C++17 texture/mesh loader and desktop inspector | Compiled and validated on Linux |
| `tools` | Python texture, geometry, configuration converters; Ghidra export scripts | Reproducible extraction tools |

## Build the portable component

Install a C++17 compiler and CMake 3.16 or newer:

```sh
cmake -S portable -B build
cmake --build build --config Release
```

On single-configuration builds:

```sh
./build/fruit_inspect assets/original/models/fruit/orange_o_piece_1.mmd
./build/fruit_inspect assets/original/textures/play_button.tex output.rgba
```

The optional output is raw RGBA8 pixel data, tightly packed, without a header. The CLI prints its width, height and byte count. With Visual Studio, the executable is normally `build/Release/fruit_inspect.exe`.

The static `fruit_assets` target has no platform dependencies. It can be linked into a desktop or iOS application. For iOS, disable the desktop CLI with `-DFRUIT_BUILD_INSPECTOR=OFF` and use an appropriate Apple SDK/toolchain. An iOS application, renderer, Xcode project, signing and device validation are not provided or tested here.

Direct build without CMake:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I portable/include portable/src/fruit_assets.cpp portable/src/inspect.cpp -o fruit_inspect
```

## Regenerate the converted assets

Python 3 and Pillow are required for PNG conversion:

```sh
python -m pip install Pillow
python tools/convert_textures.py assets/original assets/png
python tools/convert_models.py assets/original assets/obj
python tools/decode_config.py assets/original original/native/armeabi-v7a/libfruitninja.so assets/config
```

Manifests list each conversion and failure. The XML decoder's binary offsets are specifically for this APK's ARMv7 library. Do not reuse it unmodified with other releases.

## Native port reconstruction

The original engine identifies itself as Halfbrick Mortar. Rendering uses OpenGL ES 1.x fixed-function operations. Java delegates gameplay to `libfruitninja.so`; recompiling Java alone does not port the game.

A faithful native port still requires these steps:

1. Reconstruct C++ types, ownership, virtual tables and globals from the Ghidra project. Most names are lost; `FUN_...` names are generated from addresses. Incorrect types, `unaff_...`, `extraout_...` and decompiler warnings must be resolved against ARM disassembly.
2. Recover the game states, simulation, fruit spawning, slicing, scoring, combos, power-ups and menus. The decoded XML retains substantial original data, but not the code that interprets it.
3. Recover MMD materials, MAD metadata variants, cut-piece associations, node transforms, particles and animation. OBJ conversions alone are not complete scene reconstruction.
4. Replace Android/JNI filesystem, sound, lifecycle and input services with native platform implementations. Preserve the original event order and coordinate transformations.
5. Implement the renderer using a portable graphics layer or platform graphics APIs. The original OpenGL ES fixed-function calls are not a modern cross-platform renderer.
6. Replace or retire Android-specific licensing, notification and OpenFeint integration as appropriate to the port. No service bypass is implemented here.
7. Validate gameplay against the original APK and build actual Windows/macOS/Linux and iOS applications with platform tools.

This package contains no original C++ source recovered from the developer, no playable desktop/iOS game, and no claim of gameplay equivalence. It is a recovery workspace plus a working portable asset component.

## Validation performed

- Compiled the C++ component with GCC C++17 and warnings treated as errors.
- Decoded all 447 textures in C++; compared every output byte with the corresponding PNG pixel data.
- Decoded all 122 MMD files in C++ with bounds and index checks.
- Parsed all 16 recovered XML files successfully.
- Exported 3,488 native functions through Ghidra. A successful decompiler export does not establish semantic correctness or full code coverage.
- Java was decompiled with JADX 1.5.3. Decompiled Java was not compiled or tested on Android.
- Desktop game execution and iOS builds have not been performed.

Input APK SHA-256: `d9582970c681ce5c2057f216f39075add46e91d432ab0001f99a35f5921e5a7c`.
