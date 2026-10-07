/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088314 FUN_00088314 */

undefined4 FUN_00088314(int param_1,int param_2)

{
  void **ppvVar1;
  undefined4 uVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  void *pvVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  void **ppvVar12;
  int **ppiVar13;
  int iVar14;
  int iVar15;
  void *pvVar16;
  int local_104 [20];
  int *local_b4 [20];
  undefined auStack_64 [4];
  void **local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *pvStack_3c;
  void *pvStack_38;
  void *pvStack_34;
  
  uVar2 = DAT_0008854c;
  *(undefined4 *)(param_2 + 0xe4) = DAT_0008854c;
  *(undefined4 *)(param_2 + 0xec) = uVar2;
  *(undefined4 *)(param_2 + 0xe8) = uVar2;
  iVar4 = DAT_00088550;
  *(uint *)(param_2 + 0x160) = (uint)*(byte *)(param_1 + 0x25d);
  *(uint *)(param_2 + 0x164) = (uint)*(byte *)(param_1 + 0x25e);
  *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_1 + 0x260);
  piVar11 = *(int **)(param_2 + 0x138);
  ppiVar7 = (int **)*piVar11;
  while ((int **)piVar11 != ppiVar7) {
    if ((int **)*(int *)(param_2 + 0x138) == ppiVar7) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    piVar9 = *ppiVar7;
    *ppiVar7[1] = (int)piVar9;
    *(int **)((int)*ppiVar7 + 4) = ppiVar7[1];
    FUN_000882cc(param_2 + 0x134);
    *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 0x13c) + -1;
    ppiVar7 = (int **)piVar9;
  }
  if (((*(char *)(*(int *)(iVar4 + 0x8834a + DAT_00088554) + 8) != '\0') &&
      (-1 < *(int *)(param_1 + 0x250))) ||
     (iVar5 = *(int *)(iVar4 + 0x8834a + DAT_00088554), iVar4 = param_1 + *(int *)(iVar5 + 4) * 0x10
     , (uint)(*(int *)(iVar4 + 0xb4) - *(int *)(iVar4 + 0xb0)) >> 2 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  iVar4 = *(int *)(iVar5 + 4);
  ppiVar7 = *(int ***)(param_1 + iVar4 * 0x10 + 0xb0);
  ppiVar13 = *(int ***)(param_1 + iVar4 * 0x10 + 0xb4);
  if (ppiVar7 != ppiVar13) {
    iVar4 = 0;
    iVar10 = *(int *)(param_1 + 0x250);
    iVar5 = 0;
    while( true ) {
      piVar11 = *ppiVar7;
      if ((*piVar11 <= iVar10) && ((iVar10 <= piVar11[1] || (piVar11[1] == -2)))) {
        local_b4[iVar4] = piVar11;
        local_104[iVar4] = iVar5;
        iVar4 = iVar4 + 1;
      }
      if (ppiVar13 == ppiVar7 + 1) break;
      ppiVar7 = ppiVar7 + 1;
      iVar5 = iVar5 + 1;
    }
    if (iVar4 == 0) goto LAB_0008848e;
    iVar5 = 0;
    do {
      ppvVar3 = (void **)operator_new(0x10);
      *ppvVar3 = local_40;
      ppvVar3[1] = pvStack_3c;
      ppvVar3[2] = pvStack_38;
      ppvVar3[3] = pvStack_34;
      *ppvVar3 = ppvVar3;
      ppvVar3[1] = ppvVar3;
      local_5c = 0;
      iVar10 = *(int *)((int)local_b4 + iVar5);
      local_58 = *(undefined4 *)(iVar10 + 0x34);
      local_54 = *(undefined4 *)((int)local_104 + iVar5);
      ppvVar1 = (void **)*ppvVar3;
      local_60 = ppvVar3;
      while (ppvVar3 != ppvVar1) {
        if (local_60 == ppvVar1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        ppvVar12 = (void **)*ppvVar1;
        *(void ***)ppvVar1[1] = ppvVar12;
        *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
        operator_delete(ppvVar1);
        local_5c = local_5c + -1;
        ppvVar1 = ppvVar12;
      }
      if ((iVar10 == *(int *)(param_1 + 0x24c)) && (0 < *(int *)(iVar10 + 0xc))) {
        iVar15 = 0;
        iVar14 = 0;
        do {
          ppvVar1 = local_60;
          iVar15 = iVar15 + 1;
          iVar6 = *(int *)(iVar10 + 8) + iVar14;
          pvVar16 = *(void **)(iVar6 + 0x60);
          iVar14 = iVar14 + 0x68;
          pvVar8 = *(void **)(iVar6 + 0x54);
          ppvVar3 = (void **)operator_new(0x10);
          *ppvVar3 = &local_50;
          ppvVar3[1] = &local_50;
          ppvVar3[2] = pvVar8;
          ppvVar3[3] = pvVar16;
          *ppvVar3 = ppvVar1;
          ppvVar3[1] = ppvVar1[1];
          ppvVar1[1] = ppvVar3;
          *(void ***)ppvVar3[1] = ppvVar3;
          local_5c = local_5c + 1;
          local_50 = &local_50;
          local_4c = &local_50;
          local_48 = pvVar8;
          local_44 = pvVar16;
        } while (iVar15 < *(int *)(iVar10 + 0xc));
      }
      iVar10 = *(int *)(param_2 + 0x138);
      piVar11 = (int *)FUN_00030fb8(param_2 + 0x134,auStack_64);
      ppvVar1 = local_60;
      *piVar11 = iVar10;
      piVar11[1] = *(int *)(iVar10 + 4);
      *(int **)(iVar10 + 4) = piVar11;
      *(int **)piVar11[1] = piVar11;
      *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 0x13c) + 1;
      ppvVar3 = (void **)*local_60;
      while (ppvVar1 != ppvVar3) {
        if (ppvVar3 == local_60) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        ppvVar12 = (void **)*ppvVar3;
        *(void ***)ppvVar3[1] = ppvVar12;
        *(void **)((int)*ppvVar3 + 4) = ppvVar3[1];
        operator_delete(ppvVar3);
        local_5c = local_5c + -1;
        ppvVar3 = ppvVar12;
      }
      iVar5 = iVar5 + 4;
      operator_delete(local_60);
    } while (iVar5 != iVar4 << 2);
  }
  iVar10 = *(int *)(param_1 + 0x250);
LAB_0008848e:
  *(int *)(param_2 + 0x124) = iVar10;
  *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x2e8);
  iVar4 = 0;
  do {
    iVar5 = param_1 + iVar4;
    iVar10 = param_2 + iVar4;
    iVar4 = iVar4 + 4;
    *(undefined4 *)(iVar10 + 100) = *(undefined4 *)(iVar5 + 0x264);
  } while (iVar4 != 0x80);
  return 1;
}



