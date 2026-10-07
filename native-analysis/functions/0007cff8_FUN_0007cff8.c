/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007cff8 FUN_0007cff8 */

void FUN_0007cff8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int **ppiVar8;
  uint *puVar9;
  int **ppiVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined auStack_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint *local_24;
  
  iVar15 = DAT_0007d1d0;
  uVar2 = DAT_0007d1c8;
  uVar1 = DAT_0007d1c4;
  iVar7 = DAT_0007d1cc + 0x7d008;
  *(undefined4 *)(param_1 + 100) = DAT_0007d1c4;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  puVar3 = *(undefined4 **)(iVar7 + iVar15);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x74) = 1;
  iVar15 = DAT_0007d1d4;
  iVar5 = *(int *)(iVar7 + DAT_0007d1d4);
  if (*(int *)(iVar5 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x18) = uVar1;
    *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0xc) = uVar1;
    *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x1c) = uVar1;
    *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x10) = uVar1;
    *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x20) = uVar1;
    *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x14) = uVar1;
  }
  if (param_2 != 0) {
    (**(code **)(**(int **)(*(int *)(iVar7 + iVar15) + 0x184) + 0x10))();
  }
  ppiVar8 = *(int ***)(param_1 + 0x14);
  iVar15 = param_1 + 0x1c;
  ppiVar12 = (int **)*ppiVar8;
LAB_0007d07a:
  if (ppiVar8 == ppiVar12) {
LAB_0007d104:
    FUN_0007af4c(param_1);
    iVar15 = DAT_0007d1d8;
    if ((param_2 != 0) &&
       (puVar3 = *(undefined4 **)(param_1 + 4), *(undefined4 **)(param_1 + 4) != (undefined4 *)0x0))
    {
      do {
        puVar13 = puVar3;
        puVar3 = (undefined4 *)puVar13[3];
      } while (puVar3 != (undefined4 *)0x0);
      puVar3 = (undefined4 *)(DAT_0007d1d8 + 0x7d126);
      do {
        while( true ) {
          if (*(char *)(puVar13[1] + 0x95) != '\0') {
            local_34 = *puVar3;
            local_30 = *(undefined4 *)(iVar15 + 0x7d12a);
            local_2c = *(undefined4 *)(iVar15 + 0x7d12e);
            FUN_0007cae4(param_1,*puVar13,&local_34,0);
          }
          puVar11 = (undefined4 *)puVar13[4];
          if ((undefined4 *)puVar13[4] != (undefined4 *)0x0) break;
          puVar11 = (undefined4 *)puVar13[5];
          if (puVar11 == (undefined4 *)0x0) {
            return;
          }
          bVar16 = puVar13 == (undefined4 *)puVar11[4];
          puVar13 = puVar11;
          if (bVar16) {
            do {
              puVar13 = (undefined4 *)puVar11[5];
              if (puVar13 == (undefined4 *)0x0) {
                return;
              }
              bVar16 = (undefined4 *)puVar13[4] == puVar11;
              puVar11 = puVar13;
            } while (bVar16);
          }
        }
        do {
          puVar13 = puVar11;
          puVar11 = (undefined4 *)puVar13[3];
        } while ((undefined4 *)puVar13[3] != (undefined4 *)0x0);
      } while (puVar13 != (undefined4 *)0x0);
    }
    return;
  }
  do {
    piVar14 = ppiVar12[2];
    if ((piVar14[0x26] != 0) && (*(int *)(piVar14[0x26] + 4) != 0)) {
      FUN_00079fc4(piVar14,1);
      if (param_2 != 0) {
        FUN_0007a040(param_1,piVar14);
        ppiVar12 = (int **)*ppiVar12;
        ppiVar8 = *(int ***)(param_1 + 0x14);
        goto LAB_0007d07a;
      }
      if (0 < *(int *)(piVar14[0x26] + 0xc0)) break;
    }
    if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
      puVar4 = (uint *)0x0;
      puVar9 = *(uint **)(param_1 + 0x20);
      do {
        if (*puVar9 < (uint)piVar14[4]) {
          puVar6 = (uint *)puVar9[4];
        }
        else {
          puVar6 = (uint *)puVar9[3];
          puVar4 = puVar9;
        }
        puVar9 = puVar6;
      } while (puVar6 != (uint *)0x0);
      if ((puVar4 != (uint *)0x0) && (*puVar4 <= (uint)piVar14[4])) {
        local_28 = iVar15;
        local_24 = puVar4;
        FUN_0007c5c4(auStack_40,iVar15,iVar15,puVar4);
      }
    }
    FUN_00079fc4(piVar14,0);
    FUN_0007bc60(piVar14);
    FUN_0007bce0(piVar14);
    operator_delete(piVar14);
    ppiVar10 = *(int ***)(param_1 + 0x14);
    ppiVar8 = ppiVar10;
    if (ppiVar12 != ppiVar10) {
      ppiVar8 = (int **)*ppiVar12;
      *ppiVar12[1] = (int)ppiVar8;
      (*ppiVar12)[1] = (int)ppiVar12[1];
      operator_delete(ppiVar12);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      ppiVar10 = *(int ***)(param_1 + 0x14);
    }
    ppiVar12 = ppiVar8;
    if (ppiVar10 == ppiVar12) goto LAB_0007d104;
  } while( true );
  ppiVar12 = (int **)*ppiVar12;
  ppiVar8 = *(int ***)(param_1 + 0x14);
  goto LAB_0007d07a;
}



