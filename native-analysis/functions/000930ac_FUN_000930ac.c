/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000930ac FUN_000930ac */

int * FUN_000930ac(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    if (*param_1 == 0) {
      piVar1 = (int *)operator_new__(param_1[1]);
    }
    else {
      piVar1 = (int *)FUN_00093824(*param_1,param_1[1],param_2);
    }
  }
  else {
    param_1[2] = *piVar1;
  }
  return piVar1;
}



