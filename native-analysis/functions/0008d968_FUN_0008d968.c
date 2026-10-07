/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d968 FUN_0008d968 */

void FUN_0008d968(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                 float param_6,undefined4 *param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 auStack_60 [16];
  
  if (param_7 == (undefined4 *)0x0) {
    param_7 = auStack_60;
  }
  FUN_00092720(0x3f800000,param_5 - param_6);
  param_7[1] = DAT_0008da48;
  param_7[0xb] = DAT_0008da4c;
  param_7[2] = DAT_0008da48;
  param_7[3] = DAT_0008da48;
  param_7[4] = DAT_0008da48;
  param_7[6] = DAT_0008da48;
  param_7[7] = DAT_0008da48;
  param_7[8] = DAT_0008da48;
  param_7[9] = DAT_0008da48;
  param_7[0xc] = DAT_0008da48;
  param_7[0xd] = DAT_0008da48;
  param_7[0xf] = DAT_0008da48;
  param_7[5] = param_3 / param_2;
  fVar1 = (float)FUN_0009273c();
  FUN_00092720(param_3 / param_2,param_4);
  param_7[10] = fVar1 * (param_5 + param_6);
  param_7[0xe] = fVar1 * param_6 * (param_5 + param_5);
  uVar2 = FUN_0009273c();
  *param_7 = uVar2;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = param_7[3];
  *(undefined4 *)(param_1 + 0x804) = *param_7;
  *(undefined4 *)(param_1 + 0x808) = uVar2;
  *(undefined4 *)(param_1 + 0x80c) = uVar3;
  *(undefined4 *)(param_1 + 0x810) = uVar4;
  uVar2 = param_7[5];
  uVar3 = param_7[6];
  uVar4 = param_7[7];
  *(undefined4 *)(param_1 + 0x814) = param_7[4];
  *(undefined4 *)(param_1 + 0x818) = uVar2;
  *(undefined4 *)(param_1 + 0x81c) = uVar3;
  *(undefined4 *)(param_1 + 0x820) = uVar4;
  uVar2 = param_7[9];
  uVar3 = param_7[10];
  uVar4 = param_7[0xb];
  *(undefined4 *)(param_1 + 0x824) = param_7[8];
  *(undefined4 *)(param_1 + 0x828) = uVar2;
  *(undefined4 *)(param_1 + 0x82c) = uVar3;
  *(undefined4 *)(param_1 + 0x830) = uVar4;
  uVar2 = param_7[0xd];
  uVar3 = param_7[0xe];
  uVar4 = param_7[0xf];
  *(undefined4 *)(param_1 + 0x834) = param_7[0xc];
  *(undefined4 *)(param_1 + 0x838) = uVar2;
  *(undefined4 *)(param_1 + 0x83c) = uVar3;
  *(undefined4 *)(param_1 + 0x840) = uVar4;
  *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + 1;
  FUN_0008d434(param_1,0);
  return;
}



