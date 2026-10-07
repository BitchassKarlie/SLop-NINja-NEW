/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002c8a4 FUN_0002c8a4 */

void FUN_0002c8a4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0002c8cc;
  if (0 < *(int *)(DAT_0002c8cc + 0x2c8b8)) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + 0x2c8b0) + iVar4;
      iVar4 = iVar4 + 0x78;
      *(undefined *)(iVar2 + 0x75) = 0;
    } while (iVar3 < *(int *)(iVar1 + 0x2c8b8));
  }
  return;
}



