/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c270c FUN_000c270c */

int * FUN_000c270c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = param_1[4];
  uVar4 = param_1[1];
  iVar2 = param_2 + uVar4;
  if (iVar5 <= *param_1 + 4) {
    iVar7 = iVar2 + *param_1 * 8;
    iVar1 = iVar5 * 8;
    bVar8 = iVar7 + iVar5 * -8 < 0;
    if (iVar7 != iVar1 && bVar8 == SBORROW4(iVar7,iVar1)) {
      param_1 = (int *)0xffffffff;
    }
    if (iVar7 != iVar1 && bVar8 == SBORROW4(iVar7,iVar1)) {
      return param_1;
    }
  }
  pbVar6 = (byte *)param_1[3];
  uVar3 = (int)(uint)*pbVar6 >> (uVar4 & 0xff);
  if ((((8 < iVar2) && (uVar3 = uVar3 | (uint)pbVar6[1] << (8 - uVar4 & 0xff), 0x10 < iVar2)) &&
      (uVar3 = uVar3 | (uint)pbVar6[2] << (0x10 - uVar4 & 0xff), 0x18 < iVar2)) &&
     ((uVar3 = uVar3 | (uint)pbVar6[3] << (0x18 - uVar4 & 0xff), 0x20 < iVar2 && (uVar4 != 0)))) {
    uVar3 = uVar3 | (uint)pbVar6[4] << (0x20 - uVar4 & 0xff);
  }
  return (int *)(uVar3 & *(uint *)(DAT_000c2788 + 0xc2714 + param_2 * 4));
}



