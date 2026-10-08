#!/bin/sh
set -eu

root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
: "${DEVKITPRO:?Set DEVKITPRO to your devkitPro installation}"
export DEVKITPPC="${DEVKITPPC:-$DEVKITPRO/devkitPPC}"
export PATH="$DEVKITPRO/portlibs/wii/bin:$DEVKITPPC/bin:$DEVKITPRO/tools/bin:$PATH"

if [ -f "$DEVKITPRO/wiivars.sh" ]; then
    . "$DEVKITPRO/wiivars.sh"
fi

test -f "$DEVKITPRO/cmake/Wii.cmake" || {
    echo 'Install the devkitPro Wii CMake toolchain (wii-dev).' >&2
    exit 1
}
command -v powerpc-eabi-g++ >/dev/null
command -v elf2dol >/dev/null || {
    echo 'Install the devkitPro Wii/GameCube tools (gamecube-tools).' >&2
    exit 1
}

if command -v powerpc-eabi-cmake >/dev/null; then
    cmake_config=$(command -v powerpc-eabi-cmake)
else
    cmake_config=cmake
fi

build="$root/build-wii"
"$cmake_config" -S "$root" -B "$build" \
    -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/Wii.cmake" \
    -DCMAKE_BUILD_TYPE=Release \
    -DFRUIT_USE_SYSTEM_SDL=ON \
    -DFRUIT_BUILD_TESTS=OFF \
    -DFRUIT_BUILD_INSPECTOR=OFF
cmake --build "$build" --target fruit_ninja --parallel "${JOBS:-4}"

package="$root/dist/wii/fruit-ninja"
mkdir -p "$package"
elf2dol "$build/fruit_ninja.elf" "$package/boot.dol"
cmake -E make_directory "$package/assets"
cmake -E copy_directory "$root/assets/original" "$package/assets/original"
cmake -E copy_directory "$root/assets/config" "$package/assets/config"
cp "$root/platform/wii/meta.xml" "$package/meta.xml"
cp "$root/platform/BUILDING.md" "$package/BUILDING.md"

printf 'Wii Homebrew Channel app: %s\nCopy the fruit-ninja folder into the SD card apps directory.\n' "$package"
