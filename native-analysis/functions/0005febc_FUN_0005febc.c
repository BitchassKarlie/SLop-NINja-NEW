/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005febc FUN_0005febc */

void FUN_0005febc(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xa0);
  fVar1 = (float)(**(code **)(*param_2 + 0xc))(param_2);
  *(float *)(param_1 + 0xa0) = fVar2 + fVar1;
  fVar2 = *(float *)(param_1 + 0x9c);
  fVar1 = (float)(**(code **)(*param_2 + 8))(param_2);
  *(float *)(param_1 + 0x9c) = fVar2 + fVar1;
  (**(code **)(*param_2 + 0x20))(param_2,param_1);
  FUN_0004c8bc(param_1 + 0xa4);
  **(int ***)(param_1 + 0xac) = param_2;
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 4;
  return;
}



