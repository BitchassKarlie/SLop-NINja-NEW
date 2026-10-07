/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a941c FUN_000a941c */

void FUN_000a941c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    while( true ) {
      FUN_000221ac(iVar2);
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_000a93cc(param_1);
  return;
}



