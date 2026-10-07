/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d514 FUN_0008d514 */

void FUN_0008d514(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStack_50 [16];
  
  if (param_8 == (undefined4 *)0x0) {
    param_8 = auStack_50;
  }
  FUN_0008d390(param_2,param_3,param_4,param_5,param_6,param_7,DAT_0008d57c,param_8);
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *(undefined4 *)(param_1 + 0x804) = *param_8;
  *(undefined4 *)(param_1 + 0x808) = uVar1;
  *(undefined4 *)(param_1 + 0x80c) = uVar2;
  *(undefined4 *)(param_1 + 0x810) = uVar3;
  uVar1 = param_8[5];
  uVar2 = param_8[6];
  uVar3 = param_8[7];
  *(undefined4 *)(param_1 + 0x814) = param_8[4];
  *(undefined4 *)(param_1 + 0x818) = uVar1;
  *(undefined4 *)(param_1 + 0x81c) = uVar2;
  *(undefined4 *)(param_1 + 0x820) = uVar3;
  uVar1 = param_8[9];
  uVar2 = param_8[10];
  uVar3 = param_8[0xb];
  *(undefined4 *)(param_1 + 0x824) = param_8[8];
  *(undefined4 *)(param_1 + 0x828) = uVar1;
  *(undefined4 *)(param_1 + 0x82c) = uVar2;
  *(undefined4 *)(param_1 + 0x830) = uVar3;
  uVar1 = param_8[0xd];
  uVar2 = param_8[0xe];
  uVar3 = param_8[0xf];
  *(undefined4 *)(param_1 + 0x834) = param_8[0xc];
  *(undefined4 *)(param_1 + 0x838) = uVar1;
  *(undefined4 *)(param_1 + 0x83c) = uVar2;
  *(undefined4 *)(param_1 + 0x840) = uVar3;
  *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + 1;
  FUN_0008d434(param_1,0);
  return;
}



