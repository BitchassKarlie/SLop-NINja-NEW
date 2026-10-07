#!/usr/bin/env python3
"""Regression checks for missing iOS resources and invalid Vita artwork."""
import importlib.util
import plistlib
import tempfile
import unittest
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

def module(name, path):
    spec = importlib.util.spec_from_file_location(name, ROOT / path)
    loaded = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(loaded)
    return loaded

ios = module('ios_package', 'platform/ios/package.py')
vita = module('vita_validation', 'platform/vita/validate.py')

class Packages(unittest.TestCase):
    def test_ipa_resources_and_executable_permissions(self):
        with tempfile.TemporaryDirectory() as temporary:
            app = Path(temporary) / 'Fruit.app'
            app.mkdir()
            plist = (ROOT / 'platform/ios/Info.plist').read_bytes().replace(
                b'${MACOSX_BUNDLE_EXECUTABLE_NAME}', b'Fruit')
            (app / 'Info.plist').write_bytes(plist)
            executable = app / 'Fruit'
            executable.write_bytes(b'\xcf\xfa\xed\xfe' + b'\0' * 200_000)
            executable.chmod(0o755)
            output = Path(temporary) / 'Fruit.ipa'
            ios.package(app, output)
            with zipfile.ZipFile(output) as archive:
                prefix = 'Payload/Fruit.app/'
                for folder in ['original','config']:
                    for asset in (ROOT / 'assets' / folder).rglob('*'):
                        if asset.is_file():
                            entry = prefix + asset.relative_to(ROOT).as_posix()
                            self.assertEqual(archive.read(entry), asset.read_bytes(), entry)
                self.assertEqual((archive.getinfo(prefix + 'Fruit').external_attr >> 16) & 0o777, 0o755)
                self.assertIn(prefix + 'AppIcon60x60@3x.png', archive.namelist())
                self.assertIn('CFBundleIcons', plistlib.loads(archive.read(prefix + 'Info.plist')))

    def test_vita_artwork_and_reject_original_broken_texture(self):
        for name,size in [('icon0.png',(128,128)), ('livearea/contents/startup.png',(280,158)),
                          ('livearea/contents/bg.png',(840,500))]:
            vita.validate_png((ROOT / 'platform/vita/sce_sys' / name).read_bytes(), size)
        with self.assertRaises(ValueError):
            vita.validate_png((ROOT / 'assets/png/textures/fruit.png').read_bytes(), (128,128))
        with self.assertRaises(ValueError):
            vita.validate_png((ROOT / 'platform/vita/sce_sys/icon0.png').read_bytes(), (280,158))

if __name__ == '__main__':
    unittest.main()
