/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b22e0 FUN_000b22e0 */

void FUN_000b22e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  FUN_000b228c();
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 0;
  FUN_000a07fc(puVar1,*param_2);
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x14;
  return;
}



