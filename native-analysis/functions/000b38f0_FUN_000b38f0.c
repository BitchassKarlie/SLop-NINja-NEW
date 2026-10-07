/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b38f0 FUN_000b38f0 */

undefined * FUN_000b38f0(undefined *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined *)operator_new(0xc);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined **)(param_1 + 4) = puVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)operator_new(0xc);
  *puVar2 = local_1c;
  puVar2[1] = uStack_18;
  puVar2[2] = uStack_14;
  *puVar2 = puVar2;
  puVar2[1] = puVar2;
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  FUN_000a7770(param_1);
  return param_1;
}



