#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
: "${DEVKITPRO:?Set DEVKITPRO to your devkitPro installation}"
export DEVKITARM="${DEVKITARM:-$DEVKITPRO/devkitARM}"
export PATH="$DEVKITARM/bin:$DEVKITPRO/tools/bin:$PATH"
test -f "$DEVKITPRO/cmake/3DS.cmake" || { echo 'Install devkitPro 3DS CMake support and 3ds-dev.' >&2; exit 1; }
command -v arm-none-eabi-g++ >/dev/null
command -v 3dsxtool >/dev/null
command -v smdhtool >/dev/null
build="$root/build-3ds"
mkdir -p "$build/host-tools"
export PATH="$build/host-tools:$PATH"
if [ "${FRUIT_3DSX_ONLY:-0}" != 1 ]; then
 if ! command -v makerom >/dev/null || ! command -v bannertool >/dev/null; then
  python3 "$root/platform/3ds/install_tools.py" --destination "$build/host-tools"
 fi
fi
cmake -S "$root" -B "$build" -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/3DS.cmake"  -DCMAKE_BUILD_TYPE=Release -DFRUIT_USE_SYSTEM_SDL=OFF -DFRUIT_BUILD_TESTS=OFF -DFRUIT_BUILD_INSPECTOR=OFF
cmake --build "$build" --target fruit_ninja --parallel "${JOBS:-4}"
romfs="$build/romfs"
cmake -E make_directory "$romfs/assets"
cmake -E copy_directory "$root/assets/original" "$romfs/assets/original"
cmake -E copy_directory "$root/assets/config" "$romfs/assets/config"
package="$root/dist/3ds/fruit-ninja"
mkdir -p "$package"
smdhtool --create 'Fruit Ninja Native' 'Native C++ reconstruction' 'FruitNative'  "$root/platform/3ds/icon.png" "$package/fruit-ninja.smdh"
3dsxtool "$build/fruit_ninja.elf" "$package/fruit-ninja.3dsx"  "--smdh=$package/fruit-ninja.smdh" "--romfs=$romfs"
if [ "${FRUIT_3DSX_ONLY:-0}" != 1 ]; then
 bannertool makebanner -i "$root/platform/3ds/banner.png" -a "$root/platform/3ds/banner.wav" -o "$build/banner.bnr"
 makerom -f cia -o "$package/fruit-ninja.cia" -target t -exefslogo \
  -elf "$build/fruit_ninja.elf" -rsf "$root/platform/3ds/application.rsf" \
  "-DAPP_ROMFS=$romfs" -icon "$package/fruit-ninja.smdh" -banner "$build/banner.bnr"
 python3 "$root/platform/3ds/validate.py" "$package"
fi
cp "$root/platform/BUILDING.md" "$package/BUILDING.md"
printf 'Output: %s
Copy the fruit-ninja directory into /3ds/ for Homebrew Launcher, or install fruit-ninja.cia with FBI on CFW.
' "$package"
