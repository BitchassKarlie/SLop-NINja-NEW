/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00096ae0 FUN_00096ae0 */

int FUN_00096ae0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00096ad8();
  FUN_00096ad8(param_1 + 4);
  FUN_00096ad8(param_1 + 8);
  uVar1 = DAT_00096b4c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = DAT_00096b50;
  *(undefined *)(param_1 + 0x17) = 0xff;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = DAT_00096b54;
  *(undefined *)(param_1 + 0x16) = 0x3e;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined *)(param_1 + 0x15) = 0x24;
  uVar2 = DAT_00096b58;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined *)(param_1 + 0x14) = 9;
  uVar1 = DAT_00096b5c;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0x168;
  return param_1;
}



