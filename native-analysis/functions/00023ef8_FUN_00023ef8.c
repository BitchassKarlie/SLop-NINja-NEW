/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023ef8 FUN_00023ef8 */

void FUN_00023ef8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = DAT_00024014;
  FUN_00022208(DAT_00024014 + 0x23f10,0);
  FUN_00022208(iVar3 + 0x23f18,0);
  FUN_00022208(iVar3 + 0x23f14,0);
  FUN_00022208(iVar3 + 0x23f1c,0);
  FUN_00017d64(iVar3 + 0x23f4c,0);
  FUN_00017d64(iVar3 + 0x23f50,0);
  FUN_00017d64(iVar3 + 0x23f54,0);
  iVar2 = DAT_00024018;
  if (*(char *)(iVar3 + 0x23f68) != '\0') {
    iVar7 = 0;
    do {
      if (0 < *(int *)(iVar3 + 0x23f08)) {
        iVar4 = 0;
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar1 = *(int *)(iVar2 + 0x23fc0) + iVar4;
          iVar4 = iVar4 + 0x24;
          FUN_0001f2f8(iVar1 + (iVar7 + 4) * 4,0);
        } while (iVar5 < *(int *)(iVar2 + 0x23f5c));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 3);
  }
  iVar3 = DAT_00024020;
  iVar2 = *(int *)(DAT_0002401c + 0x23ff6);
  if (iVar2 != 0) {
    iVar4 = iVar2 + *(int *)(iVar2 + -4) * 0x24;
    iVar7 = iVar4;
    if (iVar4 != iVar2) {
      do {
        iVar4 = iVar7 + -0x24;
        if (iVar7 != 0x14) {
          iVar2 = iVar7 + -4;
          do {
            iVar2 = iVar2 + -4;
            FUN_0001ed98(iVar2);
          } while (iVar2 != iVar7 + -0x14);
        }
        iVar7 = iVar4;
      } while (iVar4 != *(int *)(iVar3 + 0x24006));
    }
    operator_delete__((void *)(iVar4 + -8));
    *(undefined4 *)(DAT_00024024 + 0x2403a) = 0;
  }
  piVar6 = (int *)(DAT_00024028 + 0x23fd8);
  iVar3 = *piVar6;
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + -4) * 0x2ec + iVar3;
    iVar2 = iVar7;
    if (iVar3 != iVar7) {
      do {
        iVar7 = iVar7 + -0x2ec;
        FUN_00023e58(iVar7);
        iVar2 = *piVar6;
      } while (iVar2 != iVar7);
    }
    operator_delete__((void *)(iVar2 + -8));
    *(undefined4 *)(DAT_0002402c + 0x2400e) = 0;
  }
  return;
}



