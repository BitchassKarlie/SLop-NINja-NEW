/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc1f0 FUN_000bc1f0 */

void FUN_000bc1f0(undefined4 param_1,int param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      uVar1 = FUN_000c28b4(param_1,8);
      *(undefined *)(param_2 + iVar2) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_3);
  }
  return;
}



