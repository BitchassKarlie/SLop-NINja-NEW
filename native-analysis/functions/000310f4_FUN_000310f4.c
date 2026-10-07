/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000310f4 FUN_000310f4 */

undefined4 * FUN_000310f4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)operator_new(0x18);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  if (param_2[3] != 0) {
    iVar2 = FUN_000310f4(param_1);
    puVar1[3] = iVar2;
    *(undefined4 **)(iVar2 + 0x14) = puVar1;
  }
  if (param_2[4] != 0) {
    iVar2 = FUN_000310f4(param_1);
    puVar1[4] = iVar2;
    *(undefined4 **)(iVar2 + 0x14) = puVar1;
  }
  return puVar1;
}



