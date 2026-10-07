/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002fee4 FUN_0002fee4 */

void FUN_0002fee4(char *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  
  fVar4 = *param_2 * DAT_0002ffb4;
  if (0.0 < fVar4) {
    if (fVar4 < DAT_0002ffb4 != (NAN(fVar4) || NAN(DAT_0002ffb4))) {
      cVar3 = (0.0 < fVar4) * (char)(int)fVar4;
      goto LAB_0002fefe;
    }
    fVar4 = param_2[1] * DAT_0002ffb4;
    cVar3 = -1;
    if (fVar4 <= 0.0) goto LAB_0002ff14;
LAB_0002ff60:
    if (fVar4 < DAT_0002ffb4 == (NAN(fVar4) || NAN(DAT_0002ffb4))) {
      fVar4 = param_2[2];
      cVar1 = -1;
      goto joined_r0x0002ff80;
    }
    cVar1 = (0.0 < fVar4) * (char)(int)fVar4;
  }
  else {
    cVar3 = '\0';
LAB_0002fefe:
    fVar4 = param_2[1] * DAT_0002ffb4;
    if (0.0 < fVar4) goto LAB_0002ff60;
LAB_0002ff14:
    cVar1 = '\0';
  }
  fVar4 = param_2[2];
joined_r0x0002ff80:
  fVar4 = fVar4 * DAT_0002ffb4;
  if (0.0 < fVar4) {
    if (fVar4 < DAT_0002ffb4 == (NAN(fVar4) || NAN(DAT_0002ffb4))) {
      cVar2 = -1;
    }
    else {
      cVar2 = (0.0 < fVar4) * (char)(int)fVar4;
    }
  }
  else {
    cVar2 = '\0';
  }
  param_1[2] = cVar3;
  param_1[3] = -1;
  param_1[1] = cVar1;
  *param_1 = cVar2;
  return;
}



