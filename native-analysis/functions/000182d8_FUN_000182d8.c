/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000182d8 FUN_000182d8 */

undefined4 * FUN_000182d8(undefined4 *param_1,byte *param_2)

{
  bool bVar1;
  void *pvVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  size_t sVar16;
  int iVar17;
  undefined auStack_48 [4];
  void *local_44;
  void *local_40;
  void *local_3c;
  undefined auStack_38 [4];
  void *local_34;
  int local_30;
  int local_2c;
  
  sVar16 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  sVar3 = strlen((char *)param_2);
  FUN_00017cb8(auStack_38,sVar3);
  if (sVar3 != 0) {
    iVar11 = (local_30 + -1) - (int)local_34;
    if (iVar11 != 0) {
      do {
        iVar11 = iVar11 + -1;
        *(byte *)((int)local_34 + sVar16) = param_2[sVar16];
        if (iVar11 == 0) break;
        sVar16 = sVar16 + 1;
      } while (sVar3 != sVar16);
    }
    local_2c = (int)local_34 + sVar3;
  }
  iVar4 = 0;
  param_1[0x6f] = 0;
  iVar11 = 0;
  *param_1 = 0;
  do {
    iVar14 = 0;
    do {
      iVar17 = iVar14 + iVar4;
      iVar14 = iVar14 + 4;
      *(undefined4 *)((int)param_1 + iVar17 + 4) = 0;
    } while (iVar14 != 0x2c);
    iVar4 = iVar4 + 0x2c;
  } while (iVar4 != 0x1b8);
  bVar10 = *param_2;
  pbVar15 = param_2;
  iVar4 = 0;
  if (bVar10 == 0x28) goto LAB_00018460;
  do {
    iVar11 = iVar4;
    pvVar2 = local_34;
    bVar7 = bVar10;
    if (bVar10 != 0) {
      bVar7 = 1;
    }
    if (bVar10 == 0x2c) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar7 & 1;
    }
    if (bVar7 == 0) {
      iVar4 = param_1[0x6f];
    }
    else {
      uVar12 = 0;
      do {
        uVar12 = uVar12 + 1;
        uVar8 = (uint)pbVar15[uVar12];
        uVar5 = uVar8;
        if (uVar8 != 0) {
          uVar5 = 1;
        }
        if (uVar8 == 0x2c) {
          local_44 = (void *)0x0;
        }
        else {
          local_44 = (void *)(uVar5 & 1);
        }
      } while (local_44 != (void *)0x0);
      uVar5 = (local_2c - (int)local_34) - iVar11;
      if (uVar12 <= uVar5) {
        uVar5 = uVar12;
      }
      local_40 = local_44;
      local_3c = local_44;
      FUN_00017cb8(auStack_48,uVar5);
      if (uVar5 != 0) {
        iVar4 = (int)local_40 + (-1 - (int)local_44);
        if (iVar4 != 0) {
          uVar8 = 0;
          do {
            iVar4 = iVar4 + -1;
            *(undefined *)((int)local_44 + uVar8) = *(undefined *)((int)pvVar2 + uVar8 + iVar11);
            if (iVar4 == 0) break;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar5);
        }
        local_3c = (void *)((int)local_44 + uVar5);
      }
      param_1[param_1[0x6f] * 0xb + 1] = 1;
      iVar4 = param_1[0x6f];
      uVar6 = FUN_0008f414(local_44);
      param_1[iVar4 * 0xb + 2] = uVar6;
      iVar4 = param_1[0x6f] + 1;
      param_1[0x6f] = iVar4;
      if (local_44 == (void *)0x0) {
        bVar10 = pbVar15[uVar12];
        iVar11 = iVar11 + uVar12;
      }
      else {
        operator_delete(local_44);
        local_40 = (void *)0x0;
        local_3c = (void *)0x0;
        local_44 = (void *)0x0;
        iVar4 = param_1[0x6f];
        bVar10 = pbVar15[uVar12];
        iVar11 = iVar11 + uVar12;
      }
    }
    if (bVar10 == 0) {
LAB_00018428:
      if (local_34 != (void *)0x0) {
        operator_delete(local_34);
      }
      return param_1;
    }
    do {
      iVar11 = iVar11 + 1;
    } while (param_2[iVar11] == 0x20);
    if (iVar4 == 10) goto LAB_00018428;
    while( true ) {
      bVar10 = param_2[iVar11];
      pbVar15 = param_2 + iVar11;
      iVar4 = iVar11;
      if (bVar10 != 0x28) break;
LAB_00018460:
      iVar14 = iVar11 + 1;
      iVar4 = 0;
LAB_0001846e:
      do {
        pvVar2 = local_34;
        bVar10 = param_2[iVar4 + iVar14];
        bVar7 = bVar10;
        if (bVar10 != 0) {
          bVar7 = 1;
        }
        if (bVar10 == 0x29) {
          bVar7 = 0;
        }
        else {
          bVar7 = bVar7 & 1;
        }
        iVar17 = iVar4;
        if (bVar7 == 0) {
LAB_00018488:
          iVar13 = param_1[0x6f];
          iVar9 = param_1[iVar13 * 0xb + 1];
          if (bVar10 == 0) {
            bVar1 = true;
            goto LAB_000185a0;
          }
          iVar4 = iVar17;
          if (bVar10 != 0x29) goto LAB_00018584;
          bVar1 = true;
        }
        else {
          if (bVar10 != 0x2c) {
            uVar12 = 0;
            do {
              uVar12 = uVar12 + 1;
              bVar10 = param_2[uVar12 + iVar4 + iVar14];
              bVar7 = bVar10;
              if (bVar10 != 0) {
                bVar7 = 1;
              }
              if (bVar10 == 0x29) {
                bVar7 = 0;
              }
              else {
                bVar7 = bVar7 & 1;
              }
            } while ((bVar7 != 0) && (bVar10 != 0x2c));
            iVar17 = iVar4 + uVar12;
            uVar5 = (local_2c - (int)local_34) - (iVar4 + iVar14);
            local_44 = (void *)0x0;
            if (uVar12 < uVar5) {
              uVar5 = uVar12;
            }
            local_40 = (void *)0x0;
            local_3c = (void *)0x0;
            FUN_00017cb8(auStack_48,uVar5);
            if (uVar5 != 0) {
              iVar9 = (int)local_40 + (-1 - (int)local_44);
              if (iVar9 != 0) {
                uVar8 = 0;
                do {
                  iVar9 = iVar9 + -1;
                  *(undefined *)((int)local_44 + uVar8) =
                       *(undefined *)((int)pvVar2 + uVar8 + iVar4 + iVar14);
                  if (iVar9 == 0) break;
                  uVar8 = uVar8 + 1;
                } while (uVar8 != uVar5);
              }
              local_3c = (void *)((int)local_44 + uVar5);
            }
            param_1[param_1[0x6f] * 0xb + 1] = param_1[param_1[0x6f] * 0xb + 1] + 1;
            iVar9 = param_1[0x6f];
            iVar13 = param_1[iVar9 * 0xb + 1];
            uVar6 = FUN_0008f414(local_44);
            param_1[iVar13 + iVar9 * 0xb + 1] = uVar6;
            if (local_44 != (void *)0x0) {
              operator_delete(local_44);
              local_40 = (void *)0x0;
              local_3c = (void *)0x0;
              local_44 = (void *)0x0;
            }
            bVar10 = param_2[uVar12 + iVar4 + iVar14];
            goto LAB_00018488;
          }
          iVar13 = param_1[0x6f];
          iVar9 = param_1[iVar13 * 0xb + 1];
LAB_00018584:
          if (iVar9 == 10) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        iVar4 = iVar4 + 1;
        if (param_2[iVar4 + iVar14] != 0x20) {
          if (bVar1) break;
          goto LAB_0001846e;
        }
        do {
          iVar4 = iVar4 + 1;
        } while (param_2[iVar4 + iVar14] == 0x20);
      } while (!bVar1);
      bVar1 = false;
LAB_000185a0:
      iVar11 = iVar11 + 2 + iVar4;
      bVar10 = param_2[iVar11];
      while (bVar10 == 0x20) {
        iVar11 = iVar11 + 1;
        bVar10 = param_2[iVar11];
      }
      param_1[0x6f] = iVar13 + 1;
      if ((iVar13 + 1 == 10) || (bVar1)) goto LAB_00018428;
    }
  } while( true );
}



