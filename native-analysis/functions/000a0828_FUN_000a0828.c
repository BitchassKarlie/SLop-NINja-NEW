/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0828 FUN_000a0828 */

int * FUN_000a0828(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_3 < param_4) {
    iVar3 = DAT_000a0870 + 0xa0848;
    do {
      param_2[1] = 0;
      FUN_000a07fc(param_2 + 1,param_3[1]);
      iVar1 = param_3[2];
      *param_2 = iVar3;
      param_2[2] = iVar1;
      param_2[3] = param_3[3];
      param_2[4] = param_3[4];
      param_2 = param_2 + 5;
      puVar2 = param_3 + 5;
      (**(code **)*param_3)(param_3);
      param_3 = puVar2;
    } while (puVar2 < param_4);
  }
  return param_2;
}



