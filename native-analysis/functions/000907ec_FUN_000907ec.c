/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000907ec FUN_000907ec */

float FUN_000907ec(undefined4 param_1,int param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined auStack_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  
  iVar7 = DAT_00090970 + 0x90802;
  if (param_4 != (float *)0x0) {
    *param_4 = DAT_00090960;
  }
  fVar1 = DAT_00090960;
  fVar9 = DAT_00090960;
  if (0.0 < param_3) {
    FUN_0009eabc(auStack_5c,param_2);
    iVar4 = DAT_00090974;
    fVar3 = DAT_00090968;
    fVar2 = DAT_00090964;
    fVar1 = DAT_00090960;
    local_4c = *(undefined4 *)(param_2 + 0x10);
    iVar8 = 0;
    local_48 = *(undefined4 *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x18);
    fVar9 = DAT_00090960;
    fVar10 = DAT_00090960;
    local_44 = iVar6;
    while (iVar6 != 0) {
      if ((iVar6 == 10) || (iVar8 == *(int *)(param_2 + 0x10))) {
        if (param_4 == (float *)0x0) {
          return fVar9;
        }
        if (iVar8 != *(int *)(param_2 + 0x10)) {
          return fVar9;
        }
LAB_00090936:
        *param_4 = (param_3 - fVar9) / fVar10;
        return param_3;
      }
      psVar5 = (short *)FUN_0008f638(param_1,iVar6,0);
      if (iVar8 == 0) {
        FUN_0009eabc(local_78,param_2);
        local_68 = *(undefined4 *)(param_2 + 0x10);
        local_64 = *(undefined4 *)(param_2 + 0x14);
        local_60 = *(undefined4 *)(param_2 + 0x18);
        iVar8 = FUN_0009046c(param_1,local_78,fVar9,param_3,fVar2,fVar1);
        local_78[0] = *(int *)(iVar7 + iVar4) + 8;
        if (iVar8 == *(int *)(param_2 + 0x10)) {
          if (param_4 == (float *)0x0) {
            return fVar9;
          }
          if (fVar10 == 0.0 || fVar10 < 0.0 != NAN(fVar10)) {
            return fVar9;
          }
          if (-1 < (int)((uint)(param_3 * DAT_0009096c < fVar9) << 0x1f)) {
            return fVar9;
          }
          goto LAB_00090936;
        }
      }
      FUN_0009eaf4(param_2,1);
      if (psVar5 != (short *)0x0) {
        fVar10 = fVar10 + fVar2;
        if (*psVar5 == 0x20) {
          fVar10 = fVar10 + fVar3;
        }
        fVar9 = fVar9 + *(float *)(psVar5 + 0xe) + fVar1;
      }
      iVar6 = *(int *)(param_2 + 0x18);
    }
  }
  else {
    while (iVar7 = *(int *)(param_2 + 0x18), iVar7 != 0) {
      while( true ) {
        if (iVar7 == 10) {
          return fVar9;
        }
        iVar4 = FUN_0008f638(param_1,iVar7,0);
        FUN_0009eaf4(param_2,1);
        if (iVar4 == 0) break;
        iVar7 = *(int *)(param_2 + 0x18);
        fVar9 = fVar9 + *(float *)(iVar4 + 0x1c) + fVar1;
        if (iVar7 == 0) {
          return fVar9;
        }
      }
    }
  }
  return fVar9;
}



