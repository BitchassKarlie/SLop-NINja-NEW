/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00055e9c FUN_00055e9c */

void FUN_00055e9c(void)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00055ee0;
  iVar2 = *(int *)(DAT_00055ee0 + 0x55eaa);
  iVar5 = *(int *)(DAT_00055ee0 + 0x55ea6);
  if ((*(char *)(iVar5 + iVar2 * 0x88 + 0x24) != '\0') &&
     (iVar4 = *(int *)(DAT_00055ee0 + 0x55eae), 0 < iVar4)) {
    iVar3 = 0;
    do {
      __aeabi_idivmod(iVar2 + 1,iVar4);
      *(int *)(iVar1 + 0x55eaa) = extraout_r1;
      if (*(char *)(iVar5 + extraout_r1 * 0x88 + 0x24) == '\0') {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = extraout_r1;
    } while (iVar3 != iVar4);
  }
  return;
}



