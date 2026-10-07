/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00067c38 FUN_00067c38 */

float FUN_00067c38(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_4 == 0) {
    fVar2 = (param_1 - param_2) / (param_3 - param_1);
  }
  else {
    fVar1 = (param_1 - param_2) / (param_3 - param_2);
    fVar2 = DAT_00067c8c;
    if ((0.0 < fVar1) && (fVar2 = fVar1, fVar1 < DAT_00067c88 == (NAN(fVar1) || NAN(DAT_00067c88))))
    {
      fVar2 = DAT_00067c88;
    }
  }
  return fVar2;
}



