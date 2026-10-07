/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093fcc FUN_00093fcc */

void FUN_00093fcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar2 = *(int ***)(param_1 + 0x3c);
  for (ppiVar1 = *(int ***)(param_1 + 0x38); ppiVar2 != ppiVar1; ppiVar1 = ppiVar1 + 1) {
    (**(code **)(**ppiVar1 + 0x18))(*ppiVar1,param_2,param_3,param_4);
  }
  return;
}



