#!/usr/bin/env python3
"""Extract menu positions and life-cross layout from the original ARMv7 library.

This validates only the recovered constants, not screenshot or animation parity.
Addresses use Ghidra's 0x10000 image base; output coordinates use top-left origin.
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

    def floats(address, count=2):
        return struct.unpack_from('<' + 'f' * count, data, address - 0x10000)

    dojo = []
    for address in [0x3dac0, 0x3dab4, 0x3dcc4]:
        px, py = floats(address)
        dojo.append([240 + px, 160 - py])
    sensei_x, sensei_y = floats(0x3cabc)
    title_x, title_y = floats(0x3cac4)
    dojo_sensei = [240 + sensei_x - 128, 160 - sensei_y - 128, 256, 256]
    dojo_title = [240 + title_x - 64, 160 - title_y - 32, 128, 64]
    modes = {}
    for name, address in [('Classic', 0x44fd8), ('Zen', 0x4501c), ('Arcade', 0x452e4)]:
        x, y = floats(address)
        modes[name] = [240 + x, 160 - y]
    x, y = floats(0x44fd0)
    crosses = []
    for index in range(3):
        x_offset, y_pos, angle, scale = floats(0xc445c + index * 16, 4)
        crosses.append({'x': 480 - x_offset, 'y': y_pos,
                        'angle': angle, 'size': 32 * scale})
    sign_x = 240 + floats(0x448a8, 1)[0] + floats(0x448b0, 1)[0]
    sign_y = 160 - floats(0x448ac, 1)[0] - floats(0x448b4, 1)[0]
    # Original zen_sign is 128 square; FUN_00044458 draws texture dimensions + 1.
    sign = [sign_x - 64.5, sign_y - 64.5, 129, 129]
    return {'dojo': dojo, 'dojo_sensei': dojo_sensei, 'dojo_title': dojo_title,
            'native_model_unit': floats(0x2319c, 1)[0], 'scene_exit_decay': floats(0x3d740, 1)[0],
            'modes': modes, 'back_bomb': [240 + x, 160 - y], 'crosses': crosses,
            'zen_sign': sign}


def close(actual, expected):
    if len(actual) != len(expected) or any(abs(a - b) > 0.0001 for a, b in zip(actual, expected)):
        raise ValueError(f'Port constants differ: {actual} vs native {expected}')


def check_source(layout):
    source = (ROOT / 'game/include/fruit/game.hpp').read_text()
    for mode, screen in layout['modes'].items():
        match = re.search(r'Mode::' + mode + r', "[^"]+", \{([\d.]+), ([\d.]+)\}', source)
        if not match:
            raise ValueError(f'Missing mode position: {mode}')
        close([float(match[1]), 320 - float(match[2])], screen)
    source = (ROOT / 'game/include/fruit/ui.hpp').read_text()
    match = re.search(r'DojoFruitPositions\[\] = \{([^;]+);', source)
    if not match:
        raise ValueError('Missing Dojo fruit positions')
    pairs = re.findall(r'\{([\d.]+), ([\d.]+)\}', match[1])
    for pair, screen in zip(pairs, layout['dojo']):
        close([float(pair[0]), 320 - float(pair[1])], screen)
    if len(pairs) != 3:
        raise ValueError('Dojo must have pineapple, plum and back bomb')
    for name, key in [('DojoSensei', 'dojo_sensei'), ('DojoTitle', 'dojo_title')]:
        match = re.search(name + r'\{([^}]+)\}', source)
        if not match:
            raise ValueError(f'Missing Dojo rectangle: {name}')
        close([float(v.strip()) for v in match[1].split(',')], layout[key])
    pose = (ROOT / 'game/include/fruit/model_pose.hpp').read_text()
    match = re.search(r'body.radius \* ([\d.]+)f', pose)
    if not match:
        raise ValueError('Missing common native model scale')
    close([float(match[1])], [layout['native_model_unit'] * 2])
    game = (ROOT / 'game/src/game.cpp').read_text()
    match = re.search(r'sceneExit_ \*= std::pow\(([\d.]+)f', game)
    if not match:
        raise ValueError('Missing native menu exit decay')
    close([float(match[1])], [layout['scene_exit_decay']])
    match = re.search(r'ModeBackBomb\{([\d.]+), ([\d.]+)\}', source)
    if not match:
        raise ValueError('Missing mode back bomb position')
    close([float(match[1]), 320 - float(match[2])], layout['back_bomb'])
    match = re.search(r'ZenSign\{([^}]+)\}', source)
    if not match:
        raise ValueError('Missing Zen instruction sign')
    close([float(v.strip().rstrip('f')) for v in match[1].split(',')], layout['zen_sign'])
    source = (ROOT / 'game/src/renderer.cpp').read_text()
    for name, key in [('xs', 'x'), ('ys', 'y'), ('sizes', 'size'), ('angles', 'angle')]:
        match = re.search(name + r'\[\] = \{([^}]+)\}', source)
        if not match:
            raise ValueError(f'Missing cross layout: {name}')
        close([float(v.strip().rstrip('f')) for v in match[1].split(',')],
              [row[key] for row in layout['crosses']])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', type=Path,
                        default=ROOT / 'original/native/armeabi-v7a/libfruitninja.so')
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    layout = recover(args.binary)
    if args.check:
        check_source(layout)
        print('PASS: native Dojo/mode/back-bomb coordinates, Zen sign and all three life-cross layouts match')
    else:
        print(json.dumps({'binary_sha256': SHA256, **layout}, indent=2))


if __name__ == '__main__':
    main()
