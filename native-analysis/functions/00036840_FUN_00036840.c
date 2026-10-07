/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00036840 FUN_00036840 */

void FUN_00036840(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int local_74 [8];
  undefined local_54;
  int local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar4 = DAT_00036a74;
  fVar10 = DAT_00036a4c;
  iVar6 = DAT_00036a70 + 0x3684e;
  local_2c = **(int **)(iVar6 + DAT_00036a74);
  iVar7 = *(int *)(param_1 + 0x8c);
  if (iVar7 == 0) {
    fVar9 = *(float *)(param_1 + 0x70) + (DAT_00036a4c - *(float *)(param_1 + 0x70)) * DAT_00036a50;
    bVar1 = fVar9 < DAT_00036a54;
    bVar2 = fVar9 != DAT_00036a54;
    bVar3 = NAN(DAT_00036a54);
    *(float *)(param_1 + 0x70) = fVar9;
    iVar8 = DAT_00036a78;
    if (bVar2 && bVar1 == (NAN(fVar9) || bVar3)) {
      *(float *)(param_1 + 0x70) = fVar10;
      iVar8 = *(int *)(iVar6 + iVar8);
      local_78 = iVar7;
      FUN_00017d64(&local_78,*(undefined4 *)(iVar8 + 0x180));
      local_a8 = DAT_00036a7c + 0x36900;
      local_8c = DAT_00036a60;
      local_a0 = DAT_00036a80 + 0x36910;
      local_88 = DAT_00036a64;
      local_84 = DAT_00036a68;
      local_30 = 1;
      local_a4 = param_1;
      local_9c = iVar7;
      local_50[0] = iVar7;
      (**(code **)(DAT_00036a7c + 0x36908))(&local_a8,local_50);
      local_98 = *(undefined4 *)(DAT_00036a84 + 0x36936);
      local_94 = *(undefined4 *)(DAT_00036a84 + 0x3693a);
      local_90 = *(undefined4 *)(DAT_00036a84 + 0x3693e);
      local_54 = 1;
      local_80 = DAT_00036a88 + 0x3695e;
      local_7c = *(undefined4 *)(iVar6 + DAT_00036a8c);
      local_74[0] = iVar7;
      (**(code **)(DAT_00036a88 + 0x36966))(&local_80,local_74);
      pvVar5 = operator_new(0x148);
      FUN_000550e8(pvVar5,&local_78,&local_8c,local_50,**(undefined4 **)(iVar6 + DAT_00036a90),
                   &local_98,local_74);
      iVar7 = DAT_00036a94;
      *(void **)(param_1 + 0x80) = pvVar5;
      FUN_0001d358(local_74);
      local_80 = iVar7 + 0x369a6;
      FUN_0001d358(local_50);
      local_a8 = iVar7 + 0x369a6;
      FUN_00017d90(&local_78);
      (**(code **)(**(int **)(param_1 + 0x80) + 8))();
      *(undefined *)(*(int *)(param_1 + 0x80) + 0x124) = 1;
      FUN_00049d7c(*(undefined4 *)(iVar8 + 0x40),*(undefined4 *)(param_1 + 0x80),0);
      FUN_000671a8(*(undefined4 *)(iVar8 + 0x16c),*(undefined4 *)(param_1 + 0x80));
      fVar10 = DAT_00036a6c;
      iVar7 = *(int *)(param_1 + 0x80);
      *(float *)(iVar7 + 0x110) = *(float *)(iVar7 + 0x110) * DAT_00036a6c;
      *(float *)(iVar7 + 0x114) = *(float *)(iVar7 + 0x114) * fVar10;
      *(float *)(iVar7 + 0x118) = *(float *)(iVar7 + 0x118) * fVar10;
      iVar7 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
      *(float *)(iVar7 + 0x28) = *(float *)(iVar7 + 0x28) * fVar10;
      *(float *)(iVar7 + 0x2c) = *(float *)(iVar7 + 0x2c) * fVar10;
      *(float *)(iVar7 + 0x30) = *(float *)(iVar7 + 0x30) * fVar10;
      *(undefined4 *)(param_1 + 0x8c) = 1;
    }
  }
  else if ((iVar7 == 2) &&
          (fVar10 = *(float *)(param_1 + 0x70) * DAT_00036a58, bVar1 = fVar10 < DAT_00036a5c,
          *(float *)(param_1 + 0x70) = fVar10, (int)((uint)bVar1 << 0x1f) < 0)) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x10))();
    *(undefined *)(param_1 + 0x27) = 1;
  }
  if (local_2c == **(int **)(iVar6 + iVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



