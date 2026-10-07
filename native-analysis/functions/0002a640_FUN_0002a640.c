/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a640 FUN_0002a640 */

bool FUN_0002a640(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int local_38 [2];
  int local_30;
  int local_28 [2];
  int local_20;
  
  fVar3 = *(float *)(*(int *)(DAT_0002a6cc + 0x2a648 + DAT_0002a6d0) + 0x14);
  bVar1 = fVar3 == 0.0 || fVar3 < 0.0 != NAN(fVar3);
  if (bVar1) {
    piVar2 = (int *)FUN_0008d120();
    (**(code **)(*piVar2 + 0x2c))(local_28,piVar2);
    fVar4 = *(float *)(param_2 + 8);
    fVar3 = (float)(longlong)(local_20 - local_28[0]) * DAT_0002a6c4;
    piVar2 = (int *)FUN_0008d120();
    (**(code **)(*piVar2 + 0x2c))(local_38,piVar2);
    *(float *)(param_1 + 0x10) =
         (fVar4 + fVar3) * (DAT_0002a6c8 / (float)(longlong)(local_30 - local_38[0]));
  }
  return bVar1;
}



