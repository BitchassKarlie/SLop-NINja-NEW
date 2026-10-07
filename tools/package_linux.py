#!/usr/bin/env python3
"""Package a finished Linux runtime directory with stable archive metadata."""
import argparse
import gzip
import tarfile
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('directory', type=Path)
parser.add_argument('output', type=Path)
a = parser.parse_args()
directory = a.directory.resolve()
output = a.output.resolve()
if not directory.is_dir() or directory == output or directory in output.parents:
    parser.error('Output must be outside the runtime directory')
paths = [directory, *sorted(directory.rglob('*'))]

def metadata(info):
    info.uid = info.gid = 0
    info.uname = info.gname = ''
    info.mtime = 1577836800  # 2020-01-01; preserve executable modes, not host timestamps.
    return info

with tarfile.open(output, 'w:gz', compresslevel=6) as archive:
    for path in paths:
        archive.add(path, arcname=path.relative_to(directory.parent).as_posix(),
                    recursive=False, filter=metadata)
# Read to EOF to verify gzip's CRC, then verify the expected archive member set.
with gzip.open(output, 'rb') as compressed:
    while compressed.read(1024 * 1024):
        pass
with tarfile.open(output, 'r:gz') as archive:
    assert set(archive.getnames()) == {p.relative_to(directory.parent).as_posix() for p in paths}
print(output)
