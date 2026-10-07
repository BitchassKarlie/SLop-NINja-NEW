/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003f0c8 FUN_0003f0c8 */

void FUN_0003f0c8(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  undefined *puVar17;
  undefined uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s22;
  int **local_2a4;
  undefined4 local_290;
  undefined auStack_27c [144];
  int *local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined auStack_15c [28];
  int local_140 [7];
  int local_124 [7];
  int local_108 [7];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined local_88;
  undefined local_87;
  undefined local_86;
  undefined local_85;
  undefined auStack_84 [4];
  undefined local_80;
  undefined local_7f;
  undefined local_7e;
  undefined local_7d;
  undefined local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined local_79;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_6d;
  undefined auStack_6c [32];
  int local_4c;
  
  iVar4 = DAT_0003f378;
  iVar16 = DAT_0003f374 + 0x3f0dc;
  local_4c = **(int **)(iVar16 + DAT_0003f378);
  if (0 < *(int *)(param_1 + 0x284)) {
    *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + -1;
  }
  *(undefined *)(param_1 + 0x61) = 0;
  iVar5 = DAT_0003f37c;
  fVar26 = *(float *)(param_1 + 4);
  fVar27 = *(float *)(param_1 + 0x18);
  fVar28 = *(float *)(param_1 + 8);
  fVar29 = *(float *)(param_1 + 0x1c);
  fVar30 = *(float *)(param_1 + 0xc);
  fVar31 = *(float *)(param_1 + 0x20);
  if ((-1 < *(int *)(param_1 + 0x5c)) && (*(char *)(param_1 + 0x2d) != '\0')) {
    uVar19 = *(undefined4 *)(*(int *)(iVar16 + DAT_0003f37c) + 0x58);
    FUN_00036320(local_108,*(undefined4 *)(param_1 + 0x54));
    fVar7 = (float)FUN_00090978(uVar19,local_108);
    iVar6 = DAT_0003f384;
    iVar10 = DAT_0003f380;
    local_108[0] = *(int *)(iVar16 + DAT_0003f380) + 8;
    puVar12 = *(undefined4 **)(param_1 + 0x10);
    bVar1 = fVar7 < DAT_0003f354;
    bVar2 = fVar7 == DAT_0003f354;
    bVar3 = NAN(fVar7) || NAN(DAT_0003f354);
    fVar25 = DAT_0003f354;
    if (!bVar2 && bVar1 == bVar3) {
      fVar25 = DAT_0003f354 / fVar7;
    }
    if (bVar2 || bVar1 != bVar3) {
      unaff_s22 = DAT_0003f358;
    }
    if (!bVar2 && bVar1 == bVar3) {
      fVar7 = DAT_0003f358;
    }
    if (!bVar2 && bVar1 == bVar3) {
      unaff_s22 = fVar25 * fVar7;
    }
    if (puVar12 != (undefined4 *)0x0) {
      puVar12 = &local_ec;
      local_e8 = DAT_0003f35c;
      local_e0 = DAT_0003f360;
      local_ec = DAT_0003f364;
      local_e4 = DAT_0003f368;
    }
    iVar13 = *(int *)(iVar16 + iVar5);
    local_6d = 0xff;
    local_6e = 0x40;
    local_290 = *(undefined4 *)(iVar13 + 0x58);
    fVar26 = fVar26 + fVar27;
    local_6f = 0x22;
    local_70 = 0x17;
    fVar28 = fVar28 + fVar29;
    fVar30 = fVar30 + fVar31;
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_00036320(local_124,*(undefined4 *)(param_1 + 0x54));
      local_75 = 0xff;
      local_78 = 0x17;
      local_b4 = fVar28 + *(float *)(DAT_0003f6c4 + 0x3f598) * DAT_0003f694;
      local_77 = 0x22;
      local_76 = 0x40;
      local_b0 = fVar30 + *(float *)(DAT_0003f6c4 + 0x3f59c) * DAT_0003f694;
      local_b8 = fVar26 + *(float *)(DAT_0003f6c4 + 0x3f594) * DAT_0003f694;
      local_90 = *(undefined4 *)(DAT_0003f6c8 + 0x3f5d6);
      local_8c = *(undefined4 *)(DAT_0003f6c8 + 0x3f5da);
      FUN_000909a4(local_290,local_124,&local_b8,&local_78,unaff_s22,&local_90,3,DAT_0003f698,
                   puVar12);
      fVar27 = unaff_s22 * DAT_0003f6a0;
      local_124[0] = *(int *)(iVar16 + iVar10) + 8;
    }
    else {
      local_290 = *(undefined4 *)(iVar13 + 0x70);
      fVar27 = unaff_s22 * DAT_0003f36c;
      puVar17 = *(undefined **)(iVar16 + DAT_0003f388);
      local_6d = puVar17[3];
      local_6e = puVar17[2];
      local_6f = puVar17[1];
      local_70 = *puVar17;
      local_ac = fVar26;
      local_a8 = fVar28;
      local_a4 = fVar30;
      uVar8 = (**(code **)(**(int **)(DAT_0003f384 + 0x3f202) + 0x14))();
      uVar9 = (**(code **)(**(int **)(iVar6 + 0x3f202) + 0x18))();
      local_74 = *puVar17;
      local_73 = puVar17[1];
      local_72 = puVar17[2];
      local_71 = puVar17[3];
      iVar13 = FUN_0003e258(&local_1ec,&local_ac,(float)(ulonglong)uVar8,(float)(ulonglong)uVar9,
                            local_ec,local_e8,local_e4,local_e0,&local_74);
      if (iVar13 != 0) {
        FUN_000995e4(*(undefined4 *)(iVar6 + 0x3f202));
        iVar13 = DAT_0003f6c0;
        iVar24 = *(int *)(iVar16 + DAT_0003f6bc);
        puVar20 = (undefined4 *)(DAT_0003f6c0 + 0x3f4f4);
        *(undefined *)(iVar24 + 0x18d4) = 0;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f4f8);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f4fc);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f500);
        *(undefined4 *)(iVar24 + 0x1094) = *puVar20;
        *(undefined4 *)(iVar24 + 0x1098) = uVar19;
        *(undefined4 *)(iVar24 + 0x109c) = uVar11;
        *(undefined4 *)(iVar24 + 0x10a0) = uVar15;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f508);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f50c);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f510);
        *(undefined4 *)(iVar24 + 0x10a4) = *(undefined4 *)(iVar13 + 0x3f504);
        *(undefined4 *)(iVar24 + 0x10a8) = uVar19;
        *(undefined4 *)(iVar24 + 0x10ac) = uVar11;
        *(undefined4 *)(iVar24 + 0x10b0) = uVar15;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f518);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f51c);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f520);
        *(undefined4 *)(iVar24 + 0x10b4) = *(undefined4 *)(iVar13 + 0x3f514);
        *(undefined4 *)(iVar24 + 0x10b8) = uVar19;
        *(undefined4 *)(iVar24 + 0x10bc) = uVar11;
        *(undefined4 *)(iVar24 + 0x10c0) = uVar15;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f528);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f52c);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f530);
        *(undefined4 *)(iVar24 + 0x10c4) = *(undefined4 *)(iVar13 + 0x3f524);
        *(undefined4 *)(iVar24 + 0x10c8) = uVar19;
        *(undefined4 *)(iVar24 + 0x10cc) = uVar11;
        *(undefined4 *)(iVar24 + 0x10d0) = uVar15;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f4f8);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f4fc);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f500);
        *(undefined4 *)(iVar24 + 0x1894) = *puVar20;
        *(undefined4 *)(iVar24 + 0x1898) = uVar19;
        *(undefined4 *)(iVar24 + 0x189c) = uVar11;
        *(undefined4 *)(iVar24 + 0x18a0) = uVar15;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f508);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f50c);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f510);
        *(undefined4 *)(iVar24 + 0x18a4) = *(undefined4 *)(iVar13 + 0x3f504);
        *(undefined4 *)(iVar24 + 0x18a8) = uVar19;
        *(undefined4 *)(iVar24 + 0x18ac) = uVar11;
        *(undefined4 *)(iVar24 + 0x18b0) = uVar15;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f518);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f51c);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f520);
        *(undefined4 *)(iVar24 + 0x18b4) = *(undefined4 *)(iVar13 + 0x3f514);
        *(undefined4 *)(iVar24 + 0x18b8) = uVar19;
        *(undefined4 *)(iVar24 + 0x18bc) = uVar11;
        *(undefined4 *)(iVar24 + 0x18c0) = uVar15;
        uVar19 = *(undefined4 *)(iVar13 + 0x3f528);
        uVar11 = *(undefined4 *)(iVar13 + 0x3f52c);
        uVar15 = *(undefined4 *)(iVar13 + 0x3f530);
        *(undefined4 *)(iVar24 + 0x18c4) = *(undefined4 *)(iVar13 + 0x3f524);
        *(undefined4 *)(iVar24 + 0x18c8) = uVar19;
        *(undefined4 *)(iVar24 + 0x18cc) = uVar11;
        *(undefined4 *)(iVar24 + 0x18d0) = uVar15;
        *(int *)(iVar24 + 0x18d8) = *(int *)(iVar24 + 0x18d8) + 1;
        FUN_0008d434(iVar24,1);
        FUN_000a3434(&local_1ec,4,0);
        FUN_000995e0(*(undefined4 *)(iVar6 + 0x3f202));
      }
    }
    local_2a4 = &local_1ec;
    if (*(int *)(param_1 + 0x58) == 0) {
      local_1ec = (int *)0x0;
      FUN_00017d64(local_2a4,*(undefined4 *)(DAT_0003f38c + 0x3f2a0));
      if (*(char *)(param_1 + 0x62) == '\0') {
        puVar17 = *(undefined **)(iVar16 + DAT_0003f6cc);
        uVar21 = *puVar17;
        uVar22 = puVar17[1];
        uVar18 = puVar17[2];
        uVar23 = puVar17[3];
        fVar27 = DAT_0003f698;
      }
      else {
        uVar18 = 0x80;
        uVar23 = 0xff;
        uVar22 = 0x80;
        uVar21 = 0x80;
        fVar27 = DAT_0003f370;
      }
      uVar8 = (**(code **)(*local_1ec + 0x14))();
      uVar9 = (**(code **)(*local_1ec + 0x18))();
      piVar14 = (int *)(DAT_0003f390 + 0x3f2d8);
      if (-1 < *piVar14 << 0x1f) {
        iVar10 = __cxa_guard_acquire(piVar14);
        iVar5 = DAT_0003f6d0;
        if (iVar10 != 0) {
          puVar12 = (undefined4 *)(DAT_0003f6d0 + 0x3f65c);
          *puVar12 = DAT_0003f6a4;
          *(undefined4 *)(iVar5 + 0x3f660) = DAT_0003f6a8;
          *(float *)(iVar5 + 0x3f664) = DAT_0003f68c;
          __cxa_guard_release(piVar14);
          __aeabi_atexit(puVar12,DAT_0003f6d8 + 0x3f686,*(undefined4 *)(iVar16 + DAT_0003f6d4));
        }
      }
      local_d8 = fVar28 + *(float *)(DAT_0003f394 + 0x3f2fe);
      local_d4 = fVar30 + *(float *)(DAT_0003f394 + 0x3f302);
      local_dc = fVar26 + *(float *)(DAT_0003f394 + 0x3f2fa);
      local_88 = uVar21;
      local_87 = uVar22;
      local_86 = uVar18;
      local_85 = uVar23;
      iVar10 = FUN_0003e258(auStack_27c,&local_dc,fVar27 * (float)(ulonglong)uVar8,
                            fVar27 * (float)(ulonglong)uVar9,local_ec,local_e8,local_e4,local_e0,
                            &local_88);
      iVar5 = DAT_0003f784;
      if (iVar10 != 0) {
        puVar12 = (undefined4 *)(DAT_0003f784 + 0x3f6e8);
        FUN_000995e4(local_1ec);
        iVar10 = *(int *)(iVar16 + DAT_0003f788);
        *(undefined *)(iVar10 + 0x18d4) = 0;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f6ec);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f6f0);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f6f4);
        *(undefined4 *)(iVar10 + 0x1094) = *puVar12;
        *(undefined4 *)(iVar10 + 0x1098) = uVar19;
        *(undefined4 *)(iVar10 + 0x109c) = uVar11;
        *(undefined4 *)(iVar10 + 0x10a0) = uVar15;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f6fc);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f700);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f704);
        *(undefined4 *)(iVar10 + 0x10a4) = *(undefined4 *)(iVar5 + 0x3f6f8);
        *(undefined4 *)(iVar10 + 0x10a8) = uVar19;
        *(undefined4 *)(iVar10 + 0x10ac) = uVar11;
        *(undefined4 *)(iVar10 + 0x10b0) = uVar15;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f70c);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f710);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f714);
        *(undefined4 *)(iVar10 + 0x10b4) = *(undefined4 *)(iVar5 + 0x3f708);
        *(undefined4 *)(iVar10 + 0x10b8) = uVar19;
        *(undefined4 *)(iVar10 + 0x10bc) = uVar11;
        *(undefined4 *)(iVar10 + 0x10c0) = uVar15;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f71c);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f720);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f724);
        *(undefined4 *)(iVar10 + 0x10c4) = *(undefined4 *)(iVar5 + 0x3f718);
        *(undefined4 *)(iVar10 + 0x10c8) = uVar19;
        *(undefined4 *)(iVar10 + 0x10cc) = uVar11;
        *(undefined4 *)(iVar10 + 0x10d0) = uVar15;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f6ec);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f6f0);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f6f4);
        *(undefined4 *)(iVar10 + 0x1894) = *puVar12;
        *(undefined4 *)(iVar10 + 0x1898) = uVar19;
        *(undefined4 *)(iVar10 + 0x189c) = uVar11;
        *(undefined4 *)(iVar10 + 0x18a0) = uVar15;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f6fc);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f700);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f704);
        *(undefined4 *)(iVar10 + 0x18a4) = *(undefined4 *)(iVar5 + 0x3f6f8);
        *(undefined4 *)(iVar10 + 0x18a8) = uVar19;
        *(undefined4 *)(iVar10 + 0x18ac) = uVar11;
        *(undefined4 *)(iVar10 + 0x18b0) = uVar15;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f70c);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f710);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f714);
        *(undefined4 *)(iVar10 + 0x18b4) = *(undefined4 *)(iVar5 + 0x3f708);
        *(undefined4 *)(iVar10 + 0x18b8) = uVar19;
        *(undefined4 *)(iVar10 + 0x18bc) = uVar11;
        *(undefined4 *)(iVar10 + 0x18c0) = uVar15;
        uVar19 = *(undefined4 *)(iVar5 + 0x3f71c);
        uVar11 = *(undefined4 *)(iVar5 + 0x3f720);
        uVar15 = *(undefined4 *)(iVar5 + 0x3f724);
        *(undefined4 *)(iVar10 + 0x18c4) = *(undefined4 *)(iVar5 + 0x3f718);
        *(undefined4 *)(iVar10 + 0x18c8) = uVar19;
        *(undefined4 *)(iVar10 + 0x18cc) = uVar11;
        *(undefined4 *)(iVar10 + 0x18d0) = uVar15;
        *(int *)(iVar10 + 0x18d8) = *(int *)(iVar10 + 0x18d8) + 1;
        FUN_0008d434(iVar10,1);
        FUN_000a3434(auStack_27c,4,0);
        FUN_000995e0(local_1ec);
        *(undefined *)(param_1 + 0x61) = 1;
      }
      FUN_00017d90(local_2a4);
    }
    else {
      FUN_0008f060(auStack_6c,0x20,DAT_0003f6ac + 0x3f3a8);
      fVar29 = DAT_0003f68c;
      FUN_00036320(local_140,auStack_6c);
      uVar23 = local_6d;
      uVar18 = local_6e;
      uVar22 = local_6f;
      uVar21 = local_70;
      iVar6 = DAT_0003f6b0;
      fVar31 = DAT_0003f698;
      local_c4 = fVar26 + DAT_0003f690;
      puVar20 = (undefined4 *)(DAT_0003f6b0 + 0x3f3d6);
      local_7b = local_6f;
      local_79 = local_6d;
      fVar28 = fVar28 + DAT_0003f694;
      local_98 = *puVar20;
      local_94 = *(undefined4 *)(DAT_0003f6b0 + 0x3f3da);
      local_7c = local_70;
      local_7a = local_6e;
      local_c0 = fVar28;
      local_bc = fVar30 + fVar29;
      FUN_000909a4(local_290,local_140,&local_c4,&local_7c,fVar27,&local_98,3,DAT_0003f698,puVar12);
      local_140[0] = *(int *)(iVar16 + iVar10) + 8;
      FUN_0008f060(auStack_6c,0x20,DAT_0003f6b4 + 0x3f44e,*(undefined4 *)(param_1 + 0x5c));
      local_1ec = *(int **)(DAT_0003f6b8 + 0x3f45a);
      uStack_1e8 = *(undefined4 *)(DAT_0003f6b8 + 0x3f45e);
      uStack_1e4 = *(undefined4 *)(DAT_0003f6b8 + 0x3f462);
      uVar19 = *(undefined4 *)(*(int *)(iVar16 + iVar5) + 0x70);
      FUN_00036320(auStack_15c,auStack_6c);
      local_d0 = fVar26 + DAT_0003f69c;
      local_7f = uVar22;
      local_7e = uVar18;
      local_80 = uVar21;
      local_7d = uVar23;
      local_cc = fVar28;
      local_c8 = fVar30 + fVar29;
      FUN_0002c714(auStack_84,&local_80,local_2a4);
      local_a0 = *puVar20;
      local_9c = *(undefined4 *)(iVar6 + 0x3f3da);
      FUN_000909a4(uVar19,auStack_15c,&local_d0,auStack_84,fVar27,&local_a0,3,fVar31,puVar12);
    }
  }
  if (local_4c == **(int **)(iVar16 + iVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



