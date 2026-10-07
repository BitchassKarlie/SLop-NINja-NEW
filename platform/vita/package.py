#!/usr/bin/env python3
"""Package a compiled native SELF and original assets, preserving paths with spaces."""
import argparse
import re
import subprocess
import tempfile
import zipfile
from pathlib import Path
from validate import validate_vpk

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--build', type=Path, required=True)
parser.add_argument('--sdk', type=Path, required=True)
parser.add_argument('--title-id', default='FNAT00001')
parser.add_argument('--output', type=Path, required=True)
a = parser.parse_args()
root = Path(__file__).resolve().parents[2]
if not re.fullmatch(r'[A-Z0-9]{9}', a.title_id):
    parser.error('Title ID must be nine uppercase letters/digits')
eboot = a.build / 'eboot.bin'
if not eboot.is_file():
    parser.error('Missing eboot.bin; build the native SELF first')
a.output.parent.mkdir(parents=True, exist_ok=True)
with tempfile.TemporaryDirectory(prefix='fruit-vpk-') as scratch:
    sfo = Path(scratch) / 'param.sfo'
    subprocess.run([str(a.sdk / 'bin/vita-mksfoex'), '-s', 'TITLE_ID=' + a.title_id,
                    '-s', 'APP_VER=01.00', '-d', 'ATTRIBUTE2=12',
                    'Fruit Ninja Native', str(sfo)], check=True)
    with zipfile.ZipFile(a.output, 'w', zipfile.ZIP_DEFLATED, compresslevel=6) as z:
        z.write(eboot, 'eboot.bin')
        z.write(sfo, 'sce_sys/param.sfo')
        for image in sorted((root / 'platform/vita/sce_sys').rglob('*.png')):
            z.write(image, image.relative_to(root / 'platform/vita').as_posix())
        template = (root / 'platform/vita/template.xml').read_text().replace('\r\n', '\n')
        z.writestr('sce_sys/livearea/contents/template.xml', template.replace('\n', '\r\n').encode('utf-8'))
        for directory in ['original', 'config']:
            for p in sorted((root / 'assets' / directory).rglob('*')):
                if p.is_file(): z.write(p, p.relative_to(root).as_posix())
    validate_vpk(a.output)
print(a.output)
