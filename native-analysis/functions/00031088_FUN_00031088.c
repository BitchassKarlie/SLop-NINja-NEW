/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031088 FUN_00031088 */

undefined4 * FUN_00031088(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)operator_new(0x98);
  *puVar1 = *param_2;
  memcpy(puVar1 + 1,param_2 + 1,0x84);
  puVar1[0x22] = param_2[0x22];
  puVar1[0x23] = param_2[0x23];
  puVar1[0x24] = param_2[0x24];
  puVar1[0x25] = param_2[0x25];
  if (param_2[0x23] != 0) {
    iVar2 = FUN_00031088(param_1);
    puVar1[0x23] = iVar2;
    *(undefined4 **)(iVar2 + 0x94) = puVar1;
  }
  if (param_2[0x24] != 0) {
    iVar2 = FUN_00031088(param_1);
    puVar1[0x24] = iVar2;
    *(undefined4 **)(iVar2 + 0x94) = puVar1;
  }
  return puVar1;
}



