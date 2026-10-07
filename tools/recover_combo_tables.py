#!/usr/bin/env python3
"""Recover and optionally verify Zen combo tables from the bundled ARMv7 binary.

Ghidra image base is 0x10000. These tables contain ELF-relative string pointers.
No runtime code is generated; this is independent evidence for the port's tables.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct

ROOT = Path(__file__).resolve().parents[1]
SHA256 = 'c24fc9c4ecf3b0a10fc61bffa59607f0f5ca9d63e017bcc742e03ef3500eb286'


def recover(binary):
    data = binary.read_bytes()
    if hashlib.sha256(data).hexdigest() != SHA256:
        raise ValueError('Offsets apply only to the recovered Android 1.5.4 ARMv7 library')

    def pointer(address):
        return struct.unpack_from('<I', data, address - 0x10000)[0]

    def string(offset):
        end = data.index(b'\0', offset)
        return data[offset:end].decode('ascii')

    rows = []
    for index in range(25):
        row = 0xe3334 + index * 28
        count = int(string(pointer(row)))
        if not 1 <= count <= 6:
            raise ValueError('Invalid native texture variant count')
        rows.append({'index': index, 'name': string(pointer(0xe32d0 + index * 4)),
                     'textures': [string(pointer(row + 4 + i * 4)) for i in range(count)]})
    return rows


def check_source(rows):
    source = (ROOT / 'game/src/combos.cpp').read_text()
    names = source.split('static const char *names[] = {', 1)[1].split('};', 1)[0]
    assert re.findall(r'"([^"]+)"', names) == [r['name'] for r in rows], 'Enum names differ'
    textures = source.split('static const std::vector<std::string> textures[] = {', 1)[1].split('};', 1)[0]
    groups = re.findall(r'\{([^{}]+)\}', textures)
    actual = [[name + '.tex' for name in re.findall(r'"([^"]+)"', group)] for group in groups]
    assert actual == [r['textures'] for r in rows], 'Texture order/weighting differs'
    for row in rows:
        for name in row['textures']:
            assert (ROOT / 'assets/original/textures' / name).is_file(), name


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', type=Path,
                        default=ROOT / 'original/native/armeabi-v7a/libfruitninja.so')
    parser.add_argument('--check', action='store_true', help='Compare port tables and bundled textures')
    args = parser.parse_args()
    rows = recover(args.binary)
    if args.check:
        check_source(rows)
        print('PASS: all 25 native combo names, weighted texture variants and assets match')
    else:
        print(json.dumps({'binary_sha256': SHA256, 'combos': rows}, indent=2))


if __name__ == '__main__':
    main()
