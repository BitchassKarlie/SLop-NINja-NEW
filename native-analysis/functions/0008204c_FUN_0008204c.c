/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008204c FUN_0008204c */

void FUN_0008204c(int **param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  int *local_4c;
  int *piStack_48;
  int *piStack_44;
  int *local_40;
  int *piStack_3c;
  int *piStack_38;
  int *local_34;
  int *piStack_30;
  int *piStack_2c;
  double local_28;
  
  uVar2 = FUN_0009a4a0(param_2,DAT_00082388 + 0x82060);
  FUN_00084684(&local_34,uVar2);
  param_1[4] = local_34;
  param_1[5] = piStack_30;
  param_1[6] = piStack_2c;
  uVar2 = FUN_0009a4a0(param_2,DAT_0008238c + 0x82084);
  FUN_00084684(&local_40,uVar2);
  param_1[7] = local_40;
  param_1[8] = piStack_3c;
  param_1[9] = piStack_38;
  uVar2 = FUN_0009a4a0(param_2,DAT_00082390 + 0x820a6);
  FUN_00084684(&local_4c,uVar2);
  param_1[0x11] = local_4c;
  param_1[0x12] = piStack_48;
  param_1[0x13] = piStack_44;
  param_1[0x14] = local_4c;
  param_1[0x15] = piStack_48;
  param_1[0x16] = piStack_44;
  uVar2 = FUN_0009a4a0(param_2,DAT_00082394 + 0x820c8);
  FUN_00084744(uVar2,param_1 + 0x11);
  uVar2 = FUN_0009a4a0(param_2,DAT_00082398 + 0x820d8);
  FUN_00084744(uVar2,param_1 + 0x14);
  uVar2 = FUN_0009a4a0(param_2,DAT_0008239c + 0x820e8);
  FUN_00084cd8(param_1,uVar2);
  if (*param_1 == (int *)0x0) {
    FUN_00084d90(param_1);
  }
  if (*param_1 != (int *)0x0) {
    if (*param_1 == (int *)0x0) {
      FUN_00084d90(param_1);
    }
    uVar3 = (**(code **)(**param_1 + 0x14))();
    if (*param_1 == (int *)0x0) {
      FUN_00084d90(param_1);
    }
    uVar4 = (**(code **)(**param_1 + 0x18))();
    piVar7 = DAT_00082380;
    param_1[0x19] = (int *)(float)(ulonglong)uVar3;
    param_1[0x1a] = (int *)(float)(ulonglong)uVar4;
    param_1[0x1b] = piVar7;
  }
  uVar2 = FUN_0009a4a0(param_2,DAT_000823a0 + 0x82158);
  FUN_00084744(uVar2,param_1 + 0x19);
  iVar5 = FUN_0009a884(param_2,DAT_000823a4 + 0x8216a,&local_28);
  fVar8 = DAT_00082384;
  if (iVar5 == 0) {
    fVar8 = (float)local_28;
  }
  iVar5 = FUN_0006e130();
  if (iVar5 == 0) {
    param_1[0x19] = (int *)((float)param_1[0x19] * fVar8);
    param_1[0x1a] = (int *)((float)param_1[0x1a] * fVar8);
    param_1[0x1b] = (int *)((float)param_1[0x1b] * fVar8);
  }
  iVar5 = FUN_0009a884(param_2,DAT_000823a8 + 0x821b0,&local_28);
  if (iVar5 == 0) {
    param_1[0xc] = (int *)(float)local_28;
  }
  iVar5 = FUN_0009a884(param_2,DAT_000823ac + 0x821ca,&local_28);
  if (iVar5 == 0) {
    piVar7 = (int *)(float)local_28;
    param_1[0xd] = piVar7;
  }
  else {
    piVar7 = param_1[0xd];
  }
  iVar5 = DAT_000823b0;
  param_1[0xe] = piVar7;
  iVar5 = FUN_0009a884(param_2,iVar5 + 0x821ec,&local_28);
  if (iVar5 == 0) {
    param_1[0xd] = (int *)(float)local_28;
  }
  iVar5 = FUN_0009a884(param_2,DAT_000823b4 + 0x82206,&local_28);
  if (iVar5 == 0) {
    param_1[0xe] = (int *)(float)local_28;
  }
  iVar5 = FUN_0009a884(param_2,DAT_000823b8 + 0x82220,&local_28);
  if (iVar5 == 0) {
    param_1[0x10] = (int *)(float)local_28;
  }
  iVar5 = FUN_0009a884(param_2,DAT_000823bc + 0x8223a,&local_28);
  if (iVar5 == 0) {
    param_1[0x17] = (int *)(float)local_28;
  }
  iVar5 = FUN_0009a884(param_2,DAT_000823c0 + 0x82254,&local_28);
  if (iVar5 == 0) {
    param_1[0x18] = (int *)(float)local_28;
  }
  iVar5 = DAT_000823c8;
  uVar2 = FUN_0009a4a0(param_2,DAT_000823c4 + 0x8226e);
  FUN_00084804(param_1 + 0x1c,uVar2);
  if (-1 < *(int *)(iVar5 + 0x82278) << 0x1f) {
    iVar6 = __cxa_guard_acquire(iVar5 + 0x82278);
    if (iVar6 != 0) {
      uVar2 = FUN_0008f414(DAT_000823fc + 0x82352);
      *(undefined4 *)(iVar5 + 0x8227c) = uVar2;
      uVar2 = FUN_0008f414(DAT_00082400 + 0x8235c);
      *(undefined4 *)(iVar5 + 0x82280) = uVar2;
      __cxa_guard_release(iVar5 + 0x82278);
    }
  }
  iVar5 = DAT_000823d0;
  uVar2 = FUN_0009a4a0(param_2,DAT_000823cc + 0x8228c);
  piVar7 = (int *)FUN_00084550(uVar2,iVar5 + 0x82296,2);
  param_1[0x1d] = piVar7;
  if (-1 < *(int *)(iVar5 + 0x8229e) << 0x1f) {
    iVar6 = __cxa_guard_acquire(iVar5 + 0x8229e);
    if (iVar6 != 0) {
      uVar2 = FUN_0008f414(DAT_000823e8 + 0x8230c);
      *(undefined4 *)(iVar5 + 0x822a2) = uVar2;
      uVar2 = FUN_0008f414(DAT_000823ec + 0x82316);
      *(undefined4 *)(iVar5 + 0x822a6) = uVar2;
      uVar2 = FUN_0008f414(DAT_000823f0 + 0x82320);
      *(undefined4 *)(iVar5 + 0x822aa) = uVar2;
      uVar2 = FUN_0008f414(DAT_000823f4 + 0x8232a);
      *(undefined4 *)(iVar5 + 0x822ae) = uVar2;
      uVar2 = FUN_0008f414(DAT_000823f8 + 0x82334);
      *(undefined4 *)(iVar5 + 0x822b2) = uVar2;
      __cxa_guard_release(iVar5 + 0x8229e);
    }
  }
  iVar5 = DAT_000823d8;
  uVar2 = FUN_0009a4a0(param_2,DAT_000823d4 + 0x822ac);
  piVar7 = (int *)FUN_0008464c(uVar2,DAT_000823dc + 0x822cc,5);
  iVar6 = DAT_000823e0 + 0x822c2;
  param_1[10] = piVar7;
  uVar2 = FUN_0009a4a0(param_2,iVar6);
  uVar1 = FUN_00084524(uVar2,iVar5 + 0x822b6);
  iVar6 = DAT_000823e4 + 0x822d4;
  *(undefined *)((int)param_1 + 0xd) = uVar1;
  uVar2 = FUN_0009a4a0(param_2,iVar6);
  uVar1 = FUN_00084524(uVar2,iVar5 + 0x822b6);
  *(undefined *)(param_1 + 0x1e) = uVar1;
  return;
}



