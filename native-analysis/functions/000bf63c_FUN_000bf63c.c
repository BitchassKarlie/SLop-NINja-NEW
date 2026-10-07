/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bf63c FUN_000bf63c */

void FUN_000bf63c(int *param_1,int *param_2)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int aiStack_68 [2];
  int iStack_60;
  int *local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_2c;
  
  local_50 = DAT_000bf960;
  local_44 = DAT_000bf95c + 0xbf64a;
  local_2c = **(int **)(DAT_000bf95c + 0xbf64a + DAT_000bf960);
  iVar5 = *(int *)(param_1[0x10] + 4);
  local_38 = iVar5;
  local_48 = *(int *)(iVar5 + 0x1c);
  local_4c = *(undefined4 *)(param_1[0x10] + 0x48);
  piVar12 = (int *)param_2[1];
  local_40 = *(int *)(*(int *)(iVar5 + 0x1c) + param_1[7] * 4);
  param_1[9] = local_40;
  uVar7 = *(int *)(iVar5 + 4) * 4 + 0xeU & 0xfffffff8;
  iVar9 = (int)&iStack_60 + uVar7 * -2;
  piVar17 = (int *)((int)&iStack_60 + uVar7 * -3);
  local_3c = &iStack_60 + -uVar7;
  iVar13 = (int)&iStack_60 - uVar7;
  if (0 < *(int *)(iVar5 + 4)) {
    iVar14 = 0;
    iVar15 = 0;
    local_34 = (int *)((uint)(local_40 << 2) >> 1);
    local_58 = iVar9;
    local_54 = (int)&iStack_60 - uVar7;
    do {
      iVar9 = *(int *)((int)piVar12 + iVar14 + 4);
      iVar15 = iVar15 + 1;
      iVar9 = (**(code **)(*(int *)(param_2[4] + iVar9 * 4) + 0x10))
                        (param_1,*(undefined4 *)(param_2[2] + iVar9 * 4));
      *(int *)((int)local_3c + iVar14) = iVar9;
      if (iVar9 != 0) {
        iVar9 = 1;
      }
      *(int *)((int)piVar17 + iVar14) = iVar9;
      ppvVar1 = (void **)(*param_1 + iVar14);
      iVar14 = iVar14 + 4;
      memset(*ppvVar1,0,(size_t)local_34);
      iVar9 = local_58;
      iVar13 = local_54;
    } while (iVar15 < *(int *)(iVar5 + 4));
  }
  iVar5 = piVar12[0x123];
  if (0 < iVar5) {
    piVar10 = piVar12 + 0x124;
    iVar14 = 0;
    do {
      if ((piVar17[*piVar10] != 0) || (piVar17[piVar10[0x100]] != 0)) {
        piVar17[*piVar10] = 1;
        piVar17[piVar10[0x100]] = 1;
        iVar5 = piVar12[0x123];
      }
      iVar14 = iVar14 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar14 < iVar5);
  }
  iVar14 = local_38;
  if (0 < *piVar12) {
    local_34 = param_2;
    iVar5 = 0;
    do {
      iVar15 = *(int *)(iVar14 + 4);
      if (iVar15 < 1) {
        iVar4 = 0;
      }
      else {
        iVar11 = 0;
        iVar4 = 0;
        iVar8 = 0;
        do {
          while (*(int *)((int)piVar12 + iVar11 + 4) != iVar5) {
            iVar8 = iVar8 + 1;
            iVar11 = iVar11 + 4;
            if (iVar15 <= iVar8) goto LAB_000bf7a4;
          }
          if (*(int *)((int)piVar17 + iVar11) == 0) {
            *(undefined4 *)(iVar9 + iVar4 * 4) = 0;
          }
          else {
            *(undefined4 *)(iVar9 + iVar4 * 4) = 1;
          }
          iVar15 = iVar4 * 4;
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 1;
          puVar2 = (undefined4 *)(*param_1 + iVar11);
          iVar11 = iVar11 + 4;
          *(undefined4 *)(iVar13 + iVar15) = *puVar2;
          iVar15 = *(int *)(iVar14 + 4);
        } while (iVar8 < iVar15);
      }
LAB_000bf7a4:
      iVar15 = *(int *)(local_34[5] + iVar5 * 4);
      uVar6 = *(undefined4 *)(local_34[3] + iVar5 * 4);
      aiStack_68[-uVar7] = iVar4;
      iVar5 = iVar5 + 1;
      local_5c = piVar17;
      (**(code **)(iVar15 + 0x10))(param_1,uVar6,iVar13,iVar9);
      piVar17 = local_5c;
    } while (iVar5 < *piVar12);
    iVar5 = piVar12[0x123];
    param_2 = local_34;
  }
  piVar10 = local_3c;
  if (0 < iVar5) {
    piVar16 = piVar12 + iVar5 + 0x124;
    iVar9 = local_40 / 2;
    do {
      iVar5 = *(int *)(*param_1 + piVar16[-1] * 4);
      iVar13 = *(int *)(*param_1 + piVar16[0xff] * 4);
      if (0 < iVar9) {
        iVar15 = 0;
        iVar14 = 0;
        do {
          while( true ) {
            iVar8 = *(int *)(iVar5 + iVar15);
            iVar4 = *(int *)(iVar13 + iVar15);
            if (iVar8 < 1) break;
            if (iVar4 < 1) {
              *(int *)(iVar13 + iVar15) = iVar8;
              *(int *)(iVar5 + iVar15) = iVar4 + iVar8;
            }
            else {
              *(int *)(iVar13 + iVar15) = iVar8 - iVar4;
            }
LAB_000bf820:
            iVar14 = iVar14 + 1;
            iVar15 = iVar15 + 4;
            if (iVar14 == iVar9) goto LAB_000bf840;
          }
          if (iVar4 < 1) {
            *(int *)(iVar13 + iVar15) = iVar8;
            *(int *)(iVar5 + iVar15) = iVar8 - iVar4;
            goto LAB_000bf820;
          }
          iVar14 = iVar14 + 1;
          *(int *)(iVar13 + iVar15) = iVar4 + iVar8;
          iVar15 = iVar15 + 4;
        } while (iVar14 != iVar9);
      }
LAB_000bf840:
      piVar16 = piVar16 + -1;
      local_34 = piVar12;
    } while (piVar16 != piVar12 + 0x124);
  }
  iVar9 = *(int *)(local_38 + 4);
  if (0 < iVar9) {
    iVar13 = 0;
    iVar5 = 0;
    local_3c = piVar17;
    do {
      iVar5 = iVar5 + 1;
      iVar9 = *(int *)((int)piVar12 + iVar13 + 4);
      puVar2 = (undefined4 *)((int)piVar10 + iVar13);
      puVar3 = (undefined4 *)(*param_1 + iVar13);
      iVar13 = iVar13 + 4;
      (**(code **)(*(int *)(param_2[4] + iVar9 * 4) + 0x14))
                (param_1,*(undefined4 *)(param_2[2] + iVar9 * 4),*puVar2,*puVar3);
      iVar15 = local_38;
      piVar17 = local_3c;
      iVar14 = local_40;
      iVar9 = *(int *)(local_38 + 4);
    } while (iVar5 < iVar9);
    if (0 < iVar9) {
      iVar13 = 0;
      do {
        uVar6 = *(undefined4 *)(*param_1 + iVar13 * 4);
        iVar13 = iVar13 + 1;
        FUN_000bfd84(iVar14,uVar6,uVar6);
        iVar4 = local_38;
        iVar5 = local_40;
        iVar9 = *(int *)(iVar15 + 4);
      } while (iVar13 < iVar9);
      if (0 < iVar9) {
        iVar13 = 0;
        iVar14 = 0;
        do {
          uVar6 = local_4c;
          iVar15 = *(int *)(*param_1 + iVar13);
          if (*(int *)((int)piVar17 + iVar13) == 0) {
            iVar8 = 0;
            if (0 < iVar5) {
              do {
                *(undefined4 *)(iVar15 + iVar8 * 4) = 0;
                iVar8 = iVar8 + 1;
              } while (iVar8 != iVar5);
              iVar9 = *(int *)(iVar4 + 4);
            }
          }
          else {
            iVar9 = param_1[6];
            aiStack_68[-uVar7] = param_1[7];
            aiStack_68[1 - uVar7] = param_1[8];
            FUN_000bddd8(iVar15,uVar6,local_48,iVar9);
            iVar9 = *(int *)(iVar4 + 4);
          }
          iVar14 = iVar14 + 1;
          iVar13 = iVar13 + 4;
        } while (iVar14 < iVar9);
      }
    }
  }
  *(int *)(DAT_000bf964 + 0xbf900) = iVar9 + *(int *)(DAT_000bf964 + 0xbf900);
  if (local_2c != **(int **)(local_44 + local_50)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



