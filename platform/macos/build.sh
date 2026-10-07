#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
[ "$(uname -s)" = Darwin ] || { echo 'Run this script on macOS with Xcode.' >&2; exit 1; }
xcrun --find clang >/dev/null
build="$root/build-macos"
cmake -S "$root" -B "$build" -G Xcode -DCMAKE_OSX_ARCHITECTURES="${FRUIT_MAC_ARCHS:-arm64;x86_64}"  -DCMAKE_OSX_DEPLOYMENT_TARGET=11.0 -DFRUIT_USE_SYSTEM_SDL=OFF -DFRUIT_BUILD_TESTS=ON -DFRUIT_BUILD_INSPECTOR=OFF
cmake --build "$build" --config Release --parallel "${JOBS:-4}"
ctest --test-dir "$build" -C Release --output-on-failure
app="$build/Release/fruit_ninja.app"
[ -d "$app" ] || { echo "Missing application: $app" >&2; exit 1; }
if [ -n "${MACOS_SIGN_IDENTITY:-}" ]; then
 codesign --force --deep --options runtime --sign "$MACOS_SIGN_IDENTITY" "$app"
 codesign --verify --deep --strict "$app"
fi
mkdir -p "$root/dist"
ditto -c -k --sequesterRsrc --keepParent "$app" "$root/dist/fruit-ninja-macos.zip"
printf 'Application: %s
Package: %s
' "$app" "$root/dist/fruit-ninja-macos.zip"
