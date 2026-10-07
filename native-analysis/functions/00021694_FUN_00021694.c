/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00021694 FUN_00021694 */

undefined4 FUN_00021694(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0xa0);
  if ((int)((uint)(fVar2 < 0.0) << 0x1f) < 0) {
    fVar2 = -fVar2;
  }
  if (fVar2 == 0.0 || fVar2 < 0.0 != NAN(fVar2)) {
    fVar2 = *(float *)(param_1 + 0x9c);
    if ((int)((uint)(fVar2 < 0.0) << 0x1f) < 0) {
      fVar2 = -fVar2;
    }
    if (fVar2 == 0.0 || fVar2 < 0.0 != NAN(fVar2)) {
      return 0;
    }
    fVar3 = DAT_00021760 + *(float *)(param_1 + 0x2c) * DAT_00021758;
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = -fVar3;
    if (((-1 < (int)((uint)(fVar1 < fVar2) << 0x1f)) &&
        (fVar1 == fVar3 || fVar1 < fVar3 != (NAN(fVar1) || NAN(fVar3)))) &&
       (fVar1 = *(float *)(param_1 + 0xb8),
       fVar2 == fVar1 || fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1)))) goto LAB_000216ea;
  }
  else {
    fVar3 = DAT_0002175c + *(float *)(param_1 + 0x2c) * DAT_00021758;
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = -fVar3;
    if (((-1 < (int)((uint)(fVar1 < fVar2) << 0x1f)) &&
        (fVar1 == fVar3 || fVar1 < fVar3 != (NAN(fVar1) || NAN(fVar3)))) &&
       (fVar1 = *(float *)(param_1 + 0xbc),
       fVar2 == fVar1 || fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1)))) {
LAB_000216ea:
      if ((int)((uint)(fVar3 < fVar1) << 0x1f) < 0) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}



