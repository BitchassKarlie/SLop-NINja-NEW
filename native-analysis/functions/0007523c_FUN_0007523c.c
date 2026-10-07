/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007523c FUN_0007523c */

void FUN_0007523c(int param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int **ppiVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int **ppiVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined auStack_74 [4];
  void *local_70;
  uint *local_6c;
  undefined4 local_68;
  undefined auStack_64 [4];
  uint *local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined local_54 [7];
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  int local_48;
  undefined4 *local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int **local_34;
  undefined4 local_30;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  
  FUN_00074914();
  iVar5 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 4);
  uVar14 = 0;
  iVar12 = DAT_000754d8 + 0x75260;
  local_60 = (uint *)0x0;
  local_5c = (uint *)0x0;
  local_58 = 0;
  if ((iVar5 - iVar8 >> 2) * 0x38e38e39 != 0) {
    do {
      FUN_00074640(auStack_64);
      *local_5c = uVar14;
      uVar14 = uVar14 + 1;
      iVar5 = *(int *)(param_1 + 8);
      local_5c = local_5c + 1;
      iVar8 = *(int *)(param_1 + 4);
      uVar3 = (iVar5 - iVar8 >> 2) * 0x38e38e39;
    } while (uVar14 <= uVar3 && uVar3 - uVar14 != 0);
  }
  uVar14 = 0;
  local_70 = (void *)0x0;
  local_6c = (uint *)0x0;
  local_68 = 0;
  if ((iVar5 - iVar8 >> 2) * 0x38e38e39 != 0) {
    puVar13 = *(uint **)(iVar12 + DAT_000754dc);
    do {
      uVar3 = (int)local_5c - (int)local_60 >> 2;
      lVar1 = (ulonglong)*puVar13 * (ulonglong)puVar13[2] +
              CONCAT44(puVar13[2] * puVar13[1] + *puVar13 * puVar13[3],puVar13[4]);
      uVar6 = (uint)lVar1;
      uVar9 = puVar13[5] + (int)((ulonglong)lVar1 >> 0x20);
      lVar1 = CONCAT44(uVar9,uVar6);
      uVar4 = uVar3 - 1;
      *puVar13 = uVar6;
      puVar13[1] = uVar9;
      if (uVar4 < 0xfffffffe) {
        lVar1 = (ulonglong)uVar3 * (ulonglong)uVar9;
      }
      puVar15 = local_60;
      if (0xffffffff < lVar1) {
        puVar15 = local_60 + (int)((ulonglong)lVar1 >> 0x20);
      }
      FUN_00074640(auStack_74,uVar4,(int)lVar1);
      puVar10 = puVar15 + 1;
      *local_6c = *puVar15;
      local_6c = local_6c + 1;
      if (puVar10 < local_5c) {
        do {
          puVar10[-1] = *puVar10;
          puVar10 = puVar10 + 1;
        } while (puVar10 < local_5c);
        puVar15 = (uint *)((int)puVar15 + ((int)local_5c + (-5 - (int)puVar15) & 0xfffffffcU) + 4);
      }
      iVar5 = *(int *)(param_1 + 4);
      uVar14 = uVar14 + 1;
      uVar3 = (*(int *)(param_1 + 8) - iVar5 >> 2) * 0x38e38e39;
      local_5c = puVar15;
    } while (uVar14 <= uVar3 && uVar3 - uVar14 != 0);
    if (uVar3 != 0) {
      uVar14 = 0;
      do {
        iVar5 = FUN_00074b74(iVar5 + *(int *)((int)local_70 + uVar14 * 4) * 0x24);
        if (iVar5 != 0) {
          iVar8 = *(int *)(param_1 + 0x14);
          piVar2 = (int *)FUN_000751dc(param_1 + 0x10,iVar5);
          *piVar2 = iVar8;
          piVar2[1] = *(int *)(iVar8 + 4);
          *(int **)(iVar8 + 4) = piVar2;
          *(int **)piVar2[1] = piVar2;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        iVar5 = *(int *)(param_1 + 4);
        uVar14 = uVar14 + 1;
        uVar3 = (*(int *)(param_1 + 8) - iVar5 >> 2) * 0x38e38e39;
      } while (uVar14 <= uVar3 && uVar3 - uVar14 != 0);
    }
  }
  iVar5 = param_1 + 0x10;
  uVar14 = *(uint *)(param_1 + 0x18);
  if (1 < uVar14) {
    local_44 = *(undefined4 **)(param_1 + 0x14);
    local_3c = *local_44;
    local_48 = iVar5;
    local_40 = iVar5;
    FUN_000743c0(iVar5,&local_40,iVar5,local_44,uVar14,0);
    uVar14 = *(uint *)(param_1 + 0x18);
  }
  ppiVar7 = *(int ***)(param_1 + 0x14);
  ppiVar11 = (int **)*ppiVar7;
  local_54[3] = 0xff;
  local_54[2] = 0xad;
  local_4d = 0xff;
  local_54[1] = 0x7e;
  local_49 = 0xff;
  local_54[0] = 0;
  local_4a = 1;
  local_54[6] = 0xa0;
  local_4b = 0x5c;
  local_54[5] = 5;
  local_54[4] = 5;
  local_4c = 0x95;
  if (ppiVar11 != ppiVar7) {
    iVar12 = 3 - uVar14;
    iVar8 = iVar5;
    do {
      if (iVar12 < 0) {
        local_38 = iVar8;
        local_34 = ppiVar11;
        FUN_000748cc(&local_38,iVar5,iVar8,ppiVar11);
        ppiVar7 = *(int ***)(param_1 + 0x14);
        iVar8 = local_38;
        ppiVar11 = local_34;
        if (local_34 == ppiVar7) break;
      }
      else {
        ppiVar11 = (int **)*ppiVar11;
        if (ppiVar11 == ppiVar7) break;
      }
      iVar12 = iVar12 + 1;
    } while( true );
  }
  ppiVar11 = (int **)*ppiVar7;
  if ((param_2 != 0) && (ppiVar11 != ppiVar7)) {
    iVar5 = 0;
    do {
      local_2c = local_54[iVar5];
      local_2b = local_54[iVar5 + 1];
      local_2a = local_54[iVar5 + 2];
      local_29 = local_54[iVar5 + 3];
      local_30 = 0;
      FUN_00017d64(&local_30,ppiVar11[0x33]);
      FUN_00039b78(param_2,&local_2c,&local_30,ppiVar11 + 0x1e,ppiVar11[0xd]);
      FUN_00017d90(&local_30);
      ppiVar11 = (int **)*ppiVar11;
      iVar5 = iVar5 + 4;
    } while (ppiVar11 != *(int ***)(param_1 + 0x14));
  }
  local_6c = (uint *)local_70;
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  local_5c = local_60;
  if (local_60 != (uint *)0x0) {
    operator_delete(local_60);
  }
  return;
}



