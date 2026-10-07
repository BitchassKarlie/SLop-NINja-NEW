/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3884 FUN_000a3884 */

int FUN_000a3884(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00017cb8(param_1,param_3);
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    iVar1 = (*(int *)(param_1 + 8) + -1) - iVar2;
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        iVar1 = iVar1 + -1;
        *(undefined *)(iVar2 + iVar3) = *(undefined *)(param_2 + iVar3);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
      } while (param_3 != iVar3);
      iVar2 = *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 0xc) = iVar2 + param_3;
  }
  return param_1;
}



