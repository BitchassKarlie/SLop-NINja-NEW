/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bcb88 FUN_000bcb88 */

void FUN_000bcb88(int param_1,int **param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int aiStack_78 [3];
  int *local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  code *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_2c;
  
  local_50 = DAT_000bcd98 + 0xbcb98;
  local_68 = DAT_000bcd9c;
  local_48 = param_5;
  local_2c = **(int **)(local_50 + DAT_000bcd9c);
  piVar8 = *param_2;
  local_3c = piVar8[2];
  local_5c = *param_2[5];
  iVar3 = *(int *)(param_1 + 0x24) >> 1;
  if (piVar8[1] < iVar3) {
    iVar3 = piVar8[1] - *piVar8;
  }
  else {
    iVar3 = iVar3 - *piVar8;
  }
  local_44 = param_3;
  if (0 < iVar3) {
    local_60 = __aeabi_idiv(iVar3,local_3c);
    iVar3 = -(param_4 * 4 + 0xeU & 0xfffffff8);
    if (0 < param_4) {
      iVar10 = 0;
      iVar1 = __aeabi_idiv(local_5c + -1 + local_60,local_5c);
      do {
        uVar2 = FUN_000bc128(param_1,iVar1 << 2);
        *(undefined4 *)((int)aiStack_78 + iVar10 * 4 + iVar3 + 8) = uVar2;
        iVar10 = iVar10 + 1;
      } while (iVar10 != param_4);
    }
    piVar5 = param_2[3];
    if (0 < (int)piVar5) {
      local_4c = param_1 + 4;
      local_64 = 0;
      do {
        if (0 < local_60) {
          iVar1 = 0;
          local_58 = 0;
          local_34 = 1 << (local_64 & 0xff);
          local_38 = local_64 << 2;
          do {
            iVar10 = local_4c;
            if ((local_64 == 0) && (0 < param_4)) {
              iVar9 = 0;
              iVar6 = 0;
              local_40 = piVar8;
              do {
                iVar4 = FUN_000be2c4(param_2[5],iVar10);
                if ((iVar4 == -1) ||
                   (*(int *)(*(int *)((int)aiStack_78 + iVar9 + iVar3 + 8) + iVar1) =
                         param_2[8][iVar4],
                   *(int *)(*(int *)((int)aiStack_78 + iVar9 + iVar3 + 8) + iVar1) == 0))
                goto LAB_000bcd30;
                iVar6 = iVar6 + 1;
                iVar9 = iVar9 + 4;
                piVar8 = local_40;
              } while (iVar6 != param_4);
            }
            if (local_58 < local_60 && 0 < local_5c) {
              local_54 = 0;
              local_40 = (int *)(local_3c * local_58);
              do {
                if (0 < param_4) {
                  iVar10 = 0;
                  local_6c = piVar8;
                  iVar9 = local_54 * 4;
                  do {
                    iVar6 = *(int *)(*(int *)(*(int *)((int)aiStack_78 + iVar10 * 4 + iVar3 + 8) +
                                             iVar1) + iVar9);
                    if (((local_34 & local_6c[iVar6 + 5]) != 0) &&
                       (iVar6 = *(int *)(param_2[6][iVar6] + local_38), iVar6 != 0)) {
                      iVar4 = *local_6c + (int)local_40;
                      iVar7 = *(int *)(local_44 + iVar10 * 4);
                      *(undefined4 *)((int)aiStack_78 + iVar3) = 0xfffffff8;
                      iVar6 = (*local_48)(iVar6,iVar7 + iVar4 * 4,local_4c,local_3c);
                      if (iVar6 == -1) goto LAB_000bcd30;
                    }
                    iVar10 = iVar10 + 1;
                    piVar8 = local_6c;
                  } while (iVar10 != param_4);
                }
                local_54 = local_54 + 1;
                local_58 = local_58 + 1;
                local_40 = (int *)((int)local_40 + local_3c);
              } while (local_58 < local_60 && local_54 < local_5c);
            }
            iVar1 = iVar1 + 4;
          } while (local_58 < local_60);
          piVar5 = param_2[3];
        }
        local_64 = local_64 + 1;
      } while ((int)local_64 < (int)piVar5);
    }
  }
LAB_000bcd30:
  if (local_2c != **(int **)(local_50 + local_68)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



