/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009476c FUN_0009476c */

int FUN_0009476c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (*(int *)(param_1 + 8) - iVar2 >> 2) * 0x2fa0be83;
  if (iVar1 == 0) {
LAB_000947b6:
    iVar4 = -1;
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    while (iVar2 = FUN_00093c34(iVar2 + iVar3,param_2), iVar2 == 0) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xac;
      if (iVar4 == iVar1) goto LAB_000947b6;
      iVar2 = *(int *)(param_1 + 4);
    }
  }
  return iVar4;
}



