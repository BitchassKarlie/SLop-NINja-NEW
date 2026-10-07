#!/bin/sh
# This helper runs INSIDE an SDK image, not on the developer's host.
set -eu
kind=${1:?Usage: container-build.sh vita|3ds}
case "$kind" in vita|3ds) ;; *) echo 'Unknown SDK target' >&2; exit 1 ;; esac
# SDK images vary in their host utilities. Install only if required commands are absent.
if ! command -v cmake >/dev/null || ! command -v make >/dev/null || ! command -v python3 >/dev/null; then
 if command -v apt-get >/dev/null; then
  apt-get update
  apt-get install -y --no-install-recommends cmake make python3
 elif command -v apk >/dev/null; then
  apk add --no-cache cmake make python3
 elif command -v pacman >/dev/null; then
  pacman -Syu --needed --noconfirm cmake make python
 else
  echo 'SDK image needs CMake, make and Python 3.' >&2
  exit 1
 fi
fi
if [ "$kind" = vita ]; then
 export VITASDK="${VITASDK:-/usr/local/vitasdk}"
 sh platform/vita/build.sh
else
 export DEVKITPRO="${DEVKITPRO:-/opt/devkitpro}"
 if [ ! -f "$DEVKITPRO/cmake/3DS.cmake" ] || [ ! -f "$DEVKITPRO/libctru/default_icon.png" ]; then
  # A smaller devkitARM image may omit the 3DS development group.
  if command -v dkp-pacman >/dev/null; then
   dkp-pacman -Syu --needed --noconfirm 3ds-dev
  else
   pacman -Syu --needed --noconfirm 3ds-dev
  fi
 fi
 sh platform/3ds/build.sh
fi
