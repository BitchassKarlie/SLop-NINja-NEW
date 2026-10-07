/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049140 FUN_00049140 */

float FUN_00049140(code **param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_2 - (float)param_1[2]) / ((float)param_1[3] - (float)param_1[2]);
  fVar1 = DAT_000491a4;
  if ((0.0 < fVar2) && (fVar1 = fVar2, fVar2 < DAT_000491a8 == (NAN(fVar2) || NAN(DAT_000491a8)))) {
    fVar1 = DAT_000491a8;
  }
  if (*param_1 != (code *)0x0) {
    fVar1 = (float)(**param_1)(fVar1,param_1[1]);
  }
  return (float)param_1[4] + fVar1 * ((float)param_1[5] - (float)param_1[4]);
}



