/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ba084 FUN_000ba084 */

int FUN_000ba084(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                uint param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10,
                int param_11,int *param_12,int param_13,int param_14)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  bool bVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar21;
  uint local_a8;
  uint local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_34;
  undefined4 local_30;
  void *local_2c [2];
  
  iVar13 = param_13;
  piVar3 = param_12;
  local_40 = 0xffffffff;
  uStack_3c = 0xffffffff;
  iVar16 = *(int *)(param_1 + 0x1c8);
  if ((param_12 == (int *)0x0) || (param_13 == 0)) {
LAB_000ba0d6:
    local_2c[0] = (void *)0x0;
    local_30 = 0;
    if ((param_8 != param_6 && (int)param_6 <= (int)param_8) ||
       ((param_8 == param_6 && (param_5 < param_7)))) {
      lVar2 = CONCAT44(param_8,param_7);
      local_a8 = param_7;
      local_a4 = param_8;
LAB_000ba314:
      uVar9 = local_a8 - param_5;
      bVar18 = local_a4 - param_6 == (uint)(local_a8 < param_5);
      if ((int)((local_a4 - param_6) - (uint)(local_a8 < param_5)) < 1) goto LAB_000ba3e8;
LAB_000ba326:
      iVar15 = local_a4 + param_6 + CARRY4(local_a8,param_5);
      uVar9 = -(iVar15 >> 0x1f);
      uVar8 = iVar15 + (uint)CARRY4(uVar9,local_a8 + param_5);
      uVar9 = (uint)((uVar8 & 1) != 0) << 0x1f | uVar9 + local_a8 + param_5 >> 1;
      uVar14 = (int)uVar8 >> 1;
      lVar19 = lVar2;
      if (*(uint *)(param_1 + 8) == uVar9) goto LAB_000ba3fc;
      while (iVar15 = FUN_000b9ed8(param_1,uVar8,uVar9,uVar14), lVar19 = lVar2, iVar15 == 0) {
LAB_000ba366:
        lVar21 = FUN_000b9af0(param_1,auStack_50,0xffffffff,0xffffffff);
        if (lVar21 == -0x80) {
          return -0x80;
        }
        lVar2 = lVar19;
        if (((-1 < lVar21) &&
            (iVar15 = FUN_000c2ec4(auStack_50), lVar2 = lVar21, piVar3 != (int *)0x0)) &&
           (iVar13 != 0)) {
          iVar12 = *piVar3;
          piVar1 = piVar3;
          iVar10 = iVar13;
          while (iVar12 != iVar15) {
            if (iVar10 == 1) goto LAB_000ba3c0;
            piVar1 = piVar1 + 1;
            iVar10 = iVar10 + -1;
            iVar12 = *piVar1;
          }
          param_5 = *(uint *)(param_1 + 8);
          param_6 = *(uint *)(param_1 + 0xc);
          uVar9 = local_a8;
          uVar14 = local_a4;
          lVar2 = lVar19;
        }
LAB_000ba3c0:
        local_a4 = uVar14;
        local_a8 = uVar9;
        if ((int)param_6 < (int)local_a4) goto LAB_000ba314;
        if ((local_a4 != param_6) || (local_a8 <= param_5)) goto LAB_000ba0f2;
        uVar9 = local_a8 - param_5;
        bVar18 = local_a4 - param_6 == (uint)(local_a8 < param_5);
        if (0 < (int)((local_a4 - param_6) - (uint)(local_a8 < param_5))) goto LAB_000ba326;
LAB_000ba3e8:
        uVar8 = param_6;
        if ((bVar18) && (uVar8 = 0x3ff, 0x3ff < uVar9)) goto LAB_000ba326;
        uVar9 = param_5;
        uVar14 = param_6;
        lVar19 = lVar2;
        if (*(uint *)(param_1 + 8) == param_5) {
LAB_000ba3fc:
          if ((*(uint *)(param_1 + 0xc) != uVar14) &&
             (iVar15 = FUN_000b9ed8(param_1,uVar8,uVar9,uVar14), iVar15 != 0)) {
            return iVar15;
          }
          goto LAB_000ba366;
        }
      }
    }
    else {
      lVar2 = CONCAT44(param_8,param_7);
LAB_000ba0f2:
      local_8c = (undefined4)((ulonglong)lVar2 >> 0x20);
      local_90 = (undefined4)lVar2;
      local_34 = iVar16 + 1;
      *(longlong *)(param_1 + 8) = lVar2;
      if (local_34 != iVar16) {
        do {
          local_34 = iVar16;
          lVar19 = FUN_000b9f18(param_1,piVar3,iVar13,&local_34,&local_40);
          *(longlong *)(param_1 + 8) = lVar19;
        } while (local_34 != iVar16);
        if ((lVar19 != lVar2) &&
           (iVar13 = FUN_000b9ed8(param_1,(int)((ulonglong)lVar19 >> 0x20),local_90,local_8c),
           iVar13 != 0)) {
          return iVar13;
        }
      }
      iVar15 = FUN_000b9bf8(param_1,&local_80,&local_60,local_2c,&local_30,0);
      if (iVar15 == 0) {
        uVar4 = *(undefined4 *)(param_1 + 8);
        uVar6 = *(undefined4 *)(param_1 + 0xc);
        uVar17 = *(undefined4 *)(param_1 + 0x1c8);
        uVar20 = FUN_000b9e04(param_1,&local_80);
        iVar13 = param_14 + 1;
        iVar15 = FUN_000ba084(param_1,param_14,local_90,local_8c,*(undefined4 *)(param_1 + 8),
                              *(undefined4 *)(param_1 + 0xc),param_7,param_8,param_9,param_10,
                              param_11,local_2c[0],local_30,iVar13);
        if (iVar15 == 0) {
          if (local_2c[0] != (void *)0x0) {
            free(local_2c[0]);
          }
          iVar16 = *(int *)(param_1 + 0x38);
          *(undefined4 *)(iVar16 + iVar13 * 8) = local_90;
          *(undefined4 *)(iVar16 + iVar13 * 8 + 4) = local_8c;
          *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar13 * 4) = uVar17;
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0x3c) + iVar13 * 8);
          *puVar11 = uVar4;
          puVar11[1] = uVar6;
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0x48) + iVar13 * 0x20);
          *puVar11 = local_80;
          puVar11[1] = uStack_7c;
          puVar11[2] = uStack_78;
          puVar11[3] = uStack_74;
          puVar11[4] = local_70;
          puVar11[5] = uStack_6c;
          puVar11[6] = uStack_68;
          puVar11[7] = uStack_64;
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0x4c) + iVar13 * 0x10);
          *puVar11 = local_60;
          puVar11[1] = uStack_5c;
          puVar11[2] = uStack_58;
          puVar11[3] = uStack_54;
          iVar16 = *(int *)(param_1 + 0x44) + param_14 * 0x10;
          *(undefined4 *)(iVar16 + 8) = local_40;
          *(undefined4 *)(iVar16 + 0xc) = uStack_3c;
          *(undefined8 *)(*(int *)(param_1 + 0x44) + iVar13 * 0x10) = uVar20;
          puVar7 = (uint *)(*(int *)(param_1 + 0x44) + param_14 * 0x10 + 0x18);
          uVar9 = *puVar7;
          *puVar7 = uVar9 - (uint)uVar20;
          puVar7[1] = (puVar7[1] - (int)((ulonglong)uVar20 >> 0x20)) - (uint)(uVar9 < (uint)uVar20);
        }
      }
    }
  }
  else {
    iVar10 = *param_12;
    piVar1 = param_12;
    iVar15 = param_13;
    while (iVar10 != param_11) {
      if (iVar15 == 1) goto LAB_000ba0d6;
      piVar1 = piVar1 + 1;
      iVar15 = iVar15 + -1;
      iVar10 = *piVar1;
    }
    if (iVar16 != param_11) {
      do {
        param_11 = iVar16;
        uVar20 = FUN_000b9f18(param_1,piVar3,iVar13,&param_11,&param_9);
        *(undefined8 *)(param_1 + 8) = uVar20;
      } while (param_11 != iVar16);
    }
    iVar13 = param_14 + 1;
    *(int *)(param_1 + 0x34) = iVar13;
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      free(*(void **)(param_1 + 0x38));
    }
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      free(*(void **)(param_1 + 0x40));
    }
    if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x3c));
    }
    iVar15 = 0;
    pvVar5 = malloc((*(int *)(param_1 + 0x34) + 1) * 8);
    *(void **)(param_1 + 0x38) = pvVar5;
    pvVar5 = realloc(*(void **)(param_1 + 0x48),*(int *)(param_1 + 0x34) << 5);
    *(void **)(param_1 + 0x48) = pvVar5;
    pvVar5 = realloc(*(void **)(param_1 + 0x4c),*(int *)(param_1 + 0x34) << 4);
    *(void **)(param_1 + 0x4c) = pvVar5;
    pvVar5 = malloc(*(int *)(param_1 + 0x34) << 2);
    *(void **)(param_1 + 0x40) = pvVar5;
    pvVar5 = malloc(*(int *)(param_1 + 0x34) << 3);
    *(void **)(param_1 + 0x3c) = pvVar5;
    pvVar5 = malloc(*(int *)(param_1 + 0x34) << 4);
    iVar16 = *(int *)(param_1 + 0x38);
    *(void **)(param_1 + 0x44) = pvVar5;
    *(uint *)(iVar16 + iVar13 * 8) = param_7;
    *(uint *)(iVar16 + iVar13 * 8 + 4) = param_8;
    puVar11 = (undefined4 *)(*(int *)(param_1 + 0x38) + param_14 * 8);
    *puVar11 = param_3;
    puVar11[1] = param_4;
    iVar13 = *(int *)(param_1 + 0x44) + param_14 * 0x10;
    *(undefined4 *)(iVar13 + 8) = param_9;
    *(undefined4 *)(iVar13 + 0xc) = param_10;
  }
  return iVar15;
}



