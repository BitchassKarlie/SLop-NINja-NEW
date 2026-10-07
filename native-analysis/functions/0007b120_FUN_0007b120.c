/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b120 FUN_0007b120 */

int FUN_0007b120(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  FUN_00079970(param_1,param_1,*(undefined4 *)(param_1 + 4),param_2,uVar2,param_2,uVar1);
  FUN_0007b0c0(param_1 + 0x10,param_2 + 0x10,*(undefined4 *)(param_2 + 0x14),param_2 + 0x10,
               *(undefined4 *)(param_2 + 0x18));
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  FUN_00079ae8(param_1 + 0x20,param_1 + 0x20,*(undefined4 *)(param_1 + 0x24),param_2 + 0x20,uVar2,
               param_2 + 0x20,uVar1);
  FUN_00079e20(param_1 + 0x30,param_2 + 0x30,*(undefined4 *)(param_2 + 0x34),param_2 + 0x30,
               *(undefined4 *)(param_2 + 0x38));
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  return param_1;
}



