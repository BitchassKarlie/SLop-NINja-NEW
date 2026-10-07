#!/usr/bin/env python3
"""Reject empty or incomplete 3DS packages before uploading CI artifacts."""
import struct
import sys
from pathlib import Path

def validate(directory):
    if (directory / 'fruit-ninja.3dsx').read_bytes()[:4] != b'3DSX':
        raise ValueError('Invalid 3DSX')
    if (directory / 'fruit-ninja.smdh').read_bytes()[:4] != b'SMDH':
        raise ValueError('Invalid SMDH')
    cia = (directory / 'fruit-ninja.cia').read_bytes()
    header, _, _, certificates, ticket, tmd, _ = struct.unpack_from('<IHHIIII', cia)
    align = lambda size: (size + 63) & ~63
    offset = align(header) + align(certificates) + align(ticket) + align(tmd)
    ncch = cia[offset:offset + 512]
    if ncch[256:260] != b'NCCH':
        raise ValueError('CIA has no executable NCCH content')
    content_size = struct.unpack_from('<I', ncch, 260)[0] * 512
    exefs_size = struct.unpack_from('<I', ncch, 420)[0] * 512
    romfs_size = struct.unpack_from('<I', ncch, 436)[0] * 512
    if offset + content_size > len(cia) or exefs_size == 0 or romfs_size < 20_000_000:
        raise ValueError('CIA lacks executable or complete game ROMFS')
    print(f'CIA verified: ExeFS {exefs_size:,} bytes, ROMFS {romfs_size:,} bytes')

if __name__ == '__main__':
    validate(Path(sys.argv[1]))
