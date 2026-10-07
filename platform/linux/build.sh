#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
[ "$(uname -s)" = Linux ] || { echo 'Run this script on Linux.' >&2; exit 1; }
build="$root/build-linux"
cmake -S "$root" -B "$build" -DCMAKE_BUILD_TYPE=Release  -DFRUIT_USE_SYSTEM_SDL="${FRUIT_USE_SYSTEM_SDL:-ON}" -DFRUIT_BUILD_TESTS=ON -DFRUIT_BUILD_INSPECTOR=OFF
cmake --build "$build" --parallel "${JOBS:-4}"
ctest --test-dir "$build" --output-on-failure
package="$root/dist/linux-$(uname -m)"
mkdir -p "$package"
cp "$build/fruit_ninja" "$package/"
# Copy directories afresh; do not leave stale assets in a rebuilt package.
cmake -E rm -rf "$package/assets"
cp -R "$build/assets" "$package/assets"
cp "$root/platform/BUILDING.md" "$package/BUILDING.md"
python3 "$root/tools/package_linux.py" "$package" "$package.tar.gz"
printf 'Game: %s
Package: %s
' "$package/fruit_ninja" "$package.tar.gz"
