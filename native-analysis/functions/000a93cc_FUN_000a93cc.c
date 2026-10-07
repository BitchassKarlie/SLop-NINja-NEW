/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a93cc FUN_000a93cc */

void FUN_000a93cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x44);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    while( true ) {
      FUN_000a939c(iVar2);
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    while( true ) {
      FUN_000a93b4(iVar2);
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



