/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004d240 FUN_0004d240 */

void FUN_0004d240(int param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint local_78;
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar9 = DAT_0004d3dc + 0x4d24e;
  piVar7 = *(int **)(iVar9 + DAT_0004d3e0);
  local_50[0] = 0;
  local_30 = 1;
  local_2c = *piVar7;
  iVar11 = *(int *)(iVar9 + DAT_0004d3e4);
  uVar12 = *(undefined4 *)(iVar11 + 0x18c);
  local_58 = DAT_0004d3e8 + 0x4d280;
  local_54 = *(undefined4 *)(iVar9 + DAT_0004d3ec);
  (**(code **)(DAT_0004d3e8 + 0x4d288))(&local_58,local_50);
  FUN_00073a7c(uVar12,DAT_0004d3f0 + 0x4d29a,0x3f800000,local_50);
  FUN_0001d388(local_50);
  fVar3 = DAT_0004d3cc;
  local_58 = DAT_0004d3f4 + 0x4d2b6;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  *(undefined *)(*(int *)(*(int *)(param_1 + 0x80) + 0x120) + 0x80) = 1;
  iVar10 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
  puVar6 = *(uint **)(iVar9 + DAT_0004d3f8);
  uVar8 = puVar6[2];
  lVar2 = (ulonglong)*puVar6 * (ulonglong)uVar8;
  local_78 = (uint)lVar2;
  uVar4 = local_78 + puVar6[4];
  uVar5 = uVar8 * puVar6[1] + *puVar6 * puVar6[3] + (int)((ulonglong)lVar2 >> 0x20) +
          puVar6[5] + (uint)CARRY4(local_78,puVar6[4]);
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar4;
  local_78 = (uint)lVar2;
  uVar4 = uVar8 * uVar5 + uVar4 * puVar6[3] + (int)((ulonglong)lVar2 >> 0x20) +
          puVar6[5] + (uint)CARRY4(local_78,puVar6[4]);
  *puVar6 = local_78 + puVar6[4];
  puVar6[1] = uVar4;
  uVar12 = DAT_0004d3d4;
  fVar1 = ((float)(ulonglong)((uVar4 >> 0xd) - (uint)(uVar4 * 0x80000 < uVar4)) / fVar3) *
          DAT_0004d3d0;
  *(float *)(iVar10 + 0x1c) =
       DAT_0004d3d0 +
       ((float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) / fVar3) * DAT_0004d3d0
  ;
  *(float *)(iVar10 + 0x20) = -fVar1;
  *(undefined4 *)(iVar10 + 0x24) = uVar12;
  FUN_000671a8(*(undefined4 *)(iVar11 + 0x16c),0);
  *(undefined4 *)(param_1 + 0x98) = DAT_0004d3d8;
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



