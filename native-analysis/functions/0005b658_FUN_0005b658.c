/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005b658 FUN_0005b658 */

void FUN_0005b658(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0005b69c + 0x5b66c;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x90) * 4) + 0x9c) == '\0') {
    iVar1 = FUN_000792f8();
    if ((*(int *)(*(int *)(iVar2 + DAT_0005b6a0) + 0x24) < iVar1) || (2 < *(int *)(param_1 + 0x134))
       ) {
      *(undefined4 *)(param_1 + 0x130) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x130) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x130) = 2;
  }
  return;
}



