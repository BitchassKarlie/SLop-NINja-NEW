/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022344 FUN_00022344 */

void FUN_00022344(float *param_1,float param_2,float param_3,float param_4,ushort param_5)

{
  bool bVar1;
  float fVar2;
  
  param_5 = param_5 >> 1;
  fVar2 = (float)FUN_000927c8(param_5);
  param_1[3] = fVar2;
  fVar2 = (float)FUN_000927b8(param_5);
  *param_1 = fVar2 * param_2;
  fVar2 = (float)FUN_000927b8(param_5);
  param_1[1] = fVar2 * param_3;
  fVar2 = (float)FUN_000927b8(param_5);
  param_1[2] = fVar2 * param_4;
  fVar2 = DAT_000223cc;
  bVar1 = param_1[3] == DAT_000223cc;
  if (bVar1) {
    param_1[2] = DAT_000223cc;
  }
  if (bVar1) {
    param_1[1] = fVar2;
    *param_1 = fVar2;
    fVar2 = DAT_000223d0;
  }
  if (bVar1) {
    param_1[3] = fVar2;
  }
  return;
}



