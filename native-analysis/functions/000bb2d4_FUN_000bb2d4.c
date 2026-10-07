/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bb2d4 FUN_000bb2d4 */

/* WARNING: Removing unreachable block (ram,0x000bb554) */

int FUN_000bb2d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined auStack_58 [4];
  int local_54;
  int local_4c;
  uint local_48;
  int local_44;
  undefined auStack_38 [4];
  int local_34;
  
  iVar7 = param_1 + 0x78;
LAB_000bb2ec:
  iVar4 = *(int *)(param_1 + 0x58);
  do {
    if (iVar4 == 3) {
      iVar4 = FUN_000b9a90(param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
      iVar4 = *(int *)(param_1 + 0x58);
    }
    if (iVar4 == 4) {
      while( true ) {
        iVar8 = FUN_000c3150(iVar7,auStack_58);
        iVar4 = local_44;
        uVar1 = local_48;
        if (iVar8 == -1) {
          return -3;
        }
        if (iVar8 < 1) break;
        iVar8 = FUN_000bdd28(param_1 + 0x230,auStack_58);
        if (iVar8 == 0) {
          iVar8 = param_1 + 0x1e0;
          iVar7 = FUN_000bbe98(iVar8,0);
          if (iVar7 != 0) {
            return -0x81;
          }
          FUN_000bba20(iVar8,param_1 + 0x230);
          uVar3 = *(uint *)(param_1 + 0x70);
          iVar7 = *(int *)(param_1 + 0x74);
          uVar9 = FUN_000bbe98(iVar8,0);
          uVar2 = *(uint *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x70) = uVar3 + uVar9;
          *(uint *)(param_1 + 0x74) = iVar7 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar3,uVar9);
          uVar9 = local_54 * 8;
          *(uint *)(param_1 + 0x68) = uVar2 + uVar9;
          *(uint *)(param_1 + 0x6c) =
               *(int *)(param_1 + 0x6c) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar2,uVar9);
          if (((uVar1 != 0xffffffff) || (iVar4 != -1)) && (local_4c == 0)) {
            if (*(int *)(param_1 + 4) == 0) {
              if (iVar4 < 0) {
                uVar1 = 0;
                iVar4 = 0;
              }
              uVar9 = FUN_000bbe98(iVar8,0);
              uVar2 = uVar1 - uVar9;
              iVar7 = (iVar4 - ((int)uVar9 >> 0x1f)) - (uint)(uVar1 < uVar9);
            }
            else {
              iVar5 = *(int *)(param_1 + 0x60);
              if (iVar5 < 1) {
                if (iVar4 < 0) {
                  uVar1 = 0;
                  iVar4 = 0;
                }
                uVar9 = FUN_000bbe98(iVar8,0);
                uVar2 = uVar1 - uVar9;
                iVar7 = (iVar4 - ((int)uVar9 >> 0x1f)) - (uint)(uVar1 < uVar9);
              }
              else {
                puVar6 = (uint *)(*(int *)(param_1 + 0x44) + iVar5 * 0x10);
                uVar2 = *puVar6;
                uVar9 = uVar1 - uVar2;
                iVar7 = (iVar4 - puVar6[1]) - (uint)(uVar1 < uVar2);
                if (iVar7 < 0) {
                  uVar9 = 0;
                  iVar7 = 0;
                }
                uVar1 = FUN_000bbe98(iVar8,0);
                uVar2 = uVar9 - uVar1;
                iVar7 = (iVar7 - ((int)uVar1 >> 0x1f)) - (uint)(uVar9 < uVar1);
                iVar4 = *(int *)(param_1 + 0x44);
                iVar8 = 0;
                do {
                  bVar10 = CARRY4(uVar2,*(uint *)(iVar4 + 8));
                  uVar2 = uVar2 + *(uint *)(iVar4 + 8);
                  iVar7 = iVar7 + *(int *)(iVar4 + 0xc) + (uint)bVar10;
                  iVar8 = iVar8 + 1;
                  iVar4 = iVar4 + 0x10;
                } while (iVar8 != iVar5);
              }
            }
            *(uint *)(param_1 + 0x50) = uVar2;
            *(int *)(param_1 + 0x54) = iVar7;
            return 1;
          }
          return 1;
        }
      }
      iVar4 = *(int *)(param_1 + 0x58);
    }
    if (iVar4 < 2) {
LAB_000bb358:
      if (2 < iVar4) goto LAB_000bb39e;
      if (*(int *)(param_1 + 4) != 0) {
        iVar4 = FUN_000c2ec4(auStack_38);
        iVar8 = *(int *)(param_1 + 0x34);
        if (iVar8 < 1) {
          if (iVar8 == 0) goto LAB_000bb2ec;
LAB_000bb506:
          iVar5 = 0;
        }
        else {
          if (**(int **)(param_1 + 0x40) == iVar4) goto LAB_000bb506;
          iVar5 = 0;
          do {
            iVar5 = iVar5 + 1;
            if (iVar5 == iVar8) goto LAB_000bb2ec;
          } while ((*(int **)(param_1 + 0x40))[iVar5] != iVar4);
        }
        *(int *)(param_1 + 0x5c) = iVar4;
        *(int *)(param_1 + 0x60) = iVar5;
        FUN_000c3050(iVar7);
        *(undefined4 *)(param_1 + 0x58) = 3;
        goto LAB_000bb39e;
      }
      iVar4 = FUN_000b9bf8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),0
                           ,0,auStack_38);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x1c8);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      FUN_000c3594(iVar7,auStack_38);
    }
    else {
      do {
        FUN_000b9af0(param_1,auStack_38,0xffffffff,0xffffffff);
        if (extraout_r1 < 0) {
          return -2;
        }
        uVar1 = *(uint *)(param_1 + 0x68);
        uVar9 = local_34 * 8;
        *(uint *)(param_1 + 0x68) = uVar1 + uVar9;
        *(uint *)(param_1 + 0x6c) =
             *(int *)(param_1 + 0x6c) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar1,uVar9);
        iVar4 = *(int *)(param_1 + 0x58);
        if (iVar4 != 4) goto LAB_000bb358;
        iVar8 = *(int *)(param_1 + 0x5c);
        iVar4 = FUN_000c2ec4(auStack_38);
        if (iVar8 == iVar4) goto LAB_000bb352;
        iVar4 = FUN_000c2e04(auStack_38);
      } while (iVar4 == 0);
      FUN_000b9bdc(param_1);
      if (*(int *)(param_1 + 4) == 0) {
        FUN_000bc308(*(undefined4 *)(param_1 + 0x48));
        FUN_000bc2b4(*(undefined4 *)(param_1 + 0x4c));
      }
LAB_000bb352:
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 != 4) goto LAB_000bb358;
LAB_000bb39e:
      FUN_000c3594(iVar7,auStack_38);
    }
    iVar4 = *(int *)(param_1 + 0x58);
  } while( true );
}



