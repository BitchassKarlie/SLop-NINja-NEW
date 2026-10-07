/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003d054 FUN_0003d054 */

void FUN_0003d054(int param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  fVar3 = DAT_0003d148;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  iVar7 = DAT_0003d154 + 0x3d074;
  *(undefined *)(*(int *)(*(int *)(param_1 + 0x90) + 0x120) + 0x80) = 1;
  iVar12 = *(int *)(*(int *)(param_1 + 0x90) + 0x120);
  puVar6 = *(uint **)(iVar7 + DAT_0003d158);
  uVar8 = puVar6[2];
  uVar11 = puVar6[4];
  lVar2 = (ulonglong)*puVar6 * (ulonglong)uVar8;
  uVar10 = (uint)lVar2;
  uVar5 = uVar10 + uVar11;
  uVar10 = (int)((ulonglong)lVar2 >> 0x20) + uVar8 * puVar6[1] + *puVar6 * puVar6[3] +
           puVar6[5] + (uint)CARRY4(uVar10,uVar11);
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar5;
  uVar9 = (uint)lVar2;
  uVar5 = uVar8 * uVar10 + uVar5 * puVar6[3] + (int)((ulonglong)lVar2 >> 0x20) +
          puVar6[5] + (uint)CARRY4(uVar9,uVar11);
  *puVar6 = uVar9 + uVar11;
  puVar6[1] = uVar5;
  uVar4 = DAT_0003d150;
  fVar1 = ((float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) / fVar3) *
          DAT_0003d14c;
  *(float *)(iVar12 + 0x1c) =
       DAT_0003d14c +
       ((float)(ulonglong)((uVar10 >> 0xd) - (uint)(uVar10 * 0x80000 < uVar10)) / fVar3) *
       DAT_0003d14c;
  *(float *)(iVar12 + 0x20) = -fVar1;
  *(undefined4 *)(iVar12 + 0x24) = uVar4;
  FUN_000671a8(*(undefined4 *)(*(int *)(iVar7 + DAT_0003d15c) + 0x16c),0);
  return;
}



