/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000957e4 FUN_000957e4 */

int * FUN_000957e4(int *param_1,int param_2,undefined4 param_3,int *param_4,int *param_5)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined auStack_40 [4];
  void *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  piVar6 = param_4;
  piVar2 = (int *)operator_new(0x24);
  iVar5 = *param_5;
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  iVar10 = param_5[2];
  iVar9 = param_5[4] - iVar10;
  if (iVar9 == -1) {
    FUN_00017cb8(auStack_40,0xffffffff);
LAB_0009591c:
    iVar7 = (local_38 + -1) - (int)local_3c;
    if (iVar7 != 0) {
      iVar8 = 0;
      do {
        iVar7 = iVar7 + -1;
        *(undefined *)((int)local_3c + iVar8) = *(undefined *)(iVar10 + iVar8);
        if (iVar7 == 0) break;
        iVar8 = iVar8 + 1;
      } while (iVar9 != iVar8);
    }
    local_34 = (int)local_3c + iVar9;
  }
  else {
    FUN_00017cb8(auStack_40,iVar9);
    if (iVar9 != 0) goto LAB_0009591c;
  }
  pvVar1 = local_3c;
  local_30 = 1;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  *piVar2 = iVar5;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  iVar9 = local_34 - (int)local_3c;
  if (iVar9 == -1) {
    FUN_00017cb8(piVar2 + 1,0xffffffff,iVar5,0,param_3,piVar6);
LAB_000958ee:
    iVar10 = piVar2[2];
    iVar5 = (piVar2[3] + -1) - iVar10;
    if (iVar5 != 0) {
      iVar7 = 0;
      do {
        iVar5 = iVar5 + -1;
        *(undefined *)(iVar10 + iVar7) = *(undefined *)((int)pvVar1 + iVar7);
        if (iVar5 == 0) break;
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar9);
      iVar10 = piVar2[2];
    }
    piVar2[4] = iVar10 + iVar9;
  }
  else {
    FUN_00017cb8(piVar2 + 1,iVar9,iVar5,0,param_3,piVar6);
    if (iVar9 != 0) goto LAB_000958ee;
  }
  piVar2[5] = local_30;
  piVar2[6] = local_2c;
  piVar2[7] = local_28;
  piVar2[8] = local_24;
  if (local_3c != (void *)0x0) {
    operator_delete(local_3c);
    local_38 = 0;
    local_34 = 0;
    local_3c = (void *)0x0;
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  piVar6 = *(int **)(param_2 + 4);
  if (piVar6 == (int *)0x0) {
    *(int **)(param_2 + 4) = piVar2;
    *(int **)(param_2 + 8) = piVar2;
    goto LAB_000958dc;
  }
  piVar4 = piVar6;
  if (param_4 == (int *)0x0) {
    do {
      piVar3 = piVar4;
      piVar4 = (int *)piVar3[7];
    } while (piVar4 != (int *)0x0);
    iVar5 = *param_5;
    if (iVar5 <= *piVar3) goto LAB_000958a0;
LAB_00095944:
    do {
      piVar4 = piVar6;
      piVar6 = (int *)piVar4[7];
    } while ((int *)piVar4[7] != (int *)0x0);
    piVar2[8] = (int)piVar4;
    piVar4[7] = (int)piVar2;
    *(int **)(param_2 + 8) = piVar2;
  }
  else {
    iVar5 = *param_5;
    if (iVar5 < *param_4) {
      piVar4 = (int *)param_4[6];
      if (piVar4 == (int *)0x0) {
LAB_00095980:
        piVar2[8] = (int)param_4;
        param_4[6] = (int)piVar2;
        goto LAB_000958d0;
      }
      if (iVar5 <= *piVar4) goto LAB_000958a0;
    }
    else {
LAB_000958a0:
      param_4 = (int *)0x0;
      piVar4 = piVar6;
      do {
        if (*piVar4 < iVar5) {
          piVar3 = (int *)piVar4[7];
        }
        else {
          piVar3 = (int *)piVar4[6];
          param_4 = piVar4;
        }
        piVar4 = piVar3;
      } while (piVar4 != (int *)0x0);
      if (param_4 == (int *)0x0) goto LAB_00095944;
      piVar4 = (int *)param_4[6];
      if ((int *)param_4[6] == (int *)0x0) goto LAB_00095980;
    }
    do {
      piVar6 = piVar4;
      piVar4 = (int *)piVar6[7];
    } while ((int *)piVar6[7] != (int *)0x0);
    piVar2[8] = (int)piVar6;
    piVar6[7] = (int)piVar2;
  }
LAB_000958d0:
  piVar2[5] = 0;
  FUN_00095768(param_2,piVar2);
LAB_000958dc:
  *param_1 = param_2;
  param_1[1] = (int)piVar2;
  return param_1;
}



