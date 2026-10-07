/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093630 FUN_00093630 */

int FUN_00093630(int *param_1,int param_2,int param_3,undefined param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int local_1c;
  
  uVar6 = param_2 + 3U & 0xfffffffc;
  uVar5 = param_1[8] + 0x10 + uVar6;
  if (param_1[2] == 0) {
    iVar1 = param_1[6];
    if (uVar5 + iVar1 < (uint)param_1[7]) {
      if (param_1[8] == 0) {
        iVar2 = iVar1 + 0x10;
      }
      else {
        iVar2 = iVar1 + 0x14;
        *(undefined4 *)(iVar1 + 0x10) = 0xdeadc0de;
        *(undefined4 *)(iVar2 + uVar6) = 0xdeadc0de;
      }
      puVar4 = (undefined4 *)param_1[6];
      *(undefined *)((int)puVar4 + 0xf) = param_4;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = param_3;
      puVar4[3] = puVar4[3] & 0xff000000 | uVar5 & 0xffffff;
      param_1[2] = (int)puVar4;
      param_1[3] = (int)puVar4;
      param_1[6] = param_1[6] + uVar5;
      return iVar2;
    }
  }
  else {
    if ((*param_1 != 0) && (iVar1 = FUN_000934b4(param_1,uVar5,&local_1c), iVar1 != 0)) {
      *(int *)(iVar1 + 8) = param_3;
      *(undefined *)(iVar1 + 0xf) = param_4;
      return local_1c;
    }
    iVar1 = param_1[6];
    if (uVar5 + iVar1 < (uint)param_1[7]) {
      if (param_1[8] == 0) {
        iVar2 = iVar1 + 0x10;
      }
      else {
        iVar2 = iVar1 + 0x14;
        *(undefined4 *)(iVar1 + 0x10) = 0xdeadc0de;
        *(undefined4 *)(iVar2 + uVar6) = 0xdeadc0de;
      }
      piVar3 = (int *)param_1[6];
      iVar1 = param_1[3];
      *(undefined *)((int)piVar3 + 0xf) = param_4;
      *piVar3 = iVar1;
      piVar3[1] = 0;
      piVar3[2] = param_3;
      piVar3[3] = piVar3[3] & 0xff000000U | uVar5 & 0xffffff;
      param_1[6] = param_1[6] + uVar5;
      *(int **)(param_1[3] + 4) = piVar3;
      param_1[3] = (int)piVar3;
      return iVar2;
    }
  }
  return 0;
}



