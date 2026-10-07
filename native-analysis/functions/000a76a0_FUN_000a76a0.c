/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a76a0 FUN_000a76a0 */

void FUN_000a76a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_000b6ad8(param_1 + 3,1,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      (**(code **)(*param_1 + 0xc))(param_1);
      param_1[3] = 2;
    }
    else {
      param_1[3] = 3;
    }
  }
  return;
}



