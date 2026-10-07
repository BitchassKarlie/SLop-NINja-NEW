/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aec54 FUN_000aec54 */

undefined4 *
FUN_000aec54(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *pvVar1;
  
  if (param_3 < param_4) {
    do {
      *param_2 = *param_3;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      FUN_000aebdc(param_2 + 1,param_2 + 1,0,param_3 + 1,param_3[2],param_3 + 1,param_3[3]);
      pvVar1 = (void *)param_3[2];
      param_3[3] = pvVar1;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      param_3 = param_3 + 5;
      param_2 = param_2 + 5;
    } while (param_3 < param_4);
  }
  return param_2;
}



