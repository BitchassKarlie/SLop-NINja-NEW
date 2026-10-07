/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002d8a4 FUN_0002d8a4 */

void FUN_0002d8a4(uint param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88 [8];
  undefined local_68;
  undefined4 local_64 [8];
  undefined local_44;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar2 = DAT_0002da74;
  piVar3 = &local_a0;
  iVar8 = DAT_0002da70 + 0x2d8b6;
  if (1 < (int)param_1) {
    param_1 = 2;
  }
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  local_1c = **(int **)(iVar8 + DAT_0002da74);
  iVar5 = DAT_0002da78 + 0x2d8ca + param_1 * 4;
  fVar11 = *(float *)(iVar5 + 0x7ec) - DAT_0002da68;
  *(float *)(iVar5 + 0x7ec) = fVar11;
  if (fVar11 <= 0.0) {
    *(undefined4 *)(iVar5 + 0x7ec) = DAT_0002da6c;
    if (param_1 == 1) {
      uVar10 = *(undefined4 *)(*(int *)(iVar8 + DAT_0002da7c) + 0x18c);
      puVar6 = *(uint **)(iVar8 + DAT_0002da80);
      lVar1 = (ulonglong)*puVar6 * (ulonglong)puVar6[2] +
              CONCAT44(puVar6[2] * puVar6[1] + *puVar6 * puVar6[3],puVar6[4]);
      uVar4 = puVar6[5] + (int)((ulonglong)lVar1 >> 0x20);
      *puVar6 = (uint)lVar1;
      puVar6[1] = uVar4;
      if (CARRY4(uVar4,uVar4) == false) {
        iVar5 = DAT_0002da90 + 0x2d9a8;
      }
      else {
        iVar5 = DAT_0002daa4 + 0x2da5c;
      }
      puVar9 = local_64;
      piVar3 = &local_98;
      local_98 = DAT_0002da94 + 0x2d9b8;
      pcVar7 = *(code **)(DAT_0002da94 + 0x2d9c0);
      local_94 = *(undefined4 *)(iVar8 + DAT_0002da8c);
      local_44 = 1;
      local_64[0] = 0;
    }
    else if (param_1 == 2) {
      uVar10 = *(undefined4 *)(*(int *)(iVar8 + DAT_0002da7c) + 0x18c);
      puVar6 = *(uint **)(iVar8 + DAT_0002da80);
      lVar1 = (ulonglong)*puVar6 * (ulonglong)puVar6[2] +
              CONCAT44(puVar6[2] * puVar6[1] + *puVar6 * puVar6[3],puVar6[4]);
      uVar4 = puVar6[5] + (int)((ulonglong)lVar1 >> 0x20);
      *puVar6 = (uint)lVar1;
      puVar6[1] = uVar4;
      if (CARRY4(uVar4,uVar4) == false) {
        iVar5 = DAT_0002da9c + 0x2da36;
      }
      else {
        iVar5 = DAT_0002daa8 + 0x2da62;
      }
      puVar9 = local_88;
      local_a0 = DAT_0002daa0 + 0x2da46;
      pcVar7 = *(code **)(DAT_0002daa0 + 0x2da4e);
      local_9c = *(undefined4 *)(iVar8 + DAT_0002da8c);
      local_68 = 1;
      local_88[0] = 0;
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(iVar8 + DAT_0002da7c) + 0x18c);
      puVar6 = *(uint **)(iVar8 + DAT_0002da80);
      lVar1 = (ulonglong)*puVar6 * (ulonglong)puVar6[2] +
              CONCAT44(puVar6[2] * puVar6[1] + *puVar6 * puVar6[3],puVar6[4]);
      uVar4 = puVar6[5] + (int)((ulonglong)lVar1 >> 0x20);
      *puVar6 = (uint)lVar1;
      puVar6[1] = uVar4;
      if (CARRY4(uVar4,uVar4) == false) {
        iVar5 = DAT_0002da84 + 0x2d944;
      }
      else {
        iVar5 = DAT_0002da98 + 0x2d9f4;
      }
      puVar9 = local_40;
      piVar3 = &local_90;
      local_90 = DAT_0002da88 + 0x2d954;
      pcVar7 = *(code **)(DAT_0002da88 + 0x2d95c);
      local_8c = *(undefined4 *)(iVar8 + DAT_0002da8c);
      local_20 = 1;
      local_40[0] = 0;
    }
    (*pcVar7)(piVar3,puVar9);
    FUN_00073a7c(uVar10,iVar5,0x3f800000,puVar9);
    FUN_0001d388(puVar9);
  }
  if (local_1c == **(int **)(iVar8 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



