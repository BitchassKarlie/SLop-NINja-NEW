/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4374 FUN_000b4374 */

bool FUN_000b4374(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_000b433c(param_2,param_3 + 4);
  if (((iVar1 == 0) || (*(int *)(param_2 + 8) != *(int *)(param_3 + 0x10))) ||
     (iVar1 = FUN_000b69c4(param_2,param_3), iVar1 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_2 + 4) == *(int *)(param_3 + 8);
  }
  return bVar2;
}



