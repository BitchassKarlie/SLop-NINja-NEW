/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007d1dc FUN_0007d1dc */

void FUN_0007d1dc(int param_1)

{
  void **ppvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  void **ppvVar14;
  int iVar15;
  int iVar16;
  void **ppvVar17;
  undefined4 ****local_b4;
  undefined4 ****local_b0;
  void *local_ac;
  undefined auStack_a8 [4];
  uint *local_a4;
  uint local_a0;
  undefined4 local_9c;
  int local_98;
  uint *local_94;
  undefined4 local_90;
  undefined auStack_8c [80];
  undefined4 local_3c;
  int local_2c;
  
  iVar2 = DAT_0007d3c8;
  iVar15 = DAT_0007d3c4 + 0x7d1ee;
  local_2c = **(int **)(iVar15 + DAT_0007d3c8);
  piVar3 = (int *)operator_new(0x48);
  FUN_0009c1d4(piVar3,DAT_0007d3cc + 0x7d206);
  FUN_00079630(param_1);
  ppvVar17 = *(void ***)(param_1 + 0x4c);
  ppvVar1 = (void **)*ppvVar17;
  while (ppvVar17 != ppvVar1) {
    if ((void **)*(void **)(param_1 + 0x4c) != ppvVar1) {
      ppvVar14 = (void **)*ppvVar1;
      *(void ***)ppvVar1[1] = ppvVar14;
      *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
      operator_delete(ppvVar1);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      ppvVar1 = ppvVar14;
    }
  }
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_0009b0e4(piVar3,0);
    iVar9 = DAT_0007d3d4;
    if (iVar4 != 0) {
      uVar5 = FUN_0009a5d8(piVar3,DAT_0007d3d0 + 0x7d276);
      iVar4 = FUN_0009a5d8(uVar5,iVar9 + 0x7d27c);
      if (iVar4 != 0) {
        do {
          pvVar6 = operator_new(0xd0);
          FUN_0007ad78();
          FUN_0007a6e4(pvVar6,iVar4);
          puVar13 = *(uint **)(param_1 + 4);
          uVar11 = *(uint *)((int)pvVar6 + 0x10);
          puVar7 = puVar13;
          if (puVar13 == (uint *)0x0) {
LAB_0007d39e:
            local_9c = 0;
            local_a0 = uVar11;
            local_98 = param_1;
            local_94 = puVar7;
            FUN_0007ca10(auStack_a8,param_1,param_1,puVar7,&local_a0);
            puVar7 = local_a4;
          }
          else {
            puVar7 = (uint *)0x0;
            do {
              if (*puVar13 < uVar11) {
                puVar12 = (uint *)puVar13[4];
              }
              else {
                puVar12 = (uint *)puVar13[3];
                puVar7 = puVar13;
              }
              puVar13 = puVar12;
            } while (puVar12 != (uint *)0x0);
            if ((puVar7 == (uint *)0x0) || (uVar11 < *puVar7)) goto LAB_0007d39e;
          }
          puVar7[1] = (uint)pvVar6;
          if ((*(int *)((int)pvVar6 + 0x98) != 0) &&
             (*(int *)(*(int *)((int)pvVar6 + 0x98) + 4) != 0)) {
            iVar16 = *(int *)(param_1 + 0x4c);
            piVar8 = (int *)operator_new(0xc);
            *piVar8 = (int)&local_b4;
            piVar8[1] = (int)&local_b4;
            piVar8[2] = (int)pvVar6;
            *piVar8 = iVar16;
            piVar8[1] = *(int *)(iVar16 + 4);
            *(int **)(iVar16 + 4) = piVar8;
            *(int **)piVar8[1] = piVar8;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
            local_b4 = &local_b4;
            local_b0 = &local_b4;
            local_ac = pvVar6;
          }
          iVar4 = FUN_0009a4f0(iVar4,iVar9 + 0x7d27c);
        } while (iVar4 != 0);
      }
      iVar4 = DAT_0007d3d8 + 0x7d342;
      iVar9 = FUN_0009a5d8(uVar5,iVar4);
      if (iVar9 != 0) {
        iVar16 = DAT_0007d3dc + 0x7d35a;
        do {
          iVar10 = FUN_0009a4a0(iVar9,iVar16);
          if (iVar10 != 0) {
            FUN_00080ea8(auStack_8c);
            FUN_00082650(auStack_8c,iVar9);
            local_90 = local_3c;
            uVar5 = FUN_0007c2a4(param_1 + 0x2c,&local_90);
            FUN_0007b120(uVar5,auStack_8c);
            FUN_00082438(auStack_8c);
          }
          iVar9 = FUN_0009a4f0(iVar9,iVar4);
        } while (iVar9 != 0);
      }
    }
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  if (local_2c != **(int **)(iVar15 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



