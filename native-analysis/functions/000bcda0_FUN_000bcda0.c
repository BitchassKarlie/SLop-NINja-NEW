/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bcda0 FUN_000bcda0 */

undefined4 FUN_000bcda0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_5) {
    iVar3 = 0;
    iVar2 = 0;
    iVar4 = 0;
    do {
      if (*(int *)(param_4 + iVar3) != 0) {
        *(undefined4 *)(param_3 + iVar2 * 4) = *(undefined4 *)(param_3 + iVar3);
        iVar2 = iVar2 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 != param_5);
    if (iVar2 != 0) {
      uVar1 = FUN_000bcb88();
      return uVar1;
    }
  }
  return 0;
}



