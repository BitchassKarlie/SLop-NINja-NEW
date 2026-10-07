/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004a26c FUN_0004a26c */

int FUN_0004a26c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar2 = (undefined4 *)operator_new(0xc);
  uVar1 = DAT_0004a2b0;
  *puVar2 = local_14;
  puVar2[1] = uStack_10;
  puVar2[2] = uStack_c;
  *puVar2 = puVar2;
  puVar2[1] = puVar2;
  *(undefined4 **)(param_1 + 4) = puVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return param_1;
}



