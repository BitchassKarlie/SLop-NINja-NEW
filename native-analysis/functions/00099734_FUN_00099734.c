/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099734 FUN_00099734 */

undefined4 * FUN_00099734(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  
  if (param_2[1] == 0) {
    FUN_00099718();
  }
  else {
    do {
      iVar2 = *(int *)(param_2[1] + 0xc);
      if (iVar2 == 0) {
        FUN_00099718(param_1,0);
        return param_1;
      }
      iVar1 = FUN_000a75e8(param_2[1] + 0xc,iVar2 + 1,iVar2);
    } while (iVar2 != iVar1);
    FUN_00099718(&local_14,*param_2);
    FUN_000a7490(param_2[1] + 0xc);
    *param_1 = 0;
    FUN_00017d64(param_1,local_14);
    FUN_00017d90(&local_14);
  }
  return param_1;
}



