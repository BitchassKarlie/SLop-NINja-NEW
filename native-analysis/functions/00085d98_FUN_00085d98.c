/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085d98 FUN_00085d98 */

void FUN_00085d98(int param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = FUN_00085428();
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_00085c80(param_1);
  fVar2 = *(float *)(param_1 + 0x4c) + param_2 * *(float *)(param_1 + 0x50);
  if ((int)((uint)(fVar2 < DAT_00085de0) << 0x1f) < 0) {
    fVar2 = DAT_00085de0;
  }
  *(float *)(param_1 + 0x60) = fVar2;
  return;
}



