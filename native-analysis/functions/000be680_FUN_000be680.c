/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be680 FUN_000be680 */

int FUN_000be680(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = *(int *)(param_2 + 0x10);
  iVar6 = param_1 + 4;
  iVar1 = FUN_000c28b4(iVar6,*(undefined4 *)(iVar7 + 0xc));
  if (0 < iVar1) {
    uVar4 = *(uint *)(iVar7 + 0xc);
    iVar11 = *(int *)(iVar7 + 0x10);
    uVar2 = FUN_000bd1fc(*(undefined4 *)(iVar7 + 0x14));
    iVar3 = FUN_000c28b4(iVar6,uVar2);
    if ((iVar3 != -1) && (iVar3 < *(int *)(iVar7 + 0x14))) {
      iVar8 = *(int *)(iVar7 + (iVar3 + 6) * 4);
      iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + 0xc20);
      iVar7 = FUN_000bc128(param_1,(*(int *)(param_2 + 8) + 1) * 4);
      iVar3 = *(int *)(param_2 + 8);
      if (0 < iVar3) {
        iVar8 = iVar8 * 0x34;
        piVar9 = (int *)(iVar10 + iVar8);
        iVar8 = *(int *)(iVar10 + iVar8);
        iVar10 = 0;
        do {
          iVar3 = FUN_000be0f0(piVar9,iVar7 + iVar10 * 4,iVar6,iVar8,0xffffffe8);
          if (iVar3 == -1) {
            return 0;
          }
          iVar8 = *piVar9;
          iVar3 = *(int *)(param_2 + 8);
          iVar10 = iVar10 + iVar8;
        } while (iVar10 < iVar3);
        if (0 < iVar3) {
          iVar10 = 0;
          iVar6 = 0;
          do {
            if (0 < iVar8) {
              iVar3 = 0;
              piVar5 = (int *)(iVar7 + iVar6 * 4);
              do {
                iVar3 = iVar3 + 1;
                iVar6 = iVar6 + 1;
                *piVar5 = *piVar5 + iVar10;
                iVar8 = *piVar9;
                piVar5 = piVar5 + 1;
              } while (iVar3 < iVar8);
              iVar3 = *(int *)(param_2 + 8);
            }
            iVar10 = *(int *)(iVar7 + (iVar6 + -1) * 4);
          } while (iVar6 < iVar3);
        }
      }
      uVar2 = __aeabi_idiv(iVar11 * iVar1 * 0x10,(1 << (uVar4 & 0xff)) + -1);
      *(undefined4 *)(iVar7 + iVar3 * 4) = uVar2;
      return iVar7;
    }
  }
  return 0;
}



