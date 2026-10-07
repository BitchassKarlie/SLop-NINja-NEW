/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00043a54 FUN_00043a54 */

void FUN_00043a54(int param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  uint local_78;
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar8 = DAT_00043bd4 + 0x43a62;
  piVar11 = *(int **)(iVar8 + DAT_00043bd8);
  local_30 = 1;
  local_2c = *piVar11;
  local_50[0] = 0;
  iVar10 = *(int *)(iVar8 + DAT_00043bdc);
  uVar12 = *(undefined4 *)(iVar10 + 0x18c);
  local_58 = DAT_00043be0 + 0x43a92;
  local_54 = *(undefined4 *)(iVar8 + DAT_00043be4);
  (**(code **)(DAT_00043be0 + 0x43a9a))(&local_58,local_50);
  FUN_00073a7c(uVar12,DAT_00043be8 + 0x43aa8,0x3f800000,local_50);
  FUN_0001d388(local_50);
  fVar3 = DAT_00043bc8;
  local_58 = DAT_00043bec + 0x43ac4;
  *(undefined4 *)(param_1 + 0x8c) = 0xe;
  *(undefined *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x120) + 0x80) = 1;
  iVar13 = *(int *)(*(int *)(param_1 + 0x9c) + 0x120);
  puVar6 = *(uint **)(iVar8 + DAT_00043bf0);
  uVar7 = puVar6[2];
  lVar2 = (ulonglong)*puVar6 * (ulonglong)uVar7;
  local_78 = (uint)lVar2;
  uVar9 = puVar6[4];
  uVar4 = local_78 + uVar9;
  uVar5 = uVar7 * puVar6[1] + *puVar6 * puVar6[3] + (int)((ulonglong)lVar2 >> 0x20) +
          puVar6[5] + (uint)CARRY4(local_78,uVar9);
  lVar2 = (ulonglong)uVar7 * (ulonglong)uVar4;
  local_78 = (uint)lVar2;
  uVar4 = uVar7 * uVar5 + uVar4 * puVar6[3] + (int)((ulonglong)lVar2 >> 0x20) +
          puVar6[5] + (uint)CARRY4(local_78,uVar9);
  *puVar6 = local_78 + uVar9;
  puVar6[1] = uVar4;
  uVar12 = DAT_00043bd0;
  fVar1 = ((float)(ulonglong)((uVar4 >> 0xd) - (uint)(uVar4 * 0x80000 < uVar4)) / fVar3) *
          DAT_00043bcc;
  *(float *)(iVar13 + 0x1c) =
       DAT_00043bcc +
       ((float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) / fVar3) * DAT_00043bcc
  ;
  *(float *)(iVar13 + 0x20) = -fVar1;
  *(undefined4 *)(iVar13 + 0x24) = uVar12;
  FUN_000671a8(*(undefined4 *)(iVar10 + 0x16c),0);
  if (local_2c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



