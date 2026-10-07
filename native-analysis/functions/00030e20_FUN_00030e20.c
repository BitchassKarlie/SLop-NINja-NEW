/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030e20 FUN_00030e20 */

int FUN_00030e20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  pvVar2 = operator_new(0x38);
  *(undefined4 *)((int)pvVar2 + 8) = local_40;
  *(undefined4 *)((int)pvVar2 + 0xc) = local_3c;
  *(undefined4 *)((int)pvVar2 + 0x10) = local_38;
  *(undefined4 *)((int)pvVar2 + 0x14) = local_34;
  *(undefined4 *)((int)pvVar2 + 0x18) = local_30;
  *(undefined4 *)((int)pvVar2 + 0x1c) = local_2c;
  *(undefined4 *)((int)pvVar2 + 0x20) = local_28;
  *(undefined4 *)((int)pvVar2 + 0x24) = local_24;
  *(undefined *)((int)pvVar2 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar2 + 0x28) = local_20;
  *(undefined4 *)((int)pvVar2 + 0x30) = 0;
  *(void **)pvVar2 = pvVar2;
  uVar1 = DAT_00030e9c;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x34) = uVar1;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00030db4(param_1,param_2);
  return param_1;
}



