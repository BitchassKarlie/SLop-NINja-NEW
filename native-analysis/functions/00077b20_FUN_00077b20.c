/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077b20 FUN_00077b20 */

void FUN_00077b20(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_70 [13];
  void *local_3c;
  
  FUN_0009c250(local_70);
  pvVar1 = operator_new(0x50);
  iVar9 = DAT_00077cb0 + 0x77b42;
  FUN_0009bdb8(pvVar1,DAT_00077cac + 0x77b40);
  uVar2 = FUN_0006e164();
  FUN_0009bf5c(pvVar1,DAT_00077cb4 + 0x77b50,uVar2);
  iVar8 = *(int *)(iVar9 + DAT_00077cb8);
  FUN_0009c01c(pvVar1,DAT_00077cbc + 0x77b62,*(undefined4 *)(iVar8 + 0x24));
  FUN_0009c01c(pvVar1,DAT_00077cc0 + 0x77b70,*(undefined4 *)(iVar8 + 0x28));
  FUN_0009c01c(pvVar1,DAT_00077cc4 + 0x77b7c,*(undefined4 *)(iVar8 + 0x2c));
  pvVar3 = operator_new(0x50);
  FUN_0009bdb8(pvVar3,DAT_00077cc8 + 0x77b8a);
  iVar8 = DAT_00077cdc;
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) != iVar5) {
    iVar6 = DAT_00077ccc + 0x77ba2;
    iVar11 = DAT_00077cd0 + 0x77ba8;
    iVar7 = DAT_00077cd4 + 0x77bae;
    iVar12 = DAT_00077cd8 + 0x77bb4;
    iVar10 = *(int *)(param_1 + 0x10) + 4;
    do {
      while (-1 < *(int *)(*(int *)(iVar10 + -4) + 0xc)) {
        bVar13 = iVar10 == iVar5;
        iVar10 = iVar10 + 4;
        if (bVar13) goto LAB_00077c0e;
      }
      pvVar4 = operator_new(0x50);
      FUN_0009bdb8(pvVar4,iVar11);
      FUN_0009bf5c(pvVar4,iVar12,*(undefined4 *)(*(int *)(iVar10 + -4) + 4));
      iVar5 = iVar7;
      if (*(char *)(*(int *)(iVar10 + -4) + 0x34) == '\0') {
        iVar5 = iVar8 + 0x77bf6;
      }
      FUN_0009bf5c(pvVar4,iVar6,iVar5);
      FUN_0009a9fc(pvVar3,pvVar4);
      iVar5 = *(int *)(param_1 + 0x14);
      bVar13 = iVar10 != iVar5;
      iVar10 = iVar10 + 4;
    } while (bVar13);
  }
LAB_00077c0e:
  FUN_0009a9fc(pvVar1,pvVar3);
  pvVar3 = operator_new(0x50);
  iVar8 = 0;
  iVar10 = DAT_00077ce4 + 0x77c2e;
  iVar5 = DAT_00077ce8 + 0x77c30;
  FUN_0009bdb8(pvVar3,DAT_00077ce0 + 0x77c28);
  do {
    iVar6 = *(int *)(param_1 + iVar8);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0xc) < 1)) {
      pvVar4 = operator_new(0x50);
      FUN_0009bdb8(pvVar4,iVar10);
      FUN_0009bf5c(pvVar4,iVar5,*(undefined4 *)(iVar6 + 4));
      FUN_0009a9fc(pvVar3,pvVar4);
    }
    iVar8 = iVar8 + 4;
  } while (iVar8 != 0xc);
  FUN_0009a9fc(pvVar1,pvVar3);
  FUN_0009a9fc(local_70,pvVar1);
  FUN_0009a8d4(local_70,DAT_00077cec + 0x77c5c);
  local_70[0] = *(int *)(iVar9 + DAT_00077cf0) + 8;
  if ((local_3c != *(void **)(iVar9 + DAT_00077cf4)) && (local_3c != (void *)0x0)) {
    operator_delete__(local_3c);
  }
  FUN_0009ac4c(local_70);
  return;
}



