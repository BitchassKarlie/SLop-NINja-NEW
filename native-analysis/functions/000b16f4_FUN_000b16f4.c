/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b16f4 FUN_000b16f4 */

undefined4 *
FUN_000b16f4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (param_3 < param_4) {
    do {
      *param_2 = 0;
      FUN_000a07fc(param_2,*param_3);
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
      puVar1 = param_3 + 5;
      param_2[4] = param_3[4];
      param_2 = param_2 + 5;
      FUN_000a08c8(param_3);
      param_3 = puVar1;
    } while (puVar1 < param_4);
  }
  return param_2;
}



