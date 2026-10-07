/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000703d0 FUN_000703d0 */

undefined4 FUN_000703d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void **ppvVar8;
  void *pvVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_9c;
  undefined auStack_74 [4];
  undefined4 *local_70;
  int local_6c;
  float local_68;
  undefined auStack_64 [4];
  undefined4 ****local_60;
  undefined4 ****local_5c;
  void *local_58;
  void *pvStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  void *local_38;
  int local_34;
  void *local_30;
  int *local_2c;
  
  FUN_0009a8bc(param_1,DAT_000705e8 + 0x703ea,param_2 + 0x124);
  iVar5 = FUN_0009a884(param_1,DAT_000705ec + 0x703f6,&local_40);
  if (iVar5 == 0) {
    *(float *)(param_2 + 0x128) = (float)local_40;
  }
  iVar5 = FUN_0009a884(param_1,DAT_000705f0 + 0x70412,&local_40);
  if (iVar5 == 0) {
    *(float *)(param_2 + 300) = (float)local_40;
  }
  FUN_0009a8bc(param_1,DAT_000705f4 + 0x70432,param_2 + 0x160);
  FUN_0009a8bc(param_1,DAT_000705f8 + 0x70442,param_2 + 0x164);
  iVar5 = FUN_0009a884(param_1,DAT_000705fc + 0x7044e,&local_40);
  if (iVar5 == 0) {
    *(float *)(param_2 + 0x168) = (float)local_40;
  }
  pvVar9 = (void *)(param_2 + 0x134);
  piVar11 = *(int **)(param_2 + 0x138);
  local_34 = *piVar11;
  local_38 = pvVar9;
  local_30 = pvVar9;
  local_2c = (int *)local_34;
  while (piVar11 != local_2c) {
    FUN_00030568(&local_30,pvVar9,local_30,local_2c);
  }
  local_9c = FUN_0009a5d8(param_1,DAT_00070600 + 0x704aa);
  iVar3 = DAT_00070618;
  iVar2 = DAT_00070614;
  iVar1 = DAT_00070608;
  iVar5 = DAT_00070604;
  if (local_9c != 0) {
    iVar12 = DAT_0007060c + 0x704c8;
    iVar13 = DAT_00070610 + 0x704cc;
    iVar10 = DAT_0007061c + 0x704dc;
    do {
      local_70 = (undefined4 *)operator_new(0x10);
      *local_70 = local_50;
      local_70[1] = uStack_4c;
      local_70[2] = uStack_48;
      local_70[3] = uStack_44;
      *local_70 = local_70;
      local_70[1] = local_70;
      local_6c = 0;
      iVar6 = FUN_0009a884(local_9c,iVar5 + 0x70500,&local_40);
      if (iVar6 == 0) {
        local_68 = (float)local_40;
      }
      FUN_0009a8bc(local_9c,iVar1 + 0x70522,auStack_64);
      iVar6 = FUN_0009a5d8(local_9c,iVar2 + 0x7052c);
      if (iVar6 != 0) {
        do {
          iVar7 = FUN_0009a884(iVar6,iVar12,&local_40);
          if (iVar7 == 0) {
            local_2c = (int *)(float)local_40;
          }
          FUN_0009a8bc(iVar6,iVar13,&local_30);
          puVar4 = local_70;
          ppvVar8 = (void **)operator_new(0x10);
          local_58 = local_30;
          pvStack_54 = local_2c;
          *ppvVar8 = &local_60;
          ppvVar8[1] = &local_60;
          ppvVar8[2] = local_30;
          ppvVar8[3] = local_2c;
          *ppvVar8 = puVar4;
          ppvVar8[1] = (void *)puVar4[1];
          puVar4[1] = ppvVar8;
          *(void ***)ppvVar8[1] = ppvVar8;
          local_6c = local_6c + 1;
          local_60 = &local_60;
          local_5c = &local_60;
          iVar6 = FUN_0009a4f0(iVar6,iVar10);
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(param_2 + 0x138);
      piVar11 = (int *)FUN_00030fb8(pvVar9,auStack_74);
      *piVar11 = iVar6;
      piVar11[1] = *(int *)(iVar6 + 4);
      *(int **)(iVar6 + 4) = piVar11;
      *(int **)piVar11[1] = piVar11;
      *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 0x13c) + 1;
      FUN_0003052c(auStack_74);
      local_9c = FUN_0009a4f0(local_9c,iVar3 + 0x705d6);
    } while (local_9c != 0);
  }
  return 1;
}



