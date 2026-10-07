#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
kind=${1:-debug}
case "$kind" in
 debug) task=assembleDebug; apk=app-debug.apk ;;
 release) task=assembleRelease; apk=app-release-unsigned.apk
  [ -z "${ANDROID_KEYSTORE:-}" ] || apk=app-release.apk ;;
 bundle) task=bundleRelease; apk= ;;
 *) echo 'Usage: build.sh [debug|release|bundle]' >&2; exit 1 ;;
esac
command -v java >/dev/null || { echo 'Install JDK 17 and set JAVA_HOME.' >&2; exit 1; }
cd "$root/platform/android"
./gradlew --no-daemon "$task"
mkdir -p "$root/dist/android"
if [ "$kind" = bundle ]; then
 cp app/build/outputs/bundle/release/app-release.aab "$root/dist/android/fruit-ninja-release.aab"
else
 cp "app/build/outputs/apk/$kind/$apk" "$root/dist/android/fruit-ninja-$kind.apk"
fi
echo "Output: $root/dist/android"
