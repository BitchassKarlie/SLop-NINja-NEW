/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004b320 FUN_0004b320 */

void FUN_0004b320(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 3) == ':') {
      if (0 < *(int *)(iVar2 + 0x98)) {
        iVar1 = *(int *)(iVar2 + 0x98) + -1;
        *(int *)(iVar2 + 0x98) = iVar1;
        *(undefined *)(*(int *)(iVar2 + 0x9c) + iVar1) = 0;
      }
    }
    else {
      FUN_0004b2a0(iVar2,*(char *)(param_1 + 3),*(undefined4 *)(param_1[2] + 0x20));
    }
  }
  return;
}



