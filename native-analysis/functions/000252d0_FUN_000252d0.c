/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000252d0 FUN_000252d0 */

void FUN_000252d0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int **ppiVar16;
  int iVar17;
  int *piVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_44;
  float local_40;
  float local_3c;
  
  iVar17 = DAT_00025570 + 0x252e6;
  *(undefined4 *)(param_1 + 0x110) = DAT_00025554;
  *(undefined4 *)(param_1 + 0x94) = DAT_00025558;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 0x114) = 0;
  iVar6 = DAT_000256d8;
  if ((param_3 < 0) || (*(int *)(DAT_00025574 + 0x2530c) <= param_3)) {
    uVar4 = FUN_00023380(1);
    iVar15 = *(int *)(iVar17 + iVar6);
    *(undefined *)(param_1 + 0x3c) = uVar4;
    iVar11 = *(int *)(iVar15 + 4);
    iVar7 = DAT_000256dc;
  }
  else {
    *(char *)(param_1 + 0x3c) = (char)param_3;
    iVar15 = *(int *)(iVar17 + DAT_00025578);
    iVar11 = *(int *)(iVar15 + 4);
    iVar6 = DAT_00025578;
    iVar7 = DAT_000256dc;
  }
  DAT_000256dc = iVar7;
  if ((iVar11 == 2) && ((int)((uint)(*(float *)(iVar15 + 0x10) < DAT_000256d0) << 0x1f) < 0)) {
    if ((*(uint *)(iVar7 + 0x25626) & 1) == 0) {
      iVar15 = __cxa_guard_acquire(iVar7 + 0x25626);
      if (iVar15 != 0) {
        uVar12 = FUN_00022674(DAT_000256f4 + 0x25672,0);
        *(undefined4 *)(iVar7 + 0x2562a) = uVar12;
        __cxa_guard_release(iVar7 + 0x25626);
      }
    }
    iVar15 = DAT_000256e0;
    uVar8 = (uint)*(byte *)(param_1 + 0x3c);
    if (uVar8 == *(uint *)(DAT_000256e0 + 0x2563e)) {
      do {
        bVar5 = FUN_00023380(1);
        uVar8 = (uint)bVar5;
        *(byte *)(param_1 + 0x3c) = bVar5;
      } while (uVar8 == *(uint *)(iVar15 + 0x2563e));
    }
    iVar15 = DAT_000256e4;
    piVar18 = (int *)(DAT_000256e4 + 0x255f4);
    if (*(int *)(uVar8 * 0x2ec + *piVar18 + 0x2e8) != 0) {
      iVar7 = FUN_0008f414(DAT_000256e8 + 0x2560a);
      if (*(int *)(iVar15 + 0x25610) < 1) {
        if ((int)((uint)(*(float *)(*(int *)(*(int *)(iVar17 + iVar6) + 0x50) + 0xf0) < DAT_000256d4
                        ) << 0x1f) < 0) {
          ppiVar16 = *(int ***)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar18 + 0x2e8);
          if (iVar7 != **ppiVar16) goto LAB_00025614;
        }
        else {
          ppiVar16 = *(int ***)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar18 + 0x2e8);
        }
        iVar6 = FUN_00022280(ppiVar16);
        if (iVar6 == 0) goto LAB_00025320;
      }
LAB_00025614:
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
      return;
    }
  }
LAB_00025320:
  iVar6 = DAT_0002557c;
  if ((*(uint *)(DAT_0002557c + 0x2539a) & 1) == 0) {
    iVar15 = DAT_0002557c + 0x2539a;
    iVar17 = __cxa_guard_acquire(iVar15);
    if (iVar17 != 0) {
      uVar12 = FUN_00022674(DAT_000256f0 + 0x25650,0);
      *(undefined4 *)(iVar6 + 0x2539e) = uVar12;
      __cxa_guard_release(iVar15);
    }
  }
  iVar6 = FUN_0002f5f0();
  if (iVar6 == 0) {
    uVar8 = (uint)*(byte *)(param_1 + 0x3c);
  }
  else {
    uVar8 = (uint)*(byte *)(param_1 + 0x3c);
    if (uVar8 == *(uint *)(DAT_000256ec + 0x256a0)) {
      uVar10 = uVar8 - 1;
      uVar8 = uVar10 & 0xff;
      *(char *)(param_1 + 0x3c) = (char)uVar10;
    }
  }
  if (*(int *)(uVar8 * 0x2ec + *(int *)(DAT_00025580 + 0x25346) + 0x2e8) != 0) {
    *(int *)(DAT_00025580 + 0x25362) = *(int *)(DAT_00025580 + 0x25362) + 1;
    uVar8 = (uint)*(byte *)(param_1 + 0x3c);
  }
  uVar12 = 0x3f800000;
  if (param_4 != (undefined4 *)0x0) {
    uVar12 = *param_4;
  }
  FUN_00023078(param_1,uVar8,uVar12);
  iVar6 = DAT_00025584;
  uVar12 = DAT_00025554;
  puVar13 = (undefined4 *)(DAT_00025584 + 0x25376);
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0x3d) = 0;
  *(undefined4 *)(param_1 + 0x80) = uVar12;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x6c) = DAT_0002555c;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xef | 2;
  fVar3 = DAT_00025568;
  fVar21 = DAT_00025564;
  fVar2 = DAT_00025560;
  uVar9 = *(undefined4 *)(iVar6 + 0x2537a);
  uVar14 = *(undefined4 *)(iVar6 + 0x2537e);
  *(undefined4 *)(param_1 + 0x84) = *puVar13;
  *(undefined4 *)(param_1 + 0x88) = uVar9;
  *(undefined4 *)(param_1 + 0x8c) = uVar14;
  iVar6 = FUN_00086780();
  lVar1 = (ulonglong)*(uint *)(iVar6 + 8) * (ulonglong)*(uint *)(iVar6 + 0x10) +
          CONCAT44(*(uint *)(iVar6 + 0x10) * *(int *)(iVar6 + 0xc) +
                   *(uint *)(iVar6 + 8) * *(int *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x18));
  uVar8 = *(int *)(iVar6 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
  *(int *)(iVar6 + 8) = (int)lVar1;
  *(uint *)(iVar6 + 0xc) = uVar8;
  fVar19 = ((float)(ulonglong)((uVar8 >> 0xd) - (uint)(uVar8 * 0x80000 < uVar8)) / fVar2) * fVar3 -
           fVar21;
  iVar6 = FUN_00086780();
  lVar1 = (ulonglong)*(uint *)(iVar6 + 8) * (ulonglong)*(uint *)(iVar6 + 0x10) +
          CONCAT44(*(uint *)(iVar6 + 0x10) * *(int *)(iVar6 + 0xc) +
                   *(uint *)(iVar6 + 8) * *(int *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x18));
  uVar8 = *(int *)(iVar6 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
  *(int *)(iVar6 + 8) = (int)lVar1;
  *(uint *)(iVar6 + 0xc) = uVar8;
  fVar20 = ((float)(ulonglong)((uVar8 >> 0xd) - (uint)(uVar8 * 0x80000 < uVar8)) / fVar2) * fVar3 -
           fVar21;
  iVar6 = FUN_00086780();
  lVar1 = (ulonglong)*(uint *)(iVar6 + 8) * (ulonglong)*(uint *)(iVar6 + 0x10) +
          CONCAT44(*(uint *)(iVar6 + 0x10) * *(int *)(iVar6 + 0xc) +
                   *(uint *)(iVar6 + 8) * *(int *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x18));
  uVar8 = *(int *)(iVar6 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
  *(int *)(iVar6 + 8) = (int)lVar1;
  *(uint *)(iVar6 + 0xc) = uVar8;
  local_60 = uVar12;
  local_5c = uVar12;
  local_58 = uVar12;
  fVar21 = ((float)(ulonglong)((uVar8 >> 0xd) - (uint)(uVar8 * 0x80000 < uVar8)) / fVar2) * fVar3 -
           fVar21;
  local_54 = DAT_00025558;
  FUN_00024f54(&local_60,0);
  *(float *)(param_1 + 0xf0) = fVar19;
  *(float *)(param_1 + 0xf4) = fVar20;
  *(float *)(param_1 + 0xf8) = fVar21;
  *(undefined4 *)(param_1 + 0xd0) = local_60;
  *(undefined4 *)(param_1 + 0xd4) = local_5c;
  *(undefined4 *)(param_1 + 0xd8) = local_58;
  *(undefined4 *)(param_1 + 0xdc) = local_54;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(float *)(param_1 + 0xfc) = fVar19;
  *(float *)(param_1 + 0x100) = fVar20;
  *(float *)(param_1 + 0x104) = fVar21;
  *(undefined4 *)(param_1 + 0xe0) = local_60;
  *(undefined4 *)(param_1 + 0xe4) = local_5c;
  *(undefined4 *)(param_1 + 0xe8) = local_58;
  *(undefined4 *)(param_1 + 0xec) = local_54;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 100) = 0x4b;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x68) = 4;
  *(undefined *)(param_1 + 0x10c) = 0;
  *(undefined *)(param_1 + 0x7c) = 1;
  *(undefined *)(param_1 + 0x10d) = 1;
  local_44 = fVar19;
  local_40 = fVar20;
  local_3c = fVar21;
  uVar14 = FUN_00030274();
  uVar9 = DAT_0002556c;
  *(undefined4 *)(param_1 + 0x98) = uVar14;
  *(undefined4 *)(param_1 + 0x9c) = uVar12;
  *(undefined4 *)(param_1 + 0xa0) = uVar9;
  *(undefined4 *)(param_1 + 0xa4) = uVar12;
  return;
}



