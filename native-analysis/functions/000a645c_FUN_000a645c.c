/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a645c FUN_000a645c */

bool FUN_000a645c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000a6474 + 0xa6464 + DAT_000a6478);
  bVar1 = *(int *)(iVar2 + 8) == 0;
  if (bVar1) {
    *(undefined4 *)(iVar2 + 8) = 1;
  }
  return bVar1;
}



