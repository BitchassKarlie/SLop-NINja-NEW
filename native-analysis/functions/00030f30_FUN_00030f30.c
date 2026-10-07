/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030f30 FUN_00030f30 */

int FUN_00030f30(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *puVar1 = local_20;
  puVar1[1] = uStack_1c;
  puVar1[2] = uStack_18;
  puVar1[3] = uStack_14;
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  *(undefined4 **)(param_1 + 4) = puVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00030ea0(param_1,param_2);
  return param_1;
}



