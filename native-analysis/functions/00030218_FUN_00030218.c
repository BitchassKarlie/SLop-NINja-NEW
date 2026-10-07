/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030218 FUN_00030218 */

int FUN_00030218(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00030230 + 0x30222);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc0) < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}



