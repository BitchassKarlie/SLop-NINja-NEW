/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd4bc FUN_000bd4bc */

void * FUN_000bd4bc(int *param_1,int param_2,int param_3,uint *param_4)

{
  void *pvVar1;
  void *__ptr;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_74;
  undefined4 local_6c;
  uint local_68;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_3c;
  uint local_34;
  uint local_2c [2];
  
  if (1 < param_1[3] - 1U) {
    return (void *)0x0;
  }
  uVar8 = param_1[4];
  if ((uVar8 & 0x1fffff) == 0) {
    local_68 = 0xffffd8f1;
    uVar12 = 0;
  }
  else {
    local_68 = ((uVar8 << 1) >> 0x16) - 0x314;
    uVar12 = uVar8 & 0x1fffff;
    do {
      uVar2 = uVar12;
      uVar12 = uVar2 * 2;
      local_68 = local_68 - 1;
    } while ((uVar12 & 0x40000000) == 0);
    if ((int)uVar8 < 0) {
      uVar12 = uVar2 * -2;
    }
  }
  uVar8 = param_1[5];
  if ((uVar8 & 0x1fffff) == 0) {
    iVar11 = -9999;
    local_54 = 0;
  }
  else {
    iVar11 = ((uVar8 << 1) >> 0x16) - 0x314;
    local_54 = uVar8 & 0x1fffff;
    do {
      uVar2 = local_54;
      local_54 = uVar2 * 2;
      iVar11 = iVar11 + -1;
    } while (-1 < (int)(uVar2 << 2));
    if ((int)uVar8 < 0) {
      local_54 = uVar2 * -2;
    }
  }
  pvVar1 = calloc(*param_1 * param_2,4);
  __ptr = calloc(*param_1 * param_2,4);
  *param_4 = local_68;
  if (param_1[3] == 1) {
    iVar7 = FUN_000bd20c(param_1);
    iVar13 = param_1[1];
    if (0 < iVar13) {
      iVar9 = *param_1;
      local_4c = 0;
      local_74 = 0;
LAB_000bd6fc:
      if ((param_3 == 0) || (*(int *)(param_1[2] + local_74 * 4) != 0)) {
        if (0 < iVar9) {
          uVar8 = 0;
          iVar3 = 1;
          iVar13 = 0;
          local_6c = 0;
          uVar2 = local_54;
          if (local_54 != 0) {
            uVar2 = 1;
          }
          do {
            local_2c[0] = 0;
            uVar4 = __aeabi_idiv(local_74,iVar3);
            __aeabi_idivmod(uVar4,iVar7);
            uVar10 = *(uint *)(param_1[8] + extraout_r1 * 4);
            uVar5 = (int)uVar10 >> 0x1f;
            uVar5 = (uVar10 ^ uVar5) - uVar5;
            if (uVar5 == 0) {
              uVar10 = 0x1f;
              iVar9 = -0x1f;
            }
            else {
              uVar10 = uVar5;
              iVar6 = 0;
              do {
                iVar9 = iVar6;
                uVar10 = uVar10 >> 1;
                iVar6 = iVar9 + 1;
              } while (uVar10 != 0);
              iVar9 = iVar9 + -0x1e;
              uVar10 = -iVar9;
            }
            iVar6 = uVar5 << (uVar10 & 0xff);
            if (iVar6 == 0) {
              local_34 = 0;
            }
            else {
              local_34 = uVar2 & 1;
            }
            uVar5 = local_34;
            if (local_34 != 0) {
              uVar5 = iVar11 + 0x20 + iVar9;
              local_34 = (uint)((ulonglong)((longlong)iVar6 * (longlong)(int)local_54) >> 0x20);
              local_2c[0] = uVar5;
            }
            uVar4 = FUN_000bd180(uVar12,local_68,local_34,uVar5,local_2c);
            uVar4 = FUN_000bd180(local_6c,uVar8,uVar4,local_2c[0],local_2c);
            if (param_1[7] == 0) {
              if (param_3 == 0) goto LAB_000bd7e6;
LAB_000bd7aa:
              iVar6 = *(int *)(param_3 + local_4c * 4);
              iVar9 = *param_1;
            }
            else {
              uVar8 = local_2c[0];
              local_6c = uVar4;
              if (param_3 != 0) goto LAB_000bd7aa;
LAB_000bd7e6:
              iVar6 = *param_1;
              iVar9 = local_4c;
            }
            iVar9 = iVar6 * iVar9 + iVar13;
            iVar13 = iVar13 + 1;
            *(undefined4 *)((int)pvVar1 + iVar9 * 4) = uVar4;
            *(uint *)((int)__ptr + iVar9 * 4) = local_2c[0];
            if ((int)*param_4 < (int)local_2c[0]) {
              *param_4 = local_2c[0];
            }
            else {
              *param_4 = *param_4;
            }
            iVar9 = *param_1;
            if (iVar9 <= iVar13) goto LAB_000bd7ec;
            iVar3 = iVar7 * iVar3;
          } while( true );
        }
        goto LAB_000bd7ee;
      }
      goto LAB_000bd7f4;
    }
  }
  else if ((param_1[3] == 2) && (iVar7 = param_1[1], 0 < iVar7)) {
    iVar9 = *param_1;
    local_50 = 0;
    iVar13 = 0;
    do {
      if ((param_3 == 0) || (*(int *)(param_1[2] + iVar13 * 4) != 0)) {
        if (0 < iVar9) {
          iVar7 = 0;
          local_74 = 0;
          uVar8 = 0;
          uVar2 = local_54;
          if (local_54 != 0) {
            uVar2 = 1;
          }
          do {
            local_2c[0] = 0;
            uVar10 = *(uint *)(param_1[8] + (iVar9 * iVar13 + iVar7) * 4);
            uVar5 = (int)uVar10 >> 0x1f;
            uVar5 = (uVar10 ^ uVar5) - uVar5;
            uVar10 = uVar5;
            iVar9 = 0;
            if (uVar5 == 0) {
              uVar10 = 0x1f;
              iVar3 = -0x1f;
            }
            else {
              do {
                iVar3 = iVar9;
                uVar10 = uVar10 >> 1;
                iVar9 = iVar3 + 1;
              } while (uVar10 != 0);
              iVar3 = iVar3 + -0x1e;
              uVar10 = -iVar3;
            }
            iVar9 = uVar5 << (uVar10 & 0xff);
            if (iVar9 == 0) {
              local_3c = 0;
            }
            else {
              local_3c = uVar2 & 1;
            }
            uVar5 = local_3c;
            if (local_3c != 0) {
              uVar5 = iVar11 + 0x20 + iVar3;
              local_3c = (uint)((ulonglong)((longlong)iVar9 * (longlong)(int)local_54) >> 0x20);
              local_2c[0] = uVar5;
            }
            uVar4 = FUN_000bd180(uVar12,local_68,local_3c,uVar5,local_2c);
            uVar4 = FUN_000bd180(local_74,uVar8,uVar4,local_2c[0],local_2c);
            if (param_1[7] == 0) {
              if (param_3 == 0) goto LAB_000bd6c8;
LAB_000bd678:
              iVar3 = *(int *)(param_3 + local_50 * 4);
              iVar9 = *param_1;
            }
            else {
              uVar8 = local_2c[0];
              local_74 = uVar4;
              if (param_3 != 0) goto LAB_000bd678;
LAB_000bd6c8:
              iVar3 = *param_1;
              iVar9 = local_50;
            }
            iVar9 = iVar3 * iVar9 + iVar7;
            iVar7 = iVar7 + 1;
            *(undefined4 *)((int)pvVar1 + iVar9 * 4) = uVar4;
            *(uint *)((int)__ptr + iVar9 * 4) = local_2c[0];
            if ((int)*param_4 < (int)local_2c[0]) {
              *param_4 = local_2c[0];
            }
            else {
              *param_4 = *param_4;
            }
            iVar9 = *param_1;
          } while (iVar7 < iVar9);
          iVar7 = param_1[1];
        }
        local_50 = local_50 + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar7);
    goto LAB_000bd562;
  }
  iVar9 = *param_1;
LAB_000bd562:
  param_2 = param_2 * iVar9;
  if (0 < param_2) {
    iVar7 = 0;
    uVar8 = *param_4;
    iVar11 = 0;
    do {
      if (*(int *)((int)__ptr + iVar7) < (int)uVar8) {
        *(int *)((int)pvVar1 + iVar7) =
             *(int *)((int)pvVar1 + iVar7) >> (uVar8 - *(int *)((int)__ptr + iVar7) & 0xff);
      }
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + 4;
    } while (param_2 - iVar11 != 0 && iVar11 <= param_2);
  }
  free(__ptr);
  return pvVar1;
LAB_000bd7ec:
  iVar13 = param_1[1];
LAB_000bd7ee:
  local_4c = local_4c + 1;
LAB_000bd7f4:
  local_74 = local_74 + 1;
  if (iVar13 <= local_74) goto LAB_000bd562;
  goto LAB_000bd6fc;
}



