/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004ad94 FUN_0004ad94 */

void FUN_0004ad94(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_6d;
  undefined local_6c;
  undefined local_6b;
  undefined local_6a;
  undefined local_69;
  
  iVar7 = DAT_0004af40;
  uVar2 = DAT_0004af24;
  fVar1 = DAT_0004af20;
  iVar14 = DAT_0004af3c + 0x4adac;
  local_a0 = *(float *)(param_1 + 0xd0);
  local_8c = *(float *)(param_1 + 0xd4);
  local_b4 = *(float *)(param_1 + 0xcc);
  local_b0 = DAT_0004af20;
  local_ac = DAT_0004af20;
  local_a8 = DAT_0004af20;
  local_78 = DAT_0004af24;
  local_a4 = DAT_0004af20;
  local_9c = DAT_0004af20;
  local_98 = DAT_0004af20;
  local_94 = DAT_0004af20;
  local_90 = DAT_0004af20;
  local_88 = DAT_0004af20;
  iVar21 = *(int *)(iVar14 + DAT_0004af40);
  local_80 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xa8) + DAT_0004af20;
  local_84 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xa4) + DAT_0004af20;
  local_7c = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xac) + DAT_0004af20;
  *(float *)(iVar21 + 0x1894) = local_b4;
  *(float *)(iVar21 + 0x1898) = fVar1;
  *(float *)(iVar21 + 0x189c) = fVar1;
  *(float *)(iVar21 + 0x18a0) = fVar1;
  *(float *)(iVar21 + 0x18a4) = fVar1;
  *(float *)(iVar21 + 0x18a8) = local_a0;
  *(float *)(iVar21 + 0x18ac) = fVar1;
  *(float *)(iVar21 + 0x18b0) = fVar1;
  *(float *)(iVar21 + 0x18b4) = fVar1;
  *(float *)(iVar21 + 0x18b8) = fVar1;
  *(float *)(iVar21 + 0x18bc) = local_8c;
  *(float *)(iVar21 + 0x18c0) = fVar1;
  *(float *)(iVar21 + 0x18c4) = local_84;
  *(float *)(iVar21 + 0x18c8) = local_80;
  *(float *)(iVar21 + 0x18cc) = local_7c;
  *(undefined4 *)(iVar21 + 0x18d0) = uVar2;
  *(int *)(iVar21 + 0x18d8) = *(int *)(iVar21 + 0x18d8) + 1;
  FUN_0008d434(iVar21,1);
  FUN_000995e4(*(undefined4 *)(param_1 + 200));
  puVar16 = *(undefined **)(iVar14 + DAT_0004af44);
  local_6c = *puVar16;
  local_6a = puVar16[2];
  local_6b = puVar16[1];
  local_69 = puVar16[3];
  FUN_000a35f4(&local_6c);
  FUN_000995e0(*(undefined4 *)(param_1 + 200));
  fVar6 = DAT_0004af38;
  fVar5 = DAT_0004af34;
  fVar4 = DAT_0004af30;
  fVar3 = DAT_0004af2c;
  pcVar15 = *(char **)(param_1 + 0x9c);
  iVar21 = *(int *)(param_1 + 0xa0);
  if ((pcVar15 != (char *)0x0) && (cVar13 = *pcVar15, cVar13 != '\0')) {
    iVar20 = 0;
    iVar17 = *(int *)(iVar14 + DAT_0004af4c);
    fVar26 = (*(float *)(param_1 + 8) + *(float *)(param_1 + 0xa4)) -
             *(float *)(DAT_0004af48 + 0x4aea8) * DAT_0004af28;
    fVar27 = ((float)*(undefined8 *)(param_1 + 0xc) + *(float *)(param_1 + 0xa8)) -
             *(float *)(DAT_0004af48 + 0x4aeac) * DAT_0004af28;
    fVar28 = ((float)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
             *(float *)(param_1 + 0xac)) - *(float *)(DAT_0004af48 + 0x4aeb0) * DAT_0004af28;
    while( true ) {
      iVar19 = *(int *)(iVar17 + 0x58);
      iVar8 = FUN_0008f638(iVar19,cVar13,0);
      local_b4 = fVar3;
      local_a0 = fVar3;
      local_78 = uVar2;
      local_b0 = fVar1;
      local_ac = fVar1;
      local_a8 = fVar1;
      local_a4 = fVar1;
      local_9c = fVar1;
      local_98 = fVar1;
      local_94 = fVar1;
      local_90 = fVar1;
      local_8c = fVar1;
      local_88 = fVar1;
      local_84 = fVar1;
      local_80 = fVar1;
      local_7c = fVar1;
      uVar9 = FUN_000927b8((int)(*(float *)(iVar21 + iVar20) * fVar4) & 0xffff);
      uVar10 = FUN_000927c8((int)(*(float *)(iVar21 + iVar20) * fVar4) & 0xffff);
      FUN_0001d0e0(&local_b4,uVar9,uVar10);
      local_84 = local_84 + fVar26;
      iVar18 = *(int *)(iVar14 + iVar7);
      local_80 = local_80 + fVar27;
      local_7c = local_7c + fVar28;
      *(float *)(iVar18 + 0x1894) = local_b4;
      *(float *)(iVar18 + 0x1898) = local_b0;
      *(float *)(iVar18 + 0x189c) = local_ac;
      *(float *)(iVar18 + 0x18a0) = local_a8;
      *(float *)(iVar18 + 0x18a4) = local_a4;
      *(float *)(iVar18 + 0x18a8) = local_a0;
      *(float *)(iVar18 + 0x18ac) = local_9c;
      *(float *)(iVar18 + 0x18b0) = local_98;
      *(float *)(iVar18 + 0x18b4) = local_94;
      *(float *)(iVar18 + 0x18b8) = local_90;
      *(float *)(iVar18 + 0x18bc) = local_8c;
      *(float *)(iVar18 + 0x18c0) = local_88;
      *(float *)(iVar18 + 0x18c4) = local_84;
      *(float *)(iVar18 + 0x18c8) = local_80;
      *(float *)(iVar18 + 0x18cc) = local_7c;
      *(undefined4 *)(iVar18 + 0x18d0) = local_78;
      *(int *)(iVar18 + 0x18d8) = *(int *)(iVar18 + 0x18d8) + 1;
      FUN_0008d434(iVar18,1);
      FUN_000995e4(*(undefined4 *)(param_1 + 0xbc));
      local_70 = 4;
      local_6f = 0x37;
      local_6e = 0x8a;
      local_6d = 0x96;
      FUN_000a35f4(&local_70);
      FUN_000995e0(*(undefined4 *)(param_1 + 0xbc));
      if (iVar8 != 0) {
        fVar24 = *(float *)(iVar8 + 4);
        fVar25 = *(float *)(iVar8 + 8);
        fVar22 = fVar24 + (*(float *)(iVar19 + 0x424) / (float)(longlong)*(int *)(iVar19 + 0x41c)) *
                          *(float *)(iVar8 + 0xc);
        fVar23 = fVar25 + (*(float *)(iVar19 + 0x424) / (float)(longlong)*(int *)(iVar19 + 0x420)) *
                          *(float *)(iVar8 + 0x10);
        uVar11 = (**(code **)(**(int **)(*(int *)(iVar19 + 0x408) +
                                         (uint)*(byte *)(iVar8 + 0x20) * 8 + 4) + 0x14))();
        uVar12 = (**(code **)(**(int **)(*(int *)(iVar19 + 0x408) +
                                         (uint)*(byte *)(iVar8 + 0x20) * 8 + 4) + 0x18))();
        local_78 = uVar2;
        local_b4 = (fVar22 - fVar24) * (float)(ulonglong)uVar11 * fVar5 * fVar6;
        local_a0 = (fVar23 - fVar25) * (float)(ulonglong)uVar12 * fVar5 * fVar6;
        local_b0 = fVar1;
        local_ac = fVar1;
        local_a8 = fVar1;
        local_a4 = fVar1;
        local_9c = fVar1;
        local_98 = fVar1;
        local_94 = fVar1;
        local_90 = fVar1;
        local_8c = fVar1;
        local_88 = fVar1;
        local_84 = fVar1;
        local_80 = fVar1;
        local_7c = fVar1;
        uVar9 = FUN_000927b8((int)(*(float *)(iVar21 + iVar20) * fVar4) & 0xffff);
        uVar10 = FUN_000927c8((int)(*(float *)(iVar21 + iVar20) * fVar4) & 0xffff);
        FUN_0001d0e0(&local_b4,uVar9,uVar10);
        local_84 = local_84 + fVar26;
        local_80 = local_80 + fVar27;
        local_7c = local_7c + fVar28;
        *(float *)(iVar18 + 0x1894) = local_b4;
        *(float *)(iVar18 + 0x1898) = local_b0;
        *(float *)(iVar18 + 0x189c) = local_ac;
        *(float *)(iVar18 + 0x18a0) = local_a8;
        *(float *)(iVar18 + 0x18a4) = local_a4;
        *(float *)(iVar18 + 0x18a8) = local_a0;
        *(float *)(iVar18 + 0x18ac) = local_9c;
        *(float *)(iVar18 + 0x18b0) = local_98;
        *(float *)(iVar18 + 0x18b4) = local_94;
        *(float *)(iVar18 + 0x18b8) = local_90;
        *(float *)(iVar18 + 0x18bc) = local_8c;
        *(float *)(iVar18 + 0x18c0) = local_88;
        *(float *)(iVar18 + 0x18c4) = local_84;
        *(float *)(iVar18 + 0x18c8) = local_80;
        *(float *)(iVar18 + 0x18cc) = local_7c;
        *(undefined4 *)(iVar18 + 0x18d0) = local_78;
        *(int *)(iVar18 + 0x18d8) = *(int *)(iVar18 + 0x18d8) + 1;
        FUN_0008d434(iVar18,1);
        FUN_000995e4(*(undefined4 *)
                      (*(int *)(iVar19 + 0x408) + (uint)*(byte *)(iVar8 + 0x20) * 8 + 4));
        local_74 = 0xd0;
        local_73 = 0xf4;
        local_72 = 0xff;
        local_71 = 0xff;
        FUN_000a344c(&local_74,fVar24,fVar22,fVar25,fVar23);
        FUN_000995e0(*(undefined4 *)
                      (*(int *)(iVar19 + 0x408) + (uint)*(byte *)(iVar8 + 0x20) * 8 + 4));
      }
      if (pcVar15 == (char *)0xffffffff) break;
      pcVar15 = pcVar15 + 1;
      cVar13 = *pcVar15;
      iVar20 = iVar20 + 4;
      if (cVar13 == '\0') break;
      fVar26 = fVar26 + 18.2;
    }
  }
  FUN_0004a638(param_1,param_2);
  return;
}



