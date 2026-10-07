/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b856c zip_fread */

uint zip_fread(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) != 0)) {
    return 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar3 = uVar4 & 1;
  if (param_3 == 0) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
    if (uVar3 != 0) {
      if (-1 < (int)(uVar4 << 0x1e)) {
        uVar3 = _zip_file_fillbuf(param_2,param_3,param_1);
        if (0 < (int)uVar3) {
          if (*(int *)(param_1 + 0x10) << 0x1d < 0) {
            uVar2 = crc32(*(undefined4 *)(param_1 + 0x24),param_2,uVar3);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar3;
          return uVar3;
        }
        return uVar3;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc) = param_2;
      *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_3;
      iVar1 = *(int *)(param_1 + 0x30);
      iVar7 = *(int *)(iVar1 + 0x14);
      do {
        uVar3 = inflate(iVar1,2,uVar3);
        switch(uVar3) {
        case 0:
          iVar1 = *(int *)(param_1 + 0x30);
          iVar5 = *(int *)(iVar1 + 0x14);
          goto LAB_000b862a;
        case 1:
          iVar1 = *(int *)(param_1 + 0x30);
          iVar5 = *(int *)(iVar1 + 0x14);
          if (iVar5 == iVar7) {
            if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28)) {
              return 0;
            }
            _zip_error_set(param_1 + 4,7,0);
            return 0xffffffff;
          }
LAB_000b862a:
          uVar4 = *(uint *)(param_1 + 0x1c);
          uVar6 = iVar5 - iVar7;
          uVar3 = (uint)(uVar4 <= uVar6);
          if (param_3 <= uVar6) {
            uVar3 = 1;
          }
          if (uVar3 != 0) {
            if (*(int *)(param_1 + 0x10) << 0x1d < 0) {
              uVar2 = crc32(*(undefined4 *)(param_1 + 0x24),param_2,uVar6);
              uVar4 = *(uint *)(param_1 + 0x1c);
              *(undefined4 *)(param_1 + 0x24) = uVar2;
            }
            *(uint *)(param_1 + 0x1c) = uVar4 - uVar6;
            return uVar6;
          }
          break;
        case 0xfffffffb:
          if (*(int *)(*(int *)(param_1 + 0x30) + 4) != 0) goto switchD_000b85e0_caseD_fffffffc;
          uVar3 = _zip_file_fillbuf(*(undefined4 *)(param_1 + 0x2c),0x2000,param_1);
          if (uVar3 == 0) {
            _zip_error_set(param_1 + 4,0x15);
            return 0xffffffff;
          }
          if ((int)uVar3 < 0) {
            return 0xffffffff;
          }
          **(undefined4 **)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
          *(uint *)(*(int *)(param_1 + 0x30) + 4) = uVar3;
        default:
          iVar1 = *(int *)(param_1 + 0x30);
          break;
        case 0xfffffffc:
        case 0xfffffffd:
        case 0xfffffffe:
        case 2:
switchD_000b85e0_caseD_fffffffc:
          _zip_error_set(param_1 + 4,0xd);
          return 0xffffffff;
        }
      } while( true );
    }
    *(uint *)(param_1 + 0x10) = uVar4 | 1;
    if (((int)((uVar4 | 1) << 0x1d) < 0) && (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)))
    {
      _zip_error_set(param_1 + 4,7);
      return 0xffffffff;
    }
  }
  return 0;
}



