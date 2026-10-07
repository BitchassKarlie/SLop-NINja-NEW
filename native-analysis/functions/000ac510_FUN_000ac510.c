/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac510 FUN_000ac510 */

void FUN_000ac510(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 uint *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  for (uVar5 = param_5 - param_3 >> 4; 0 < (int)uVar5; uVar5 = uVar5 + ~uVar1) {
    iVar3 = ((int)uVar5 >> 1) * 0x10;
    uVar4 = *(uint *)(param_3 + iVar3);
    uVar2 = (int)uVar5 >> 1;
    while (uVar1 = uVar2, *param_6 <= uVar4) {
      if (uVar1 == 0) goto LAB_000ac55a;
      iVar3 = ((int)uVar1 >> 1) * 0x10;
      uVar2 = (int)uVar1 >> 1;
      uVar5 = uVar1;
      uVar4 = *(uint *)(param_3 + iVar3);
    }
    param_3 = param_3 + iVar3 + 0x10;
  }
LAB_000ac55a:
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}



