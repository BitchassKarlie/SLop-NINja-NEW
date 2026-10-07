"""Inspect the observed MAD metadata layout; unknown variants are recorded."""
from pathlib import Path
import struct,json,argparse

def inspect(src,out):
    rows=[]
    for p in sorted(src.rglob('*.mad')):
        d=p.read_bytes();r={'source':str(p.relative_to(src))}
        try:
            if d[:4]!=b'HBR0' or struct.unpack_from('<I',d,12)[0]!=len(d)-16:raise ValueError('header mismatch')
            typ=struct.unpack_from('<I',d,16)[0];n=struct.unpack_from('<H',d,20)[0];o=22+n
            r.update(type=typ,source_max_file=d[22:o].decode(),parameter_1=struct.unpack_from('<f',d,o)[0],parameter_2=struct.unpack_from('<f',d,o+4)[0]);cnt=struct.unpack_from('<I',d,o+8)[0];o+=12;pieces=[]
            for _ in range(cnt):
                n=struct.unpack_from('<H',d,o)[0];o+=2;name=d[o:o+n].decode();o+=n;value=struct.unpack_from('<I',d,o)[0];o+=4;pieces.append({'name':name,'value':value})
            if o!=len(d):raise ValueError('unparsed trailing bytes')
            r['pieces']=pieces
        except Exception as e:r['error']='unsupported metadata layout: '+str(e)
        rows.append(r)
    out.parent.mkdir(parents=True,exist_ok=True);out.write_text(json.dumps(rows,indent=2));print(len(rows),'files;',sum('error' in r for r in rows),'unsupported')
if __name__=='__main__':
    a=argparse.ArgumentParser();a.add_argument('assets',type=Path);a.add_argument('output',type=Path);o=a.parse_args();inspect(o.assets,o.output)
