/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002c714 FUN_0002c714 */

void FUN_0002c714(byte *param_1,byte *param_2,float *param_3)

{
  byte bVar1;
  float fVar2;
  
  fVar2 = (float)(longlong)(int)(uint)param_2[2] * *param_3;
  if (0.0 < fVar2) {
    if (fVar2 < DAT_0002c7e0 == (NAN(fVar2) || NAN(DAT_0002c7e0))) {
      bVar1 = 0xff;
    }
    else {
      bVar1 = (0.0 < fVar2) * (char)(int)fVar2;
    }
  }
  else {
    bVar1 = 0;
  }
  param_2[2] = bVar1;
  fVar2 = (float)(longlong)(int)(uint)param_2[1] * param_3[1];
  if (0.0 < fVar2) {
    if (fVar2 < DAT_0002c7e0 == (NAN(fVar2) || NAN(DAT_0002c7e0))) {
      bVar1 = 0xff;
    }
    else {
      bVar1 = (0.0 < fVar2) * (char)(int)fVar2;
    }
  }
  else {
    bVar1 = 0;
  }
  param_2[1] = bVar1;
  fVar2 = (float)(longlong)(int)(uint)*param_2 * param_3[2];
  if (0.0 < fVar2) {
    if (fVar2 < DAT_0002c7e0 == (NAN(fVar2) || NAN(DAT_0002c7e0))) {
      bVar1 = 0xff;
    }
    else {
      bVar1 = (0.0 < fVar2) * (char)(int)fVar2;
    }
  }
  else {
    bVar1 = 0;
  }
  *param_2 = bVar1;
  *param_1 = bVar1;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



