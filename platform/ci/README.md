# Automatic GitHub Actions builds

The project contains one independent workflow for each of the eight platforms. Every workflow runs on **push**, **pull_request** and **workflow_dispatch** (Run workflow), regardless of the branch name. A failing platform does not stop the others. Older in-progress runs of the same workflow/ref are cancelled when a newer push arrives.

## Put the project in a repository

Extract the source ZIP and make the **contents of `fruitslicer-recovery/`** the repository root. `.github/workflows/`, `CMakeLists.txt`, `game/`, `assets/`, `platform/` and `vendor/` must be siblings. GitHub will not discover workflows nested inside another `fruitslicer-recovery/` directory.

Create an empty GitHub repository and, from this project's directory, run:

```sh
git init
git add .
git commit -m "Import native Fruit Ninja reconstruction and automatic builds"
git branch -M main
git remote add origin https://github.com/YOUR_ACCOUNT/YOUR_REPO.git
git push -u origin main
```

Replace the remote URL with your actual repository URL. If using an existing repository, copy these source files into its root and commit/push normally. `.gitignore` excludes compiled packages, build trees, local SDK paths, Gradle caches and keystores. Keep vendored sources and original game assets committed: the workflows build from those files. Using Git rather than the web file uploader also handles the included larger Ghidra database file.

Open **Actions**, select a platform workflow and its latest run, and inspect the step output. Successful runs provide downloads in **Artifacts** near the bottom of the run page. Each download is a GitHub artifact ZIP; desktop/iOS artifacts contain the packaged ZIP/tarball inside it. Unpack that inner archive before running or installing it. Artifacts are retained for 14 days. Windows/Linux failures also upload available diagnostic logs.

No account tokens or signing secrets need to be added for these default builds. Workflows use read-only repository permissions and do not publish releases or websites. For organization repositories, Actions policies must allow the referenced actions and hosted runners.

## Workflows and outputs

| Workflow | Runner/toolchain | Artifact | Contents |
| --- | --- | --- | --- |
| `build-windows.yml` | Windows 2022, MSVC x64 | `fruit-ninja-windows-x64` | ZIP with game EXE and assets |
| `build-linux.yml` | Ubuntu 24.04, GCC/system SDL2 | `fruit-ninja-linux-x86_64` | Executable/assets tar.gz |
| `build-macos.yml` | macOS 15, Xcode | `fruit-ninja-macos-universal` | Universal arm64/x86_64 `.app` ZIP |
| `build-ios.yml` | macOS 15, Xcode; device/simulator matrix | `fruit-ninja-ios-device`, `fruit-ninja-ios-simulator` | Unsigned arm64 device `.app`; host-architecture simulator `.app` |
| `build-android.yml` | Ubuntu 24.04, JDK 17/NDK 26.3 | `fruit-ninja-android-debug` | Installable debug-signed APK |
| `build-wasm.yml` | Ubuntu 24.04, Emscripten 5.0.5 | `fruit-ninja-wasm` | `index.html`, `.js`, `.wasm`, `.data` |
| `build-vita.yml` | VitaSDK `2026.08` Docker image | `fruit-ninja-vita` | Native VPK with original assets |
| `build-3ds.yml` | devkitARM `20260610` Docker image | `fruit-ninja-3ds` | `fruit-ninja/` directory with 3DSX, SMDH and instructions |

Windows, Linux and macOS builds run the existing four CTest suites. iOS builds both matrix entries even if one fails. Android installs its pinned SDK components and accepts the SDK licences through sdkmanager. Emscripten caches its SDK through the setup action. Vita and 3DS use pinned image tags; a small helper installs missing host utilities and, for minimal devkitARM images, missing 3DS development packages. SDK commands and versions appear in build logs.

iOS device downloads are unsigned; installable device IPAs still require Apple signing/provisioning, as described in `platform/BUILDING.md`. The simulator application can be installed with `xcrun simctl install booted /path/to/fruit_ninja.app`. macOS builds are not notarized. Android debug APKs use Gradle's debug signing; they are not production/store releases. A browser build must serve all four WASM files together over HTTP. Copy the 3DS artifact's `fruit-ninja` directory into the SD card's `/3ds/` directory; install the Vita VPK with VitaShell.

## Verification and maintenance

Workflow YAML structure, trigger/permission settings, package paths and shell syntax were checked locally. The existing Linux build script and tests are validated. These files have **not run on GitHub yet**, because no repository/run was supplied. The first push provides the actual hosted-runner and SDK compiler validation; open failed steps for the full compiler error if a target needs an SDK-specific adjustment.

Change the relevant workflow to update a runner, SDK image or Emscripten version. Default action references are `actions/checkout@v6`, `actions/upload-artifact@v7`, `actions/setup-java@v5` and `emscripten-core/setup-emsdk@v15`. Platform builds call the same scripts documented for local development, keeping local and CI packaging behavior aligned.

References: [GitHub Actions workflows](https://docs.github.com/en/actions/writing-workflows/about-workflows), [artifact uploads](https://github.com/actions/upload-artifact), [Emscripten setup](https://github.com/emscripten-core/setup-emsdk), [VitaSDK Docker images](https://github.com/vitasdk/docker), and [devkitPro Docker images](https://github.com/devkitPro/docker).
