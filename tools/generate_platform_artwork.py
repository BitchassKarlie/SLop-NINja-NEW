#!/usr/bin/env python3
"""Regenerate platform artwork from recovered APK art (requires Pillow)."""
from pathlib import Path
from PIL import Image, ImageOps

ROOT = Path(__file__).resolve().parents[1]
icon = Image.open(ROOT / 'android/res/drawable/icon.png').convert('RGB')
background = Image.open(ROOT / 'assets/png/textures/bg_store.png').convert('RGB')

def save(image, path, size, indexed=False):
    path = ROOT / path
    path.parent.mkdir(parents=True, exist_ok=True)
    image = ImageOps.fit(image, size, method=Image.Resampling.LANCZOS)
    if indexed:
        image = image.quantize(colors=128, method=Image.Quantize.MEDIANCUT)
    image.save(path, optimize=True, bits=8 if indexed else 8)

for density, size in [('mdpi',48), ('hdpi',72), ('xhdpi',96), ('xxhdpi',144), ('xxxhdpi',192)]:
    save(icon, f'platform/android/app/src/main/res/mipmap-{density}/ic_launcher.png', (size,size))
for name, size in [('AppIcon60x60@2x',120), ('AppIcon60x60@3x',180),
                   ('AppIcon76x76',76), ('AppIcon76x76@2x',152), ('AppIcon83.5x83.5@2x',167)]:
    save(icon, f'platform/ios/icons/{name}.png', (size,size))
save(icon, 'platform/vita/sce_sys/icon0.png', (128,128), True)
save(background, 'platform/vita/sce_sys/livearea/contents/bg.png', (840,500), True)
gate = ImageOps.fit(background, (280,158), method=Image.Resampling.LANCZOS).convert('RGBA')
for name, box in [('hd_fruit_text', (25,-12,230,115)), ('hd_ninja_text', (69,67,142,71))]:
    logo = Image.open(ROOT / f'assets/png/textures/{name}.png').convert('RGBA')
    x,y,w,h = box
    gate.alpha_composite(logo.resize((w,h), Image.Resampling.LANCZOS), (x,y))
save(gate.convert('RGB'), 'platform/vita/sce_sys/livearea/contents/startup.png', (280,158), True)
save(icon, 'platform/3ds/icon.png', (48,48))
save(gate.convert('RGB'), 'platform/3ds/banner.png', (256,128))
