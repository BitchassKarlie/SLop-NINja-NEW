#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
kind=${1:-device}
case "$kind" in
 device) sdk=iphoneos; arch=arm64 ;;
 simulator) sdk=iphonesimulator; arch=$(uname -m) ;;
 *) echo 'Usage: build.sh [device|simulator]' >&2; exit 1 ;;
esac
[ "$(uname -s)" = Darwin ] || { echo 'iOS builds require macOS and Xcode.' >&2; exit 1; }
xcrun --sdk "$sdk" --show-sdk-path >/dev/null
build="$root/build-ios-$kind"
cmake -S "$root" -B "$build" -G Xcode -DCMAKE_XCODE_GENERATE_SCHEME=ON -DCMAKE_TRY_COMPILE_TARGET_TYPE=STATIC_LIBRARY -DCMAKE_SYSTEM_NAME=iOS  -DCMAKE_OSX_SYSROOT="$sdk" -DCMAKE_OSX_ARCHITECTURES="$arch" -DCMAKE_OSX_DEPLOYMENT_TARGET=13.0  -DFRUIT_USE_SYSTEM_SDL=OFF -DFRUIT_BUILD_TESTS=OFF -DFRUIT_BUILD_INSPECTOR=OFF
mkdir -p "$root/dist"
# Resources are also CMake bundle resources; stage explicitly before any signing.
cmake --build "$build" --config Release --target fruit_ninja --parallel "${JOBS:-4}" -- CODE_SIGNING_ALLOWED=NO
app="$build/Release-$sdk/fruit_ninja.app"
[ -d "$app" ] || { echo "Missing application: $app" >&2; exit 1; }
python3 "$root/platform/ios/package.py" --app "$app"
if [ "$kind" = device ]; then
 python3 "$root/platform/ios/package.py" --app "$app" --output "$root/dist/fruit-ninja-ios-device.ipa"
fi
if [ "$kind" = device ] && [ -n "${IOS_TEAM_ID:-}" ]; then
 xcodebuild -project "$build/FruitNinjaNativeReconstruction.xcodeproj" -scheme fruit_ninja   -configuration Release -sdk iphoneos -archivePath "$root/dist/fruit-ninja-ios.xcarchive"   archive DEVELOPMENT_TEAM="$IOS_TEAM_ID" CODE_SIGN_STYLE=Automatic
 if [ -n "${IOS_EXPORT_OPTIONS:-}" ]; then
  xcodebuild -exportArchive -archivePath "$root/dist/fruit-ninja-ios.xcarchive"    -exportPath "$root/dist/ios" -exportOptionsPlist "$IOS_EXPORT_OPTIONS"
 fi
 echo "Signed archive: $root/dist/fruit-ninja-ios.xcarchive"
else
 ditto -c -k --sequesterRsrc --keepParent "$app" "$root/dist/fruit-ninja-ios-$kind.zip"
 printf 'Application: %s
Package: %s
' "$app" "$root/dist/fruit-ninja-ios-$kind.zip"
 if [ "$kind" = simulator ]; then
  echo "Install on a booted simulator: xcrun simctl install booted '$app'"
 else
  echo "Install dist/fruit-ninja-ios-device.ipa with AltStore; AltStore signs it during installation."
 fi
fi
