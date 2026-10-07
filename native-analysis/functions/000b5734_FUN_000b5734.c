/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5734 FUN_000b5734 */

undefined4 *
FUN_000b5734(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_3 < param_4) {
    do {
      puVar4 = param_3 + 1;
      puVar3 = param_2 + 1;
      *param_2 = *param_3;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2 = param_2 + 5;
      puVar1 = param_3 + 3;
      puVar2 = param_3 + 2;
      param_3 = param_3 + 5;
      FUN_000b56e8(puVar3,puVar3,0,puVar4,*puVar2,puVar4,*puVar1);
      FUN_000b4ebc(puVar4);
    } while (param_3 < param_4);
  }
  return param_2;
}



