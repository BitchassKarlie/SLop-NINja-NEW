#!/usr/bin/env python3
"""Package sources with stable timestamps, independent of the build host's clock."""
import argparse
import shutil
import zipfile
from pathlib import Path


def main():
    root = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=root.parent / 'fruitslicer-recovery.zip')
    output = parser.parse_args().output.resolve()
    with zipfile.ZipFile(output, 'w', zipfile.ZIP_DEFLATED, compresslevel=6) as archive:
        for path in sorted(root.rglob('*')):
            relative = path.relative_to(root)
            if (not path.is_file() or path.resolve() == output or
                    any(part in {'.git', '__pycache__', '.gradle', '.cxx', 'build'} for part in relative.parts) or
                    (relative.parts[0].startswith('build') or relative.parts[0] == 'dist') or relative.name == 'windows-build.log'):
                continue
            info = zipfile.ZipInfo((Path(root.name) / relative).as_posix(),
                                   date_time=(2020, 1, 1, 0, 0, 0))
            info.compress_type = zipfile.ZIP_DEFLATED
            info.external_attr = (path.stat().st_mode & 0xFFFF) << 16
            with path.open('rb') as source, archive.open(info, 'w') as destination:
                shutil.copyfileobj(source, destination)
    with zipfile.ZipFile(output) as archive:
        bad = archive.testzip()
        if bad:
            raise RuntimeError('ZIP verification failed: ' + bad)
        assert all(item.date_time == (2020, 1, 1, 0, 0, 0) for item in archive.infolist())
        print(f'{output}: {len(archive.infolist())} files, {output.stat().st_size} bytes')


if __name__ == '__main__':
    main()
