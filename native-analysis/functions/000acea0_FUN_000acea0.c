/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000acea0 FUN_000acea0 */

void FUN_000acea0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  undefined auStack_28 [8];
  undefined auStack_20 [12];
  
  *param_6 = *param_2;
  param_6[1] = param_2[1];
  FUN_0009f860(param_6 + 2);
  piVar1 = (int *)param_2[2];
  param_6[2] = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  param_6[3] = param_2[3];
  FUN_000ac66c(auStack_28,param_7);
  FUN_000ac9d8(param_1,param_2,0,param_4 - (int)param_2 >> 4,auStack_28,0);
  FUN_0009f860(auStack_20);
  return;
}



