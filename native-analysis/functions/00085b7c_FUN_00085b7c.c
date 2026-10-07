/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085b7c FUN_00085b7c */

void FUN_00085b7c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar2 = DAT_00085c7c;
  iVar1 = DAT_00085c70;
  if (0 < *(int *)(param_1 + 0x6c)) {
    iVar9 = 0;
    iVar6 = DAT_00085c6c + 0x85b98;
    iVar8 = DAT_00085c74 + 0x85ba2;
    iVar11 = DAT_00085c70 + 0x85ba2;
    iVar7 = DAT_00085c78 + 0x85bac;
    iVar10 = param_1;
    do {
      while( true ) {
        iVar3 = FUN_0008f414(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar9 * 0x10 + 4));
        if ((*(int *)(iVar1 + 0x85ba2) << 0x1f < 0) ||
           (iVar4 = __cxa_guard_acquire(iVar11), iVar4 == 0)) {
          iVar4 = *(int *)(iVar1 + 0x85bae);
        }
        else {
          uVar5 = FUN_0008f414(iVar6);
          *(undefined4 *)(iVar1 + 0x85ba6) = uVar5;
          uVar5 = FUN_0008f414(iVar8);
          *(undefined4 *)(iVar1 + 0x85baa) = uVar5;
          __cxa_guard_release(iVar11);
          iVar4 = *(int *)(iVar1 + 0x85bae);
        }
        if (-1 < iVar4 << 0x1f) {
          iVar4 = __cxa_guard_acquire(iVar1 + 0x85bae);
          if (iVar4 != 0) {
            uVar5 = FUN_0008f414(iVar7);
            *(undefined4 *)(iVar1 + 0x85bb2) = uVar5;
            __cxa_guard_release(iVar1 + 0x85bae);
          }
        }
        if ((iVar3 != *(int *)(iVar2 + 0x85bc6)) && (iVar3 != *(int *)(iVar2 + 0x85bca))) break;
        *(undefined4 *)(iVar10 + 0x1c) = 0xfffffffe;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
        if (*(int *)(param_1 + 0x6c) <= iVar9) {
          return;
        }
      }
      if (iVar3 == *(int *)(iVar2 + 0x85bd2)) {
        uVar5 = FUN_00023380(0);
        *(undefined4 *)(iVar10 + 0x1c) = uVar5;
      }
      else {
        uVar5 = FUN_00022674(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar9 * 0x10 + 4),0);
        *(undefined4 *)(iVar10 + 0x1c) = uVar5;
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar9 < *(int *)(param_1 + 0x6c));
  }
  return;
}



