/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bf0b0 FUN_000bf0b0 */

undefined4 * FUN_000bf0b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int local_40;
  int local_38;
  
  iVar1 = param_1 + 4;
  piVar13 = *(int **)(param_2 + 0x308);
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + 0xc20);
  iVar2 = FUN_000c28b4(iVar1,1);
  if (iVar2 == 1) {
    puVar3 = (undefined4 *)FUN_000bc128(param_1,*(int *)(param_2 + 0x2fc) << 2);
    uVar8 = *(int *)(param_2 + 0x304) - 1;
    if (uVar8 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        uVar8 = uVar8 >> 1;
      } while (uVar8 != 0);
    }
    uVar4 = FUN_000c28b4(iVar1,iVar2);
    *puVar3 = uVar4;
    uVar8 = *(int *)(param_2 + 0x304) - 1;
    if (uVar8 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        uVar8 = uVar8 >> 1;
      } while (uVar8 != 0);
    }
    uVar4 = FUN_000c28b4(iVar1,iVar2);
    puVar3[1] = uVar4;
    if (0 < *piVar13) {
      local_38 = 2;
      local_40 = 0;
      do {
        iVar2 = piVar13[local_40 + 1];
        iVar14 = piVar13[iVar2 + 0x20];
        uVar8 = piVar13[iVar2 + 0x30];
        if (uVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_000be2c4(piVar13[iVar2 + 0x40] * 0x34 + iVar7,iVar1);
          if (uVar9 == 0xffffffff) goto LAB_000bf0d8;
        }
        if (0 < iVar14) {
          iVar11 = 0;
          piVar10 = puVar3 + local_38;
          do {
            while( true ) {
              uVar6 = uVar9 & (1 << (uVar8 & 0xff)) - 1U;
              uVar9 = (int)uVar9 >> (uVar8 & 0xff);
              if (piVar13[uVar6 + iVar2 * 8 + 0x50] < 0) break;
              iVar5 = FUN_000be2c4(piVar13[uVar6 + iVar2 * 8 + 0x50] * 0x34 + iVar7,iVar1);
              *piVar10 = iVar5;
              if (iVar5 == -1) goto LAB_000bf0d8;
              iVar11 = iVar11 + 1;
              piVar10 = piVar10 + 1;
              if (iVar11 == iVar14) goto LAB_000bf1cc;
            }
            *piVar10 = 0;
            iVar11 = iVar11 + 1;
            piVar10 = piVar10 + 1;
          } while (iVar11 != iVar14);
        }
LAB_000bf1cc:
        local_40 = local_40 + 1;
        if (*piVar13 <= local_40) break;
        local_38 = local_38 + iVar14;
      } while( true );
    }
    if (2 < *(int *)(param_2 + 0x2fc)) {
      iVar2 = 2;
      iVar1 = param_2;
      puVar12 = puVar3;
      piVar10 = piVar13;
      do {
        uVar8 = puVar3[*(int *)(iVar1 + 0x200)];
        uVar9 = (puVar3[*(int *)(iVar1 + 0x104)] & 0x7fff) - (uVar8 & 0x7fff);
        iVar7 = __aeabi_idiv((piVar10[0xd3] - piVar13[*(int *)(iVar1 + 0x200) + 0xd1]) *
                             ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)),
                             piVar13[*(int *)(iVar1 + 0x104) + 0xd1] -
                             piVar13[*(int *)(iVar1 + 0x200) + 0xd1]);
        if ((int)uVar9 < 0) {
          iVar7 = -iVar7;
        }
        uVar8 = iVar7 + (uVar8 & 0x7fff);
        iVar7 = puVar12[2];
        if (iVar7 == 0) {
          puVar12[2] = uVar8 | 0x8000;
        }
        else {
          uVar6 = *(int *)(param_2 + 0x304) - uVar8;
          uVar9 = uVar6;
          if ((int)uVar8 <= (int)uVar6) {
            uVar9 = uVar8;
          }
          if ((int)(iVar7 + uVar9 * -2) < 0 == SBORROW4(iVar7,uVar9 * 2)) {
            if ((int)uVar8 < (int)uVar6) {
              uVar9 = iVar7 - uVar8;
            }
            else {
              uVar9 = ~(iVar7 - uVar6);
            }
          }
          else if (iVar7 << 0x1f < 0) {
            uVar9 = -(iVar7 + 1 >> 1);
          }
          else {
            uVar9 = iVar7 >> 1;
          }
          puVar12[2] = uVar9 + uVar8;
          puVar3[*(int *)(iVar1 + 0x200)] = puVar3[*(int *)(iVar1 + 0x200)] & 0x7fff;
          puVar3[*(int *)(iVar1 + 0x104)] = puVar3[*(int *)(iVar1 + 0x104)] & 0x7fff;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
        puVar12 = puVar12 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x2fc));
    }
  }
  else {
LAB_000bf0d8:
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



