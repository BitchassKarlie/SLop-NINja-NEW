/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006d5cc FUN_0006d5cc */

void FUN_0006d5cc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  
  FUN_00076a80();
  iVar3 = DAT_0006d7dc;
  FUN_00077608();
  iVar5 = DAT_0006d7e0;
  piVar1 = (int *)FUN_000a3a68();
  iVar3 = iVar3 + 0x6d5e4;
  (**(code **)(*piVar1 + 4))();
  FUN_0003eef8();
  FUN_00036810();
  FUN_00046dc8();
  FUN_000448f4();
  FUN_00053b48();
  FUN_00020758();
  FUN_0003cb84();
  FUN_000619b8();
  FUN_0005bdc8();
  FUN_0004ddb4();
  FUN_00017e38();
  FUN_000181e8();
  FUN_0007832c();
  FUN_00077758();
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x40);
  if (pvVar4 != (void *)0x0) {
    FUN_0004a36c(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x40) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  piVar1 = *(int **)(iVar6 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(iVar6 + 0x4c) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x58);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x58) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x54);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x54) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x5c);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x5c) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x60);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x60) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  iVar8 = iVar6 + 0x10;
  pvVar4 = *(void **)(iVar6 + 0x70);
  do {
    pvVar7 = *(void **)(iVar6 + 0x74);
    if (pvVar7 == pvVar4) {
      iVar2 = *(int *)(iVar3 + iVar5);
      *(undefined4 *)(iVar6 + 0x74) = 0;
      pvVar4 = *(void **)(iVar2 + 0x70);
    }
    else if (pvVar7 != (void *)0x0) {
      FUN_0008fe40(pvVar7);
      operator_delete(pvVar7);
      iVar2 = *(int *)(iVar3 + iVar5);
      *(undefined4 *)(iVar6 + 0x74) = 0;
      pvVar4 = *(void **)(iVar2 + 0x70);
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != iVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(*(int *)(iVar3 + iVar5) + 0x70) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x68);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x68) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x84);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x84) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x6c);
  if (pvVar4 != (void *)0x0) {
    FUN_0008fe40(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x6c) = 0;
  }
  iVar6 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar6 + 0x50);
  if (pvVar4 != (void *)0x0) {
    FUN_0003070c(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar6 + 0x50) = 0;
  }
  iVar5 = *(int *)(iVar3 + iVar5);
  pvVar4 = *(void **)(iVar5 + 0x18c);
  if (pvVar4 != (void *)0x0) {
    FUN_0007388c(pvVar4);
    operator_delete(pvVar4);
    *(undefined4 *)(iVar5 + 0x18c) = 0;
  }
  FUN_0006cf10(0);
  FUN_0008e988();
  FUN_0008e9dc();
  FUN_0007e454();
  FUN_0007d994();
  FUN_00083118();
  FUN_0001f324();
  FUN_00023ef8();
  FUN_0002d148();
  FUN_0002b03c();
  FUN_0002e348();
  FUN_00092290();
  FUN_000996c4();
  FUN_00099610();
  FUN_00093a18(*(undefined4 *)(iVar3 + DAT_0006d7e4));
  FUN_0001e818();
  FUN_00093cd8();
  FUN_000996c4();
  FUN_00099610();
  piVar1 = (int *)FUN_0008d120();
  (**(code **)(*piVar1 + 0x24))();
  FUN_000a5f28();
  FUN_00098d04();
  FUN_00099118(*(undefined4 *)(iVar3 + DAT_0006d7e8));
  return;
}



