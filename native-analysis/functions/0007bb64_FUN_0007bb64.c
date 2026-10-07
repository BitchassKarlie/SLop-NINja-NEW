/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007bb64 FUN_0007bb64 */

int FUN_0007bb64(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined4 *)operator_new(0xc);
  *puVar1 = local_1c;
  puVar1[1] = uStack_18;
  puVar1[2] = uStack_14;
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  *(undefined4 **)(param_1 + 0x14) = puVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar2 = FUN_0007b668(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  puVar1 = (undefined4 *)operator_new(0xc);
  uVar2 = DAT_0007bbcc;
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  *(undefined4 **)(param_1 + 0x4c) = puVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  return param_1;
}



