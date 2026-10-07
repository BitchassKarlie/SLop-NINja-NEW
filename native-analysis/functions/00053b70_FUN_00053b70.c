/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00053b70 FUN_00053b70 */

void FUN_00053b70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x120);
  if (iVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    piVar1 = *(int **)(DAT_00053bb8 + 0x53b7e + DAT_00053bbc);
    iVar4 = *piVar1;
    if (iVar2 < iVar4) {
      *(undefined4 *)(iVar3 + 0x108) = 0;
      iVar3 = *(int *)(param_1 + 0x120);
      if (iVar3 == 0) goto LAB_00053ba4;
      iVar2 = *(int *)(param_1 + 0x78);
      iVar4 = *piVar1;
    }
    if (iVar2 == iVar4) {
      *(undefined4 *)(iVar3 + 0x84) = 0;
    }
  }
LAB_00053ba4:
  FUN_00053534(param_1);
  FUN_00017d64(param_1 + 0x68,0);
  return;
}



