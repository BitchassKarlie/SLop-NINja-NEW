/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000988b4 FUN_000988b4 */

void FUN_000988b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_2 + param_3) - param_2;
  if ((iVar3 != 0) &&
     (iVar1 = FUN_00098828(param_1 + 4,*(undefined4 *)(param_1 + 0xc),iVar3),
     param_2 != param_2 + param_3)) {
    iVar2 = 0;
    do {
      *(undefined *)(iVar1 + iVar2) = *(undefined *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar3);
  }
  return;
}



