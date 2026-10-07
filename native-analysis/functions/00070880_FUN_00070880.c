/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00070880 FUN_00070880 */

void FUN_00070880(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float fVar25;
  double dVar22;
  double dVar23;
  double dVar24;
  int local_11c;
  int local_fc [13];
  void *local_c8;
  undefined4 local_b4;
  undefined4 local_b0;
  char local_ac [128];
  int local_2c;
  
  iVar2 = DAT_000711c8;
  iVar9 = DAT_000711c4 + 0x7088c;
  local_2c = **(int **)(iVar9 + DAT_000711c8);
  iVar16 = DAT_000711cc + 0x708aa;
  FUN_0009c250(local_fc);
  pvVar3 = operator_new(0x50);
  FUN_0009bdb8(pvVar3,DAT_000711d0 + 0x708c2);
  uVar4 = FUN_0006e164();
  FUN_0009bf5c(pvVar3,DAT_000711d4 + 0x708d2,uVar4);
  FUN_0009c01c(pvVar3,DAT_000711d8 + 0x708e2,*(undefined4 *)(param_1 + 0x34));
  iVar10 = 0;
  iVar15 = param_1;
  do {
    iVar13 = iVar10 + 1;
    uVar4 = FUN_0006c788(iVar10);
    FUN_0008f060(local_ac,0x19,iVar16,uVar4);
    FUN_0009c01c(pvVar3,local_ac,*(undefined4 *)(iVar15 + 0x38));
    iVar15 = iVar15 + 4;
    iVar10 = iVar13;
  } while (iVar13 != 4);
  FUN_0009c01c(pvVar3,DAT_000711dc + 0x7091c,*(undefined4 *)(param_1 + 0xf4));
  if (*(char *)(param_1 + 0x22) == '\0') {
    iVar10 = DAT_000711e0 + 0x70932;
  }
  else {
    iVar10 = DAT_00071714 + 0x7162a;
  }
  FUN_0009bf5c(pvVar3,DAT_000711e4 + 0x7093a,iVar10);
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar10 = DAT_000711e8 + 0x7094e;
  }
  else {
    iVar10 = DAT_00071710 + 0x71622;
  }
  FUN_0009bf5c(pvVar3,DAT_000711ec + 0x70956,iVar10);
  FUN_0009c01c(pvVar3,DAT_000711f4 + 0x7096a,*(undefined4 *)(*(int *)(iVar9 + DAT_000711f0) + 400));
  FUN_0009a9fc(local_fc,pvVar3);
  iVar10 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar15 = iVar10;
      iVar10 = *(int *)(iVar15 + 0x50);
    } while (iVar10 != 0);
    iVar16 = DAT_000711f8 + 0x7099a;
    iVar10 = DAT_000711fc + 0x7099e;
    iVar13 = DAT_00071200 + 0x709a0;
    do {
      while( true ) {
        pvVar5 = operator_new(0x50);
        FUN_0009bdb8(pvVar5,iVar16);
        FUN_0009bf5c(pvVar5,iVar10,iVar15 + 4);
        FUN_0009c01c(pvVar5,iVar13,*(undefined4 *)(iVar15 + 0x48));
        FUN_0009a9fc(pvVar3,pvVar5);
        iVar19 = *(int *)(iVar15 + 0x54);
        if (*(int *)(iVar15 + 0x54) != 0) break;
        iVar19 = *(int *)(iVar15 + 0x58);
        if (iVar19 == 0) goto LAB_000709e2;
        bVar21 = iVar15 == *(int *)(iVar19 + 0x54);
        iVar15 = iVar19;
        if (bVar21) {
          do {
            iVar15 = *(int *)(iVar19 + 0x58);
            if (iVar15 == 0) goto LAB_000709e2;
            bVar21 = iVar19 == *(int *)(iVar15 + 0x54);
            iVar19 = iVar15;
          } while (bVar21);
        }
      }
      do {
        iVar15 = iVar19;
        iVar19 = *(int *)(iVar15 + 0x50);
      } while (*(int *)(iVar15 + 0x50) != 0);
    } while (iVar15 != 0);
  }
LAB_000709e2:
  iVar10 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      iVar15 = iVar10;
      iVar10 = *(int *)(iVar15 + 0x50);
    } while (iVar10 != 0);
    iVar10 = DAT_00071204 + 0x70a02;
    iVar13 = DAT_00071208 + 0x70a08;
    iVar16 = DAT_0007120c + 0x70a0e;
    iVar19 = DAT_00071210 + 0x70a14;
    iVar20 = DAT_00071214 + 0x70a1a;
    do {
      while( true ) {
        pvVar5 = operator_new(0x50);
        FUN_0009bdb8(pvVar5,iVar13);
        FUN_0009bf5c(pvVar5,iVar16,iVar19);
        FUN_0009bf5c(pvVar5,iVar20,iVar15 + 4);
        FUN_0009c01c(pvVar5,iVar10,*(undefined4 *)(iVar15 + 0x48));
        FUN_0009a9fc(pvVar3,pvVar5);
        iVar11 = *(int *)(iVar15 + 0x54);
        if (*(int *)(iVar15 + 0x54) != 0) break;
        iVar11 = *(int *)(iVar15 + 0x58);
        if (iVar11 == 0) goto LAB_00070a6e;
        bVar21 = *(int *)(iVar11 + 0x54) == iVar15;
        iVar15 = iVar11;
        if (bVar21) {
          do {
            iVar15 = *(int *)(iVar11 + 0x58);
            if (iVar15 == 0) goto LAB_00070a6e;
            bVar21 = iVar11 == *(int *)(iVar15 + 0x54);
            iVar11 = iVar15;
          } while (bVar21);
        }
      }
      do {
        iVar15 = iVar11;
        iVar11 = *(int *)(iVar15 + 0x50);
      } while (*(int *)(iVar15 + 0x50) != 0);
    } while (iVar15 != 0);
  }
LAB_00070a6e:
  pvVar5 = operator_new(0x50);
  FUN_0009bdb8(pvVar5,DAT_00071218 + 0x70a7c);
  iVar10 = *(int *)(param_1 + 0x144);
  if (*(int *)(param_1 + 0x144) != 0) {
    do {
      iVar15 = iVar10;
      iVar10 = *(int *)(iVar15 + 0x8c);
    } while (iVar10 != 0);
    iVar10 = DAT_0007121c + 0x70aa4;
    iVar16 = DAT_00071220 + 0x70aa6;
    iVar13 = DAT_00071224 + 0x70aa8;
    do {
      while( true ) {
        pvVar6 = operator_new(0x50);
        FUN_0009bdb8(pvVar6,iVar10);
        FUN_0009bf5c(pvVar6,iVar16,iVar15 + 4);
        FUN_0009bfc8(pvVar6,iVar13,SUB84((double)*(float *)(iVar15 + 0x84),0),
                     (int)((ulonglong)(double)*(float *)(iVar15 + 0x84) >> 0x20));
        FUN_0009a9fc(pvVar5,pvVar6);
        iVar19 = *(int *)(iVar15 + 0x90);
        if (*(int *)(iVar15 + 0x90) != 0) break;
        iVar19 = *(int *)(iVar15 + 0x94);
        if (iVar19 == 0) goto LAB_00070af6;
        bVar21 = *(int *)(iVar19 + 0x90) == iVar15;
        iVar15 = iVar19;
        if (bVar21) {
          do {
            iVar15 = *(int *)(iVar19 + 0x94);
            if (iVar15 == 0) goto LAB_00070af6;
            bVar21 = iVar19 == *(int *)(iVar15 + 0x90);
            iVar19 = iVar15;
          } while (bVar21);
        }
      }
      do {
        iVar15 = iVar19;
        iVar19 = *(int *)(iVar15 + 0x8c);
      } while (*(int *)(iVar15 + 0x8c) != 0);
    } while (iVar15 != 0);
  }
LAB_00070af6:
  FUN_0009a9fc(pvVar3,pvVar5);
  pvVar5 = operator_new(0x50);
  FUN_0009bdb8(pvVar5,DAT_00071228 + 0x70b0c);
  iVar10 = *(int *)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x154) != 0) {
    do {
      iVar15 = iVar10;
      iVar10 = *(int *)(iVar15 + 0x8c);
    } while (iVar10 != 0);
    iVar16 = DAT_0007122c + 0x70b2e;
    iVar10 = DAT_00071230 + 0x70b30;
    do {
      while( true ) {
        pvVar6 = operator_new(0x50);
        FUN_0009bdb8(pvVar6,iVar16);
        FUN_0009bf5c(pvVar6,iVar10,iVar15 + 4);
        FUN_0009a9fc(pvVar5,pvVar6);
        iVar13 = *(int *)(iVar15 + 0x90);
        if (*(int *)(iVar15 + 0x90) != 0) break;
        iVar13 = *(int *)(iVar15 + 0x94);
        if (iVar13 == 0) goto LAB_00070b6a;
        bVar21 = iVar15 == *(int *)(iVar13 + 0x90);
        iVar15 = iVar13;
        if (bVar21) {
          do {
            iVar15 = *(int *)(iVar13 + 0x94);
            if (iVar15 == 0) goto LAB_00070b6a;
            bVar21 = iVar13 == *(int *)(iVar15 + 0x90);
            iVar13 = iVar15;
          } while (bVar21);
        }
      }
      do {
        iVar15 = iVar13;
        iVar13 = *(int *)(iVar15 + 0x8c);
      } while (*(int *)(iVar15 + 0x8c) != 0);
    } while (iVar15 != 0);
  }
LAB_00070b6a:
  FUN_0009a9fc(pvVar3,pvVar5);
  if ((*(char *)(param_1 + 0x21) != '\0') ||
     (fVar25 = *(float *)(param_1 + 0x114), fVar25 != 0.0 && fVar25 < 0.0 == NAN(fVar25))) {
    pvVar5 = operator_new(0x50);
    FUN_0009bdb8(pvVar5,DAT_00071250 + 0x70cae);
    if (*(char *)(param_1 + 0x54) == '\0') {
      iVar10 = DAT_00071254 + 0x70cc4;
    }
    else {
      iVar10 = DAT_00071718 + 0x71632;
    }
    iVar15 = 0;
    FUN_0009bf5c(pvVar5,DAT_00071258 + 0x70cce,iVar10);
    FUN_0009c01c(pvVar5,DAT_0007125c + 0x70cda,*(undefined4 *)(param_1 + 0x48));
    FUN_0009c01c(pvVar5,DAT_00071260 + 0x70ce8,*(undefined4 *)(param_1 + 0x4c));
    uVar4 = FUN_0006c788(*(undefined4 *)(param_1 + 0x50));
    FUN_0009bf5c(pvVar5,DAT_00071264 + 0x70cfa,uVar4);
    FUN_0009c01c(pvVar5,DAT_00071268 + 0x70d0a,*(undefined4 *)(param_1 + 0x5c));
    FUN_0009c01c(pvVar5,DAT_0007126c + 0x70d18,*(undefined4 *)(param_1 + 0x58));
    FUN_0009bfc8(pvVar5,DAT_00071270 + 0x70d2e,SUB84((double)*(float *)(param_1 + 0xf0),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0xf0) >> 0x20));
    dVar22 = (double)*(float *)(param_1 + 0x130);
    FUN_0008f060(local_ac,0x80,DAT_00071274 + 0x70d48);
    FUN_0009bf5c(pvVar5,DAT_00071278 + 0x70d5a,local_ac);
    local_ac[0] = '\0';
    if (0 < *(int *)(param_1 + 0x60)) {
      iVar16 = DAT_0007127c + 0x70d74;
      iVar13 = DAT_00071280 + 0x70d76;
      iVar10 = param_1;
      do {
        if (iVar15 == 0) {
          FUN_0008f060(local_ac,0x80,iVar13,*(undefined4 *)(param_1 + 100));
        }
        else {
          uVar4 = (undefined4)((ulonglong)dVar22 >> 0x20);
          dVar22 = (double)CONCAT44(uVar4,*(undefined4 *)(iVar10 + 100));
          FUN_0008f060(local_ac,0x80,iVar16,local_ac,*(undefined4 *)(iVar10 + 100),uVar4);
        }
        iVar15 = iVar15 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar15 < *(int *)(param_1 + 0x60));
      if (local_ac[0] != '\0') {
        FUN_0009bf5c(pvVar5,DAT_00071728 + 0x71680,local_ac);
      }
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      iVar15 = 0;
      iVar16 = DAT_00071284 + 0x70db2;
      iVar13 = DAT_00071288 + 0x70db4;
      iVar10 = param_1;
      do {
        if (iVar15 == 0) {
          FUN_0008f060(local_ac,0x80,iVar13,*(undefined4 *)(param_1 + 0x1b4),dVar22);
        }
        else {
          dVar22 = (double)(ulonglong)*(uint *)(iVar10 + 0x1b4);
          FUN_0008f060(local_ac,0x80,iVar16,local_ac,*(uint *)(iVar10 + 0x1b4));
        }
        iVar15 = iVar15 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar15 < *(int *)(param_1 + 0x1b0));
    }
    if (local_ac[0] != '\0') {
      FUN_0009bf5c(pvVar5,DAT_0007172c + 0x71690,local_ac);
    }
    FUN_0009c01c(pvVar5,DAT_0007128c + 0x70de8,*(undefined4 *)(param_1 + 0xf8));
    FUN_0009bfc8(pvVar5,DAT_00071290 + 0x70dfe,SUB84((double)*(float *)(param_1 + 0xfc),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0xfc) >> 0x20));
    FUN_0009bfc8(pvVar5,DAT_00071294 + 0x70e16,SUB84((double)*(float *)(param_1 + 0x114),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0x114) >> 0x20));
    FUN_0009bfc8(pvVar5,DAT_00071298 + 0x70e2e,SUB84((double)*(float *)(param_1 + 0x118),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0x118) >> 0x20));
    FUN_0009c01c(pvVar5,DAT_0007129c + 0x70e40,*(undefined4 *)(param_1 + 0x100));
    FUN_0009c01c(pvVar5,DAT_000712a0 + 0x70e50,*(undefined4 *)(param_1 + 0x104));
    FUN_0009c01c(pvVar5,DAT_000712a4 + 0x70e60,*(undefined4 *)(param_1 + 0x108));
    FUN_0009c01c(pvVar5,DAT_000712a8 + 0x70e70,*(undefined4 *)(param_1 + 0x10c));
    if (*(char *)(param_1 + 0x110) == '\0') {
      iVar10 = DAT_000712ac + 0x70e86;
    }
    else {
      iVar10 = DAT_00071724 + 0x71676;
    }
    FUN_0009bf5c(pvVar5,DAT_000712b0 + 0x70e8e,iVar10);
    if (*(char *)(param_1 + 0x111) == '\0') {
      iVar10 = DAT_000712b4 + 0x70ea2;
    }
    else {
      iVar10 = DAT_00071720 + 0x71670;
    }
    FUN_0009bf5c(pvVar5,DAT_000712b8 + 0x70eaa,iVar10);
    fVar25 = *(float *)(param_1 + 0xe8);
    if (fVar25 != 0.0 && fVar25 < 0.0 == NAN(fVar25)) {
      FUN_0009bfc8(pvVar5,DAT_00071730 + 0x716a6,SUB84((double)*(float *)(param_1 + 0xe4),0),
                   (int)((ulonglong)(double)*(float *)(param_1 + 0xe4) >> 0x20));
      FUN_0009bfc8(pvVar5,DAT_00071734 + 0x716bc,SUB84((double)*(float *)(param_1 + 0xe8),0),
                   (int)((ulonglong)(double)*(float *)(param_1 + 0xe8) >> 0x20));
      FUN_0009bfc8(pvVar5,DAT_00071738 + 0x716d2,SUB84((double)*(float *)(param_1 + 0xec),0),
                   (int)((ulonglong)(double)*(float *)(param_1 + 0xec) >> 0x20));
    }
    FUN_0009bfc8(pvVar5,DAT_000712bc + 0x70ecc,SUB84((double)*(float *)(param_1 + 0x11c),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0x11c) >> 0x20));
    FUN_0009bfc8(pvVar5,DAT_000712c0 + 0x70ee2,SUB84((double)*(float *)(param_1 + 0x11c),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0x11c) >> 0x20));
    pvVar6 = operator_new(0x50);
    FUN_0009bdb8(pvVar6,DAT_000712c4 + 0x70ef4);
    FUN_0009c01c(pvVar6,DAT_000712c8 + 0x70f02,*(undefined4 *)(param_1 + 0x124));
    FUN_0009bfc8(pvVar6,DAT_000712cc + 0x70f16,SUB84((double)*(float *)(param_1 + 0x128),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0x128) >> 0x20));
    FUN_0009bfc8(pvVar6,DAT_000712d0 + 0x70f2c,SUB84((double)*(float *)(param_1 + 300),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 300) >> 0x20));
    FUN_0009c01c(pvVar6,DAT_000712d4 + 0x70f3c,*(undefined4 *)(param_1 + 0x160));
    FUN_0009c01c(pvVar6,DAT_000712d8 + 0x70f4a,*(undefined4 *)(param_1 + 0x164));
    FUN_0009bfc8(pvVar6,DAT_000712dc + 0x70f5e,SUB84((double)*(float *)(param_1 + 0x168),0),
                 (int)((ulonglong)(double)*(float *)(param_1 + 0x168) >> 0x20));
    iVar16 = DAT_000712f4;
    iVar15 = DAT_000712f0;
    iVar10 = DAT_000712e0;
    piVar17 = (int *)**(int **)(param_1 + 0x138);
    if (*(int **)(param_1 + 0x138) != piVar17) {
      iVar19 = DAT_000712e4 + 0x70f80;
      iVar20 = DAT_000712e8 + 0x70f84;
      iVar13 = DAT_000712ec + 0x70f8a;
      do {
        pvVar7 = operator_new(0x50);
        FUN_0009bdb8(pvVar7,iVar10 + 0x70f9e);
        FUN_0009c01c(pvVar7,iVar15 + 0x70fb6,(int)((float)piVar17[5] + DAT_000711c0));
        FUN_0009c01c(pvVar7,iVar16 + 0x70fca,piVar17[6]);
        piVar14 = *(int **)(int *)piVar17[3];
        if ((int *)piVar17[3] != piVar14) {
          do {
            pvVar8 = operator_new(0x50);
            FUN_0009bdb8(pvVar8,iVar19);
            FUN_0009bfc8(pvVar8,iVar20,SUB84((double)(float)piVar14[3],0),
                         (int)((ulonglong)(double)(float)piVar14[3] >> 0x20));
            FUN_0009c01c(pvVar8,iVar13,piVar14[2]);
            FUN_0009a9fc(pvVar7,pvVar8);
            piVar14 = (int *)*piVar14;
          } while (piVar14 != (int *)piVar17[3]);
        }
        FUN_0009a9fc(pvVar6,pvVar7);
        piVar17 = (int *)*piVar17;
      } while (piVar17 != (int *)*(int *)(param_1 + 0x138));
    }
    FUN_0009a9fc(pvVar5,pvVar6);
    local_b4 = 0;
    local_b0 = 0;
    uVar4 = FUN_0001c940();
    iVar15 = FUN_0001bd8c(uVar4,0,&local_b4);
    iVar10 = DAT_000712f8;
    if (iVar15 != 0) {
      iVar13 = DAT_000712fc + 0x7105a;
      iVar16 = DAT_00071300 + 0x71060;
      iVar19 = DAT_00071304 + 0x71062;
      iVar20 = DAT_00071308 + 0x71066;
      do {
        while ((*(char *)(iVar15 + 0xb4) != '\0' || (*(char *)(iVar15 + 0x10c) != '\0'))) {
          uVar4 = FUN_0001c940();
          iVar15 = FUN_0001bdb8(uVar4,0,&local_b4);
          if (iVar15 == 0) goto LAB_00071190;
        }
        pvVar6 = operator_new(0x50);
        FUN_0009bdb8(pvVar6,iVar13);
        FUN_0008f060(local_ac,0x80,iVar16);
        FUN_0009bf5c(pvVar6,iVar19,local_ac);
        FUN_0008f060(local_ac,0x80,iVar16);
        FUN_0009bf5c(pvVar6,iVar20,local_ac);
        FUN_0008f060(local_ac,0x80,iVar16);
        FUN_0009bf5c(pvVar6,iVar10 + 0x71140,local_ac);
        FUN_0009c01c(pvVar6,DAT_0007130c + 0x7114e,*(undefined *)(iVar15 + 0x3c));
        FUN_0008f060(local_ac,0x80,DAT_00071310 + 0x71162);
        FUN_0009bf5c(pvVar6,DAT_00071314 + 0x71172,local_ac);
        FUN_0009a9fc(pvVar5,pvVar6);
        uVar4 = FUN_0001c940();
        iVar15 = FUN_0001bdb8(uVar4,0,&local_b4);
      } while (iVar15 != 0);
    }
LAB_00071190:
    uVar4 = FUN_0001c940();
    iVar15 = FUN_0001bd8c(uVar4,1,&local_b4);
    iVar10 = DAT_00071318;
    if (iVar15 != 0) {
      iVar13 = DAT_0007131c + 0x711b4;
      iVar16 = DAT_00071320 + 0x711ba;
      iVar19 = DAT_00071324 + 0x711bc;
      iVar20 = (int)&DAT_000711c0 + DAT_00071328;
      do {
        while (*(char *)(iVar15 + 0x88) != '\0') {
          uVar4 = FUN_0001c940();
          iVar15 = FUN_0001bdb8(uVar4,1,&local_b4);
          if (iVar15 == 0) goto LAB_00071474;
        }
        pvVar6 = operator_new(0x50);
        FUN_0009bdb8(pvVar6,iVar13);
        FUN_0008f060(local_ac,0x80,iVar16);
        FUN_0009bf5c(pvVar6,iVar19,local_ac);
        FUN_0008f060(local_ac,0x80,iVar16);
        FUN_0009bf5c(pvVar6,iVar20,local_ac);
        dVar22 = (double)*(float *)(iVar15 + 0x8c);
        dVar23 = (double)*(float *)(iVar15 + 0x90);
        dVar24 = (double)*(float *)(iVar15 + 0x94);
        FUN_0008f060(local_ac,0x80,iVar16);
        FUN_0009bf5c(pvVar6,iVar10 + 0x713fe,local_ac);
        FUN_0009c01c(pvVar6,DAT_000716e4 + 0x7140e,**(undefined4 **)(iVar9 + DAT_000716e0),
                     *(undefined4 **)(iVar9 + DAT_000716e0),dVar22,dVar23,dVar24);
        if (*(char *)(iVar15 + 0x68) == '\0') {
          iVar11 = DAT_000716e8 + 0x71422;
        }
        else {
          iVar11 = DAT_0007171c + 0x71664;
        }
        FUN_0009bf5c(pvVar6,DAT_000716ec + 0x71428,iVar11);
        if (*(char *)(iVar15 + 0x68) == '\0') {
          fVar25 = *(float *)(iVar15 + 0xa4);
        }
        else {
          fVar25 = *(float *)(iVar15 + 0x3c);
        }
        FUN_0008f060(local_ac,0x80,DAT_000716f0 + 0x71446,*(char *)(iVar15 + 0x68),(double)fVar25);
        FUN_0009bf5c(pvVar6,DAT_000716f4 + 0x71456,local_ac);
        FUN_0009a9fc(pvVar5,pvVar6);
        uVar4 = FUN_0001c940();
        iVar15 = FUN_0001bdb8(uVar4,1,&local_b4);
      } while (iVar15 != 0);
    }
LAB_00071474:
    uVar4 = FUN_0001c940();
    iVar10 = FUN_0001bd8c(uVar4,4,&local_b4);
    if (iVar10 != 0) {
      iVar16 = DAT_000716f8 + 0x71494;
      iVar13 = DAT_000716fc + 0x7149a;
      iVar19 = DAT_00071700 + 0x7149e;
      iVar20 = DAT_00071704 + 0x714a2;
      iVar15 = DAT_00071708 + 0x714a4;
      iVar10 = DAT_0007170c + 0x714a8;
      do {
        pvVar6 = operator_new(0x50);
        FUN_0009bdb8(pvVar6,iVar16);
        FUN_0008f060(local_ac,0x80,iVar13);
        FUN_0009bf5c(pvVar6,iVar19,local_ac);
        FUN_0008f060(local_ac,0x80,iVar20);
        FUN_0009bf5c(pvVar6,iVar15,local_ac);
        FUN_0009c01c(pvVar6,iVar10,0xffffffff);
        FUN_0009a9fc(pvVar5,pvVar6);
        uVar4 = FUN_0001c940();
        iVar11 = FUN_0001bdb8(uVar4,4,&local_b4);
      } while (iVar11 != 0);
    }
    FUN_0009a9fc(pvVar3,pvVar5);
  }
  iVar10 = DAT_00071240;
  iVar19 = 0;
  iVar16 = DAT_00071234 + 0x70ba2;
  iVar15 = DAT_00071238 + 0x70ba8;
  iVar13 = DAT_0007123c + 0x70baa;
  local_11c = param_1;
  do {
    uVar4 = FUN_0006c788(iVar19);
    FUN_0008f060(local_ac,0x80,iVar10 + 0x70bb8,uVar4);
    pvVar5 = operator_new(0x50);
    FUN_0009bdb8(pvVar5,local_ac);
    puVar12 = *(undefined4 **)(local_11c + 0x170);
    if (*(undefined4 **)(local_11c + 0x170) != (undefined4 *)0x0) {
      do {
        puVar1 = puVar12 + 3;
        puVar18 = puVar12;
        puVar12 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != (undefined4 *)0x0);
      do {
        while( true ) {
          pvVar6 = operator_new(0x50);
          FUN_0009bdb8(pvVar6,iVar16);
          FUN_0009c01c(pvVar6,iVar15,*puVar18);
          FUN_0009c01c(pvVar6,iVar13,puVar18[1]);
          FUN_0009a9fc(pvVar5,pvVar6);
          puVar12 = (undefined4 *)puVar18[4];
          if ((undefined4 *)puVar18[4] != (undefined4 *)0x0) break;
          puVar12 = (undefined4 *)puVar18[5];
          if (puVar12 == (undefined4 *)0x0) goto LAB_00070c1c;
          bVar21 = puVar18 == (undefined4 *)puVar12[4];
          puVar18 = puVar12;
          if (bVar21) {
            do {
              puVar18 = (undefined4 *)puVar12[5];
              if (puVar18 == (undefined4 *)0x0) goto LAB_00070c1c;
              bVar21 = puVar12 == (undefined4 *)puVar18[4];
              puVar12 = puVar18;
            } while (bVar21);
          }
        }
        do {
          puVar18 = puVar12;
          puVar12 = (undefined4 *)puVar18[3];
        } while ((undefined4 *)puVar18[3] != (undefined4 *)0x0);
      } while (puVar18 != (undefined4 *)0x0);
    }
LAB_00070c1c:
    FUN_0009a9fc(pvVar3,pvVar5);
    iVar19 = iVar19 + 1;
    local_11c = local_11c + 0x10;
    if (iVar19 == 4) {
      pvVar5 = operator_new(0x50);
      FUN_0009bdb8(pvVar5,DAT_00071244 + 0x70c42);
      uVar4 = FUN_0007b72c();
      FUN_00079eec(uVar4,pvVar5);
      FUN_0009a9fc(pvVar3,pvVar5);
      uVar4 = FUN_00070060();
      FUN_0009a8d4(local_fc,uVar4);
      local_fc[0] = *(int *)(iVar9 + DAT_00071248) + 8;
      if ((local_c8 != *(void **)(iVar9 + DAT_0007124c)) && (local_c8 != (void *)0x0)) {
        operator_delete__(local_c8);
      }
      FUN_0009ac4c(local_fc);
      if (local_2c != **(int **)(iVar9 + iVar2)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(0);
      }
      return;
    }
  } while( true );
}



