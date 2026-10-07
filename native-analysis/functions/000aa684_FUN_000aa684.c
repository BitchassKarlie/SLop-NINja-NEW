/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aa684 FUN_000aa684 */

undefined4 FUN_000aa684(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  fVar8 = ABS(fVar7) - (*(float *)(param_1 + 0x14) + *(float *)(param_2 + 0x14));
  if (fVar8 < 0.0 != NAN(fVar8)) {
    fVar4 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
    fVar6 = ABS(fVar4) - (*(float *)(param_1 + 0x18) + *(float *)(param_2 + 0x18));
    if (fVar6 < 0.0 != NAN(fVar6)) {
      fVar3 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
      fVar5 = ABS(fVar3) - (*(float *)(param_1 + 0x1c) + *(float *)(param_2 + 0x1c));
      if (fVar5 < 0.0 != NAN(fVar5)) {
        if (param_3 == (float *)0x0) {
          return 1;
        }
        fVar8 = ABS(fVar8);
        fVar6 = ABS(fVar6);
        fVar1 = *(float *)(DAT_000aa7ac + 0xaa718);
        fVar2 = *(float *)(DAT_000aa7ac + 0xaa71c);
        *param_3 = *(float *)(DAT_000aa7ac + 0xaa714);
        param_3[1] = fVar1;
        param_3[2] = fVar2;
        fVar5 = ABS(fVar5);
        if ((int)((uint)(fVar8 < fVar6) << 0x1f) < 0) {
          if ((int)((uint)(fVar8 < fVar5) << 0x1f) < 0) {
            fVar4 = DAT_000aa7a8;
            if ((int)((uint)(fVar7 < 0.0) << 0x1f) < 0) {
              fVar4 = DAT_000aa7a4;
            }
            *param_3 = -(fVar8 * fVar4);
            return 1;
          }
        }
        else if ((int)((uint)(fVar6 < fVar5) << 0x1f) < 0) {
          fVar7 = DAT_000aa7a8;
          if ((int)((uint)(fVar4 < 0.0) << 0x1f) < 0) {
            fVar7 = DAT_000aa7a4;
          }
          param_3[1] = -(fVar6 * fVar7);
          return 1;
        }
        fVar7 = DAT_000aa7a8;
        if ((int)((uint)(fVar3 < 0.0) << 0x1f) < 0) {
          fVar7 = DAT_000aa7a4;
        }
        param_3[2] = -(fVar5 * fVar7);
        return 1;
      }
    }
  }
  return 0;
}



