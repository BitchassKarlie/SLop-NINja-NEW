/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006cd74 FUN_0006cd74 */

void FUN_0006cd74(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0006cdb4 + 0x6cd7c + DAT_0006cdb8);
  *(undefined *)(iVar2 + 0x19c) = 1;
  FUN_000a3a68();
  iVar1 = FUN_00094cac();
  if ((iVar1 == 0) || (*(char *)(*(int *)(iVar2 + 0x50) + 0x30) != '\0')) {
    FUN_0006cce4(0,1);
  }
  else if (param_1 == 0) {
    FUN_000a3a68();
    FUN_00094c8c();
  }
  return;
}



