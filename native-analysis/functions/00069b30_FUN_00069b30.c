/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00069b30 FUN_00069b30 */

int * FUN_00069b30(int *param_1,int **param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  
  FUN_0004a8dc();
  iVar2 = DAT_00069ca4;
  param_1[0x1e] = 0;
  *param_1 = iVar2 + 0x69b58;
  *(undefined *)(param_1 + 0x26) = 1;
  iVar2 = FUN_00069aec(param_1 + 0x68);
  param_1[0x6a] = 0;
  param_1[0x69] = iVar2;
  FUN_00068904();
  iVar2 = DAT_00069c84;
  param_1[0x27] = 0;
  param_1[0x77] = iVar2;
  param_1[0x76] = iVar2;
  if (*(char *)(param_2 + 8) != '\0') {
    param_2 = (int **)*param_2;
  }
  if (param_2 != (int **)0x0) {
    (**(code **)((int)*param_2 + 8))(param_2,param_1 + 0x1e);
  }
  FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(DAT_00069ca8 + 0x69ba8));
  *(undefined *)((int)param_1 + 0x26) = 0;
  iVar2 = DAT_00069c84;
  param_1[0x1d] = 0;
  param_1[0x78] = iVar2;
  param_1[0x1c] = 0;
  param_1[10] = 3;
  iVar7 = DAT_00069cac;
  iVar1 = DAT_00069c88;
  pfVar8 = (float *)(DAT_00069cac + 0x69bc4);
  iVar5 = *(int *)(DAT_00069cac + 0x69bc8);
  iVar6 = *(int *)(DAT_00069cac + 0x69bcc);
  param_1[5] = (int)*pfVar8;
  param_1[6] = iVar5;
  param_1[7] = iVar6;
  iVar5 = *(int *)(iVar7 + 0x69bc8);
  iVar7 = *(int *)(iVar7 + 0x69bcc);
  param_1[2] = (int)*pfVar8;
  param_1[3] = iVar5;
  param_1[4] = iVar7;
  iVar5 = DAT_00069c90;
  iVar7 = DAT_00069c8c;
  param_1[0x71] = iVar1;
  param_1[0x72] = iVar7;
  param_1[0x73] = iVar2;
  param_1[0x6e] = iVar5;
  param_1[0x6c] = iVar2;
  iVar1 = DAT_00069c94;
  param_1[0x6b] = iVar2;
  param_1[0x6f] = iVar1;
  iVar1 = DAT_00069c9c;
  iVar2 = DAT_00069c98;
  param_1[0x74] = DAT_00069c98;
  param_1[0x70] = iVar1;
  param_1[0x75] = iVar2;
  if (param_3 == 0) {
    FUN_0006b324(param_1);
  }
  else {
    FUN_0006bb64(param_1,param_3);
  }
  param_1[0x6d] = param_3;
  uVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  uVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar2 = DAT_00069c84;
  fVar9 = (float)(ulonglong)uVar4 * DAT_00069ca0;
  param_1[5] = (int)((float)(ulonglong)uVar3 * DAT_00069ca0);
  param_1[6] = (int)fVar9;
  param_1[7] = iVar2;
  return param_1;
}



