/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3594 FUN_000c3594 */

undefined4 FUN_000c3594(void **param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  void *__n;
  void *pvVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  size_t __n_00;
  uint uVar20;
  undefined8 uVar21;
  void *local_54;
  uint local_50;
  
  iVar17 = *param_2;
  local_54 = (void *)param_2[2];
  cVar1 = *(char *)(iVar17 + 4);
  __n_00 = param_2[3];
  uVar18 = (uint)*(byte *)(iVar17 + 5);
  local_50 = uVar18 & 2;
  uVar21 = FUN_000c2e1c(param_2);
  bVar2 = *(byte *)(iVar17 + 0x12);
  bVar7 = *(byte *)(iVar17 + 0xe);
  bVar3 = *(byte *)(iVar17 + 0xf);
  bVar8 = *(byte *)(iVar17 + 0x10);
  bVar9 = *(byte *)(iVar17 + 0x11);
  bVar4 = *(byte *)(iVar17 + 0x13);
  bVar5 = *(byte *)(iVar17 + 0x14);
  bVar6 = *(byte *)(iVar17 + 0x15);
  uVar20 = (uint)*(byte *)(iVar17 + 0x1a);
  if ((param_1 != (void **)0x0) && (pvVar11 = *param_1, pvVar11 != (void *)0x0)) {
    pvVar14 = param_1[9];
    pvVar15 = param_1[3];
    if (pvVar15 != (void *)0x0) {
      __n = (void *)((int)param_1[2] - (int)pvVar15);
      param_1[2] = __n;
      if (__n != (void *)0x0) {
        memmove(pvVar11,(void *)((int)pvVar11 + (int)pvVar15),(size_t)__n);
      }
      param_1[3] = (void *)0x0;
    }
    if (pvVar14 != (void *)0x0) {
      pvVar11 = pvVar14;
      if (param_1[7] != pvVar14) {
        memmove(param_1[4],(void *)((int)param_1[4] + (int)pvVar14 * 4),
                ((int)param_1[7] - (int)pvVar14) * 4);
        memmove(param_1[5],(void *)((int)param_1[5] + (int)pvVar14 * 8),
                ((int)param_1[7] - (int)pvVar14) * 8);
        pvVar11 = param_1[7];
      }
      param_1[7] = (void *)((int)pvVar11 - (int)pvVar14);
      param_1[8] = (void *)((int)param_1[8] - (int)pvVar14);
      param_1[9] = (void *)0x0;
    }
    if (((param_1[0x54] ==
          (void *)((uint)bVar8 << 0x10 | (uint)bVar3 << 8 | (uint)bVar7 | (uint)bVar9 << 0x18)) &&
        (cVar1 == '\0')) && (iVar12 = FUN_000c350c(param_1,uVar20 + 1), iVar12 == 0)) {
      pvVar11 = (void *)((uint)bVar5 << 0x10 | (uint)bVar4 << 8 | (uint)bVar2 | (uint)bVar6 << 0x18)
      ;
      if (param_1[0x55] != pvVar11) {
        pvVar15 = param_1[8];
        iVar12 = (int)pvVar15 << 2;
        for (pvVar14 = pvVar15; (int)pvVar14 < (int)param_1[7]; pvVar14 = (void *)((int)pvVar14 + 1)
            ) {
          pbVar10 = (byte *)((int)param_1[4] + iVar12);
          iVar12 = iVar12 + 4;
          param_1[2] = (void *)((int)param_1[2] - (uint)*pbVar10);
        }
        param_1[7] = pvVar15;
        if (param_1[0x55] != (void *)0xffffffff) {
          *(undefined4 *)((int)param_1[4] + (int)pvVar15 * 4) = 0x400;
          param_1[7] = (void *)((int)pvVar15 + 1);
          param_1[8] = (void *)((int)param_1[8] + 1);
        }
      }
      if (((int)(uVar18 << 0x1f) < 0) &&
         (((int)param_1[7] < 1 || (*(int *)((int)param_1[4] + ((int)param_1[7] + -1) * 4) == 0x400))
         )) {
        for (iVar12 = 0; iVar12 < (int)uVar20; iVar12 = iVar12 + 1) {
          uVar16 = (uint)*(byte *)(iVar17 + iVar12 + 0x1b);
          local_54 = (void *)((int)local_54 + uVar16);
          __n_00 = __n_00 - uVar16;
          if (uVar16 != 0xff) {
            iVar12 = iVar12 + 1;
            local_50 = 0;
            goto LAB_000c370c;
          }
        }
        local_50 = 0;
      }
      else {
        iVar12 = 0;
      }
LAB_000c370c:
      if (__n_00 != 0) {
        iVar13 = FUN_000c3558(param_1,__n_00);
        if (iVar13 != 0) {
          return 0xffffffff;
        }
        memcpy((void *)((int)*param_1 + (int)param_1[2]),local_54,__n_00);
        param_1[2] = (void *)((int)param_1[2] + __n_00);
      }
      iVar17 = iVar17 + iVar12;
      pvVar14 = (void *)0xffffffff;
      while (iVar12 < (int)uVar20) {
        bVar2 = *(byte *)(iVar17 + 0x1b);
        *(uint *)((int)param_1[4] + (int)param_1[7] * 4) = (uint)bVar2;
        puVar19 = (undefined4 *)((int)param_1[5] + (int)param_1[7] * 8);
        *puVar19 = 0xffffffff;
        puVar19[1] = 0xffffffff;
        if (local_50 != 0) {
          *(uint *)((int)param_1[4] + (int)param_1[7] * 4) =
               *(uint *)((int)param_1[4] + (int)param_1[7] * 4) | 0x100;
        }
        if (bVar2 == 0xff) {
          param_1[7] = (void *)((int)param_1[7] + 1);
        }
        else {
          pvVar14 = param_1[7];
          param_1[7] = (void *)((int)pvVar14 + 1);
          param_1[8] = (void *)((int)pvVar14 + 1);
        }
        iVar17 = iVar17 + 1;
        local_50 = 0;
        iVar12 = iVar12 + 1;
      }
      if (pvVar14 != (void *)0xffffffff) {
        *(undefined8 *)((int)param_1[5] + (int)pvVar14 * 8) = uVar21;
      }
      if ((int)(uVar18 << 0x1d) < 0) {
        param_1[0x52] = (void *)0x1;
        if (0 < (int)param_1[7]) {
          iVar17 = (int)param_1[7] + -1;
          *(uint *)((int)param_1[4] + iVar17 * 4) = *(uint *)((int)param_1[4] + iVar17 * 4) | 0x200;
        }
      }
      param_1[0x55] = (void *)((int)pvVar11 + 1);
      return 0;
    }
  }
  return 0xffffffff;
}



