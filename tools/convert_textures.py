"""Convert Halfbrick .tex to PNG, retaining original files; requires Pillow."""
from pathlib import Path
import struct, argparse, json
from PIL import Image

def decode(data):
    if len(data)<16: raise ValueError('truncated header')
    tag,fmt=struct.unpack_from('<II',data)
    w,h=struct.unpack_from('<HH',data,12)
    if fmt not in (403,404,405): raise ValueError(f'unsupported format {fmt}')
    if not w or not h or len(data)!=16+w*h*2: raise ValueError('unexpected dimensions/payload')
    out=bytearray()
    for (v,) in struct.iter_unpack('<H',data[16:]):
        if fmt==405: rgba=((v>>11)*255//31,((v>>5)&63)*255//63,(v&31)*255//31,255)
        elif fmt==404: rgba=((v>>12)*17,((v>>8)&15)*17,((v>>4)&15)*17,(v&15)*17)
        else: rgba=((v>>11)*255//31,((v>>6)&31)*255//31,((v>>1)&31)*255//31,(v&1)*255)
        out.extend(rgba)
    return Image.frombytes('RGBA',(w,h),bytes(out)), {'tag':tag,'format':fmt,'width':w,'height':h}

def convert(src,dst):
    result=[]
    for p in sorted(src.rglob('*.tex')):
        rel=p.relative_to(src); row={'source':str(rel)}
        try:
            im,meta=decode(p.read_bytes()); target=(dst/rel).with_suffix('.png');target.parent.mkdir(parents=True,exist_ok=True);im.save(target)
            row.update(meta); row['output']=str(target.relative_to(dst))
        except ValueError as e: row['error']=str(e)
        result.append(row)
    dst.mkdir(parents=True,exist_ok=True)
    (dst/'texture_manifest.json').write_text(json.dumps(result,indent=2))
    errors=sum('error' in x for x in result)
    print(f'{len(result)-errors} converted, {errors} failed')
    return errors
if __name__=='__main__':
    ap=argparse.ArgumentParser();ap.add_argument('source',type=Path);ap.add_argument('destination',type=Path);a=ap.parse_args();raise SystemExit(bool(convert(a.source,a.destination)))
