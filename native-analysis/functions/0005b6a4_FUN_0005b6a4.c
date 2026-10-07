/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005b6a4 FUN_0005b6a4 */

void FUN_0005b6a4(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x128);
  iVar3 = DAT_0005b800 + 0x5b6b2;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x120) != 0) {
      *(undefined *)(*(int *)(iVar1 + 0x120) + 0x7c) = 1;
      iVar1 = DAT_0005b804;
      iVar4 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
      pfVar2 = (float *)(DAT_0005b804 + 0x5b6d8);
      fVar5 = *(float *)(DAT_0005b804 + 0x5b6dc);
      fVar6 = *(float *)(DAT_0005b804 + 0x5b6e0);
      *(float *)(iVar4 + 0x1c) = -*pfVar2;
      *(float *)(iVar4 + 0x20) = -fVar5;
      *(float *)(iVar4 + 0x24) = -fVar6;
      fVar5 = DAT_0005b7fc;
      fVar6 = *(float *)(iVar1 + 0x5b6dc);
      fVar7 = *(float *)(iVar1 + 0x5b6e0);
      iVar4 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
      *(float *)(iVar4 + 0xc4) = -*pfVar2;
      *(float *)(iVar4 + 200) = -fVar6;
      *(float *)(iVar4 + 0xcc) = -fVar7;
      fVar6 = *(float *)(iVar1 + 0x5b6dc);
      fVar7 = *(float *)(iVar1 + 0x5b6e0);
      iVar4 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
      *(float *)(iVar4 + 0x10) = -(*pfVar2 * fVar5);
      *(float *)(iVar4 + 0x14) = -(fVar6 * fVar5);
      *(float *)(iVar4 + 0x18) = -(fVar7 * fVar5);
      fVar6 = *(float *)(iVar1 + 0x5b6dc);
      fVar7 = *(float *)(iVar1 + 0x5b6e0);
      iVar1 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
      *(float *)(iVar1 + 0xb8) = -(*pfVar2 * fVar5);
      *(float *)(iVar1 + 0xbc) = -(fVar6 * fVar5);
      *(float *)(iVar1 + 0xc0) = -(fVar7 * fVar5);
      iVar1 = *(int *)(param_1 + 0x128);
    }
    *(undefined *)(iVar1 + 0x26) = 1;
    local_18 = DAT_0005b808 + 0x5b7c6;
    local_14 = *(undefined4 *)(iVar3 + DAT_0005b80c);
    (**(code **)(DAT_0005b808 + 0x5b7ce))(&local_18,*(int *)(param_1 + 0x128) + 0x2c);
    local_18 = DAT_0005b810 + 0x5b7e0;
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar3 + DAT_0005b814) + 0x40),
                 *(undefined4 *)(param_1 + 0x128));
    if (*(int **)(param_1 + 0x128) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x128) + 4))();
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  return;
}



