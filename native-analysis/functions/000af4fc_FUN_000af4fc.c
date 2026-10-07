/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af4fc FUN_000af4fc */

int FUN_000af4fc(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (param_3 < param_4) {
    do {
      FUN_000af4b4(param_2,param_3);
      FUN_00093aa4(param_3 + 0x28);
      uVar1 = param_3 + 0x38;
      FUN_0009e858(param_3);
      param_2 = param_2 + 0x38;
      param_3 = uVar1;
    } while (uVar1 < param_4);
  }
  return param_2;
}



