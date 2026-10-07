/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd80c FUN_000bd80c */

void FUN_000bd80c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  size_t sVar18;
  uint uVar19;
  size_t __size;
  int local_48 [4];
  int local_38;
  undefined4 *local_34;
  int local_2c;
  
  local_38 = DAT_000bdb88 + 0xbd81a;
  local_48[3] = DAT_000bdb8c;
  local_2c = **(int **)(local_38 + DAT_000bdb8c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar8 = param_2[1];
  if (iVar8 < 1) {
    param_1[1] = iVar8;
    param_1[2] = 0;
    *param_1 = *param_2;
    uVar5 = 0;
    goto LAB_000bdb2e;
  }
  sVar18 = 0;
  iVar11 = 0;
  do {
    if (0 < *(int *)(param_2[2] + iVar11 * 4)) {
      sVar18 = sVar18 + 1;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != iVar8);
  param_1[1] = iVar11;
  param_1[2] = sVar18;
  *param_1 = *param_2;
  if (sVar18 != 0) {
    __size = sVar18 * 4;
    pvVar4 = (void *)FUN_000bd370(param_2[2],param_2[1],sVar18);
    iVar8 = -(__size + 0xe & 0xfffffff8);
    if (pvVar4 == (void *)0x0) {
      FUN_000bd2c0(param_1);
      uVar5 = 0xffffffff;
      goto LAB_000bdb2e;
    }
    iVar16 = 0;
    iVar11 = 0;
    local_48[2] = __size + 0xe;
    local_34 = param_2;
    do {
      iVar16 = iVar16 + 1;
      uVar5 = FUN_000bd268(*(undefined4 *)((int)pvVar4 + iVar11));
      *(undefined4 *)((int)pvVar4 + iVar11) = uVar5;
      *(int *)((int)local_48 + iVar11 + iVar8) = (int)pvVar4 + iVar11;
      puVar2 = local_34;
      iVar11 = iVar11 + 4;
    } while (iVar16 < (int)sVar18);
    uVar19 = local_48[2] & 0xfffffff8;
    qsort((void *)((int)local_48 + iVar8),sVar18,4,(__compar_fn_t)(DAT_000bdb90 + 0xbd8e8));
    iVar11 = -uVar19;
    pvVar6 = malloc(__size);
    iVar16 = 0;
    param_1[5] = pvVar6;
    do {
      *(int *)((int)local_48 +
              (*(int *)((int)local_48 + iVar16 * 4 + iVar8) - (int)pvVar4 >> 2) * 4 + iVar11 + iVar8
              ) = iVar16;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)sVar18);
    iVar12 = 0;
    iVar16 = 0;
    do {
      iVar13 = iVar12 + iVar11 + iVar8;
      iVar16 = iVar16 + 1;
      puVar1 = (undefined4 *)((int)pvVar4 + iVar12);
      iVar12 = iVar12 + 4;
      *(undefined4 *)(param_1[5] + *(int *)((int)local_48 + iVar13) * 4) = *puVar1;
    } while (iVar16 < (int)sVar18);
    free(pvVar4);
    uVar5 = FUN_000bd4bc(puVar2,sVar18,(int)local_48 + iVar11 + iVar8,param_1 + 3);
    param_1[4] = uVar5;
    pvVar4 = malloc(__size);
    param_1[6] = pvVar4;
    iVar16 = puVar2[1];
    if (iVar16 < 1) {
      sVar18 = 0;
    }
    else {
      sVar18 = 0;
      iVar12 = 0;
      do {
        if (0 < *(int *)(puVar2[2] + iVar12 * 4)) {
          iVar16 = sVar18 * 4;
          sVar18 = sVar18 + 1;
          *(int *)(param_1[6] + *(int *)((int)local_48 + iVar16 + iVar11 + iVar8) * 4) = iVar12;
          iVar16 = puVar2[1];
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar16);
    }
    pvVar4 = malloc(sVar18);
    param_1[7] = pvVar4;
    iVar16 = puVar2[1];
    if (iVar16 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      iVar13 = 0;
      do {
        iVar9 = *(int *)(puVar2[2] + iVar13 * 4);
        if (0 < iVar9) {
          iVar16 = iVar12 * 4;
          iVar12 = iVar12 + 1;
          *(char *)(param_1[7] + *(int *)((int)local_48 + iVar16 + iVar11 + iVar8)) = (char)iVar9;
          iVar16 = puVar2[1];
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar16);
    }
    uVar19 = param_1[2];
    if (uVar19 == 0) {
      param_1[9] = 0xfffffffc;
LAB_000bdb4c:
      param_1[9] = 5;
      local_34 = (undefined4 *)0x20;
    }
    else {
      iVar8 = 0;
      do {
        iVar11 = iVar8;
        uVar19 = uVar19 >> 1;
        iVar8 = iVar11 + 1;
      } while (uVar19 != 0);
      uVar19 = iVar11 - 3;
      param_1[9] = uVar19;
      if ((int)uVar19 < 5) goto LAB_000bdb4c;
      if ((int)uVar19 < 9) {
        local_34 = (undefined4 *)(1 << (uVar19 & 0xff));
      }
      else {
        param_1[9] = 8;
        local_34 = (undefined4 *)0x100;
      }
    }
    pvVar4 = calloc((size_t)local_34,4);
    param_1[10] = 0;
    param_1[8] = pvVar4;
    if (iVar12 == 0) {
      iVar8 = param_1[9];
    }
    else {
      iVar16 = 0;
      pbVar14 = (byte *)param_1[7];
      iVar11 = 1;
      iVar8 = param_1[9];
      uVar19 = (uint)*pbVar14;
      if (uVar19 != 0) {
        param_1[10] = uVar19;
        uVar19 = (uint)*pbVar14;
      }
      if ((int)uVar19 <= iVar8) goto LAB_000bda2a;
LAB_000bda0a:
      if (iVar11 < iVar12) {
        while( true ) {
          iVar16 = iVar16 + 1;
          iVar11 = iVar11 + 1;
          uVar19 = (uint)pbVar14[iVar16];
          if ((int)param_1[10] < (int)uVar19) {
            param_1[10] = uVar19;
            uVar19 = (uint)pbVar14[iVar16];
          }
          if (iVar8 < (int)uVar19) break;
LAB_000bda2a:
          local_48[0] = iVar8;
          local_48[1] = iVar11;
          uVar7 = FUN_000bd268(*(undefined4 *)(param_1[5] + iVar16 * 4));
          iVar11 = local_48[1];
          iVar8 = local_48[0];
          if (1 << (local_48[0] - uVar19 & 0xff) < 1) break;
          iVar13 = 0;
          do {
            uVar19 = iVar13 << uVar19;
            iVar13 = iVar13 + 1;
            *(int *)(param_1[8] + (uVar19 | uVar7) * 4) = local_48[1];
            pbVar14 = (byte *)param_1[7];
            iVar8 = param_1[9];
            uVar19 = (uint)pbVar14[iVar16];
          } while (iVar13 < 1 << (iVar8 - uVar19 & 0xff));
          if (iVar12 <= local_48[1]) goto LAB_000bda78;
        }
        goto LAB_000bda0a;
      }
    }
LAB_000bda78:
    uVar19 = -2 << (0x1fU - iVar8 & 0xff);
    if (0 < (int)local_34) {
      iVar11 = 0;
      uVar7 = 0;
      sVar18 = 0;
      while( true ) {
        uVar17 = sVar18 << (0x20U - iVar8 & 0xff);
        iVar8 = FUN_000bd268(uVar17);
        if (*(int *)(param_1[8] + iVar8 * 4) == 0) {
          iVar16 = (uVar7 + 1) * 4;
          uVar3 = uVar7 + 1;
          while ((uVar15 = uVar3, (int)uVar15 < iVar12 &&
                 (puVar10 = (uint *)(param_1[5] + iVar16), iVar16 = iVar16 + 4, *puVar10 <= uVar17))
                ) {
            uVar3 = uVar15 + 1;
            uVar7 = uVar15;
          }
          if ((iVar11 < iVar12) && ((uVar19 & *(uint *)(param_1[5] + iVar11 * 4)) <= uVar17)) {
            iVar11 = iVar11 + 1;
            puVar10 = (uint *)(param_1[5] + iVar11 * 4);
            while ((iVar11 != iVar12 && ((uVar19 & *puVar10) <= uVar17))) {
              iVar11 = iVar11 + 1;
              puVar10 = puVar10 + 1;
            }
          }
          uVar17 = 0x7fff;
          if (uVar7 < 0x7fff) {
            uVar17 = uVar7;
          }
          if ((uint)(iVar12 - iVar11) < 0x8000) {
            uVar17 = uVar17 << 0xf | 0x80000000 | iVar12 - iVar11;
          }
          else {
            uVar17 = uVar17 << 0xf | 0x80007fff;
          }
          *(uint *)(param_1[8] + iVar8 * 4) = uVar17;
        }
        sVar18 = sVar18 + 1;
        if ((undefined4 *)sVar18 == local_34) break;
        iVar8 = param_1[9];
      }
    }
  }
  uVar5 = 0;
LAB_000bdb2e:
  if (local_2c == **(int **)(local_38 + local_48[3])) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



