/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001ae1c FUN_0001ae1c */

void FUN_0001ae1c(int param_1,undefined4 *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  undefined2 uVar2;
  float fVar3;
  
  fVar1 = DAT_0001ae7c;
  uVar2 = FUN_00092918(param_2[1],*param_2);
  *(undefined2 *)(param_1 + 0x140) = uVar2;
  fVar3 = (float)FUN_000927c8();
  *(float *)(param_1 + 0x138) = fVar3 * fVar1;
  fVar3 = (float)FUN_000927b8(*(undefined2 *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x164) = param_3;
  *(undefined4 *)(param_1 + 0x168) = param_3;
  *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * param_4;
  *(float *)(param_1 + 0x13c) = fVar3 * fVar1 * param_4;
  return;
}



