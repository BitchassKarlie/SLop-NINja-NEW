/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c28b4 FUN_000c28b4 */

uint FUN_000c28b4(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar7 = *param_1;
  iVar5 = param_1[4];
  uVar4 = param_1[1];
  uVar3 = param_2 + uVar4;
  if ((iVar7 + 4 < iVar5) ||
     (iVar2 = uVar3 + iVar7 * 8,
     iVar2 == iVar5 * 8 || iVar2 + iVar5 * -8 < 0 != SBORROW4(iVar2,iVar5 * 8))) {
    pbVar6 = (byte *)param_1[3];
    uVar1 = (int)(uint)*pbVar6 >> (uVar4 & 0xff);
    if ((((8 < (int)uVar3) &&
         (uVar1 = uVar1 | (uint)pbVar6[1] << (8 - uVar4 & 0xff), 0x10 < (int)uVar3)) &&
        (uVar1 = uVar1 | (uint)pbVar6[2] << (0x10 - uVar4 & 0xff), 0x18 < (int)uVar3)) &&
       ((uVar1 = uVar1 | (uint)pbVar6[3] << (0x18 - uVar4 & 0xff), 0x20 < (int)uVar3 && (uVar4 != 0)
        ))) {
      uVar1 = uVar1 | (uint)pbVar6[4] << (0x20 - uVar4 & 0xff);
    }
    uVar1 = uVar1 & *(uint *)(DAT_000c2950 + 0xc28be + param_2 * 4);
  }
  else {
    pbVar6 = (byte *)param_1[3];
    uVar1 = 0xffffffff;
  }
  uVar4 = uVar3 + 7 & (int)uVar3 >> 0x20;
  if (uVar3 < 0xfffffff9) {
    uVar4 = uVar3;
  }
  param_1[1] = uVar3 & 7;
  param_1[3] = (int)(pbVar6 + ((int)uVar4 >> 3));
  *param_1 = iVar7 + ((int)uVar4 >> 3);
  return uVar1;
}



