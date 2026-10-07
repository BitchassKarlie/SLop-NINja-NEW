/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8258 FUN_000a8258 */

undefined4 *
FUN_000a8258(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = param_3;
  puVar3 = param_2;
  if (param_3 < param_4) {
    do {
      *puVar3 = 0;
      FUN_000a07fc(puVar3,*puVar1);
      puVar2 = puVar1 + 2;
      puVar3[1] = puVar1[1];
      FUN_000a08c8(puVar1);
      puVar1 = puVar2;
      puVar3 = puVar3 + 2;
    } while (puVar2 < param_4);
    param_2 = (undefined4 *)((int)param_2 + ((int)param_4 + ~(uint)param_3 & 0xfffffff8) + 8);
  }
  return param_2;
}



