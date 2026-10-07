/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac9d8 FUN_000ac9d8 */

void FUN_000ac9d8(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  
  iVar5 = (param_3 + 1) * 2;
  iVar4 = param_3;
  iVar7 = param_3;
  if (iVar5 < param_4) {
    do {
      iVar2 = (iVar5 + -1) * 0x10;
      uVar1 = *(uint *)(param_2 + iVar5 * 0x10);
      uVar3 = *(uint *)(param_2 + iVar2);
      if (uVar3 <= uVar1) {
        iVar2 = iVar5 * 0x10;
      }
      iVar2 = param_2 + iVar2;
      iVar7 = iVar5 + -1;
      if (uVar3 <= uVar1) {
        iVar7 = iVar5;
        uVar3 = uVar1;
      }
      iVar5 = param_2 + iVar4 * 0x10;
      *(uint *)(param_2 + iVar4 * 0x10) = uVar3;
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar2 + 4);
      FUN_0009f860(iVar5 + 8);
      piVar6 = *(int **)(iVar2 + 8);
      *(int **)(iVar5 + 8) = piVar6;
      if (piVar6 != (int *)0x0) {
        *piVar6 = *piVar6 + 1;
      }
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
      iVar5 = (iVar7 + 1) * 2;
      iVar4 = iVar7;
    } while (param_4 != iVar5 && param_4 + (iVar7 + 1) * -2 < 0 == SBORROW4(param_4,iVar5));
  }
  if (iVar5 == param_4) {
    iVar4 = iVar7 * 0x10;
    iVar7 = iVar5 + -1;
    iVar5 = param_2 + iVar4;
    iVar2 = param_2 + iVar7 * 0x10;
    *(undefined4 *)(param_2 + iVar4) = *(undefined4 *)(param_2 + iVar7 * 0x10);
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar2 + 4);
    FUN_0009f860(iVar5 + 8);
    piVar6 = *(int **)(iVar2 + 8);
    *(int **)(iVar5 + 8) = piVar6;
    if (piVar6 != (int *)0x0) {
      *piVar6 = *piVar6 + 1;
    }
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
  }
  FUN_000ac66c(auStack_30,param_5);
  FUN_000ac92c(param_1,param_2,iVar7,param_3,auStack_30,0);
  FUN_0009f860(auStack_28);
  return;
}



