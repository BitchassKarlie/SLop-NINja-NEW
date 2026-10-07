"""Recover mesh geometry from observed HBR0 MMD layouts as Wavefront OBJ.
Material bindings, node transforms and MAD cut metadata remain in original assets.
"""
from pathlib import Path
import struct,json,argparse

def decode(d):
    # Locate a mesh chunk using its measured payload signature and exact size.
    meshes=[]
    for off in range(len(d)-23):
        if d[off:off+4]!=b'HBR0':continue
        kind,ver,size=struct.unpack_from('<III',d,off+4);s=off+16;e=s+size
        if kind or ver or e>len(d) or d[s:s+3]!=bytes.fromhex('000021'):continue
        ni=struct.unpack_from('<I',d,s+3)[0];a=s+7+ni*2
        if a+9>e or ni%3:continue
        mask=d[a:a+5]; nv=struct.unpack_from('<I',d,a+5)[0];v=a+9
        stride={bytes.fromhex('00ff010012'):36,bytes.fromhex('00e3010012'):32}.get(mask)
        if not stride or v+nv*stride!=e:continue
        indices=struct.unpack_from('<'+'H'*ni,d,s+7)
        if indices and max(indices)>=nv:raise ValueError('index exceeds vertex count')
        verts=[]
        for i in range(nv):
            o=v+i*stride;uv=struct.unpack_from('<2f',d,o)
            normal=struct.unpack_from('<3f',d,o+(12 if stride==36 else 8));pos=struct.unpack_from('<3f',d,o+stride-12)
            verts.append((pos,uv,normal))
        meshes.append((verts,indices))
    if not meshes:raise ValueError('no supported mesh chunk')
    return meshes

def convert(src,dst):
    rows=[]
    for p in sorted(src.rglob('*.mmd')):
        row={'source':str(p.relative_to(src))}
        try:
            meshes=decode(p.read_bytes());lines=['# Recovered local-space geometry; original node transforms not applied'];base=1
            for k,(verts,indices) in enumerate(meshes):
                lines.append(f'o mesh_{k}')
                for pos,uv,n in verts:lines.append('v '+' '.join(map(str,pos)))
                for pos,uv,n in verts:lines.append('vt '+' '.join(map(str,uv)))
                for pos,uv,n in verts:lines.append('vn '+' '.join(map(str,n)))
                for i in range(0,len(indices),3):lines.append('f '+' '.join(f'{j+base}/{j+base}/{j+base}' for j in indices[i:i+3]))
                base+=len(verts)
            target=(dst/p.relative_to(src)).with_suffix('.obj');target.parent.mkdir(parents=True,exist_ok=True);target.write_text('\n'.join(lines)+'\n')
            row.update(meshes=len(meshes),vertices=sum(len(m[0]) for m in meshes),triangles=sum(len(m[1])//3 for m in meshes))
        except (ValueError,struct.error) as e:row['error']=str(e)
        rows.append(row)
    dst.mkdir(parents=True,exist_ok=True);(dst/'model_manifest.json').write_text(json.dumps(rows,indent=2))
    print(f'{sum("error" not in r for r in rows)} converted, {sum("error" in r for r in rows)} failed')
if __name__=='__main__':
    ap=argparse.ArgumentParser();ap.add_argument('source',type=Path);ap.add_argument('destination',type=Path);a=ap.parse_args();convert(a.source,a.destination)
