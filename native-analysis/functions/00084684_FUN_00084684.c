/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084684 FUN_00084684 */

float * FUN_00084684(float *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  char cVar4;
  char *__nptr;
  float fVar5;
  float fVar6;
  
  iVar1 = DAT_00084740;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    *param_1 = *(float *)(DAT_00084740 + 0x846d8);
    param_1[1] = *(float *)(iVar1 + 0x846dc);
    param_1[2] = *(float *)(iVar1 + 0x846e0);
    return param_1;
  }
  fVar6 = *(float *)(DAT_0008473c + 0x846a2);
  fVar5 = *(float *)(DAT_0008473c + 0x846a6);
  pcVar2 = param_2;
  strtod(param_2,(char **)0x0);
  cVar4 = *param_2;
  do {
    if (cVar4 == ',') {
      __nptr = param_2 + 1;
      if (param_2[1] != '\0') {
        pcVar3 = __nptr;
        strtod(__nptr,(char **)0x0);
        cVar4 = param_2[1];
        fVar6 = (float)(double)CONCAT44(extraout_r1_00,pcVar3);
        goto LAB_0008470a;
      }
      break;
    }
    param_2 = param_2 + 1;
    cVar4 = *param_2;
  } while (cVar4 != '\0');
  goto LAB_000846be;
  while( true ) {
    __nptr = __nptr + 1;
    cVar4 = *__nptr;
    if (cVar4 == '\0') break;
LAB_0008470a:
    if (cVar4 == ',') {
      pcVar3 = __nptr + 1;
      if (__nptr[1] != '\0') {
        strtod(pcVar3,(char **)0x0);
        *param_1 = (float)(double)CONCAT44(extraout_r1,pcVar2);
        param_1[1] = fVar6;
        param_1[2] = (float)(double)CONCAT44(extraout_r1_01,pcVar3);
        return param_1;
      }
      break;
    }
  }
LAB_000846be:
  *param_1 = (float)(double)CONCAT44(extraout_r1,pcVar2);
  param_1[1] = fVar6;
  param_1[2] = fVar5;
  return param_1;
}



