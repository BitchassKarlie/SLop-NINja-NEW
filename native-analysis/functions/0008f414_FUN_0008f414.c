/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008f414 FUN_0008f414 */

void FUN_0008f414(char *param_1)

{
  int iVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte local_30 [12];
  int local_24;
  
  iVar1 = DAT_0008f634;
  iVar6 = DAT_0008f630 + 0x8f422;
  local_24 = **(int **)(iVar6 + DAT_0008f634);
  sVar2 = strlen(param_1);
  uVar9 = sVar2;
  if (sVar2 < 0xc) {
    uVar7 = 0x9e3779b9;
    uVar10 = 0x805;
    uVar8 = uVar7;
  }
  else {
    uVar7 = 0x9e3779b9;
    uVar10 = 0x805;
    uVar8 = uVar7;
    do {
      iVar4 = 0;
      do {
        bVar3 = param_1[iVar4];
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        local_30[iVar4] = bVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0xc);
      uVar9 = uVar9 - 0xc;
      param_1 = param_1 + 0xc;
      iVar4 = uVar7 + local_30[4] + (uint)local_30[5] * 0x100 + (uint)local_30[6] * 0x10000 +
              (uint)local_30[7] * 0x1000000;
      uVar10 = uVar10 + local_30[8] + (uint)local_30[9] * 0x100 + (uint)local_30[10] * 0x10000 +
               (uint)local_30[11] * 0x1000000;
      uVar11 = ((uVar8 + local_30[0] + (uint)local_30[1] * 0x100 + (uint)local_30[2] * 0x10000 +
                (uint)local_30[3] * 0x1000000) - uVar10) - iVar4 ^ uVar10 >> 0xd;
      uVar8 = (iVar4 - uVar10) - uVar11 ^ uVar11 << 8;
      uVar7 = (uVar10 - uVar11) - uVar8 ^ uVar8 >> 0xd;
      uVar12 = (uVar11 - uVar8) - uVar7 ^ uVar7 >> 0xc;
      uVar10 = (uVar8 - uVar7) - uVar12 ^ uVar12 << 0x10;
      uVar11 = (uVar7 - uVar12) - uVar10 ^ uVar10 >> 5;
      uVar8 = (uVar12 - uVar10) - uVar11 ^ uVar11 >> 3;
      uVar7 = (uVar10 - uVar11) - uVar8 ^ uVar8 << 10;
      uVar10 = (uVar11 - uVar8) - uVar7 ^ uVar7 >> 0xf;
    } while (0xb < uVar9);
  }
  uVar10 = sVar2 + uVar10;
  if (uVar9 != 0) {
    sVar2 = 0;
    do {
      sVar5 = sVar2;
      bVar3 = param_1[sVar5];
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 + 0x20;
      }
      local_30[sVar5] = bVar3;
      sVar2 = sVar5 + 1;
    } while (sVar5 + 1 != uVar9);
    switch(sVar5) {
    case 10:
      uVar10 = uVar10 + (uint)local_30[10] * 0x1000000;
    case 9:
      uVar10 = uVar10 + (uint)local_30[9] * 0x10000;
    case 8:
      uVar10 = uVar10 + (uint)local_30[8] * 0x100;
    case 7:
      uVar7 = uVar7 + (uint)local_30[7] * 0x1000000;
    case 6:
      uVar7 = uVar7 + (uint)local_30[6] * 0x10000;
    case 5:
      uVar7 = uVar7 + (uint)local_30[5] * 0x100;
    case 4:
      uVar7 = uVar7 + local_30[4];
    case 3:
      uVar8 = uVar8 + (uint)local_30[3] * 0x1000000;
    case 2:
      uVar8 = uVar8 + (uint)local_30[2] * 0x10000;
    case 1:
      uVar8 = uVar8 + (uint)local_30[1] * 0x100;
    default:
      uVar8 = uVar8 + local_30[0];
    }
  }
  uVar9 = (uVar8 - uVar7) - uVar10 ^ uVar10 >> 0xd;
  uVar8 = (uVar7 - uVar10) - uVar9 ^ uVar9 << 8;
  uVar10 = (uVar10 - uVar9) - uVar8 ^ uVar8 >> 0xd;
  uVar9 = (uVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar9 ^ uVar9 << 0x10;
  uVar10 = (uVar10 - uVar9) - uVar8 ^ uVar8 >> 5;
  uVar9 = (uVar9 - uVar8) - uVar10 ^ uVar10 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar9 ^ uVar9 << 10;
  if (local_24 != **(int **)(iVar6 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((uVar10 - uVar9) - uVar8 ^ uVar8 >> 0xf);
  }
  return;
}



