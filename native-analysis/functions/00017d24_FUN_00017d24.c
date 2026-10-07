/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017d24 FUN_00017d24 */

int FUN_00017d24(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000a7490(param_1 + 1);
  if (iVar1 == 0) {
    if (param_1[2] != 0) {
      iVar2 = FUN_000a75e8(param_1[2] + 0xc,0,1);
      if (iVar2 != 1) {
        if (param_1[1] != 0) {
          return param_1[1];
        }
        return 1;
      }
      FUN_00017d24(param_1[2]);
    }
    (**(code **)(*param_1 + 4))(param_1);
  }
  return iVar1;
}



