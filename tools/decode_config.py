"""Recover XML using the XOR table identified in native FUN_0009f4cc.
The table has 255 bytes; native loader indexes it using offset % 0xff.
"""
from pathlib import Path
import struct,json,argparse,xml.etree.ElementTree as ET

def table(lib):
    b=lib.read_bytes()
    # Ghidra image base is 0x10000; this build's loadable segment uses matching offsets.
    delta=struct.unpack_from('<i',b,0x9f714-0x10000)[0]
    offset=delta+0x9f678-0x10000
    key=b[offset:offset+255]
    if len(key)!=255:raise ValueError('unsupported binary')
    return key

def convert(src,lib,dst):
    key=table(lib);rows=[]
    for p in sorted(src.rglob('*.xml')):
        b=p.read_bytes();decoded=b if b.lstrip().startswith(b'<') else bytes(v^key[i%255] for i,v in enumerate(b))
        row={'source':str(p.relative_to(src))}
        try:
            root=ET.fromstring(decoded);row['root']=root.tag
            target=dst/p.relative_to(src);target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(decoded)
        except ET.ParseError as e:row['error']=str(e)
        rows.append(row)
    dst.mkdir(parents=True,exist_ok=True);(dst/'config_manifest.json').write_text(json.dumps(rows,indent=2))
    print(f'{sum("error" not in r for r in rows)} XML files recovered, {sum("error" in r for r in rows)} failed')
    return sum('error' in r for r in rows)
if __name__=='__main__':
    a=argparse.ArgumentParser();a.add_argument('assets',type=Path);a.add_argument('library',type=Path);a.add_argument('destination',type=Path);o=a.parse_args();raise SystemExit(bool(convert(o.assets,o.library,o.destination)))
