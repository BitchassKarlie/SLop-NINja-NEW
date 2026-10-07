/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9838 FUN_000b9838 */

int FUN_000b9838(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 uVar11;
  
  if (1 < *(int *)(param_1 + 0x58)) {
    iVar7 = *(int *)(param_1 + 0x34);
    while (param_2 < iVar7) {
      uVar2 = *(uint *)(param_1 + 4);
      uVar6 = 1 - uVar2;
      if (1 < uVar2) {
        uVar6 = 0;
      }
      if (param_2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 & 1;
      }
      if (uVar6 == 0) {
        if (param_2 < 0) {
          if (iVar7 < 1) {
            uVar4 = 0;
            iVar1 = 0;
            param_2 = -1;
            iVar7 = param_4;
          }
          else {
            uVar2 = 0;
            iVar8 = 0;
            iVar1 = 0;
            puVar3 = *(uint **)(param_1 + 0x3c);
            puVar9 = *(uint **)(param_1 + 0x38);
            do {
              uVar6 = puVar9[2];
              uVar5 = uVar6 - *puVar3;
              param_3 = uVar5 * 8;
              bVar10 = CARRY4(uVar2,param_3);
              uVar2 = uVar2 + param_3;
              iVar8 = iVar8 + (((puVar9[3] - puVar3[1]) - (uint)(uVar6 < *puVar3)) * 8 |
                              uVar5 >> 0x1d) + (uint)bVar10;
              iVar1 = iVar1 + 1;
              puVar3 = puVar3 + 2;
              puVar9 = puVar9 + 2;
            } while (iVar1 != iVar7);
            param_2 = -1;
            uVar4 = (undefined4)((ulonglong)uVar2 * 1000);
            iVar1 = iVar8 * 1000 + (int)((ulonglong)uVar2 * 1000 >> 0x20);
            iVar7 = 1000;
          }
        }
        else {
          if (uVar2 == 0) {
            iVar7 = *(int *)(param_1 + 0x48) + param_2 * 0x20;
            if (0 < *(int *)(iVar7 + 0x10)) {
              return *(int *)(iVar7 + 0x10);
            }
            iVar1 = *(int *)(iVar7 + 0xc);
            if (0 < iVar1) {
              if (*(int *)(iVar7 + 0x14) < 1) {
                return iVar1;
              }
              return *(int *)(iVar7 + 0x14) + iVar1 >> 1;
            }
            return -1;
          }
          iVar7 = *(int *)(param_1 + 0x38) + param_2 * 8;
          puVar3 = (uint *)(*(int *)(param_1 + 0x3c) + param_2 * 8);
          uVar2 = *(uint *)(iVar7 + 8);
          uVar6 = *puVar3;
          param_3 = uVar2 - uVar6;
          iVar7 = (*(int *)(iVar7 + 0xc) - puVar3[1]) - (uint)(uVar2 < uVar6);
          uVar4 = (undefined4)((ulonglong)param_3 * 8000);
          iVar1 = iVar7 * 8000 + (int)((ulonglong)param_3 * 8000 >> 0x20);
        }
        uVar11 = FUN_000b97b0(param_1,param_2,param_3,iVar7,param_4);
        iVar7 = __aeabi_ldivmod(uVar4,iVar1,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
        return iVar7;
      }
      param_2 = 0;
    }
  }
  return -0x83;
}



