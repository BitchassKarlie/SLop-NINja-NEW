/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006a8c0 FUN_0006a8c0 */

void FUN_0006a8c0(int param_1,undefined4 param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_000927c8(param_2);
  uVar4 = FUN_000927b8(param_2);
  fVar2 = DAT_0006a938;
  bVar1 = param_3 != DAT_0006a938;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  *(float *)(param_1 + 0xc4) = fVar2;
  if (bVar1) {
    *(float *)(param_1 + 0x10) = param_3 * *(float *)(param_1 + 0xbc);
    *(float *)(param_1 + 0x14) = param_3 * *(float *)(param_1 + 0xc0);
    *(float *)(param_1 + 0x18) = param_3 * *(float *)(param_1 + 0xc4);
  }
  return;
}



