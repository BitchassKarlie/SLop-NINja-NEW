/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002c85c FUN_0002c85c */

void FUN_0002c85c(void)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_0002c8a0;
  iVar2 = *(int *)(DAT_0002c8a0 + 0x2c86e);
  iVar5 = *(int *)(DAT_0002c8a0 + 0x2c86a);
  if ((*(char *)(iVar5 + iVar2 * 0x78 + 0x75) != '\0') &&
     (iVar4 = *(int *)(DAT_0002c8a0 + 0x2c872), 0 < iVar4)) {
    iVar3 = 0;
    do {
      __aeabi_idivmod(iVar2 + 1,iVar4);
      *(int *)(iVar1 + 0x2c86e) = extraout_r1;
      if (*(char *)(iVar5 + extraout_r1 * 0x78 + 0x75) == '\0') {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = extraout_r1;
    } while (iVar3 != iVar4);
  }
  return;
}



