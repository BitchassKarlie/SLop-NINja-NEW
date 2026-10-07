#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
: "${VITASDK:?Set VITASDK to your VitaSDK installation}"
test -f "$VITASDK/share/vita.toolchain.cmake" || { echo 'VitaSDK toolchain missing.' >&2; exit 1; }
export PATH="$VITASDK/bin:$PATH"
command -v arm-vita-eabi-g++ >/dev/null
command -v python3 >/dev/null
build="$root/build-vita"
cmake -S "$root" -B "$build" -DCMAKE_TOOLCHAIN_FILE="$VITASDK/share/vita.toolchain.cmake"  -DCMAKE_BUILD_TYPE=Release -DVIDEO_VITA_PVR=OFF -DVIDEO_VITA_PIB=OFF -DFRUIT_USE_SYSTEM_SDL=OFF -DFRUIT_BUILD_TESTS=OFF  -DFRUIT_BUILD_INSPECTOR=OFF -DFRUIT_VITA_TITLE_ID="${FRUIT_VITA_TITLE_ID:-FNAT00001}"
cmake --build "$build" --target eboot.bin-self --parallel "${JOBS:-4}"
python3 "$root/platform/vita/package.py" --sdk "$VITASDK" --build "$build"  --title-id "${FRUIT_VITA_TITLE_ID:-FNAT00001}" --output "$root/dist/fruit-ninja-vita.vpk"
