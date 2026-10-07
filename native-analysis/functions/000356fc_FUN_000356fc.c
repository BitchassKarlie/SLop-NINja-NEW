/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000356fc FUN_000356fc */

void FUN_000356fc(float param_1,int param_2)

{
  int **ppiVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
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
  
  iVar11 = DAT_00035af8 + 0x35710;
  iVar12 = DAT_00035afc;
  if (param_2 != 0) {
    piVar3 = (int *)FUN_0008d120();
    iVar4 = (**(code **)(*piVar3 + 0x48))();
    iVar12 = DAT_00035afc;
    if (iVar4 != 0) {
      iVar15 = *(int *)(iVar11 + DAT_00035afc);
      iVar4 = *(int *)(iVar15 + 0x40);
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      local_58 = *(undefined4 *)(iVar4 + 0x10);
      uVar19 = *(undefined4 *)(iVar4 + 0x14);
      local_5c = uVar6;
      local_54 = uVar19;
      piVar3 = (int *)FUN_0008d120();
      (**(code **)(*piVar3 + 0x20))(piVar3,0);
      piVar3 = (int *)FUN_0008d120();
      (**(code **)(*piVar3 + 0x1c))(piVar3,0);
      puVar9 = *(undefined **)(iVar11 + DAT_00035b08);
      local_3c = *puVar9;
      local_3b = puVar9[1];
      local_3a = puVar9[2];
      local_39 = puVar9[3];
      puVar9 = *(undefined **)(iVar11 + DAT_00035b0c);
      local_40 = *puVar9;
      local_3f = puVar9[1];
      local_3e = puVar9[2];
      local_3d = puVar9[3];
      piVar3 = (int *)FUN_0008d120();
      pcVar13 = *(code **)(*piVar3 + 0x3c);
      uVar5 = FUN_0009e880(&local_40);
      (*pcVar13)(piVar3,uVar5);
      iVar14 = FUN_0008d120();
      iVar4 = DAT_00035b10;
      local_64 = *(undefined4 *)(iVar15 + 0x98);
      local_68 = *(undefined4 *)(iVar15 + 0x94);
      local_60 = DAT_00035ad0;
      if (*(char *)(iVar14 + 0x2c) == '\0') {
        puVar17 = &local_68;
      }
      else {
        puVar17 = (undefined4 *)(iVar14 + 0x1c);
      }
      uVar5 = puVar17[1];
      uVar8 = puVar17[2];
      iVar16 = *(int *)(iVar11 + iVar12);
      *(undefined4 *)(iVar14 + 0x1c) = *puVar17;
      *(undefined4 *)(iVar14 + 0x20) = uVar5;
      *(undefined4 *)(iVar14 + 0x24) = uVar8;
      FUN_0001a804(*(undefined4 *)(iVar16 + 0x4c),0,0,*(undefined *)(iVar14 + 0x2c));
      FUN_000995e4(*(undefined4 *)(DAT_00035b14 + 0x35930));
      iVar14 = DAT_00035b18;
      fVar18 = DAT_00035ad4;
      iVar15 = *(int *)(iVar11 + iVar4);
      puVar17 = (undefined4 *)(DAT_00035b18 + 0x35844);
      *(undefined *)(iVar15 + 0x18d4) = 0;
      uVar5 = *(undefined4 *)(iVar14 + 0x35848);
      uVar8 = *(undefined4 *)(iVar14 + 0x3584c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35850);
      *(undefined4 *)(iVar15 + 0x1094) = *puVar17;
      *(undefined4 *)(iVar15 + 0x1098) = uVar5;
      *(undefined4 *)(iVar15 + 0x109c) = uVar8;
      *(undefined4 *)(iVar15 + 0x10a0) = uVar10;
      uVar5 = *(undefined4 *)(iVar14 + 0x35858);
      uVar8 = *(undefined4 *)(iVar14 + 0x3585c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35860);
      *(undefined4 *)(iVar15 + 0x10a4) = *(undefined4 *)(iVar14 + 0x35854);
      *(undefined4 *)(iVar15 + 0x10a8) = uVar5;
      *(undefined4 *)(iVar15 + 0x10ac) = uVar8;
      *(undefined4 *)(iVar15 + 0x10b0) = uVar10;
      uVar5 = *(undefined4 *)(iVar14 + 0x35868);
      uVar8 = *(undefined4 *)(iVar14 + 0x3586c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35870);
      *(undefined4 *)(iVar15 + 0x10b4) = *(undefined4 *)(iVar14 + 0x35864);
      *(undefined4 *)(iVar15 + 0x10b8) = uVar5;
      *(undefined4 *)(iVar15 + 0x10bc) = uVar8;
      *(undefined4 *)(iVar15 + 0x10c0) = uVar10;
      uVar5 = *(undefined4 *)(iVar14 + 0x35878);
      uVar8 = *(undefined4 *)(iVar14 + 0x3587c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35880);
      *(undefined4 *)(iVar15 + 0x10c4) = *(undefined4 *)(iVar14 + 0x35874);
      *(undefined4 *)(iVar15 + 0x10c8) = uVar5;
      *(undefined4 *)(iVar15 + 0x10cc) = uVar8;
      *(undefined4 *)(iVar15 + 0x10d0) = uVar10;
      uVar5 = *(undefined4 *)(iVar14 + 0x35848);
      uVar8 = *(undefined4 *)(iVar14 + 0x3584c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35850);
      *(undefined4 *)(iVar15 + 0x1894) = *puVar17;
      *(undefined4 *)(iVar15 + 0x1898) = uVar5;
      *(undefined4 *)(iVar15 + 0x189c) = uVar8;
      *(undefined4 *)(iVar15 + 0x18a0) = uVar10;
      uVar5 = *(undefined4 *)(iVar14 + 0x35858);
      uVar8 = *(undefined4 *)(iVar14 + 0x3585c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35860);
      *(undefined4 *)(iVar15 + 0x18a4) = *(undefined4 *)(iVar14 + 0x35854);
      *(undefined4 *)(iVar15 + 0x18a8) = uVar5;
      *(undefined4 *)(iVar15 + 0x18ac) = uVar8;
      *(undefined4 *)(iVar15 + 0x18b0) = uVar10;
      uVar5 = *(undefined4 *)(iVar14 + 0x35868);
      uVar8 = *(undefined4 *)(iVar14 + 0x3586c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35870);
      *(undefined4 *)(iVar15 + 0x18b4) = *(undefined4 *)(iVar14 + 0x35864);
      *(undefined4 *)(iVar15 + 0x18b8) = uVar5;
      *(undefined4 *)(iVar15 + 0x18bc) = uVar8;
      *(undefined4 *)(iVar15 + 0x18c0) = uVar10;
      uVar5 = *(undefined4 *)(iVar14 + 0x35878);
      uVar8 = *(undefined4 *)(iVar14 + 0x3587c);
      uVar10 = *(undefined4 *)(iVar14 + 0x35880);
      *(undefined4 *)(iVar15 + 0x18c4) = *(undefined4 *)(iVar14 + 0x35874);
      *(undefined4 *)(iVar15 + 0x18c8) = uVar5;
      *(undefined4 *)(iVar15 + 0x18cc) = uVar8;
      *(undefined4 *)(iVar15 + 0x18d0) = uVar10;
      *(int *)(iVar15 + 0x18d8) = *(int *)(iVar15 + 0x18d8) + 1;
      uVar2 = DAT_00035af0;
      uVar10 = DAT_00035ae4;
      uVar8 = DAT_00035ae0;
      uVar5 = DAT_00035adc;
      if ((*(float *)(*(int *)(iVar16 + 0x4c) + 0x144) == fVar18) &&
         (*(float *)(*(int *)(iVar16 + 0x4c) + 0x148) == fVar18)) {
        *(undefined4 *)(iVar15 + 0x1894) = DAT_00035ad8;
        *(float *)(iVar15 + 0x1898) = fVar18;
        *(float *)(iVar15 + 0x189c) = fVar18;
        *(float *)(iVar15 + 0x18a0) = fVar18;
        *(float *)(iVar15 + 0x18a4) = fVar18;
        *(undefined4 *)(iVar15 + 0x18a8) = uVar5;
        *(float *)(iVar15 + 0x18ac) = fVar18;
        *(float *)(iVar15 + 0x18b0) = fVar18;
        *(float *)(iVar15 + 0x18b4) = fVar18;
        *(float *)(iVar15 + 0x18b8) = fVar18;
        *(float *)(iVar15 + 0x18bc) = fVar18;
        *(float *)(iVar15 + 0x18c0) = fVar18;
        *(float *)(iVar15 + 0x18c4) = fVar18;
        *(float *)(iVar15 + 0x18c8) = fVar18;
        *(undefined4 *)(iVar15 + 0x18cc) = uVar8;
        *(undefined4 *)(iVar15 + 0x18d0) = uVar10;
        *(int *)(iVar15 + 0x18d8) = *(int *)(iVar15 + 0x18d8) + 1;
        FUN_0008d434(iVar15,1);
        FUN_0002fee4(&local_44,*(int *)(iVar16 + 0x40) + 0x18);
        local_4c = local_44;
        local_4b = local_43;
        local_4a = local_42;
        local_49 = local_41;
        FUN_000a344c(&local_4c,0x3d000000,0x3f780000,0x3e400000,DAT_00035ae8);
      }
      else {
        iVar4 = *(int *)(iVar11 + iVar4);
        *(undefined4 *)(iVar4 + 0x1894) = DAT_00035aec;
        *(undefined4 *)(iVar4 + 0x1898) = 0;
        *(undefined4 *)(iVar4 + 0x189c) = 0;
        *(undefined4 *)(iVar4 + 0x18a0) = 0;
        *(undefined4 *)(iVar4 + 0x18a4) = 0;
        *(undefined4 *)(iVar4 + 0x18a8) = uVar2;
        *(undefined4 *)(iVar4 + 0x18ac) = 0;
        *(undefined4 *)(iVar4 + 0x18b0) = 0;
        *(undefined4 *)(iVar4 + 0x18b4) = 0;
        *(undefined4 *)(iVar4 + 0x18b8) = 0;
        *(undefined4 *)(iVar4 + 0x18bc) = 0;
        *(undefined4 *)(iVar4 + 0x18c0) = 0;
        *(undefined4 *)(iVar4 + 0x18c4) = 0;
        *(undefined4 *)(iVar4 + 0x18c8) = 0;
        *(undefined4 *)(iVar4 + 0x18cc) = uVar8;
        *(undefined4 *)(iVar4 + 0x18d0) = 0x3f800000;
        *(int *)(iVar4 + 0x18d8) = *(int *)(iVar4 + 0x18d8) + 1;
        FUN_0008d434(iVar4,1);
        FUN_0002fee4(&local_48,*(int *)(*(int *)(iVar11 + iVar12) + 0x40) + 0x18);
        local_50 = local_48;
        local_4f = local_47;
        local_4e = local_46;
        local_4d = local_45;
        FUN_000a344c(&local_50,0,0x3f800000,0x3e180000,DAT_00035af4);
      }
      iVar4 = DAT_00035b1c;
      FUN_000995e0(*(undefined4 *)(DAT_00035b1c + 0x35a8a));
      iVar14 = FUN_0006dc50();
      if (iVar14 == 0) {
        fVar18 = *(float *)(DAT_00035b20 + 0x359b8);
        if (fVar18 == 0.0 || fVar18 < 0.0 != NAN(fVar18)) {
          return;
        }
        FUN_00035488();
        return;
      }
      piVar3 = (int *)FUN_0008d120();
      (**(code **)(*piVar3 + 0x20))(piVar3,1);
      piVar3 = (int *)FUN_0008d120();
      (**(code **)(*piVar3 + 0x1c))(piVar3,1);
      piVar3 = (int *)FUN_0008d120();
      pcVar13 = *(code **)(*piVar3 + 0x3c);
      uVar5 = FUN_0009e880(&local_3c);
      (*pcVar13)(piVar3,uVar5);
      FUN_0001c940();
      FUN_0001ba98();
      piVar3 = (int *)FUN_0008d120();
      pcVar13 = *(code **)(*piVar3 + 0x3c);
      uVar5 = FUN_0009e880(&local_40);
      (*pcVar13)(piVar3,uVar5);
      piVar3 = (int *)FUN_0008d120();
      (**(code **)(*piVar3 + 0x1c))(piVar3,1);
      piVar3 = (int *)FUN_0008d120();
      (**(code **)(*piVar3 + 0x20))(piVar3,0);
      iVar14 = *(int *)(iVar11 + iVar12);
      FUN_00049bf8(*(undefined4 *)(iVar14 + 0x40),param_1);
      FUN_00049c2c(*(undefined4 *)(iVar14 + 0x40),2);
      FUN_0002c9c8();
      FUN_00022e8c();
      FUN_0001d520();
      FUN_0001cedc();
      FUN_00049c2c(*(undefined4 *)(iVar14 + 0x40),3);
      uVar5 = FUN_0007e454();
      cVar7 = *(char *)(iVar14 + 2);
      iVar14 = 0;
      if (cVar7 != '\0') {
        cVar7 = '\x01';
      }
      FUN_0007db18(uVar5,param_1 / *(float *)(DAT_00035d5c + 0x35bfc),cVar7,0xffffffff);
      piVar3 = (int *)FUN_0008d120();
      (**(code **)(*piVar3 + 0x1c))(piVar3,0);
      do {
        ppiVar1 = (int **)(iVar4 + 0x35a26 + iVar14);
        iVar14 = iVar14 + 4;
        (**(code **)(**ppiVar1 + 0x34))();
      } while (iVar14 != 0x40);
      uVar5 = FUN_0007e454();
      iVar4 = *(int *)(iVar11 + iVar12);
      cVar7 = *(char *)(iVar4 + 2);
      if (cVar7 != '\0') {
        cVar7 = '\x01';
      }
      FUN_0007db18(uVar5,param_1 / *(float *)(DAT_00035d60 + 0x35c42),cVar7,0);
      piVar3 = (int *)FUN_0008d120();
      pcVar13 = *(code **)(*piVar3 + 0x3c);
      uVar5 = FUN_0009e880(&local_3c);
      (*pcVar13)(piVar3,uVar5);
      FUN_000309e4(param_1);
      piVar3 = (int *)FUN_0008d120();
      pcVar13 = *(code **)(*piVar3 + 0x3c);
      uVar5 = FUN_0009e880(&local_40);
      (*pcVar13)(piVar3,uVar5);
      FUN_00049c2c(*(undefined4 *)(iVar4 + 0x40),0);
      uVar5 = FUN_0007e454();
      cVar7 = *(char *)(iVar4 + 2);
      if (cVar7 != '\0') {
        cVar7 = '\x01';
      }
      FUN_0007db18(uVar5,param_1,cVar7,1);
      uVar5 = DAT_00035d58;
      *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0xc) = DAT_00035d58;
      *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x10) = uVar5;
      *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x14) = uVar5;
      uVar5 = FUN_00086780();
      FUN_00085b20(uVar5,0);
      FUN_00049c2c(*(undefined4 *)(iVar4 + 0x40),1);
      if (*(int *)(iVar4 + 0x164) != 0) {
        FUN_00051110();
      }
      iVar4 = FUN_0006e130();
      if ((iVar4 != 0) &&
         (fVar18 = *(float *)(*(int *)(iVar11 + iVar12) + 0x30),
         fVar18 != 0.0 && fVar18 < 0.0 == NAN(fVar18))) {
        FUN_00034ebc();
      }
      iVar4 = *(int *)(iVar11 + iVar12);
      FUN_00049c2c(*(undefined4 *)(iVar4 + 0x40),4);
      fVar18 = *(float *)(iVar4 + 0x14);
      if (fVar18 != 0.0 && fVar18 < 0.0 == NAN(fVar18)) {
        FUN_00035254();
      }
      iVar14 = *(int *)(iVar11 + iVar12);
      FUN_00049c2c(*(undefined4 *)(iVar14 + 0x40),5);
      FUN_000a3a68();
      iVar4 = FUN_00094b98();
      if (((iVar4 != 0) && (iVar4 = *(int *)(iVar14 + 0x164), iVar4 != 0)) &&
         (*(int *)(iVar4 + 0x11c) == 0xb)) {
        FUN_000a3a68();
        FUN_000951c0();
      }
      iVar4 = *(int *)(iVar11 + iVar12);
      *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0xc) = uVar6;
      *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x10) = local_58;
      *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x14) = uVar19;
      fVar18 = *(float *)(DAT_00035d64 + 0x35d46);
      if (fVar18 != 0.0 && fVar18 < 0.0 == NAN(fVar18)) {
        FUN_00035488();
      }
    }
  }
  iVar4 = DAT_00035b00;
  if ((*(char *)(DAT_00035b00 + 0x35738) != '\0') &&
     (iVar14 = *(int *)(iVar11 + iVar12), *(char *)(iVar14 + 2) != '\0')) {
    *(undefined *)(DAT_00035b00 + 0x35738) = 0;
    uVar5 = FUN_0002e348();
    uVar6 = FUN_0008f414(DAT_00035b28 + 0x359e6);
    FUN_0009191c(uVar5,uVar6);
    cVar7 = *(char *)(iVar14 + 2);
    *(undefined *)(iVar4 + 0x35844) = 0;
    *(bool *)(iVar14 + 2) = cVar7 == '\0';
  }
  iVar4 = DAT_00035b04;
  if (*(char *)(DAT_00035b04 + 0x35859) != '\0') {
    uVar5 = FUN_0002e348();
    uVar6 = FUN_0008f414(DAT_00035b24 + 0x359c0);
    FUN_0009191c(uVar5,uVar6);
    *(undefined *)(iVar4 + 0x35859) = 0;
  }
  FUN_00049c2c(*(undefined4 *)(*(int *)(iVar11 + iVar12) + 0x40),6);
  return;
}



