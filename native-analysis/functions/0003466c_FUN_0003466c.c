/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003466c FUN_0003466c */

void FUN_0003466c(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int ****ppppiVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined auStack_14c [12];
  int local_140;
  undefined auStack_13c [8];
  int local_134;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined auStack_d4 [40];
  undefined auStack_ac [40];
  int ****local_84 [8];
  char local_64;
  int ****local_60 [8];
  char local_40;
  int local_3c;
  
  iVar4 = DAT_000349ec;
  iVar3 = DAT_000349e8;
  iVar17 = DAT_000349e4 + 0x34680;
  local_3c = **(int **)(iVar17 + DAT_000349e8);
  if (*(char *)(DAT_000349ec + 0x347ae) == '\0') {
    *(undefined *)(DAT_000349ec + 0x347ba) = 0;
    *(undefined *)(iVar4 + 0x347a2) = 0;
    iVar4 = DAT_000349f0;
    iVar14 = *(int *)(iVar17 + DAT_000349f0);
    pvVar13 = *(void **)(iVar14 + 0x40);
    if (pvVar13 == (void *)0x0) {
      pvVar13 = operator_new(0x28);
      FUN_0004a26c();
      *(void **)(iVar14 + 0x40) = pvVar13;
    }
    iVar14 = DAT_000349f4;
    FUN_0004a1cc(pvVar13);
    fVar2 = DAT_000349c8;
    uVar7 = DAT_000349c4;
    fVar1 = DAT_000349c0;
    fVar19 = DAT_000349bc;
    iVar16 = 0;
    pfVar15 = (float *)(iVar14 + 0x346bc);
    do {
      pvVar13 = operator_new(0x88);
      FUN_00057470();
      local_108 = *pfVar15;
      local_104 = fVar19 - pfVar15[1];
      *(undefined *)((int)pvVar13 + 0x24) = 1;
      local_100 = uVar7;
      local_108 = fVar1 - local_108;
      fVar18 = pfVar15[2];
      *(float *)((int)pvVar13 + 8) = local_108;
      *(float *)((int)pvVar13 + 0xc) = local_104;
      *(undefined4 *)((int)pvVar13 + 0x10) = uVar7;
      *(float *)((int)pvVar13 + 0x20) = -fVar18;
      local_114 = pfVar15[3] * fVar2;
      pfVar15 = pfVar15 + 4;
      *(float *)((int)pvVar13 + 0x14) = local_114;
      *(float *)((int)pvVar13 + 0x18) = local_114;
      *(float *)((int)pvVar13 + 0x1c) = local_114;
      *(char *)((int)pvVar13 + 0x70) = (char)iVar16;
      *(undefined4 *)((int)pvVar13 + 0x28) = 0;
      iVar16 = iVar16 + 1;
      iVar14 = *(int *)(iVar17 + iVar4);
      local_110 = local_114;
      local_10c = local_114;
      FUN_00049d7c(*(undefined4 *)(iVar14 + 0x40),pvVar13,0);
    } while (iVar16 != 3);
    FUN_000575c8(0xc,*(undefined4 *)(iVar14 + 0x40));
    pvVar13 = operator_new(0xf4);
    FUN_0005e42c();
    FUN_0002fa48(&local_d8,DAT_000349f8 + 0x3477a);
    FUN_00017d64((int)pvVar13 + 0x68,local_d8);
    FUN_00017d90(&local_d8);
    FUN_0002fa48(&local_dc,DAT_000349fc + 0x34796);
    FUN_00017d64((int)pvVar13 + 0x94,local_dc);
    FUN_00017d90(&local_dc);
    FUN_0002fa48(&local_e0,DAT_00034a00 + 0x347b2);
    FUN_00017d64((int)pvVar13 + 0x98,local_e0);
    FUN_00017d90(&local_e0);
    local_11c = *(float *)(DAT_00034a04 + 0x347d4) * DAT_000349cc;
    local_118 = *(float *)(DAT_00034a04 + 0x347d8) * DAT_000349cc;
    local_120 = *(float *)(DAT_00034a04 + 0x347d0) * DAT_000349cc;
    *(float *)((int)pvVar13 + 0x14) = local_120;
    *(float *)((int)pvVar13 + 0x18) = local_11c;
    *(float *)((int)pvVar13 + 0x1c) = local_118;
    piVar6 = (int *)FUN_0008d120();
    (**(code **)(*piVar6 + 0x2c))(auStack_13c,piVar6);
    fVar19 = *(float *)((int)pvVar13 + 0x14) * DAT_000349d0 +
             (float)(longlong)local_134 * DAT_000349d4;
    piVar6 = (int *)FUN_0008d120();
    (**(code **)(*piVar6 + 0x2c))(auStack_14c,piVar6);
    uVar7 = DAT_000349e0;
    local_128 = *(float *)((int)pvVar13 + 0x18) * DAT_000349d8 +
                (float)(longlong)local_140 * DAT_000349dc;
    local_124 = DAT_000349e0;
    *(float *)((int)pvVar13 + 8) = fVar19;
    *(float *)((int)pvVar13 + 0xc) = local_128;
    *(undefined4 *)((int)pvVar13 + 0x10) = uVar7;
    local_12c = fVar19;
    FUN_00049d7c(*(undefined4 *)(iVar14 + 0x40),pvVar13,0);
    piVar6 = (int *)operator_new(200);
    FUN_0003b80c();
    *(int **)(iVar14 + 0x17c) = piVar6;
    (**(code **)(*piVar6 + 8))(piVar6);
    FUN_00049d7c(*(undefined4 *)(iVar14 + 0x40),*(undefined4 *)(iVar14 + 0x17c),0);
    piVar6 = (int *)operator_new(0xfc);
    FUN_0006696c();
    *(int **)(iVar14 + 0x184) = piVar6;
    (**(code **)(*piVar6 + 8))(piVar6);
    FUN_00065e94(*(undefined4 *)(iVar14 + 0x184),0x42b5cccd);
    FUN_00049d7c(*(undefined4 *)(iVar14 + 0x40),*(undefined4 *)(iVar14 + 0x184),0);
    iVar16 = DAT_00034a08;
    *(undefined4 *)(iVar14 + 0x188) = 0;
    if (*(int *)((int)&DAT_000349d8 + iVar16 + 2) == 0) {
      iVar14 = FUN_0006e130();
      if (iVar14 == 0) {
        FUN_0002fa48(&local_e4,DAT_00034d24 + 0x34ce6);
      }
      else {
        FUN_0002fa48(&local_e4,DAT_00034d1c + 0x34cb4);
      }
      FUN_00017d64(DAT_00034d20 + 0x34dbe,local_e4);
      FUN_00017d90(&local_e4);
    }
    uVar7 = FUN_0001e818();
    FUN_0009e838(auStack_ac,DAT_00034a0c + 0x348f0);
    iVar14 = DAT_00034a10;
    FUN_00093c60(&local_e8,uVar7,auStack_ac);
    FUN_0001f2f8(iVar14 + 0x34986,local_e8);
    FUN_0001ed98(&local_e8);
    FUN_0009e858(auStack_ac);
    uVar7 = FUN_0001e818();
    FUN_0009e838(auStack_d4,DAT_00034a14 + 0x34928);
    FUN_00093c60(&local_ec,uVar7,auStack_d4);
    FUN_0001f2f8(iVar14 + 0x3498a,local_ec);
    FUN_0001ed98(&local_ec);
    FUN_0009e858(auStack_d4);
    puVar8 = (undefined4 *)operator_new(0x14);
    iVar16 = 0;
    puVar8[3] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined2 *)((int)puVar8 + 0x12) = 0;
    *(undefined2 *)(puVar8 + 4) = 0;
    *puVar8 = 0;
    *(undefined4 **)(iVar14 + 0x3492e) = puVar8;
    FUN_00030bcc();
    piVar6 = (int *)operator_new(0x14);
    *piVar6 = DAT_00034a18 + 0x34982;
    puVar8 = (undefined4 *)operator_new__(0xfa8);
    *puVar8 = 0x28;
    puVar8[1] = 100;
    puVar12 = puVar8 + 2;
    puVar11 = puVar8 + 1000;
    do {
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8 = puVar8 + 10;
    } while (puVar8 != puVar11);
    piVar6[1] = (int)puVar12;
    pvVar13 = operator_new__(400);
    iVar14 = 0;
    piVar6[2] = (int)pvVar13;
    while( true ) {
      *(int *)((int)pvVar13 + iVar14) = piVar6[1] + iVar16;
      iVar5 = DAT_00034cfc;
      iVar14 = iVar14 + 4;
      iVar16 = iVar16 + 0x28;
      if (iVar14 == 400) break;
      pvVar13 = (void *)piVar6[2];
    }
    piVar6[3] = 100;
    piVar6[4] = 100;
    *(int **)(iVar5 + 0x34b26) = piVar6;
    *(undefined *)(iVar5 + 0x34ab6) = 0;
    iVar16 = *(int *)(iVar17 + iVar4);
    *(undefined *)(iVar5 + 0x34bc3) = 0;
    *(undefined *)(iVar5 + 0x34bb6) = 1;
    *(undefined *)(iVar16 + 2) = 0;
    *(undefined4 *)(iVar5 + 0x34bae) = *(undefined4 *)(iVar16 + 0x58);
    piVar6 = (int *)operator_new(0x130);
    FUN_000500b4();
    *(int **)(iVar5 + 0x34b2a) = piVar6;
    (**(code **)(*piVar6 + 8))(piVar6);
    iVar14 = *(int *)(iVar5 + 0x34b2a);
    *(int *)(iVar16 + 0x164) = iVar14;
    *(undefined *)(iVar14 + 0x26) = 1;
    piVar6 = (int *)operator_new(0xcc);
    FUN_0005a34c();
    *(int **)(iVar5 + 0x34a9a) = piVar6;
    (**(code **)(*piVar6 + 8))(piVar6);
    piVar6 = (int *)operator_new(0x94);
    FUN_000677d0();
    *(int **)(iVar16 + 0x16c) = piVar6;
    (**(code **)(*piVar6 + 8))(piVar6);
    *(undefined4 *)(iVar16 + 0x10) = DAT_00034cf0;
    uVar7 = *(undefined4 *)(iVar5 + 0x34b2a);
    *(undefined *)(iVar16 + 8) = 1;
    FUN_00049d7c(*(undefined4 *)(iVar16 + 0x40),uVar7,0);
    FUN_00049d7c(*(undefined4 *)(iVar16 + 0x40),*(undefined4 *)(iVar5 + 0x34a9a),0);
    FUN_00049d7c(*(undefined4 *)(iVar16 + 0x40),*(undefined4 *)(iVar16 + 0x16c),0);
    FUN_0008e5bc(0x20000);
    uVar7 = FUN_0001c940();
    FUN_0001c368(uVar7,5,0x2000);
    iVar14 = FUN_0001c940();
    local_40 = '\x01';
    local_60[0] = (int ****)0x0;
    local_f4 = DAT_00034d00 + 0x34b6c;
    local_f0 = *(undefined4 *)(iVar17 + DAT_00034d04);
    (**(code **)(DAT_00034d00 + 0x34b74))(&local_f4,local_60);
    ppppiVar9 = (int ****)local_60;
    if (local_40 != '\0') {
      ppppiVar9 = local_60[0];
    }
    if (ppppiVar9 != (int ****)0x0) {
      (*(code *)(*ppppiVar9)[2])(ppppiVar9,iVar14 + 0x1028);
    }
    FUN_0001be0c(local_60);
    local_f4 = DAT_00034d08 + 0x34ba8;
    iVar14 = FUN_0001c940();
    local_fc = DAT_00034d0c + 0x34bb6;
    local_f8 = *(undefined4 *)(iVar17 + DAT_00034d10);
    local_64 = '\x01';
    local_84[0] = (int ****)0x0;
    (**(code **)(DAT_00034d0c + 0x34bbe))(&local_fc,local_84);
    ppppiVar9 = (int ****)local_84;
    if (local_64 != '\0') {
      ppppiVar9 = local_84[0];
    }
    if (ppppiVar9 != (int ****)0x0) {
      (*(code *)(*ppppiVar9)[2])(ppppiVar9,iVar14 + 0x104c);
    }
    iVar14 = 0;
    FUN_0001be3c(local_84);
    local_fc = DAT_00034d14 + 0x34bfa;
    FUN_00086780();
    FUN_00088e88();
    FUN_00034278();
    do {
      uVar7 = FUN_0001c940();
      iVar14 = iVar14 + 1;
      iVar16 = FUN_0001ca28(uVar7,0,1);
      *(byte *)(iVar16 + 0xc) = *(byte *)(iVar16 + 0xc) | 0x11;
      uVar7 = FUN_0001c940();
      iVar16 = FUN_0001ca28(uVar7,1,1);
      *(byte *)(iVar16 + 0xc) = *(byte *)(iVar16 + 0xc) | 0x11;
      uVar7 = FUN_0001c940();
      iVar16 = FUN_0001ca28(uVar7,4,1);
      *(byte *)(iVar16 + 0xc) = *(byte *)(iVar16 + 0xc) | 0x11;
    } while (iVar14 != 0x1e);
    FUN_0002c928(0x80);
    FUN_00086780();
    FUN_0008ae78();
    FUN_0001cccc(0x20);
    uVar7 = FUN_000a5f28();
    FUN_00098d14(uVar7,DAT_00034d18 + 0x34c64,0x80000);
    uVar10 = FUN_000a5f28();
    uVar7 = DAT_00034cf4;
    if (*(char *)(*(int *)(iVar17 + iVar4) + 0x48) != '\0') {
      uVar7 = DAT_00034cf8;
    }
    FUN_000a5f94(uVar10,uVar7);
  }
  if (local_3c == **(int **)(iVar17 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



