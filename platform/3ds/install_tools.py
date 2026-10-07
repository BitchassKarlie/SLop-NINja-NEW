#!/usr/bin/env python3
"""Install pinned CIA host tools on Linux x86_64 without changing system packages."""
import argparse
import hashlib
import io
import platform
import urllib.request
import zipfile
from pathlib import Path

# makerom 0.18.4 supports the SDK image's Debian Bookworm glibc;
# the 0.19.0 release binary requires glibc 2.38.
TOOLS = [
    ('makerom', 'https://github.com/3DSGuy/Project_CTR/releases/download/makerom-v0.18.4/makerom-v0.18.4-ubuntu_x86_64.zip',
     'dd596854718c195c6e3229286be485b122921715555af8ae5cf8e9a465d9f970', 'makerom'),
    ('bannertool', 'https://github.com/diasurgical/bannertool/releases/download/1.2.0/bannertool.zip',
     '69768596f836acb3e3aeaa66e47c6ba560dde813c6dfcd33c8afc25fe29b7524', 'linux-x86_64/bannertool'),
]

def install(destination):
    if platform.system() != 'Linux' or platform.machine() not in ['x86_64','AMD64']:
        raise RuntimeError('Install makerom 0.18.4 and bannertool 1.2.0 on PATH for this host')
    destination.mkdir(parents=True, exist_ok=True)
    for name,url,digest,member in TOOLS:
        with urllib.request.urlopen(url, timeout=120) as response:
            data = response.read()
        if hashlib.sha256(data).hexdigest() != digest:
            raise RuntimeError(f'{name} download checksum mismatch')
        with zipfile.ZipFile(io.BytesIO(data)) as archive:
            executable = archive.read(member)
        target = destination / name
        target.write_bytes(executable)
        target.chmod(0o755)
        print(f'Installed {name}: {target}')

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--destination', type=Path, required=True)
    install(parser.parse_args().destination)
