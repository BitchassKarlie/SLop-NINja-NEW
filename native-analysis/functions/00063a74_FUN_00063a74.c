/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00063a74 FUN_00063a74 */

void FUN_00063a74(int param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar6 = *(int *)(param_1 + 0x8c);
  iVar8 = DAT_00063b8c + 0x63a84;
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x278) != 0)) {
    *(int *)(param_1 + (*(int *)(*(int *)(iVar6 + 0x278) + 0x10) + 0x24) * 4) = iVar6;
  }
  *(undefined4 *)(param_1 + 0xa8) = 5;
  if ((*(int *)(param_1 + 0x78) != 0) &&
     (iVar6 = *(int *)(*(int *)(param_1 + 0x78) + 0x120), iVar6 != 0)) {
    *(undefined *)(iVar6 + 0x80) = 1;
    fVar3 = DAT_00063b80;
    iVar6 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
    puVar7 = *(uint **)(iVar8 + DAT_00063b90);
    uVar9 = puVar7[2];
    uVar12 = puVar7[4];
    lVar2 = (ulonglong)*puVar7 * (ulonglong)uVar9;
    uVar11 = (uint)lVar2;
    uVar5 = uVar11 + uVar12;
    uVar11 = (int)((ulonglong)lVar2 >> 0x20) + uVar9 * puVar7[1] + *puVar7 * puVar7[3] +
             puVar7[5] + (uint)CARRY4(uVar11,uVar12);
    lVar2 = (ulonglong)uVar9 * (ulonglong)uVar5;
    uVar10 = (uint)lVar2;
    uVar5 = uVar9 * uVar11 + uVar5 * puVar7[3] + (int)((ulonglong)lVar2 >> 0x20) +
            puVar7[5] + (uint)CARRY4(uVar10,uVar12);
    *puVar7 = uVar10 + uVar12;
    puVar7[1] = uVar5;
    uVar4 = DAT_00063b88;
    fVar1 = ((float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) / fVar3) *
            DAT_00063b84;
    *(float *)(iVar6 + 0x1c) =
         DAT_00063b84 +
         ((float)(ulonglong)((uVar11 >> 0xd) - (uint)(uVar11 * 0x80000 < uVar11)) / fVar3) *
         DAT_00063b84;
    *(float *)(iVar6 + 0x20) = -fVar1;
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
    FUN_000671a8(*(undefined4 *)(*(int *)(iVar8 + DAT_00063b94) + 0x16c),0);
  }
  return;
}



