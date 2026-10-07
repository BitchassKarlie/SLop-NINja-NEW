/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ba430 FUN_000ba430 */

void FUN_000ba430(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_1e0;
  uint local_1dc;
  uint local_1d4;
  undefined auStack_1c8 [16];
  uint local_1b8;
  int iStack_1b4;
  undefined auStack_1a8 [16];
  undefined auStack_198 [364];
  int local_2c;
  
  iVar1 = DAT_000ba760;
  iVar8 = DAT_000ba75c + 0xba43e;
  local_2c = **(int **)(iVar8 + DAT_000ba760);
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = 0xffffff76;
      goto LAB_000ba44e;
    }
    if (((-1 < param_4) && (param_4 <= *(int *)(param_1 + 0x14))) &&
       ((*(int *)(param_1 + 0x14) != param_4 || (param_3 <= *(uint *)(param_1 + 0x10))))) {
      if (*(int *)(param_1 + 0x58) != 2) {
        iVar3 = *(int *)(param_1 + 0x60);
        iVar4 = *(int *)(param_1 + 0x38);
        iVar9 = *(int *)(iVar4 + iVar3 * 8 + 4);
        if ((iVar9 <= param_4) && ((iVar9 != param_4 || (*(uint *)(iVar4 + iVar3 * 8) <= param_3))))
        {
          iVar9 = *(int *)(iVar4 + (iVar3 + 1) * 8 + 4);
          if ((iVar9 != param_4 && param_4 <= iVar9) ||
             ((iVar9 == param_4 && (param_3 < *(uint *)(iVar4 + (iVar3 + 1) * 8)))))
          goto LAB_000ba4ac;
        }
        FUN_000b9bdc(param_1);
      }
LAB_000ba4ac:
      iVar4 = param_1 + 0x78;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      FUN_000c3050(iVar4,*(undefined4 *)(param_1 + 0x5c));
      FUN_000bb9dc(param_1 + 0x1e0);
      iVar3 = FUN_000b9ed8(param_1,extraout_r1,param_3,param_4);
      if (iVar3 == 0) {
        FUN_000c3b64(auStack_198,*(undefined4 *)(param_1 + 0x5c));
        FUN_000c3008(auStack_198);
        bVar12 = false;
        local_1dc = 0;
        local_1d4 = 0;
        local_1e0 = 0;
LAB_000ba502:
        do {
          if ((*(int *)(param_1 + 0x58) < 3) ||
             (iVar3 = FUN_000c3150(auStack_198,auStack_1c8), iVar3 < 1)) {
LAB_000ba508:
            if (local_1e0 != 0) {
              *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
              *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
              goto LAB_000ba66c;
            }
            lVar13 = FUN_000b9af0(param_1,auStack_1a8,0xffffffff,0xffffffff);
            iVar3 = (int)((ulonglong)lVar13 >> 0x20);
            if (lVar13 < 0) {
              uVar14 = FUN_000b9750(param_1,0xffffffff);
              *(undefined8 *)(param_1 + 0x50) = uVar14;
              goto LAB_000ba66c;
            }
            if (*(int *)(param_1 + 0x58) < 3) {
LAB_000ba532:
              iVar9 = FUN_000c2ec4(auStack_1a8);
              iVar6 = *(int *)(param_1 + 0x34);
              if (iVar6 < 1) {
                if (iVar6 == 0) goto LAB_000ba502;
LAB_000ba74e:
                iVar10 = 0;
              }
              else {
                if (**(int **)(param_1 + 0x40) == iVar9) goto LAB_000ba74e;
                iVar10 = 0;
                do {
                  iVar10 = iVar10 + 1;
                  if (iVar10 == iVar6) goto LAB_000ba502;
                } while (iVar9 != (*(int **)(param_1 + 0x40))[iVar10]);
              }
              *(int *)(param_1 + 0x60) = iVar10;
              *(int *)(param_1 + 0x5c) = iVar9;
              FUN_000c3050(iVar4,iVar9);
              FUN_000c3050(auStack_198,iVar9);
              *(undefined4 *)(param_1 + 0x58) = 3;
              bVar12 = false;
              iVar9 = *(int *)(*(int *)(param_1 + 0x3c) + iVar10 * 8 + 4);
              if ((iVar3 <= iVar9) &&
                 ((iVar9 != iVar3 ||
                  ((uint)lVar13 <= *(uint *)(*(int *)(param_1 + 0x3c) + iVar10 * 8))))) {
                bVar12 = true;
              }
            }
            else {
              iVar6 = *(int *)(param_1 + 0x5c);
              iVar9 = FUN_000c2ec4(auStack_1a8);
              if ((iVar6 != iVar9) && (iVar9 = FUN_000c2e04(auStack_1a8), iVar9 != 0)) {
                FUN_000b9bdc(param_1);
                FUN_000c3210(auStack_198);
              }
              if (*(int *)(param_1 + 0x58) < 3) goto LAB_000ba532;
            }
            FUN_000c3594(iVar4,auStack_1a8);
            FUN_000c3594(auStack_198,auStack_1a8);
            local_1d4 = FUN_000c2e10(auStack_1a8);
            goto LAB_000ba502;
          }
          iVar3 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x60) * 0x20;
          if (*(int *)(iVar3 + 0x1c) == 0) {
            FUN_000c3150(iVar4);
            goto LAB_000ba508;
          }
          iVar3 = FUN_000bdb94(iVar3,auStack_1c8);
          if (iVar3 < 0) {
            FUN_000c3150(iVar4,0);
            iVar3 = 0;
          }
          else {
            uVar7 = local_1d4;
            if (local_1d4 != 0) {
              uVar7 = 1;
            }
            if (bVar12) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 & 1;
            }
            if (uVar7 == 0) {
              if (local_1e0 != 0) {
                local_1dc = local_1dc + (iVar3 + local_1e0 >> 2);
              }
            }
            else {
              FUN_000c3150(iVar4,0);
            }
          }
          if ((local_1b8 != 0xffffffff) || (local_1e0 = iVar3, iStack_1b4 != -1)) goto LAB_000ba618;
        } while( true );
      }
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      FUN_000c3210(auStack_198);
      FUN_000b9bdc(param_1);
      uVar2 = 0xffffff77;
      goto LAB_000ba44e;
    }
  }
  uVar2 = 0xffffff7d;
LAB_000ba44e:
  if (local_2c == **(int **)(iVar8 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
LAB_000ba618:
  iVar9 = *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x44);
  puVar5 = (uint *)(iVar4 + iVar9 * 0x10);
  uVar11 = *puVar5;
  uVar7 = local_1b8 - uVar11;
  iVar3 = (iStack_1b4 - puVar5[1]) - (uint)(local_1b8 < uVar11);
  if (iVar3 < 0) {
    uVar7 = 0;
    iVar3 = 0;
  }
  if (0 < iVar9) {
    iVar6 = 0;
    do {
      bVar12 = CARRY4(uVar7,*(uint *)(iVar4 + 8));
      uVar7 = uVar7 + *(uint *)(iVar4 + 8);
      iVar3 = iVar3 + *(int *)(iVar4 + 0xc) + (uint)bVar12;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar6 != iVar9);
  }
  iVar3 = (iVar3 - ((int)local_1dc >> 0x1f)) - (uint)(uVar7 < local_1dc);
  *(uint *)(param_1 + 0x50) = uVar7 - local_1dc;
  *(int *)(param_1 + 0x54) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
LAB_000ba66c:
  FUN_000c3210(auStack_198);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar2 = 0;
  goto LAB_000ba44e;
}



