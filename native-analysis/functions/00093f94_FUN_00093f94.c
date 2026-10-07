/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093f94 FUN_00093f94 */

undefined4 FUN_00093f94(undefined4 param_1,int param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack_30 [28];
  
  ppiVar1 = *(int ***)(param_2 + 0x38);
  ppiVar2 = *(int ***)(param_2 + 0x3c);
  (**(code **)(**ppiVar1 + 0x14))();
  while (ppiVar1 = ppiVar1 + 1, ppiVar2 != ppiVar1) {
    (**(code **)(**ppiVar1 + 0x14))(auStack_30);
    FUN_00093ea4(param_1,auStack_30);
  }
  return param_1;
}



