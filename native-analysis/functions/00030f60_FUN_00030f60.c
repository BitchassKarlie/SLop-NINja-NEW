/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030f60 FUN_00030f60 */

undefined4 * FUN_00030f60(void)

{
  undefined4 *puVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined auStack_34 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)operator_new(0x1c);
  local_30 = (undefined4 *)operator_new(0x10);
  *local_30 = local_20;
  local_30[1] = uStack_1c;
  local_30[2] = uStack_18;
  local_30[3] = uStack_14;
  *local_30 = local_30;
  local_30[1] = local_30;
  local_2c = 0;
  *puVar1 = local_3c;
  puVar1[1] = local_38;
  FUN_00030f30(puVar1 + 2,auStack_34);
  puVar1[5] = local_28;
  puVar1[6] = local_24;
  FUN_0003052c(auStack_34);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  return puVar1;
}



