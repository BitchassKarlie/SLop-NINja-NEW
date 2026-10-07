/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aeec0 FUN_000aeec0 */

void FUN_000aeec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x18);
  if (iVar4 != iVar7) {
    do {
      pvVar1 = *(void **)(iVar4 + 8);
      *(void **)(iVar4 + 0xc) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      iVar4 = iVar4 + 0x14;
    } while (iVar7 != iVar4);
    iVar4 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x18) = iVar4;
  iVar7 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 != iVar7) {
    do {
      pvVar1 = *(void **)(iVar4 + 8);
      *(void **)(iVar4 + 0xc) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      iVar4 = iVar4 + 0x14;
    } while (iVar7 != iVar4);
    iVar4 = *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x28) = iVar4;
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar7 = *(int *)(param_1 + 0x38), iVar7 == 0)) ||
     (iVar2 = *(int *)(iVar7 + 0x34), (*(int *)(iVar7 + 0x38) - iVar2 >> 3) * -0x49249249 == 0)) {
    return;
  }
  iVar8 = 0;
  uVar9 = 0;
  iVar5 = iVar4;
  do {
    iVar3 = *(int *)(iVar2 + iVar8 + 0x30);
    iVar4 = (iVar4 - iVar5 >> 2) * -0x33333333;
    iVar2 = *(int *)(iVar2 + iVar8 + 0x2c);
    FUN_000aee9c(param_1 + 0x20,iVar4 + (iVar3 - iVar2 >> 6),iVar3,iVar2,param_4);
    iVar2 = *(int *)(iVar7 + 0x34);
    iVar5 = *(int *)(iVar2 + iVar8 + 0x2c);
    if ((uint)(*(int *)(iVar2 + iVar8 + 0x30) - iVar5) >> 6 != 0) {
      uVar6 = 0;
      do {
        while( true ) {
          iVar3 = *(int *)(param_1 + 0x24) + (uVar6 + iVar4) * 0x14;
          *(uint *)(*(int *)(param_1 + 0x24) + (uVar6 + iVar4) * 0x14) = iVar5 + uVar6 * 0x40;
          iVar2 = *(int *)(iVar7 + 0x34) + iVar8;
          FUN_00093fcc(*(undefined4 *)(param_1 + 0xc),iVar2,
                       *(int *)(iVar2 + 0x2c) + uVar6 * 0x40 + 0x18,iVar3 + 4);
          if ((*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2) * -0x55555555 != 0) break;
          iVar4 = iVar4 + -1;
          uVar6 = uVar6 + 1;
          iVar2 = *(int *)(iVar7 + 0x34) + iVar8;
          FUN_000aee9c(param_1 + 0x20,iVar4 + (*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) >> 6)
                      );
          iVar2 = *(int *)(iVar7 + 0x34);
          iVar5 = *(int *)(iVar2 + iVar8 + 0x2c);
          if ((uint)(*(int *)(iVar2 + iVar8 + 0x30) - iVar5 >> 6) <= uVar6) goto LAB_000aeffe;
        }
        iVar2 = *(int *)(iVar7 + 0x34);
        uVar6 = uVar6 + 1;
        iVar5 = *(int *)(iVar2 + iVar8 + 0x2c);
      } while (uVar6 < (uint)(*(int *)(iVar2 + iVar8 + 0x30) - iVar5 >> 6));
    }
LAB_000aeffe:
    uVar9 = uVar9 + 1;
    iVar8 = iVar8 + 0x38;
    if ((uint)((*(int *)(iVar7 + 0x38) - iVar2 >> 3) * -0x49249249) <= uVar9) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x24);
  } while( true );
}



