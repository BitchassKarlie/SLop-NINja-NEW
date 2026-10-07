/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be2e4 FUN_000be2e4 */

void FUN_000be2e4(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_48 [2];
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  
  local_34 = DAT_000be480 + 0xbe2f4;
  local_38 = DAT_000be484;
  local_2c = **(int **)(local_34 + DAT_000be484);
  local_40 = param_2;
  if (0 < param_1[2]) {
    local_48[0] = param_3;
    iVar1 = __aeabi_idiv(param_4,*param_1);
    iVar6 = local_48[0];
    local_3c = iVar1 * 4;
    uVar5 = iVar1 * 4 + 0xeU & 0xfffffff8;
    uVar7 = param_5 - param_1[3];
    if ((int)uVar7 < 0) {
      if (0 < iVar1) {
        iVar8 = 0;
        iVar9 = 0;
        local_48[1] = uVar7;
        do {
          iVar2 = FUN_000bdee8(param_1,iVar6);
          *(int *)((int)local_48 + iVar8 + -uVar5) = iVar2;
          if (iVar2 == -1) {
            uVar3 = 0xffffffff;
            goto LAB_000be3d0;
          }
          iVar9 = iVar9 + 1;
          *(int *)((int)local_48 + iVar8 + uVar5 * -2) = param_1[4] + *param_1 * iVar2 * 4;
          iVar8 = iVar8 + 4;
          uVar7 = local_48[1];
        } while (iVar9 != iVar1);
      }
      iVar6 = *param_1;
      if (0 < iVar6) {
        iVar8 = 0;
        piVar10 = local_40;
        do {
          if (0 < iVar1) {
            iVar6 = 0;
            piVar4 = piVar10;
            do {
              iVar9 = iVar6 * 4;
              iVar6 = iVar6 + 1;
              *piVar4 = *piVar4 + (*(int *)(*(int *)((int)local_48 + iVar9 + uVar5 * -2) + iVar8 * 4
                                           ) << (-uVar7 & 0xff));
              piVar4 = piVar4 + 1;
            } while (iVar6 != iVar1);
            iVar6 = *param_1;
          }
          iVar8 = iVar8 + 1;
          piVar10 = (int *)((int)piVar10 + local_3c);
        } while (iVar8 < iVar6);
      }
    }
    else {
      if (0 < iVar1) {
        iVar8 = 0;
        iVar9 = 0;
        local_48[1] = uVar7;
        do {
          iVar2 = FUN_000bdee8(param_1,iVar6);
          *(int *)((int)local_48 + iVar8 + -uVar5) = iVar2;
          if (iVar2 == -1) {
            uVar3 = 0xffffffff;
            goto LAB_000be3d0;
          }
          iVar9 = iVar9 + 1;
          *(int *)((int)local_48 + iVar8 + uVar5 * -2) = param_1[4] + *param_1 * iVar2 * 4;
          iVar8 = iVar8 + 4;
          uVar7 = local_48[1];
        } while (iVar9 != iVar1);
      }
      iVar6 = *param_1;
      if (0 < iVar6) {
        iVar8 = 0;
        piVar10 = local_40;
        do {
          if (0 < iVar1) {
            iVar6 = 0;
            piVar4 = piVar10;
            do {
              iVar9 = iVar6 * 4;
              iVar6 = iVar6 + 1;
              *piVar4 = *piVar4 + (*(int *)(*(int *)((int)local_48 + iVar9 + uVar5 * -2) + iVar8 * 4
                                           ) >> (uVar7 & 0xff));
              piVar4 = piVar4 + 1;
            } while (iVar6 != iVar1);
            iVar6 = *param_1;
          }
          iVar8 = iVar8 + 1;
          piVar10 = (int *)((int)piVar10 + local_3c);
        } while (iVar8 < iVar6);
      }
    }
  }
  uVar3 = 0;
LAB_000be3d0:
  if (local_2c != **(int **)(local_34 + local_38)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



