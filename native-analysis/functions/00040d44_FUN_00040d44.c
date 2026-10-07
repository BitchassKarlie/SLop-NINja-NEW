/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00040d44 FUN_00040d44 */

void FUN_00040d44(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  undefined uVar10;
  undefined4 *puVar11;
  undefined uVar12;
  int iVar13;
  undefined uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined auStack_d8 [28];
  undefined auStack_bc [28];
  int local_a0 [7];
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  int *local_38;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  
  FUN_000a3a68();
  iVar1 = FUN_00094c30();
  iVar9 = DAT_000410b8 + 0x40d60;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_000995e4(*(undefined4 *)(param_1 + 0x68));
    iVar7 = DAT_000410c0;
    iVar13 = *(int *)(iVar9 + DAT_000410bc);
    puVar11 = (undefined4 *)(DAT_000410c0 + 0x40d7a);
    *(undefined *)(iVar13 + 0x18d4) = 0;
    uVar4 = *(undefined4 *)(iVar7 + 0x40d7e);
    uVar5 = *(undefined4 *)(iVar7 + 0x40d82);
    uVar6 = *(undefined4 *)(iVar7 + 0x40d86);
    *(undefined4 *)(iVar13 + 0x1094) = *puVar11;
    *(undefined4 *)(iVar13 + 0x1098) = uVar4;
    *(undefined4 *)(iVar13 + 0x109c) = uVar5;
    *(undefined4 *)(iVar13 + 0x10a0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40d8e);
    uVar5 = *(undefined4 *)(iVar7 + 0x40d92);
    uVar6 = *(undefined4 *)(iVar7 + 0x40d96);
    *(undefined4 *)(iVar13 + 0x10a4) = *(undefined4 *)(iVar7 + 0x40d8a);
    *(undefined4 *)(iVar13 + 0x10a8) = uVar4;
    *(undefined4 *)(iVar13 + 0x10ac) = uVar5;
    *(undefined4 *)(iVar13 + 0x10b0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40d9e);
    uVar5 = *(undefined4 *)(iVar7 + 0x40da2);
    uVar6 = *(undefined4 *)(iVar7 + 0x40da6);
    *(undefined4 *)(iVar13 + 0x10b4) = *(undefined4 *)(iVar7 + 0x40d9a);
    *(undefined4 *)(iVar13 + 0x10b8) = uVar4;
    *(undefined4 *)(iVar13 + 0x10bc) = uVar5;
    *(undefined4 *)(iVar13 + 0x10c0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40dae);
    uVar5 = *(undefined4 *)(iVar7 + 0x40db2);
    uVar6 = *(undefined4 *)(iVar7 + 0x40db6);
    *(undefined4 *)(iVar13 + 0x10c4) = *(undefined4 *)(iVar7 + 0x40daa);
    *(undefined4 *)(iVar13 + 0x10c8) = uVar4;
    *(undefined4 *)(iVar13 + 0x10cc) = uVar5;
    *(undefined4 *)(iVar13 + 0x10d0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40d7e);
    uVar5 = *(undefined4 *)(iVar7 + 0x40d82);
    uVar6 = *(undefined4 *)(iVar7 + 0x40d86);
    *(undefined4 *)(iVar13 + 0x1894) = *puVar11;
    *(undefined4 *)(iVar13 + 0x1898) = uVar4;
    *(undefined4 *)(iVar13 + 0x189c) = uVar5;
    *(undefined4 *)(iVar13 + 0x18a0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40d8e);
    uVar5 = *(undefined4 *)(iVar7 + 0x40d92);
    uVar6 = *(undefined4 *)(iVar7 + 0x40d96);
    *(undefined4 *)(iVar13 + 0x18a4) = *(undefined4 *)(iVar7 + 0x40d8a);
    *(undefined4 *)(iVar13 + 0x18a8) = uVar4;
    *(undefined4 *)(iVar13 + 0x18ac) = uVar5;
    *(undefined4 *)(iVar13 + 0x18b0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40d9e);
    uVar5 = *(undefined4 *)(iVar7 + 0x40da2);
    uVar6 = *(undefined4 *)(iVar7 + 0x40da6);
    *(undefined4 *)(iVar13 + 0x18b4) = *(undefined4 *)(iVar7 + 0x40d9a);
    *(undefined4 *)(iVar13 + 0x18b8) = uVar4;
    *(undefined4 *)(iVar13 + 0x18bc) = uVar5;
    *(undefined4 *)(iVar13 + 0x18c0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40dae);
    uVar5 = *(undefined4 *)(iVar7 + 0x40db2);
    uVar6 = *(undefined4 *)(iVar7 + 0x40db6);
    *(undefined4 *)(iVar13 + 0x18c4) = *(undefined4 *)(iVar7 + 0x40daa);
    *(undefined4 *)(iVar13 + 0x18c8) = uVar4;
    *(undefined4 *)(iVar13 + 0x18cc) = uVar5;
    *(undefined4 *)(iVar13 + 0x18d0) = uVar6;
    iVar7 = *(int *)(iVar13 + 0x18d8);
    *(int *)(iVar13 + 0x18d8) = iVar7 + 1;
    fVar18 = *(float *)(param_1 + 0x14);
    fVar19 = *(float *)(param_1 + 0x18);
    fVar20 = *(float *)(param_1 + 0x1c);
    *(float *)(iVar13 + 0x1894) = fVar18 * *(float *)(iVar13 + 0x1894);
    *(float *)(iVar13 + 0x18a4) = fVar18 * *(float *)(iVar13 + 0x18a4);
    *(float *)(iVar13 + 0x18b4) = fVar18 * *(float *)(iVar13 + 0x18b4);
    fVar18 = fVar18 * *(float *)(iVar13 + 0x18c4);
    *(float *)(iVar13 + 0x18c4) = fVar18;
    *(float *)(iVar13 + 0x1898) = fVar19 * *(float *)(iVar13 + 0x1898);
    *(float *)(iVar13 + 0x18a8) = fVar19 * *(float *)(iVar13 + 0x18a8);
    *(float *)(iVar13 + 0x18b8) = fVar19 * *(float *)(iVar13 + 0x18b8);
    fVar19 = fVar19 * *(float *)(iVar13 + 0x18c8);
    *(float *)(iVar13 + 0x18c8) = fVar19;
    *(float *)(iVar13 + 0x189c) = fVar20 * *(float *)(iVar13 + 0x189c);
    *(float *)(iVar13 + 0x18ac) = fVar20 * *(float *)(iVar13 + 0x18ac);
    *(float *)(iVar13 + 0x18bc) = fVar20 * *(float *)(iVar13 + 0x18bc);
    fVar20 = fVar20 * *(float *)(iVar13 + 0x18cc);
    *(int *)(iVar13 + 0x18d8) = iVar7 + 2;
    fVar21 = DAT_0004108c;
    *(float *)(iVar13 + 0x18cc) = fVar20;
    fVar16 = *(float *)(param_1 + 0xc) - DAT_00041090;
    fVar17 = *(float *)(param_1 + 0x10);
    *(float *)(iVar13 + 0x18c4) = (*(float *)(param_1 + 8) - fVar21) + fVar18;
    *(int *)(iVar13 + 0x18d8) = iVar7 + 3;
    *(float *)(iVar13 + 0x18c8) = fVar16 + fVar19;
    *(float *)(iVar13 + 0x18cc) = fVar17 + fVar20;
    FUN_0008d434(iVar13,1);
    puVar8 = *(undefined **)(iVar9 + DAT_000410c4);
    local_47 = puVar8[1];
    local_48 = *puVar8;
    local_46 = puVar8[2];
    local_45 = puVar8[3];
    FUN_000a344c(&local_48,0,0x3f800000,0,0x3f800000);
    FUN_000995e0(*(undefined4 *)(param_1 + 0x68));
  }
  fVar21 = DAT_00041094;
  switch(*(undefined4 *)(param_1 + 0xec)) {
  case 0:
    if (iVar1 == 2) {
      iVar7 = FUN_00083098(0x83,0);
    }
    else {
      iVar7 = FUN_00083098(0x84,0);
    }
    break;
  case 1:
    iVar7 = 0;
    break;
  case 2:
    if (*(float *)(param_1 + 0x70) < DAT_00041094 !=
        (NAN(*(float *)(param_1 + 0x70)) || NAN(DAT_00041094))) {
      return;
    }
    if (*(int *)(DAT_000410c8 + 0x40f3e) == 0) {
      return;
    }
    FUN_000409f0(param_1);
    uVar5 = *(undefined4 *)(*(int *)(iVar9 + DAT_000410cc) + 0x58);
    uVar4 = FUN_00083098(99,0);
    FUN_00036320(auStack_bc,uVar4);
    local_74 = *(float *)(param_1 + 0xc) + DAT_00041098;
    local_39 = 0xff;
    local_3a = 0x48;
    local_3b = 0x2c;
    local_3c = 0x15;
    local_70 = *(float *)(param_1 + 0x10) + fVar21;
    local_54 = fVar21;
    local_78 = *(float *)(param_1 + 8) + DAT_0004109c;
    local_58 = DAT_000410a0;
    FUN_000909a4(uVar5,auStack_bc,&local_78,&local_3c,DAT_000410a4,&local_58,0xf,DAT_000410a8,0);
    return;
  default:
    goto switchD_00040ef8_caseD_3;
  case 4:
    if (iVar1 == 2) {
      iVar7 = FUN_00083098(0x82,0);
      fVar21 = DAT_0004139c;
    }
    else {
      iVar7 = FUN_00083098(0x85,0);
      fVar21 = DAT_000410ac;
    }
    goto LAB_00040fda;
  }
  fVar21 = DAT_0004137c;
  iVar13 = *(int *)(iVar9 + DAT_000413a8);
  if (((*(char *)(iVar13 + 0x19c) == '\0') ||
      (*(float *)(param_1 + 0x70) < DAT_0004137c !=
       (NAN(*(float *)(param_1 + 0x70)) || NAN(DAT_0004137c)))) ||
     (*(int *)(DAT_000413b8 + 0x41262) == 0)) {
    if (iVar7 == 0) {
      if (iVar1 == 1) {
        FUN_000a3a68();
        iVar7 = FUN_000a5274();
        if (iVar7 != 0) goto LAB_0004132a;
        iVar7 = FUN_00083098(0x81,0);
        fVar21 = DAT_000413a4;
      }
      else if (iVar1 == 2) {
        iVar7 = FUN_0006e1b4();
        if (iVar7 == 0) {
          iVar7 = FUN_00083098(0x80,0);
          fVar21 = DAT_000413a4;
        }
        else {
          iVar7 = FUN_00083098(0x82,0);
          fVar21 = DAT_000413a0;
        }
      }
      else {
LAB_0004132a:
        iVar7 = FUN_00083098(0x85,0);
        fVar21 = DAT_000413a0;
      }
    }
  }
  else {
    FUN_000409f0(param_1);
    uVar5 = *(undefined4 *)(iVar13 + 0x58);
    uVar4 = FUN_00083098(0x259,0);
    FUN_00036320(local_a0,uVar4);
    local_68 = *(float *)(param_1 + 0xc) + DAT_0004138c;
    local_31 = 0xff;
    local_32 = 0x48;
    local_33 = 0x2c;
    local_34 = 0x15;
    local_64 = *(float *)(param_1 + 0x10) + fVar21;
    local_4c = fVar21;
    local_6c = *(float *)(param_1 + 8) + DAT_00041390;
    local_50 = DAT_00041394;
    FUN_000909a4(uVar5,local_a0,&local_6c,&local_34,DAT_00041398,&local_50,0xf,DAT_00041380,0);
    local_a0[0] = *(int *)(iVar9 + DAT_000413bc) + 8;
  }
  FUN_000a3a68();
  iVar13 = FUN_00094c30();
  if (iVar13 == 2) {
    local_38 = (int *)0x0;
    FUN_00017d64(&local_38,*(undefined4 *)(DAT_000413c0 + 0x41358));
  }
  else {
    local_38 = (int *)0x0;
    FUN_00017d64(&local_38,*(undefined4 *)(DAT_000413ac + 0x4114e));
  }
  FUN_000995e4(local_38);
  uVar2 = (**(code **)(*local_38 + 0x14))();
  uVar3 = (**(code **)(*local_38 + 0x18))();
  uVar4 = DAT_00041380;
  fVar16 = DAT_0004137c;
  iVar13 = *(int *)(iVar9 + DAT_000413b0);
  fVar17 = (*(float *)(param_1 + 8) - DAT_00041384) + DAT_0004137c;
  fVar18 = (*(float *)(param_1 + 0xc) - DAT_00041388) + DAT_0004137c;
  fVar19 = *(float *)(param_1 + 0x10) + DAT_0004137c;
  *(float *)(iVar13 + 0x1894) = (float)(ulonglong)uVar2;
  *(float *)(iVar13 + 0x1898) = fVar16;
  *(float *)(iVar13 + 0x189c) = fVar16;
  *(float *)(iVar13 + 0x18a0) = fVar16;
  *(float *)(iVar13 + 0x18a4) = fVar16;
  *(float *)(iVar13 + 0x18a8) = (float)(ulonglong)uVar3;
  *(float *)(iVar13 + 0x18ac) = fVar16;
  *(float *)(iVar13 + 0x18b0) = fVar16;
  *(float *)(iVar13 + 0x18b4) = fVar16;
  *(float *)(iVar13 + 0x18b8) = fVar16;
  *(float *)(iVar13 + 0x18bc) = fVar16;
  *(float *)(iVar13 + 0x18c0) = fVar16;
  *(float *)(iVar13 + 0x18c4) = fVar17;
  *(float *)(iVar13 + 0x18c8) = fVar18;
  *(float *)(iVar13 + 0x18cc) = fVar19;
  *(undefined4 *)(iVar13 + 0x18d0) = uVar4;
  *(int *)(iVar13 + 0x18d8) = *(int *)(iVar13 + 0x18d8) + 1;
  FUN_0008d434(iVar13,1);
  puVar8 = *(undefined **)(iVar9 + DAT_000413b4);
  local_44 = *puVar8;
  local_43 = puVar8[1];
  local_42 = puVar8[2];
  local_41 = puVar8[3];
  FUN_000a35f4(&local_44);
  FUN_000995e0(local_38);
  FUN_00017d90(&local_38);
LAB_00040fda:
  if (iVar7 != 0) {
    bVar15 = iVar1 == 2;
    if (bVar15) {
      uVar10 = 0xa0;
      uVar12 = 0x3e;
      iVar1 = 0x72;
    }
    else {
      uVar10 = 0x4f;
      uVar12 = 0x9f;
    }
    uVar14 = (undefined)iVar1;
    if (!bVar15) {
      uVar14 = 0;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar9 + DAT_000410cc) + 0x58);
    FUN_00036320(auStack_d8,iVar7);
    local_3d = 0xff;
    local_80 = *(float *)(param_1 + 0xc) - (fVar21 - DAT_000410b0);
    local_7c = *(undefined4 *)(param_1 + 0x10);
    local_60 = DAT_000410a0;
    local_5c = DAT_00041094;
    local_84 = *(float *)(param_1 + 8) - DAT_000410b4;
    local_40 = uVar14;
    local_3f = uVar12;
    local_3e = uVar10;
    FUN_000909a4(uVar4,auStack_d8,&local_84,&local_40,DAT_000410a4,&local_60,0xf,DAT_000410a8,0);
  }
switchD_00040ef8_caseD_3:
  return;
}



