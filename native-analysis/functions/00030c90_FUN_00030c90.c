/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030c90 FUN_00030c90 */

undefined4 * FUN_00030c90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)operator_new(0x5c);
  *puVar1 = *param_2;
  memcpy(puVar1 + 1,param_2 + 1,0x48);
  puVar1[0x13] = param_2[0x13];
  puVar1[0x14] = param_2[0x14];
  puVar1[0x15] = param_2[0x15];
  puVar1[0x16] = param_2[0x16];
  if (param_2[0x14] != 0) {
    iVar2 = FUN_00030c90(param_1);
    puVar1[0x14] = iVar2;
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
  }
  if (param_2[0x15] != 0) {
    iVar2 = FUN_00030c90(param_1);
    puVar1[0x15] = iVar2;
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
  }
  return puVar1;
}



