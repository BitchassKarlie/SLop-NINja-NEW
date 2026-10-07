/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00062750 FUN_00062750 */

void FUN_00062750(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 extraout_s15;
  undefined4 local_68;
  undefined auStack_64 [64];
  int local_24;
  
  iVar2 = DAT_000628d4;
  uVar4 = DAT_000628b8;
  iVar8 = DAT_000628d0 + 0x62766;
  local_24 = **(int **)(iVar8 + DAT_000628d4);
  *(undefined4 *)(param_1 + 0x280) = DAT_000628b8;
  pvVar3 = operator_new__(0x20);
  *(int *)(param_1 + 0x278) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined4 *)(param_1 + 0x24) = DAT_000628bc;
  *(undefined4 *)(param_1 + 0x28) = DAT_000628c0;
  uVar1 = DAT_000628c8;
  uVar9 = DAT_000628c4;
  *(void **)(param_1 + 0x54) = pvVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar9;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  if (*(int *)(param_2 + 0x28) != 0) {
    if (*(int *)(param_2 + 0x10) == 1) {
      FUN_0008f060(auStack_64,0x40,DAT_000628e4 + 0x62896);
    }
    else {
      FUN_0008f060(auStack_64,0x40,DAT_000628d8 + 0x627ca);
    }
    FUN_0002fa48(&local_68,auStack_64);
    FUN_00017d64(param_1 + 0x274,local_68);
    FUN_00017d90(&local_68);
  }
  iVar6 = *(int *)(param_1 + 0x278);
  if (*(int *)(iVar6 + 0xc) < 1) {
    strcpy((char *)(param_1 + 0x5c),*(char **)(iVar6 + 0x18));
  }
  else if (*(int *)(iVar6 + 0x20) == 0) {
    strcpy((char *)(param_1 + 0x5c),*(char **)(iVar6 + 0x1c));
  }
  else {
    uVar9 = *(undefined4 *)(*(int *)(iVar8 + DAT_000628dc) + 0x50);
    uVar4 = FUN_0008f414();
    uVar5 = FUN_0006fbdc(uVar9,uVar4);
    iVar6 = *(int *)(*(int *)(param_1 + 0x278) + 0x24);
    if (0 < iVar6) {
      uVar5 = iVar6 - uVar5;
      uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
    }
    FUN_0008f060(param_1 + 0x5c,0x200,*(undefined4 *)(*(int *)(param_1 + 0x278) + 0x1c),uVar5);
  }
  uVar4 = FUN_00083098(0xa7,0);
  iVar6 = DAT_000628e0;
  *(undefined4 *)(DAT_000628e0 + 0x6289a) = uVar4;
  uVar4 = FUN_00083098(0xa6,0);
  *(undefined4 *)(iVar6 + 0x6289e) = uVar4;
  uVar4 = FUN_00083098(0xa8,0);
  *(undefined4 *)(iVar6 + 0x628a2) = uVar4;
  iVar6 = FUN_0007832c();
  iVar7 = *(int *)(param_1 + 0x278);
  if (iVar7 != 0) {
    bVar10 = iVar7 == *(int *)(iVar6 + *(int *)(iVar7 + 0x10) * 4);
    uVar4 = extraout_s15;
    if (bVar10) {
      uVar4 = DAT_000628cc;
    }
    if (bVar10) {
      *(undefined4 *)(param_1 + 0x260) = uVar4;
    }
  }
  if (*(char *)(iVar7 + 0x34) == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = DAT_000628cc;
  }
  if (local_24 == **(int **)(iVar8 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



