/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076fc8 FUN_00076fc8 */

void FUN_00076fc8(int param_1,char *param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_ac;
  int local_94;
  undefined4 local_90;
  undefined auStack_8c [76];
  undefined4 local_40;
  char acStack_3c [10];
  undefined local_32;
  undefined local_31;
  undefined local_30;
  undefined local_2f;
  int local_2c;
  
  iVar1 = DAT_000771a8;
  iVar9 = DAT_000771a4 + 0x76fd8;
  local_2c = **(int **)(iVar9 + DAT_000771a8);
  pcVar5 = param_2;
  if (param_2 != (char *)0x0) {
    pcVar5 = (char *)0x1;
  }
  if (param_4 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)pcVar5 & 1;
  }
  local_ac = param_4;
  if ((uVar6 != 0) && (*(int *)(*(int *)(iVar9 + DAT_000771ac) + 4) == 2)) {
    iVar3 = FUN_00046648();
    if (iVar3 != param_4) {
      uVar4 = FUN_000a3a68();
      FUN_000a371c(uVar4,param_6);
      goto LAB_000770ce;
    }
    local_ac = 0;
  }
  *(undefined *)(param_1 + 0xd) = 1;
  if (param_2 == (char *)0x0) {
    if (param_5 == -2) {
      *(undefined *)(param_1 + 0xc) = 1;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xc) = 0;
    strncpy(acStack_3c,param_2,0xd);
    local_2f = 0;
    FUN_00084478(acStack_3c);
    sVar2 = strlen(acStack_3c);
    if (10 < sVar2) {
      local_2f = 0;
      local_32 = 0x2e;
      local_31 = 0x2e;
      local_30 = 0x2e;
    }
    iVar3 = FUN_0008f414(param_2);
    piVar8 = (int *)**(int **)(param_1 + 4);
    if (*(char *)(param_1 + 0xf) != '\0') {
      param_5 = 1;
    }
    FUN_00076b54(auStack_8c,param_2,iVar3,param_3,param_5,param_6,acStack_3c);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar7 = *(int *)(param_1 + 4);
      for (; (int *)iVar7 != piVar8; piVar8 = (int *)*piVar8) {
        if (iVar3 == piVar8[0x12]) {
          iVar3 = piVar8[0x14] >> 0x1f;
          if ((local_ac == iVar3 || local_ac < iVar3) &&
             ((local_ac != iVar3 || (param_3 <= (uint)piVar8[0x14])))) goto LAB_000770b6;
          piVar8[0x14] = param_3;
          iVar7 = *(int *)(param_1 + 4);
          if ((int *)iVar7 != piVar8) goto LAB_00077102;
          break;
        }
      }
      piVar8 = (int *)FUN_00076f70(param_1,auStack_8c);
      *piVar8 = iVar7;
      piVar8[1] = *(int *)(iVar7 + 4);
      *(int **)(iVar7 + 4) = piVar8;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      piVar8 = (int *)FUN_00076f70(param_1,auStack_8c);
      *piVar8 = iVar3;
      piVar8[1] = *(int *)(iVar3 + 4);
      *(int **)(iVar3 + 4) = piVar8;
    }
    *(int **)piVar8[1] = piVar8;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    local_40 = 0;
LAB_00077102:
    if (*(char *)(param_1 + 0xf) != '\0') {
      if (1 < *(uint *)(param_1 + 8)) {
        local_90 = **(undefined4 **)(param_1 + 4);
        local_94 = param_1;
        FUN_000768fc(param_1,&local_94,param_1,*(undefined4 **)(param_1 + 4),*(uint *)(param_1 + 8),
                     param_6 & 0xffffff00);
      }
      piVar8 = (int *)**(int **)(param_1 + 4);
      if (*(int **)(param_1 + 4) != piVar8) {
        iVar3 = 1;
        do {
          if (piVar8[0x14] == 0) {
            iVar7 = 1;
            iVar3 = 0;
          }
          else {
            iVar7 = iVar3 + 1;
          }
          piVar8[0x13] = iVar3;
          piVar8 = (int *)*piVar8;
          iVar3 = iVar7;
        } while (piVar8 != (int *)*(int *)(param_1 + 4));
      }
    }
LAB_000770b6:
    uVar4 = FUN_000a3a68();
    FUN_000a371c(uVar4,local_40);
  }
LAB_000770ce:
  if (local_2c != **(int **)(iVar9 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}



