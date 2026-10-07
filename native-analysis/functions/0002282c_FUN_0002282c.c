/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002282c FUN_0002282c */

void FUN_0002282c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  float extraout_s15;
  float fVar3;
  
  iVar1 = FUN_0002f5f0();
  if (iVar1 != 0) {
    bVar2 = param_2 == 2;
    fVar3 = extraout_s15;
    if (bVar2) {
      param_4 = *(int *)(param_1 + 0x38);
      fVar3 = DAT_00022858;
    }
    if (bVar2) {
      fVar3 = *(float *)(param_4 + 0x14) * fVar3;
    }
    if (bVar2) {
      *(float *)(param_4 + 0x14) = fVar3;
    }
  }
  *(int *)(param_1 + 0x90) = param_2;
  return;
}



