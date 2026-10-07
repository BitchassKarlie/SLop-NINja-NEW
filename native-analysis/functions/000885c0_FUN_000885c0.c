/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000885c0 FUN_000885c0 */

undefined4 * FUN_000885c0(void)

{
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined auStack_28 [4];
  void *local_24;
  void *local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined4 *)operator_new(0x28);
  local_24 = (void *)0x0;
  local_20 = (void *)0x0;
  local_1c = 0;
  *puVar1 = local_30;
  puVar1[1] = local_2c;
  FUN_00085940(puVar1 + 2,auStack_28);
  local_20 = local_24;
  if (local_24 != (void *)0x0) {
    operator_delete(local_24);
  }
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  return puVar1;
}



