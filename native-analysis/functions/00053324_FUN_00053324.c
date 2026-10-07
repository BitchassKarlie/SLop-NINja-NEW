/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00053324 FUN_00053324 */

void FUN_00053324(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == 0) {
    fVar1 = *(float *)(param_1 + 0xf0);
    fVar2 = fVar1;
    if (fVar1 < 0.0 == NAN(fVar1)) {
      fVar2 = DAT_0005335c;
    }
    if (fVar1 < 0.0 == NAN(fVar1)) {
      *(float *)(param_1 + 0xf0) = fVar2;
    }
  }
  else if ((int)((uint)(*(float *)(param_1 + 0xf0) < 0.0) << 0x1f) < 0) {
    *(undefined4 *)(param_1 + 0xf0) = DAT_00053358;
  }
  return;
}



