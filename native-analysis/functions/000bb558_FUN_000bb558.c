/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bb558 FUN_000bb558 */

int FUN_000bb558(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_5c;
  undefined auStack_58 [16];
  uint local_48;
  int iStack_44;
  undefined auStack_38 [20];
  
  local_5c = FUN_000ba764();
  if ((local_5c < 0) || (local_5c = FUN_000b9a90(param_1), local_5c != 0)) {
    return local_5c;
  }
  iVar8 = param_1 + 0x78;
  iVar9 = param_1 + 0x1e0;
  iVar6 = 0;
LAB_000bb58e:
  do {
    uVar1 = FUN_000c3164(iVar8,auStack_58);
    if ((int)uVar1 < 1) {
      uVar5 = uVar1 + 3;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      if (((uVar5 & uVar1 >> 0x1f) == 0) &&
         (FUN_000b9af0(param_1,auStack_38,0xffffffff,0xffffffff), -1 < extraout_r1)) {
        iVar2 = FUN_000c2e04(auStack_38);
        if (iVar2 != 0) {
          FUN_000b9bdc(param_1);
        }
        if (*(int *)(param_1 + 0x58) < 3) {
          iVar2 = FUN_000c2ec4(auStack_38);
          iVar3 = *(int *)(param_1 + 0x34);
          if (iVar3 < 1) break;
          if (**(int **)(param_1 + 0x40) == iVar2) goto LAB_000bb7e8;
          iVar10 = 0;
          do {
            iVar10 = iVar10 + 1;
            if (iVar10 == iVar3) goto LAB_000bb58e;
          } while (iVar2 != (*(int **)(param_1 + 0x40))[iVar10]);
          goto LAB_000bb6c8;
        }
        goto LAB_000bb6ea;
      }
LAB_000bb5e8:
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      uVar13 = *(undefined8 *)(param_1 + 0x50);
LAB_000bb5fe:
      iVar6 = (int)((ulonglong)uVar13 >> 0x20);
      bVar12 = param_4 == iVar6;
      if (!bVar12 && iVar6 <= param_4) goto LAB_000bb608;
      do {
        if (!bVar12) {
          return 0;
        }
        if (param_3 <= (uint)uVar13) {
          return 0;
        }
LAB_000bb608:
        do {
          uVar5 = param_3 - (uint)uVar13;
          iVar6 = (param_4 - (int)((ulonglong)uVar13 >> 0x20)) - (uint)(param_3 < (uint)uVar13);
          uVar1 = FUN_000bbe98(iVar9,0);
          iVar8 = (int)uVar1 >> 0x1f;
          if ((iVar8 != iVar6 && iVar6 <= iVar8) || ((iVar8 == iVar6 && (uVar5 < uVar1)))) {
            iVar8 = (int)uVar5 >> 0x1f;
            uVar1 = uVar5;
          }
          FUN_000bbee0(iVar9,uVar1);
          iVar2 = *(uint *)(param_1 + 0x50) + uVar1;
          iVar3 = *(int *)(param_1 + 0x54) + iVar8 + (uint)CARRY4(*(uint *)(param_1 + 0x50),uVar1);
          *(int *)(param_1 + 0x50) = iVar2;
          *(int *)(param_1 + 0x54) = iVar3;
          if (iVar8 < iVar6) {
            iVar6 = FUN_000bb2d4(param_1);
          }
          else {
            uVar13 = CONCAT44(iVar3,iVar2);
            if ((iVar6 != iVar8) || (uVar13 = CONCAT44(iVar3,iVar2), uVar5 <= uVar1))
            goto LAB_000bb5fe;
            iVar6 = FUN_000bb2d4(param_1);
          }
          if (iVar6 < 1) {
            uVar13 = FUN_000b9750(param_1,0xffffffff);
            *(undefined8 *)(param_1 + 0x50) = uVar13;
            goto LAB_000bb5fe;
          }
          uVar13 = *(undefined8 *)(param_1 + 0x50);
          bVar12 = param_4 == *(int *)(param_1 + 0x54);
        } while (!bVar12 && *(int *)(param_1 + 0x54) <= param_4);
      } while( true );
    }
    iVar2 = FUN_000bdb94(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x60) * 0x20,auStack_58);
    if (iVar2 < 0) {
      FUN_000c3150(iVar8,0);
    }
    else {
      if (iVar6 == 0) {
        uVar5 = *(uint *)(param_1 + 0x50);
        iVar6 = *(int *)(param_1 + 0x54);
      }
      else {
        uVar1 = iVar6 + iVar2 >> 2;
        uVar5 = *(uint *)(param_1 + 0x50) + uVar1;
        iVar6 = *(int *)(param_1 + 0x54) +
                (iVar6 + iVar2 >> 0x1f) + (uint)CARRY4(*(uint *)(param_1 + 0x50),uVar1);
        *(uint *)(param_1 + 0x50) = uVar5;
        *(int *)(param_1 + 0x54) = iVar6;
      }
      iVar3 = FUN_000bc1e0(*(undefined4 *)(param_1 + 0x48),1);
      uVar1 = iVar3 + iVar2 >> 2;
      iVar6 = iVar6 + (iVar3 + iVar2 >> 0x1f) + (uint)CARRY4(uVar5,uVar1);
      if ((param_4 == iVar6 || param_4 < iVar6) &&
         ((param_4 != iVar6 || (param_3 <= uVar5 + uVar1)))) goto LAB_000bb5e8;
      FUN_000c3150(iVar8,0);
      FUN_000bdd1c(param_1 + 0x230,auStack_58);
      FUN_000bba20(iVar9,param_1 + 0x230);
      iVar6 = iVar2;
      if (-1 < iStack_44) {
        iVar10 = *(int *)(param_1 + 0x60);
        iVar3 = *(int *)(param_1 + 0x44);
        puVar7 = (uint *)(iVar3 + iVar10 * 0x10);
        uVar1 = *puVar7;
        iVar2 = (iStack_44 - puVar7[1]) - (uint)(local_48 < uVar1);
        *(uint *)(param_1 + 0x50) = local_48 - uVar1;
        *(int *)(param_1 + 0x54) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        if (0 < iVar10) {
          uVar1 = *(uint *)(param_1 + 0x50);
          iVar2 = *(int *)(param_1 + 0x54);
          iVar11 = 0;
          do {
            iVar11 = iVar11 + 1;
            bVar12 = CARRY4(uVar1,*(uint *)(iVar3 + 8));
            uVar1 = uVar1 + *(uint *)(iVar3 + 8);
            iVar2 = iVar2 + *(int *)(iVar3 + 0xc) + (uint)bVar12;
            iVar3 = iVar3 + 0x10;
            *(uint *)(param_1 + 0x50) = uVar1;
            *(int *)(param_1 + 0x54) = iVar2;
          } while (iVar11 < iVar10);
        }
      }
    }
  } while( true );
  if (iVar3 != 0) {
LAB_000bb7e8:
    iVar10 = 0;
LAB_000bb6c8:
    *(int *)(param_1 + 0x60) = iVar10;
    *(undefined4 *)(param_1 + 0x58) = 3;
    uVar4 = FUN_000c2ec4(auStack_38);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    FUN_000c3050(iVar8,iVar2);
    iVar6 = FUN_000b9a90(param_1);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
LAB_000bb6ea:
    FUN_000c3594(iVar8,auStack_38);
  }
  goto LAB_000bb58e;
}



