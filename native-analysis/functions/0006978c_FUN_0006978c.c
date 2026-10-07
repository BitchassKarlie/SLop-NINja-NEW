/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006978c FUN_0006978c */

undefined4 * FUN_0006978c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)operator_new(0x20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  FUN_00017cb8(puVar2 + 2,0);
  uVar1 = DAT_000697c0;
  *puVar2 = puVar2;
  puVar2[6] = uVar1;
  puVar2[7] = uVar1;
  puVar2[1] = puVar2;
  return puVar2;
}



