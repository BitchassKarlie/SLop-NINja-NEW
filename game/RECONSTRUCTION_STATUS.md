# Reconstruction status

The native executable is a source reconstruction using recovered original game data. It does not execute the APK, DEX or ARM shared libraries. It has a portable C++ gameplay core and an SDL renderer/audio/input application.

## Evidence and implemented behavior

| Subsystem | Evidence | Implemented behavior | Remaining fidelity work |
| --- | --- | --- | --- |
| Frame timing | `FUN_0002f8f4`, float literals 0.01 and 0.032 | Fixed 60 Hz ticks within the original clamp, separate 60 FPS presentation cap | Original state-dispatch bookkeeping is replaced |
| Random numbers | `FUN_00092780` and inlined callers such as `FUN_00023380` | Same 64-bit LCG multiplier, increment and default seed; upper-word bounded samples | Exact original RNG consumption order and all float sampling variants |
| Ballistic fruit motion | Unsliced branch of `FUN_0002765c`, literal 0.5 at 00027c54 | Position integrates velocity plus half acceleration times dt squared | Original world-to-screen mapping and launch calculations |
| Fruit definitions | Recovered `fruitlist.xml`; loader references in `FUN_00024030` | Names, models, weights, scale, colors, impact sounds, score and powers loaded from data | Unlock filters, special fruit eligibility and exact critical probability progression |
| Waves | Recovered wave lists; loader `FUN_00088e88` | Original spawn entries, counts, weights, increments, delays, placements and override types | Session gates now use saved completed-game counts; exact history semantics, probability pool, entity waits, wave-dt behavior and override quotas remain |
| Slicing | Original meshes and recovered associations in MAD files | Continuous segment collision; one hit per intact fruit; original two half meshes | Original three-dimensional collision and cut-plane orientation |
| Scoring and modes | Original fruit/critical/power XML plus native gameplay references | Classic bomb/three-miss ending, 90-second Zen, 60-second Arcade, combos and critical feedback | Confirm every scoring branch against original runtime, including deferred double-score accounting and combo blitz |
| Power-ups | Recovered `poweruplist.xml` | Freeze duration/speed, frenzy wave override, double-score duration/multiplier | Transition curves, original visual/emitter effects and overlapping override priority |
| Rendering | MMD vertex data, original texture upload `FUN_000a6f34` | Textured mesh triangles with recovered vertex colours and CCW back-face culling, recovered cut meshes, proportionally scaled original artwork | Full material/node transforms, original lighting/camera, exact scene transforms, original material lighting and full particle animation curves |
| Audio | 116 supplied Ogg files and Java `SoundManager` | Native Ogg decoder, stereo resampling/mixing, original music/effect clips | Original priority, random variants, exact timing and all event bindings |
| Input/lifecycle | JNI touch wrapper `FUN_000a6768`, Java touch handlers | Shared contact lifecycle for mouse/touch, per-device finger identities, captured UI contacts, single SDL coordinate conversion; focus-loss cancellation/pause | Original gesture thresholds and scene navigation behavior |
| Saves | Original save references identify `FruitySave.xml` | Versioned native progress file with high scores, statistics, achievements, unlocks, selections and distinct fruit facts; migration from native v1 scores | Migration from the original Android FruitySave.xml |
| Packaging | Replaced Android platform layer | Tested Linux build/package; complete Windows/macOS/iOS/Android build and package scripts | Compiler/device validation outside Linux, Apple signing/icons/store packaging |

The new UI is intentionally small enough to exercise the gameplay core; it is not a complete reconstruction of the original UI. OpenFeint, multiplayer and the complete native engine have not been reconstructed. Offline achievements, unlocks and the Dojo are now implemented; see [../docs/PARITY.md](../docs/PARITY.md). The analysis workspace remains included for that work.

## Verification

- GCC C++17 build with `-Wall -Wextra -Wpedantic -Werror` for reconstruction modules.
- Core tests cover original RNG/clamp constants, ballistic integration, continuous slicing, one-hit behavior, combos, mode endings, powers, pause/resume, deterministic spawning and save persistence.
- All 116 original Ogg assets decode to PCM.
- SDL software-rendered headless gameplay and captures were inspected.
- A 5,402-frame, 90-second Zen session with automated pointer slicing reached results and saved score 191 using the default seed. This demonstrates the new application's behavior, not comparison with the original APK.
- AddressSanitizer and UndefinedBehaviorSanitizer checks passed for core tests and headless smoke execution. LeakSanitizer was disabled because this execution environment reports that it cannot run under its tracing setup; no leak-check claim is made.
- Windows, macOS, iOS and Android build scripts/projects are supplied. Platform compilers and devices outside Linux were not available here. The user confirmed the previous Windows build repair works.

## Rendering and touch corrections (October 2026)

The bomb uses `models/fruit/textures/fruit_atlas.tex`, as named inside its MMD. Its 238 vertices include eight RGBA colour values; the asset reader now preserves them. Back-face culling prevents internal red geometry covering the textured exterior. The 36-byte vertex layout stores RGBA at offset 8; the 32-byte layout retains opaque white defaults.

SDL's renderer event watcher already converts mouse coordinates into logical units and normalizes finger coordinates to the logical viewport. Converting those events through `SDL_RenderWindowToLogical` a second time caused the Windows offset. Mouse positions are now consumed directly; finger positions are multiplied by 480×320. Menu/pause contacts remain captured until lift, so starting or resuming cannot accidentally create a slice. Mouse emulation and genuine touchscreen contacts share the same lifecycle, with synthesized mouse/touch events disabled.

The supplied APK video establishes full-display stretching of the 480×320 canvas, including square background artwork. Home and mode selection now use gb_game planks; Swag uses bg_store. Mouse and normalized touch are converted explicitly once, with independent horizontal/vertical render scales updated on resize. Home, pause and Swag layout measurements are documented in docs/SHOWCASE_REFERENCE.md. Camera/world transforms and animation are still incomplete.

Regression checks push actual SDL mouse and finger events at 960×640, 1440×900, 800×600 and 1280×720 and verify matching logical positions at three locations. The bomb's recovered vertex colours are checked too. Windows hardware touch/DPI and iOS device validation remain outstanding.

## Windows build repair

The SDL input regression executable now defines `SDL_MAIN_HANDLED` and calls `SDL_SetMainReady`, preserving its console `main` instead of generating a reference to SDL's application entry-point shim. Asset-copy commands use CMake `VERBATIM` quoting. The Windows script uses a separate `build-win-native` tree, explicitly builds/verifies the game executable before tests, and captures the complete output in `windows-build.log`. This fixes an identified Windows test-target defect and improves build isolation/diagnostics; the reported MSB8066 summary alone does not establish the underlying failing command. The bundled-SDL configuration is checked on Linux; an actual MSVC build remains unverified.

## Confirmed MSBuild regeneration failure

The supplied Windows log shows `generate.stamp` repeatedly out of date because the extracted root/portable CMakeLists files are newer than the generated stamps. Several MSBuild projects then invoke CMake concurrently; one fails in SDL's `configure_file` for `SDL_config.h.intermediate` with `No such file or directory`. The previous test entry-point fix did not address this observed failure.

Windows now defaults to `CMAKE_SUPPRESS_REGENERATION=ON`, and the wrapper explicitly passes it and configures before each build. Thus parallel compilation cannot start competing configuration runs. Packaging uses stable 2020 ZIP timestamps rather than the producing machine's local timestamps. Logging uses a single UTF-8 writer, fixing the mixed ASCII/UTF-16 output seen in the supplied log. On Linux, a source CMakeLists timestamp seven days in the future was introduced temporarily: the game build succeeded without regeneration with this setting; all four bundled-SDL checks passed. An actual MSVC build is still required for platform validation.

## Default blade and slice-to-start menu

`FUN_0002b0d8` names `blade.tex`, which is now used across the width of a continuous SDL textured ribbon, replacing three untextured one-pixel lines. The portable implementation resamples sparse input events, bounds trail storage, tapers both ends and fades released strokes in menu and gameplay. Width (10 logical pixels) and lifetime (0.22 seconds) are reconstruction parameters, not claimed as recovered native constants. Mirrored UVs span the texture per segment to avoid degenerate source rectangles in SDL's software geometry path.

`FUN_00044c88` resolves menu fruit names to watermelon (literal at 00045018 plus 00044eac), apple_red (000452f4 plus 000450ac), and banana (000452fc plus 000451e6). The portable menu associates them with Classic, Zen and Arcade and uses the supplied `classic.tex`, `mode_2.tex`, and `arcade_mode.tex` rings. Continuous segment collision selects the fruit, shows recovered cut halves for 0.35 seconds, then starts its mode with fresh gameplay state. Taps and swipes outside fruit do not select; a menu contact remains captured across the transition until lift. Menu positions and animation timing remain portable layout choices.

Core regressions cover taps, missed strokes, all three menu choices, cut halves, transition and clean score/power state. SDL rendering tests inspect pixels to verify a wide visible textured blade from a two-event swipe at all four window sizes, alongside the existing mouse/finger mapping checks. Full original menu navigation, 3D slash planes and unlocked blade styles are still future fidelity work.

## Fixed timing and complete platform scripts

Rendered frames no longer pass their elapsed interval directly to the native minimum-delta clamp. A wall-clock accumulator supplies zero or multiple 1/60-second simulation steps, while performance-counter deadlines cap presentation at 60 FPS without tying it to monitor vsync. Focus changes and user screen transitions reset the accumulator. OS suspensions above 250 ms are bounded to 15 catch-up ticks. Headless execution advances one tick per requested frame.

Regression tests simulate 12 seconds at 30/60/75/120/144/240 presentation rates and compare identical tick counts, waves, scores and fruit positions. All four test suites pass with strict compilation and bundled SDL on Linux. The full Linux packaging script also passes with installed SDL.

`platform/BUILDING.md` covers all five platforms, dependencies, architecture options and signing. Android now has a Gradle project that builds the actual C++ application as `libmain.so`, bundles shared SDL, packages original assets, and extracts them into private storage before running native main. iOS scripts build device/simulator applications and optionally signed archives/IPA exports. Those mobile builds and the macOS/Windows scripts remain unvalidated by this environment's compilers.

## WASM, Vita and 3DS build targets

New scripts configure and compile the native game for Emscripten, VitaSDK and devkitARM. WASM packages the game page, JavaScript, module and preloaded assets, yields its loop via Asyncify, and persists scores through IDBFS. Vita builds bundled SDL's GXM backend and creates a SELF/VPK with original assets. 3DS builds bundled SDL's software backend, selects the bottom touchscreen and embeds assets through 3dsxtool RomFS. No APK emulation is involved.

The three-minute background track previously used about 66 MiB for expanded float PCM plus temporary decode memory. Music now keeps compressed Ogg data and a small decoder/resampling buffer; short sound effects retain the existing cache. Tests cover playback across callback boundaries, looping and end-of-track silence.

Linux compilation and shared regression checks pass. Cross compilers for these three targets are not installed here, so no claim of a tested WASM/VPK/3DSX binary or hardware performance is made. 3DS has software rendering, an unused top screen and requires performance/device validation. See platform/BUILDING.md for exact requirements and commands.
