/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00096348 FUN_00096348 */

undefined4
FUN_00096348(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = DAT_000964ac;
  if (param_6 == (float *)0x0) {
LAB_00096462:
    uVar1 = 1;
  }
  else {
    fVar8 = *param_2 + *param_3 * DAT_000964a8;
    fVar4 = param_3[1];
    if ((-1 < (int)((uint)(*param_3 + fVar8 < *param_6) << 0x1f)) &&
       (fVar7 = param_6[2], fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7)))) {
      fVar8 = param_6[3];
      fVar7 = param_2[1] + fVar4 * DAT_000964ac;
      if (-1 < (int)((uint)(fVar7 < fVar8) << 0x1f)) {
        fVar6 = fVar7 - fVar4;
        fVar2 = param_6[1];
        if (fVar6 == fVar2 || fVar6 < fVar2 != (NAN(fVar6) || NAN(fVar2))) {
          if (fVar7 != fVar2 && fVar7 < fVar2 == (NAN(fVar7) || NAN(fVar2))) {
            fVar8 = *param_5;
            fVar7 = fVar7 + (fVar2 - fVar7);
            fVar2 = fVar6 - fVar7;
            if ((int)((uint)(fVar2 < 0.0) << 0x1f) < 0) {
              fVar3 = -fVar2;
              *param_4 = fVar8 - (fVar8 - *param_4) * (fVar3 / fVar4);
              param_2[1] = fVar7 + fVar2 * fVar5;
            }
            else {
              *param_4 = fVar8 - (fVar8 - *param_4) * (fVar2 / fVar4);
              param_2[1] = fVar7 + fVar2 * fVar5;
              fVar3 = fVar2;
            }
            param_3[1] = fVar3;
            fVar8 = param_6[3];
          }
          if ((int)((uint)(fVar6 < fVar8) << 0x1f) < 0) {
            fVar5 = *param_4;
            fVar4 = (fVar6 + (fVar8 - fVar6)) - fVar7;
            if ((int)((uint)(fVar4 < 0.0) << 0x1f) < 0) {
              fVar8 = -fVar4;
              *param_5 = fVar5 + (*param_5 - fVar5) * (fVar8 / param_3[1]);
              param_2[1] = fVar7 + fVar4 * DAT_000964ac;
            }
            else {
              fVar8 = fVar4 * DAT_000964ac;
              *param_5 = fVar5 + (*param_5 - fVar5) * (fVar4 / param_3[1]);
              param_2[1] = fVar7 + fVar8;
              fVar8 = fVar4;
            }
            param_3[1] = fVar8;
            return 1;
          }
          goto LAB_00096462;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



