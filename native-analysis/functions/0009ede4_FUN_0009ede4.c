/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ede4 FUN_0009ede4 */

void FUN_0009ede4(int param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = DAT_0009ee50;
  if (*(int *)(param_1 + 8) != *param_2) {
    *(byte *)(param_1 + 0xb) = *(byte *)((int)param_2 + 3);
    *(byte *)(param_1 + 10) = *(byte *)((int)param_2 + 2);
    *(byte *)(param_1 + 9) = *(byte *)((int)param_2 + 1);
    *(byte *)(param_1 + 8) = *(byte *)param_2;
    glColor4f((float)(longlong)(int)(uint)*(byte *)((int)param_2 + 2) / fVar1,
              (float)(longlong)(int)(uint)*(byte *)((int)param_2 + 1) / fVar1,
              (float)(longlong)(int)(uint)*(byte *)param_2 / fVar1,
              (float)(longlong)(int)(uint)*(byte *)((int)param_2 + 3) / fVar1);
  }
  return;
}



