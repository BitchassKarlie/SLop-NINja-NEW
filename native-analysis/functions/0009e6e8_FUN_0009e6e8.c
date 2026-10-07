/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e6e8 FUN_0009e6e8 */

void FUN_0009e6e8(uint *param_1,int param_2)

{
  if (param_2 != *param_1 - 1) {
    param_1[9] = 0;
    FUN_0009e634(param_1,param_2 + 1,param_2);
    if (*param_1 < 0x21) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (uint *)param_1[1];
    }
    *(undefined *)((int)param_1 + param_2) = 0;
  }
  return;
}



