/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084144 FUN_00084144 */

float FUN_00084144(float *param_1,float param_2,undefined4 param_3,undefined4 param_4,double param_5
                  )

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 in_lr;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_1;
  if ((((int)((uint)(fVar3 < param_2) << 0x1f) < 0) &&
      (fVar2 = param_1[2], fVar2 != 0.0 && fVar2 < 0.0 == NAN(fVar2))) &&
     ((-1 < (int)((uint)(param_1[1] < param_2) << 0x1f) ||
      (-1 < (int)((uint)(fVar3 < param_1[1]) << 0x1f))))) {
    uVar1 = SUB84((double)(param_2 - fVar3),0);
    fmod((double)CONCAT44(in_lr,unaff_r4),param_5);
    fVar3 = (float)FUN_00049140(param_1 + 4,
                                (float)((double)CONCAT44(extraout_r1,uVar1) / (double)param_1[2]));
    return fVar3;
  }
  return param_1[3];
}



