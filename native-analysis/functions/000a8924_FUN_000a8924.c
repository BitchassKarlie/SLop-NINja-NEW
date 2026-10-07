/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8924 FUN_000a8924 */

int * FUN_000a8924(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = DAT_000a8988;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = iVar1 + 0xa894a;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = FUN_000a7cd4(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xd] = iVar1;
  iVar1 = FUN_000a7cd4(param_1 + 0xf);
  param_1[0x11] = 0;
  param_1[0x10] = iVar1;
  if (param_3 != param_5) {
    do {
      iVar1 = param_3 + 4;
      FUN_000a88b8(param_1,param_3);
      param_3 = iVar1;
    } while (param_5 != iVar1);
  }
  return param_1;
}



