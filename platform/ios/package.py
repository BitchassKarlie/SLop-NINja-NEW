#!/usr/bin/env python3
"""Stage complete iOS resources and package an unsigned AltStore IPA."""
import argparse
import hashlib
import plistlib
import shutil
import stat
import zipfile
from pathlib import Path

root = Path(__file__).resolve().parents[2]

def stage(app):
    info = plistlib.loads((app / 'Info.plist').read_bytes())
    executable = app / info['CFBundleExecutable']
    if not executable.is_file() or executable.stat().st_size < 100_000:
        raise RuntimeError('Missing or invalid iOS executable')
    for folder in ['original', 'config']:
        destination = app / 'assets' / folder
        if destination.exists():
            shutil.rmtree(destination)
        shutil.copytree(root / 'assets' / folder, destination)
    for icon in (root / 'platform/ios/icons').glob('*.png'):
        shutil.copy2(icon, app / icon.name)
    # Verify byte-for-byte, including models, audio, textures and decoded XML.
    for folder in ['original', 'config']:
        for source in (root / 'assets' / folder).rglob('*'):
            if source.is_file():
                target = app / source.relative_to(root)
                if hashlib.sha256(source.read_bytes()).digest() != hashlib.sha256(target.read_bytes()).digest():
                    raise RuntimeError(f'Missing or damaged bundled asset: {target}')
    if not info.get('CFBundleIcons') or not (app / 'AppIcon60x60@3x.png').is_file():
        raise RuntimeError('Missing application icon metadata or artwork')

def package(app, output):
    stage(app)
    output.parent.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(output, 'w', zipfile.ZIP_DEFLATED, compresslevel=6) as archive:
        for file in sorted(app.rglob('*')):
            if file.is_file():
                entry = zipfile.ZipInfo((Path('Payload') / app.name / file.relative_to(app)).as_posix())
                entry.create_system = 3
                entry.external_attr = (stat.S_IFREG | stat.S_IMODE(file.stat().st_mode)) << 16
                entry.compress_type = zipfile.ZIP_DEFLATED
                archive.writestr(entry, file.read_bytes())
    with zipfile.ZipFile(output) as archive:
        if archive.testzip():
            raise RuntimeError('IPA CRC check failed')
        names = archive.namelist()
        if not any(name.endswith('/assets/config/xml/fruitlist.xml') for name in names):
            raise RuntimeError('IPA has no game configuration')
    print(f'Unsigned AltStore IPA: {output} ({output.stat().st_size:,} bytes)')

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--app', type=Path, required=True)
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    if args.output:
        package(args.app, args.output)
    else:
        stage(args.app)
