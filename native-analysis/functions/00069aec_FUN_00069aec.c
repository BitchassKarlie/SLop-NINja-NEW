/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00069aec FUN_00069aec */

undefined4 * FUN_00069aec(void)

{
  undefined4 *puVar1;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined auStack_3b0 [240];
  undefined auStack_2c0 [96];
  undefined auStack_260 [592];
  
  puVar1 = (undefined4 *)operator_new(0x3a8);
  FUN_00069964(auStack_3b0);
  *puVar1 = local_3b8;
  puVar1[1] = local_3b4;
  FUN_000697c4(puVar1 + 2,auStack_3b0);
  FUN_00068a88(auStack_260);
  FUN_00017d90(auStack_2c0);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  return puVar1;
}



