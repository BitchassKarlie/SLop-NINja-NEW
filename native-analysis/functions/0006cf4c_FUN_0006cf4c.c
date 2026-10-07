/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006cf4c FUN_0006cf4c */

void FUN_0006cf4c(undefined4 param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int ****ppppiVar10;
  int iVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  code *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  int local_10c [2];
  int local_104;
  undefined auStack_fc [4];
  int local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc [8];
  undefined local_9c;
  undefined4 local_98 [8];
  undefined local_78;
  undefined4 local_74 [8];
  undefined local_54;
  int ****local_50 [8];
  char local_30;
  int local_2c;
  
  iVar4 = DAT_0006d30c;
  iVar18 = DAT_0006d308 + 0x6cf5c;
  local_2c = **(int **)(iVar18 + DAT_0006d30c);
  FUN_000990b0(*(undefined4 *)(iVar18 + DAT_0006d310));
  FUN_0008d388(*(undefined4 *)(iVar18 + DAT_0006d314));
  piVar5 = (int *)FUN_0008d120();
  iVar6 = (**(code **)(*piVar5 + 0x44))();
  piVar5 = (int *)FUN_0008d120();
  pcVar17 = *(code **)(*piVar5 + 0x28);
  piVar7 = (int *)FUN_0008d120();
  (**(code **)(*piVar7 + 0x2c))(auStack_fc,piVar7);
  piVar7 = (int *)FUN_0008d120();
  (**(code **)(*piVar7 + 0x2c))(local_10c,piVar7);
  (*pcVar17)(piVar5,0,local_f0 - local_f8,0,local_104 - local_10c[0]);
  piVar5 = (int *)FUN_0008d120();
  (**(code **)(*piVar5 + 8))(piVar5,param_1,DAT_0006d318 + 0x6cfcc,0);
  iVar8 = FUN_0008d120();
  uVar1 = *(undefined *)(DAT_0006d31c + 0x6cff0);
  uVar2 = *(undefined *)(DAT_0006d31c + 0x6cff1);
  uVar3 = *(undefined *)(DAT_0006d31c + 0x6cff3);
  *(undefined *)(iVar8 + 6) = *(undefined *)(DAT_0006d31c + 0x6cff2);
  *(undefined *)(iVar8 + 7) = uVar3;
  *(undefined *)(iVar8 + 5) = uVar2;
  *(undefined *)(iVar8 + 4) = uVar1;
  iVar8 = FUN_0008d120();
  local_ec = DAT_0006d2f8;
  local_e8 = DAT_0006d2fc;
  local_e4 = DAT_0006d300;
  if (*(char *)(iVar8 + 0x2c) == '\0') {
    puVar9 = &local_ec;
  }
  else {
    puVar9 = (undefined4 *)(iVar8 + 0x1c);
  }
  uVar13 = puVar9[1];
  uVar15 = puVar9[2];
  *(undefined4 *)(iVar8 + 0x1c) = *puVar9;
  *(undefined4 *)(iVar8 + 0x20) = uVar13;
  *(undefined4 *)(iVar8 + 0x24) = uVar15;
  if (iVar6 == 0) {
    iVar8 = FUN_0006e130();
    if (iVar8 == 0) {
      uVar13 = FUN_0008d120();
      FUN_0008d114(uVar13,DAT_0006d5b0 + 0x6d480);
    }
  }
  else {
    uVar13 = FUN_0008d120();
    FUN_0008d114(uVar13,DAT_0006d320 + 0x6d034);
  }
  uVar13 = FUN_000996c4();
  FUN_000996bc(uVar13,0x800);
  uVar13 = FUN_000996c4();
  FUN_000996bc(uVar13,0xc800);
  uVar13 = FUN_0001e818();
  FUN_00093c6c(uVar13,0x26c00);
  FUN_00093a1c(*(undefined4 *)(iVar18 + DAT_0006d324),0x7d000);
  FUN_0002e348();
  FUN_00091f0c();
  uVar13 = FUN_0007e454();
  FUN_0007e4c8(uVar13,DAT_0006d328 + 0x6d07e,DAT_0006d32c + 0x6d080,0);
  FUN_0007b72c();
  FUN_0007d1dc();
  FUN_00076a80();
  FUN_00076894();
  FUN_0006cdbc();
  puVar9 = (undefined4 *)FUN_000a3a68();
  uVar13 = FUN_00083098(0x2c3,0);
  FUN_000959f4(puVar9,0,uVar13);
  uVar13 = FUN_00083098(0x6d,0);
  FUN_000959f4(puVar9,1,uVar13);
  uVar13 = FUN_00083098(0x6e,0);
  FUN_000959f4(puVar9,2,uVar13);
  uVar13 = FUN_00083098(0x6f,0);
  FUN_000959f4(puVar9,3,uVar13);
  uVar13 = FUN_00083098(0x7e,0);
  FUN_000959f4(puVar9,4,uVar13);
  uVar13 = FUN_00083098(0x7f,0);
  FUN_000959f4(puVar9,5,uVar13);
  uVar13 = FUN_00083098(0x70,0);
  FUN_000959f4(puVar9,6,uVar13);
  uVar13 = FUN_00083098(0x71,0);
  FUN_000959f4(puVar9,7,uVar13);
  uVar13 = FUN_00083098(0x72,0);
  FUN_000959f4(puVar9,8,uVar13);
  uVar13 = FUN_00083098(0x73,0);
  FUN_000959f4(puVar9,9,uVar13);
  uVar13 = FUN_00083098(0x74,0);
  FUN_000959f4(puVar9,10,uVar13);
  local_c8 = DAT_0006d330 + 0x6d176;
  local_c4 = DAT_0006d334 + 0x6d17a;
  local_30 = '\x01';
  local_50[0] = (int ****)0x0;
  (**(code **)(DAT_0006d330 + 0x6d17e))(&local_c8,local_50);
  ppppiVar10 = (int ****)local_50;
  if (local_30 != '\0') {
    ppppiVar10 = local_50[0];
  }
  if (ppppiVar10 != (int ****)0x0) {
    (*(code *)(*ppppiVar10)[2])(ppppiVar10,puVar9 + 0x42);
  }
  FUN_0006c7bc(local_50);
  local_c8 = DAT_0006d338 + 0x6d1b8;
  (**(code **)*puVar9)(puVar9,0);
  local_74[0] = 0;
  local_d0 = DAT_0006d33c + 0x6d1d2;
  local_54 = 1;
  local_cc = *(undefined4 *)(iVar18 + DAT_0006d340);
  (**(code **)(DAT_0006d33c + 0x6d1da))(&local_d0,local_74);
  local_98[0] = 0;
  local_d8 = DAT_0006d344 + 0x6d1f0;
  local_78 = 1;
  local_d4 = *(undefined4 *)(iVar18 + DAT_0006d348);
  (**(code **)(DAT_0006d344 + 0x6d1f8))(&local_d8,local_98);
  local_bc[0] = 0;
  local_e0 = DAT_0006d34c + 0x6d20e;
  local_9c = 1;
  local_dc = *(undefined4 *)(iVar18 + DAT_0006d350);
  (**(code **)(DAT_0006d34c + 0x6d216))(&local_e0,local_bc);
  FUN_00094d3c(puVar9,local_74,local_98,local_bc);
  FUN_0006c840(local_bc);
  iVar19 = DAT_0006d35c;
  iVar8 = DAT_0006d358;
  local_e0 = DAT_0006d354 + 0x6d242;
  FUN_0006c814(local_98);
  iVar19 = iVar19 + 0x6d24a;
  local_d8 = DAT_0006d360 + 0x6d254;
  FUN_0006c7e8(local_74);
  iVar20 = *(int *)(iVar18 + iVar8);
  local_d0 = DAT_0006d364 + 0x6d266;
  FUN_00094cb4(puVar9,*(byte *)(*(int *)(iVar20 + 0x50) + 0x30) ^ 1);
  uVar15 = *(undefined4 *)(iVar20 + 0x50);
  uVar13 = FUN_0008f414(iVar19);
  uVar21 = FUN_0006fbdc(uVar15,uVar13);
  if ((int)uVar21 < 2) {
    uVar13 = 1;
  }
  else {
    uVar15 = *(undefined4 *)(iVar20 + 0x50);
    uVar13 = FUN_0008f414(iVar19,(int)((ulonglong)uVar21 >> 0x20));
    iVar11 = FUN_0006fbdc(uVar15,uVar13);
    if (iVar11 < 2) {
      uVar15 = *(undefined4 *)(iVar20 + 0x50);
      uVar13 = FUN_0008f414(iVar19);
      uVar13 = FUN_0006fbdc(uVar15,uVar13);
    }
    else {
      uVar13 = 2;
    }
  }
  FUN_00094c28(puVar9,uVar13);
  FUN_0006cd74(1);
  piVar5 = (int *)operator_new(0x16c);
  FUN_0001aec4();
  uVar13 = DAT_0006d304;
  iVar19 = *(int *)(iVar18 + iVar8);
  uVar15 = *(undefined4 *)(DAT_0006d368 + 0x6d2d0);
  uVar14 = *(undefined4 *)(DAT_0006d368 + 0x6d2d4);
  uVar16 = *(undefined4 *)(DAT_0006d368 + 0x6d2d8);
  *(undefined *)(iVar19 + 0xa1) = 0;
  *(undefined *)(iVar19 + 0xa0) = 0;
  *(undefined *)(iVar19 + 0xa2) = 0;
  *(undefined4 *)(iVar19 + 0x184) = 0;
  *(undefined4 *)(iVar19 + 0x94) = uVar15;
  *(undefined4 *)(iVar19 + 0x98) = uVar14;
  *(undefined4 *)(iVar19 + 0x9c) = uVar16;
  *(int **)(iVar19 + 0x4c) = piVar5;
  (**(code **)(*piVar5 + 8))(piVar5,0x3f800000,0x461c4000,0x4187999a,uVar13);
  *(undefined4 *)(iVar19 + 0x54) = 0;
  *(undefined4 *)(iVar19 + 0x58) = 0;
  *(undefined4 *)(iVar19 + 0x5c) = 0;
  *(undefined4 *)(iVar19 + 0x60) = 0;
  *(undefined4 *)(iVar19 + 100) = 0;
  *(undefined4 *)(iVar19 + 0x68) = 0;
  *(undefined4 *)(iVar19 + 0x70) = 0;
  *(undefined4 *)(iVar19 + 0x84) = 0;
  *(undefined4 *)(iVar19 + 0x6c) = 0;
  *(undefined4 *)(iVar19 + 0x74) = 0;
  *(undefined4 *)(iVar19 + 0x78) = 0;
  *(undefined4 *)(iVar19 + 0x7c) = 0;
  *(undefined4 *)(iVar19 + 0x80) = 0;
  pvVar12 = operator_new(0x430);
  FUN_0008f684();
  *(void **)(iVar19 + 0x58) = pvVar12;
  if (iVar6 == 0) {
    FUN_00090014(pvVar12,DAT_0006d5c8 + 0x6d594);
  }
  else {
    FUN_00090014(pvVar12,DAT_0006d59c + 0x6d3c4);
  }
  iVar19 = *(int *)(iVar18 + iVar8);
  if (*(int *)(iVar19 + 0x5c) == 0) {
    pvVar12 = operator_new(0x430);
    FUN_0008f684();
    *(void **)(iVar19 + 0x5c) = pvVar12;
    if (iVar6 == 0) {
      FUN_00090014(pvVar12,DAT_0006d5c4 + 0x6d588);
    }
    else {
      FUN_00090014(pvVar12,DAT_0006d5c0 + 0x6d57c);
    }
  }
  iVar6 = *(int *)(iVar18 + iVar8);
  if (*(int *)(iVar6 + 0x70) == 0) {
    pvVar12 = operator_new(0x430);
    FUN_0008f684();
    iVar19 = DAT_0006d5b8;
    *(void **)(iVar6 + 0x70) = pvVar12;
    FUN_00090014(pvVar12,iVar19 + 0x6d530);
    uVar13 = *(undefined4 *)(iVar6 + 0x70);
    *(undefined4 *)(iVar6 + 0x74) = uVar13;
    *(undefined4 *)(iVar6 + 0x78) = uVar13;
    *(undefined4 *)(iVar6 + 0x7c) = uVar13;
    *(undefined4 *)(iVar6 + 0x80) = uVar13;
  }
  iVar19 = DAT_0006d5a0 + 0x6d3e4;
  iVar6 = FUN_0009fac8(iVar19);
  if (iVar6 != 0) {
    pvVar12 = operator_new(0x430);
    FUN_0008f684();
    *(void **)(*(int *)(iVar18 + iVar8) + 0x74) = pvVar12;
    FUN_00090014(pvVar12,iVar19);
  }
  iVar19 = DAT_0006d5a4 + 0x6d3f2;
  iVar6 = FUN_0009fac8(iVar19);
  if (iVar6 != 0) {
    pvVar12 = operator_new(0x430);
    FUN_0008f684();
    *(void **)(*(int *)(iVar18 + iVar8) + 0x78) = pvVar12;
    FUN_00090014(pvVar12,iVar19);
  }
  iVar19 = DAT_0006d5a8 + 0x6d400;
  iVar6 = FUN_0009fac8(iVar19);
  if (iVar6 != 0) {
    pvVar12 = operator_new(0x430);
    FUN_0008f684();
    *(void **)(*(int *)(iVar18 + iVar8) + 0x7c) = pvVar12;
    FUN_00090014(pvVar12,iVar19);
  }
  iVar6 = *(int *)(iVar18 + iVar8);
  if (*(int *)(iVar6 + 0x84) == 0) {
    pvVar12 = operator_new(0x430);
    FUN_0008f684();
    iVar19 = DAT_0006d5bc;
    *(void **)(iVar6 + 0x84) = pvVar12;
    FUN_00090014(pvVar12,iVar19 + 0x6d55a);
  }
  iVar6 = *(int *)(iVar18 + iVar8);
  if (*(int *)(iVar6 + 0x6c) == 0) {
    pvVar12 = operator_new(0x430);
    FUN_0008f684();
    iVar8 = DAT_0006d5b4;
    *(void **)(iVar6 + 0x6c) = pvVar12;
    FUN_00090014(pvVar12,iVar8 + 0x6d514);
  }
  FUN_0002fa48(&local_c0,DAT_0006d5ac + 0x6d42a);
  FUN_0006cf10(local_c0);
  FUN_00017d90(&local_c0);
  FUN_00053e20();
  FUN_00024030();
  FUN_0002d17c();
  FUN_0002b0d8();
  FUN_0001f37c();
  FUN_00046fe4();
  FUN_0005aa70();
  FUN_0006c9a8();
  if (local_2c != **(int **)(iVar18 + iVar4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



