/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0b6c FUN_000a0b6c */

void FUN_000a0b6c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_000a0b28(param_2,param_1);
  FUN_000abca4(param_2,param_1 + 0x28,4);
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    FUN_000abca4(param_2,param_1 + iVar1 + 0x2c,4);
  } while (iVar2 != 0x10);
  iVar2 = 0;
  FUN_000abca4(param_2,param_1 + 0x6c,4);
  FUN_000abca4(param_2,param_1 + 0x70,4);
  FUN_000abca4(param_2,param_1 + 0x74,4);
  do {
    iVar1 = iVar2 + 0x1e;
    iVar2 = iVar2 + 1;
    FUN_000abca4(param_2,param_1 + iVar1 * 4,4);
  } while (iVar2 != 4);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0x22;
    iVar2 = iVar2 + 1;
    FUN_000abca4(param_2,param_1 + iVar1 * 4,4);
  } while (iVar2 != 9);
  return;
}



