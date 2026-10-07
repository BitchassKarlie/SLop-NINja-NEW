#!/usr/bin/env python3
"""Validate Vita's PNG-8 LiveArea requirements before distributing a VPK."""
import struct
import xml.etree.ElementTree as ET
import zipfile

def validate_png(data, expected):
    if data[:8] != b'\x89PNG\r\n\x1a\n':
        raise ValueError('Not a PNG')
    width, height, depth, colour, _, _, interlace = struct.unpack('>IIBBBBB', data[16:29])
    if (width,height) != expected or (depth,colour,interlace) != (8,3,0):
        raise ValueError(f'Expected opaque, non-interlaced PNG-8 {expected}, got {(width,height,depth,colour,interlace)}')
    if len(data) > 420 * 1024:
        raise ValueError('LiveArea PNG exceeds 420 KB')
    offset = 8
    while offset < len(data):
        length = struct.unpack('>I', data[offset:offset+4])[0]
        if data[offset+4:offset+8] == b'tRNS':
            raise ValueError('LiveArea art must not contain alpha')
        offset += length + 12

def validate_vpk(path):
    with zipfile.ZipFile(path) as archive:
        if archive.testzip():
            raise ValueError('VPK CRC check failed')
        for name,size in [('sce_sys/icon0.png',(128,128)),
                          ('sce_sys/livearea/contents/startup.png',(280,158)),
                          ('sce_sys/livearea/contents/bg.png',(840,500))]:
            validate_png(archive.read(name), size)
        xml = archive.read('sce_sys/livearea/contents/template.xml')
        if len(xml) > 32 * 1024 or b'\n' in xml.replace(b'\r\n', b''):
            raise ValueError('LiveArea XML must be UTF-8/CRLF and at most 32 KB')
        template = ET.fromstring(xml.decode('utf-8'))
        for tag in ['.//startup-image', './/livearea-background/image']:
            name = template.findtext(tag)
            if not name or f'sce_sys/livearea/contents/{name}' not in archive.namelist():
                raise ValueError('LiveArea template references missing art')
        if archive.read('sce_sys/param.sfo')[:4] != b'\0PSF':
            raise ValueError('Invalid SFO')
        if archive.read('eboot.bin')[:4] != b'SCE\0':
            raise ValueError('eboot.bin is not a Vita SELF')
        archive.getinfo('assets/config/xml/fruitlist.xml')
        archive.getinfo('assets/original/models/fruit/textures/fruit_atlas.tex')

if __name__ == '__main__':
    import sys
    validate_vpk(sys.argv[1])
    print('VPK structure and LiveArea art validated')
