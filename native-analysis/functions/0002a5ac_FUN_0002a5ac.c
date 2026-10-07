/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a5ac FUN_0002a5ac */

bool FUN_0002a5ac(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined auStack_38 [4];
  int local_34;
  int local_2c;
  undefined auStack_28 [4];
  int local_24;
  int local_1c;
  
  fVar3 = *(float *)(*(int *)(DAT_0002a638 + 0x2a5b4 + DAT_0002a63c) + 0x14);
  bVar1 = fVar3 == 0.0 || fVar3 < 0.0 != NAN(fVar3);
  if (bVar1) {
    piVar2 = (int *)FUN_0008d120();
    (**(code **)(*piVar2 + 0x2c))(auStack_28,piVar2);
    fVar4 = *(float *)(param_2 + 8);
    fVar3 = (float)(longlong)(local_1c - local_24) * DAT_0002a630;
    piVar2 = (int *)FUN_0008d120();
    (**(code **)(*piVar2 + 0x2c))(auStack_38,piVar2);
    *(float *)(param_1 + 0x14) =
         (fVar4 + fVar3) * (DAT_0002a634 / (float)(longlong)(local_2c - local_34));
  }
  return bVar1;
}



