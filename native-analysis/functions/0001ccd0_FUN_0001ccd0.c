/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001ccd0 FUN_0001ccd0 */

int FUN_0001ccd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_0001cd18;
  iVar6 = *(int *)(DAT_0001cd18 + 0x1ccda);
  iVar2 = iVar6;
  if (iVar6 != 0) {
    iVar3 = *(int *)(DAT_0001cd18 + 0x1ccde);
    iVar2 = iVar6 + iVar3 * 0x44;
    if ((*(char *)(iVar2 + 0x40) != '\0') && (iVar5 = *(int *)(DAT_0001cd18 + 0x1cce2), 0 < iVar5))
    {
      iVar4 = 0;
      do {
        __aeabi_idivmod(iVar3 + 1,iVar5);
        *(int *)(iVar1 + 0x1ccde) = extraout_r1;
        iVar2 = iVar6 + extraout_r1 * 0x44;
        if (*(char *)(iVar2 + 0x40) == '\0') {
          return iVar2;
        }
        iVar4 = iVar4 + 1;
        iVar3 = extraout_r1;
      } while (iVar4 != iVar5);
    }
  }
  return iVar2;
}



