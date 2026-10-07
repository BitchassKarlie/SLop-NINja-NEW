/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085c80 FUN_00085c80 */

void FUN_00085c80(int *param_1)

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
  
  iVar2 = DAT_00085d94;
  iVar1 = DAT_00085d88;
  if (0 < param_1[5]) {
    iVar9 = 0;
    iVar6 = DAT_00085d84 + 0x85c98;
    iVar8 = DAT_00085d8c + 0x85ca2;
    iVar11 = DAT_00085d88 + 0x85cb6;
    iVar7 = DAT_00085d90 + 0x85cac;
    do {
      while( true ) {
        iVar10 = iVar9 * 4;
        *(undefined4 *)(*param_1 + iVar9 * 4) = 0xffffffff;
        iVar3 = FUN_0008f414(*(undefined4 *)(param_1[2] + iVar9 * 0x10 + 4));
        if ((*(int *)(iVar1 + 0x85cb6) << 0x1f < 0) ||
           (iVar4 = __cxa_guard_acquire(iVar11), iVar4 == 0)) {
          iVar4 = *(int *)(iVar1 + 0x85cc2);
        }
        else {
          uVar5 = FUN_0008f414(iVar6);
          *(undefined4 *)(iVar1 + 0x85cba) = uVar5;
          uVar5 = FUN_0008f414(iVar8);
          *(undefined4 *)(iVar1 + 0x85cbe) = uVar5;
          __cxa_guard_release(iVar11);
          iVar4 = *(int *)(iVar1 + 0x85cc2);
        }
        if (-1 < iVar4 << 0x1f) {
          iVar4 = __cxa_guard_acquire(iVar1 + 0x85cc2);
          if (iVar4 != 0) {
            uVar5 = FUN_0008f414(iVar7);
            *(undefined4 *)(iVar1 + 0x85cc6) = uVar5;
            __cxa_guard_release(iVar1 + 0x85cc2);
          }
        }
        if ((iVar3 != *(int *)(iVar2 + 0x85cdc)) && (iVar3 != *(int *)(iVar2 + 0x85ce0))) break;
        iVar9 = iVar9 + 1;
        *(undefined4 *)(*param_1 + iVar10) = 0xfffffffe;
        if (param_1[5] <= iVar9) {
          return;
        }
      }
      if (iVar3 == *(int *)(iVar2 + 0x85ce8)) {
        iVar3 = *param_1;
        uVar5 = FUN_00023380(0);
        *(undefined4 *)(iVar3 + iVar10) = uVar5;
      }
      else {
        iVar3 = *param_1;
        uVar5 = FUN_00022674(*(undefined4 *)(param_1[2] + iVar9 * 0x10 + 4),0);
        *(undefined4 *)(iVar3 + iVar10) = uVar5;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1[5]);
  }
  return;
}



