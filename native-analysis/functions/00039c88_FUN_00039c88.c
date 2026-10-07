/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00039c88 FUN_00039c88 */

int * FUN_00039c88(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  float fVar10;
  undefined4 local_1c;
  
  iVar7 = DAT_00039e10;
  FUN_0004a8dc();
  *param_1 = DAT_00039e14 + 0x39ca8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(iVar7 + 0x39cde) == 0) {
    FUN_0002fa48(&local_1c,DAT_00039e40 + 0x39df2);
    FUN_00017d64(iVar7 + 0x39cde,local_1c);
    FUN_00017d90(&local_1c);
  }
  FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(DAT_00039e18 + 0x39d04));
  uVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  uVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar7 = DAT_00039e08;
  param_1[5] = (int)(float)(ulonglong)uVar2;
  param_1[6] = (int)(float)(ulonglong)uVar3;
  param_1[7] = iVar7;
  iVar7 = DAT_00039e1c;
  piVar8 = (int *)(DAT_00039e1c + 0x39d0a);
  iVar5 = *(int *)(DAT_00039e1c + 0x39d0e);
  iVar6 = *(int *)(DAT_00039e1c + 0x39d12);
  param_1[2] = *piVar8;
  param_1[3] = iVar5;
  param_1[4] = iVar6;
  iVar5 = *(int *)(iVar7 + 0x39d0e);
  iVar7 = *(int *)(iVar7 + 0x39d12);
  pfVar9 = (float *)(DAT_00039e20 + 0x39d1e);
  param_1[0x2d] = *piVar8;
  param_1[0x2e] = iVar5;
  param_1[0x2f] = iVar7;
  fVar10 = *pfVar9;
  iVar7 = param_1[0x1f];
  iVar5 = param_1[0x20];
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x2c] = (int)-fVar10;
  if (iVar7 != iVar5) {
    do {
      iVar6 = iVar7 + 0x5c;
      iVar7 = iVar7 + 0x60;
      FUN_00017d90(iVar6);
    } while (iVar5 != iVar7);
    iVar5 = param_1[0x1f];
  }
  iVar1 = DAT_00039e24;
  iVar6 = DAT_00039e0c;
  iVar7 = DAT_00039e08;
  param_1[0x23] = DAT_00039e08;
  param_1[0x24] = iVar6;
  param_1[0x22] = iVar7;
  param_1[0x20] = iVar5;
  param_1[10] = 3;
  *(undefined2 *)(param_1 + 0x25) = 0;
  iVar7 = *(int *)(iVar1 + 0x39d62);
  iVar5 = *(int *)(iVar1 + 0x39d66);
  param_1[0x26] = *(int *)(iVar1 + 0x39d5e);
  param_1[0x27] = iVar7;
  param_1[0x28] = iVar5;
  param_1[0x29] = iVar6;
  *(undefined *)(param_1 + 0x2a) = 0;
  *(undefined *)((int)param_1 + 0xaa) = 0;
  *(undefined *)((int)param_1 + 0xa9) = 0;
  param_1[0x2b] = 0;
  puVar4 = (undefined4 *)FUN_000a5f28();
  (**(code **)*puVar4)(puVar4,DAT_00039e28 + 0x39d9c);
  (**(code **)*puVar4)(puVar4,DAT_00039e2c + 0x39dac);
  (**(code **)*puVar4)(puVar4,DAT_00039e30 + 0x39db8);
  (**(code **)*puVar4)(puVar4,DAT_00039e34 + 0x39dc4);
  (**(code **)*puVar4)(puVar4,DAT_00039e38 + 0x39dd0);
  (**(code **)*puVar4)(puVar4,DAT_00039e3c + 0x39ddc);
  return param_1;
}



