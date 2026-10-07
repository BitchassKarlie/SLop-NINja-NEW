/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bea2c FUN_000bea2c */

void FUN_000bea2c(void *param_1,int param_2,int param_3,undefined4 param_4,int *param_5,uint param_6
                 ,int param_7,int param_8,int param_9)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int aiStack_b0 [5];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int *local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  void *local_60;
  uint local_5c;
  undefined *local_58;
  int local_54;
  undefined8 local_50;
  uint local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  
  local_64 = DAT_000beea8 + 0xbea3e;
  local_2c = **(int **)(local_64 + DAT_000beeac);
  local_6c = param_8 * 0x1000;
  local_70 = param_9;
  local_8c = DAT_000beeac;
  iVar4 = -(param_6 * 4 + 0xe & 0xfffffff8);
  local_58 = (undefined *)((int)aiStack_b0 + iVar4);
  local_68 = param_3;
  local_60 = param_1;
  local_54 = param_2;
  if ((int)param_6 < 1) {
LAB_000beaf4:
    iVar14 = DAT_000beeb8;
    iVar7 = DAT_000beeb4;
    local_58 = (undefined *)((int)aiStack_b0 + iVar4);
    if (0 < param_3) {
      iVar5 = 0;
      local_7c = param_6 & 1;
      local_98 = ((int)(param_6 + 1) >> 1) * -0xe;
      local_88 = DAT_000beeb4;
      local_80 = (int *)((int)aiStack_b0 + iVar4 + 4);
      local_94 = param_6 * -7;
      iVar16 = DAT_000beebc + 0xbeb34;
      local_78 = DAT_000beec0 + 0xbeb38;
      local_90 = DAT_000beec4 + 0xbeb3c;
      local_9c = DAT_000beec8 + 0xbeb40;
      local_84 = DAT_000beeb8;
      do {
        iVar8 = iVar5 * 4;
        local_50 = CONCAT44(local_50._4_4_,iVar8);
        local_74 = param_2 + iVar8;
        local_5c = *(uint *)(param_2 + iVar5 * 4);
        iVar17 = *(int *)(param_9 + local_5c * 4);
        uVar13 = *(int *)((int)aiStack_b0 + iVar4) - iVar17;
        uVar6 = *local_80 - iVar17 >> 0x1f;
        uVar12 = (int)uVar13 >> 0x1f;
        uVar12 = ((uVar13 ^ uVar12) - uVar12) * 0xb505;
        uVar6 = ((*local_80 - iVar17 ^ uVar6) - uVar6) * 0xb505;
        if ((int)param_6 < 4) {
          iVar18 = 0;
          iVar15 = 3;
        }
        else {
          iVar18 = 0;
          iVar15 = 3;
          puVar9 = (undefined *)((int)aiStack_b0 + iVar4);
          do {
            uVar19 = uVar12 | uVar6;
            uVar13 = (uint)*(byte *)(iVar16 + (uVar19 >> 0x19) + 0x274);
            if ((uVar13 == 0) &&
               (uVar13 = (uint)*(byte *)(iVar16 + (uVar19 >> 0x13) + 0x2b4), uVar13 == 0)) {
              uVar13 = (uint)*(byte *)(iVar16 + (uVar19 >> 0x10) + 0x2f4);
            }
            piVar1 = (int *)(puVar9 + 8);
            iVar15 = iVar15 + 2;
            iVar18 = iVar18 + uVar13;
            uVar19 = *piVar1 - iVar17 >> 0x1f;
            piVar2 = (int *)(puVar9 + 0xc);
            puVar9 = puVar9 + 8;
            uVar12 = ((*piVar1 - iVar17 ^ uVar19) - uVar19) * (uVar12 >> uVar13);
            uVar19 = *piVar2 - iVar17 >> 0x1f;
            uVar6 = ((*piVar2 - iVar17 ^ uVar19) - uVar19) * (uVar6 >> uVar13);
          } while (iVar15 < (int)param_6);
          iVar15 = (param_6 - 4 & 0xfffffffe) + 5;
        }
        uVar19 = uVar6 | uVar12;
        iVar10 = iVar14 + 0xbec06;
        uVar13 = (uint)*(byte *)(iVar10 + (uVar19 >> 0x19) + 0x274);
        if ((uVar13 == 0) &&
           (uVar13 = (uint)*(byte *)(iVar10 + (uVar19 >> 0x13) + 0x2b4), uVar13 == 0)) {
          uVar13 = (uint)*(byte *)(iVar10 + (uVar19 >> 0x10) + 0x2f4);
        }
        if (local_7c == 0) {
          iVar15 = iVar18 + local_94 + uVar13;
          uVar6 = (iVar17 + 0x4000) * ((uVar12 >> uVar13) * (uVar12 >> uVar13) >> 0x10) +
                  (0x4000 - iVar17) * ((uVar6 >> uVar13) * (uVar6 >> uVar13) >> 0x10) >> 0xe;
        }
        else {
          uVar19 = (uVar6 >> uVar13) << 0xe;
          uVar11 = *(int *)((int)aiStack_b0 + (iVar15 + -1) * 4 + iVar4) - iVar17;
          uVar6 = (int)uVar11 >> 0x1f;
          uVar6 = ((uVar11 ^ uVar6) - uVar6) * (uVar12 >> uVar13);
          uVar11 = uVar19 | uVar6;
          uVar12 = (uint)*(byte *)(local_78 + (uVar11 >> 0x19) + 0x274);
          if ((uVar12 == 0) &&
             (uVar12 = (uint)*(byte *)(local_78 + (uVar11 >> 0x13) + 0x2b4), uVar12 == 0)) {
            uVar12 = (uint)*(byte *)(local_78 + (uVar11 >> 0x10) + 0x2f4);
          }
          uVar19 = uVar19 >> uVar12;
          uVar6 = uVar6 >> uVar12;
          iVar15 = iVar18 + local_98 + uVar13 + uVar12;
          uVar6 = ((0x4000 - (iVar17 * iVar17 >> 0xe)) * (uVar19 * uVar19 >> 0x10) >> 0xe) +
                  (uVar6 * uVar6 >> 0x10);
        }
        uVar12 = param_6 + iVar15 * 2;
        if (uVar6 >> 0x10 == 0) {
          if (uVar6 == 0) {
LAB_000becb4:
            iVar17 = 0;
            iVar15 = 0;
          }
          else if ((int)(uVar6 << 0x10) < 0) {
            iVar15 = ((uVar6 << 0x11) >> 0x1a) * 4;
            iVar17 = (int)((uVar6 & 0x3ff) * *(int *)(DAT_000beecc + iVar15 + 0xbf194)) >> 10;
          }
          else {
            do {
              uVar13 = uVar6;
              uVar12 = uVar12 - 1;
              uVar6 = uVar13 << 1;
              if (uVar6 == 0) goto LAB_000becb4;
            } while (-1 < (int)(uVar13 << 0x11));
            iVar15 = ((uVar13 << 0x12) >> 0x1a) * 4;
            iVar17 = (int)((uVar6 & 0x3fe) * *(int *)(local_9c + iVar15 + 0x2fc)) >> 10;
          }
        }
        else {
          uVar12 = uVar12 + 1;
          iVar15 = (((uVar6 >> 1) << 0x11) >> 0x1a) * 4;
          iVar17 = (int)((uVar6 >> 1 & 0x3ff) * *(int *)(local_90 + iVar15 + 0x2fc)) >> 10;
        }
        iVar18 = iVar7 + 0xbecbe;
        iVar17 = local_6c -
                 param_7 * (*(int *)(iVar18 + (uVar12 & 1) * 4 + 0x500) *
                            (*(int *)(iVar18 + iVar15 + 0x3fc) - iVar17) >>
                           (((int)uVar12 >> 1) + 0x15U & 0xff));
        uVar6 = iVar17 >> 9;
        if ((int)uVar6 < 0) {
          uVar6 = 0x7fffffff;
          iVar17 = 0;
          lVar3 = (longlong)*(int *)((int)param_1 + iVar8) * 0x7fffffff;
        }
        else if ((int)uVar6 < 0x460) {
          uVar6 = *(int *)(iVar18 + (iVar17 >> 0xe) * 4 + 0x588) *
                  *(int *)(iVar18 + (uVar6 & 0x1f) * 4 + 0x508);
          uVar12 = *(uint *)((int)param_1 + iVar8);
          iVar17 = (int)uVar6 >> 0x1f;
          lVar3 = CONCAT44(uVar12 * iVar17 + uVar6 * ((int)uVar12 >> 0x1f) +
                           (int)((ulonglong)uVar6 * (ulonglong)uVar12 >> 0x20),
                           (int)((ulonglong)uVar6 * (ulonglong)uVar12));
        }
        else {
          lVar3 = 0;
          uVar6 = 0;
          iVar17 = 0;
        }
        iVar5 = iVar5 + 1;
        local_40._0_4_ = (uint)lVar3;
        local_40._4_4_ = (int)((ulonglong)lVar3 >> 0x20);
        *(uint *)((int)param_1 + iVar8) = (uint)local_40 >> 0xf | local_40._4_4_ << 0x11;
        iVar15 = iVar5 * 4;
        uVar12 = *(uint *)(param_2 + iVar5 * 4);
        if (uVar12 == local_5c) {
          iVar18 = 0;
          do {
            uVar13 = *(uint *)((int)param_1 + iVar15);
            iVar5 = iVar5 + 1;
            local_44 = uVar6 * ((int)uVar13 >> 0x1f) + uVar13 * iVar17 +
                       (int)((ulonglong)uVar13 * (ulonglong)uVar6 >> 0x20);
            local_50._0_4_ = (uint)((ulonglong)uVar13 * (ulonglong)uVar6);
            local_50 = CONCAT44(local_44,(uint)local_50);
            local_48 = (uint)local_50;
            *(uint *)((int)param_1 + iVar15) = (uint)local_50 >> 0xf | local_44 * 0x20000;
            iVar15 = iVar8 + 8 + iVar18;
            iVar10 = local_74 + iVar18;
            iVar18 = iVar18 + 4;
            aiStack_b0[1] = iVar16;
            aiStack_b0[2] = uVar6;
            aiStack_b0[3] = iVar17;
            local_5c = param_6;
          } while (*(uint *)(iVar10 + 8) == uVar12);
        }
        local_58 = (undefined *)((int)aiStack_b0 + iVar4);
        local_40 = lVar3;
      } while (iVar5 < param_3);
    }
  }
  else {
    lVar3 = (longlong)*param_5 * 0x517cc2;
    local_38._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
    if ((-1 < lVar3) && (iVar7 = (int)local_38._4_4_ >> 9, iVar7 < 0x80)) {
      iVar16 = 0;
      uVar12 = 0;
      iVar14 = DAT_000beeb0 + 0xbeab2;
      uVar6 = local_38._4_4_;
      local_38 = lVar3;
      do {
        uVar12 = uVar12 + 1;
        iVar5 = *(int *)(iVar14 + iVar7 * 4 + 0x70);
        *(int *)((int)aiStack_b0 + iVar16 + iVar4) =
             iVar5 - ((int)((uVar6 & 0x1ff) * (iVar5 - *(int *)(iVar14 + iVar7 * 4 + 0x74))) >> 9);
        if (uVar12 == param_6) goto LAB_000beaf4;
        iVar16 = uVar12 * 4;
        lVar3 = (longlong)param_5[uVar12] * 0x517cc2;
        local_38._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
      } while ((-1 < lVar3) &&
              (iVar7 = (int)local_38._4_4_ >> 9, uVar6 = local_38._4_4_, local_38 = lVar3,
              iVar7 < 0x80));
    }
    local_38 = lVar3;
    memset(param_1,0,param_3 << 2);
  }
  if (local_2c != **(int **)(local_64 + local_8c)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



