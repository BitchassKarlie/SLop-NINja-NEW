/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002285c FUN_0002285c */

void FUN_0002285c(int *param_1,uint *param_2,int param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *__s1;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  char *__s2;
  int iVar16;
  uint local_78;
  undefined auStack_6c [64];
  int local_2c;
  
  iVar2 = DAT_00022ac8;
  iVar8 = DAT_00022ac4 + 0x2286a;
  local_2c = **(int **)(iVar8 + DAT_00022ac8);
  if (param_3 < 0) {
    uVar11 = *(uint *)(DAT_00022b00 + 0x22a5e);
    puVar15 = *(uint **)(iVar8 + DAT_00022b04);
    lVar1 = (ulonglong)*puVar15 * (ulonglong)puVar15[2];
    uVar4 = (int)((ulonglong)lVar1 >> 0x20) + puVar15[2] * puVar15[1] + *puVar15 * puVar15[3];
    local_78 = (uint)lVar1;
    uVar5 = puVar15[4] + local_78;
    uVar12 = puVar15[5] + uVar4 + CARRY4(puVar15[4],local_78);
    *puVar15 = uVar5;
    puVar15[1] = uVar12;
    uVar7 = uVar11 - 1;
    if (0xfffffffd < uVar7) {
      uVar5 = uVar12;
      uVar12 = uVar4;
    }
    lVar1 = CONCAT44(uVar7,uVar5);
    if (uVar7 < 0xfffffffe) {
      lVar1 = (ulonglong)uVar12 * (ulonglong)uVar11;
    }
    param_3 = (int)lVar1;
    if (uVar7 < 0xfffffffe) {
      param_3 = (int)((ulonglong)lVar1 >> 0x20);
    }
  }
  iVar10 = DAT_00022ad0;
  if (param_3 < 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(DAT_00022acc + 0x2288a) + -2;
    if (param_3 < iVar9) {
      iVar9 = param_3;
    }
  }
  if ((*(uint *)(DAT_00022ad0 + 0x228b6) & 1) == 0) {
    iVar16 = DAT_00022ad0 + 0x228b6;
    iVar13 = __cxa_guard_acquire(iVar16);
    if (iVar13 != 0) {
      uVar3 = FUN_00022674(DAT_00022ae8 + 0x22986,0);
      *(undefined4 *)(iVar10 + 0x228ba) = uVar3;
      __cxa_guard_release(iVar16);
    }
  }
  iVar10 = DAT_00022ad4;
  if ((*(uint *)(DAT_00022ad4 + 0x228ce) & 1) == 0) {
    iVar16 = DAT_00022ad4 + 0x228ce;
    iVar13 = __cxa_guard_acquire(iVar16);
    if (iVar13 != 0) {
      uVar3 = FUN_00022674(DAT_00022aec + 0x229ac,0);
      *(undefined4 *)(iVar10 + 0x228d2) = uVar3;
      __cxa_guard_release(iVar16);
    }
  }
  if (iVar9 == *(int *)(DAT_00022ad8 + 0x228d8)) {
    iVar9 = *(int *)(DAT_00022ad8 + 0x228e0);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar9;
  }
  if ((int)param_4 < 0) {
    iVar10 = iVar9 * 0x2ec;
    piVar14 = (int *)(DAT_00022af0 + 0x229ca);
    if (*(int *)(*piVar14 + iVar10 + 0x22c) < 1) {
      __s1 = (char *)FUN_0002285c(param_1,param_2,0xffffffff,0xffffffff);
      goto LAB_00022940;
    }
    iVar16 = *(int *)(iVar8 + DAT_00022af4);
    iVar13 = DAT_00022af8 + 0x229e6;
    uVar6 = *(undefined4 *)(iVar16 + 0x50);
    uVar3 = FUN_0008f414(iVar13);
    FUN_00072d2c(uVar6,iVar13,uVar3,1,1,1);
    FUN_0008f060(auStack_6c,0x40,DAT_00022afc + 0x22a16,*piVar14 + iVar10);
    uVar6 = *(undefined4 *)(iVar16 + 0x50);
    uVar3 = FUN_0008f414(auStack_6c);
    iVar13 = FUN_00072d2c(uVar6,auStack_6c,uVar3,1,1,1);
    __aeabi_idivmod(iVar13 + -1,*(undefined4 *)(*piVar14 + iVar10 + 0x22c));
    param_4 = extraout_r1;
    if ((int)extraout_r1 < 1) goto LAB_00022a4c;
LAB_000228d6:
    uVar12 = *(int *)(*(int *)(DAT_00022adc + 0x228dc) + iVar9 * 0x2ec + 0x22c) - 1;
    if ((int)param_4 < (int)uVar12) {
      uVar12 = param_4;
    }
  }
  else {
    if (0 < (int)param_4) goto LAB_000228d6;
LAB_00022a4c:
    uVar12 = 0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar12;
  }
  iVar10 = *(int *)(DAT_00022ae0 + 0x228fe) + iVar9 * 0x2ec;
  __s2 = (char *)(DAT_00022ae4 + 0x22904);
  iVar16 = *(int *)(iVar10 + 0x230);
  iVar13 = *(int *)(iVar10 + 0x22c);
  iVar9 = 0;
  __s1 = (char *)(iVar16 + uVar12 * 0x100);
  iVar10 = strcmp(__s1,__s2);
  if (iVar10 != 0) goto LAB_0002293a;
  do {
    do {
      if ((int)uVar12 < -1) {
        if (iVar13 <= (int)(uVar12 + 1)) goto LAB_00022952;
        uVar5 = iVar13 - ~uVar12;
      }
      else {
        uVar5 = uVar12 + 1;
        if (iVar13 <= (int)uVar5) {
LAB_00022952:
          uVar5 = (uVar12 + 1) - iVar13;
        }
      }
      iVar9 = iVar9 + 1;
      __s1 = (char *)(iVar16 + uVar5 * 0x100);
      iVar10 = strcmp(__s1,__s2);
      uVar12 = uVar5;
    } while (iVar10 == 0);
LAB_0002293a:
  } while (iVar13 <= iVar9);
LAB_00022940:
  if (local_2c == **(int **)(iVar8 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s1);
}



