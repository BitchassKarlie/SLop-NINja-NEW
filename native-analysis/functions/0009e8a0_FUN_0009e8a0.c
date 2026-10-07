/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e8a0 FUN_0009e8a0 */

void FUN_0009e8a0(byte *param_1,byte *param_2,byte *param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  
  bVar1 = *param_3;
  *param_1 = bVar1;
  bVar2 = param_3[1];
  param_1[1] = bVar2;
  bVar3 = param_3[2];
  param_1[2] = bVar3;
  bVar4 = param_3[3];
  param_1[3] = bVar4;
  fVar5 = (float)(longlong)(int)(uint)bVar3 -
          (float)(longlong)(int)((uint)param_3[2] - (uint)param_2[2]) * param_4;
  param_1[2] = (0.0 < fVar5) * (char)(int)fVar5;
  fVar5 = (float)(longlong)(int)(uint)bVar2 -
          (float)(longlong)(int)((uint)param_3[1] - (uint)param_2[1]) * param_4;
  param_1[1] = (0.0 < fVar5) * (char)(int)fVar5;
  fVar5 = (float)(longlong)(int)(uint)bVar1 -
          (float)(longlong)(int)((uint)*param_3 - (uint)*param_2) * param_4;
  *param_1 = (0.0 < fVar5) * (char)(int)fVar5;
  fVar5 = (float)(longlong)(int)(uint)bVar4 -
          (float)(longlong)(int)((uint)param_3[3] - (uint)param_2[3]) * param_4;
  param_1[3] = (0.0 < fVar5) * (char)(int)fVar5;
  return;
}



