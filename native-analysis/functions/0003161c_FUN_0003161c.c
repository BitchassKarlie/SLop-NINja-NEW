/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003161c FUN_0003161c */

void FUN_0003161c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003164c;
  iVar2 = *(int *)(DAT_00031644 + 0x31624 + DAT_00031648);
  *(undefined *)(iVar2 + 0x194) = 1;
  if ((*(char *)((int)&DAT_00031644 + iVar1 + 2) == '\0') && (*(int *)(iVar2 + 0x40) != 0)) {
    FUN_00049cc8();
    FUN_000313d0(1);
  }
  return;
}



