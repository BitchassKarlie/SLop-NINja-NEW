#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
command -v emcmake >/dev/null || { echo 'Activate the Emscripten SDK (source emsdk_env.sh) first.' >&2; exit 1; }
build="$root/build-wasm"
emcmake cmake -S "$root" -B "$build" -DCMAKE_BUILD_TYPE=Release  -DFRUIT_BUILD_TESTS=OFF -DFRUIT_BUILD_INSPECTOR=OFF -DFRUIT_USE_SYSTEM_SDL=OFF
cmake --build "$build" --target fruit_ninja --parallel "${JOBS:-4}"
mkdir -p "$root/dist/wasm"
for extension in html js wasm data; do
 test -f "$build/index.$extension"
 cp "$build/index.$extension" "$root/dist/wasm/"
done
printf 'Output: %s
Serve with: python3 -m http.server 8000 --directory "%s"
' "$root/dist/wasm" "$root/dist/wasm"
