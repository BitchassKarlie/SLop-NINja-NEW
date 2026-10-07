/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00063964 FUN_00063964 */

void FUN_00063964(int param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = DAT_00063a68;
  *(undefined4 *)(param_1 + 0xa8) = 6;
  if ((*(int *)(param_1 + 0x78) != 0) &&
     (iVar7 = *(int *)(*(int *)(param_1 + 0x78) + 0x120), iVar7 != 0)) {
    *(undefined *)(iVar7 + 0x80) = 1;
    fVar3 = DAT_00063a5c;
    iVar7 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
    puVar8 = *(uint **)(iVar5 + 0x63978 + DAT_00063a6c);
    uVar9 = puVar8[2];
    uVar12 = puVar8[4];
    lVar2 = (ulonglong)*puVar8 * (ulonglong)uVar9;
    uVar11 = (uint)lVar2;
    uVar6 = uVar11 + uVar12;
    uVar11 = (int)((ulonglong)lVar2 >> 0x20) + uVar9 * puVar8[1] + *puVar8 * puVar8[3] +
             puVar8[5] + (uint)CARRY4(uVar11,uVar12);
    lVar2 = (ulonglong)uVar9 * (ulonglong)uVar6;
    uVar10 = (uint)lVar2;
    uVar6 = uVar9 * uVar11 + uVar6 * puVar8[3] + (int)((ulonglong)lVar2 >> 0x20) +
            puVar8[5] + (uint)CARRY4(uVar10,uVar12);
    *puVar8 = uVar10 + uVar12;
    puVar8[1] = uVar6;
    uVar4 = DAT_00063a64;
    fVar1 = ((float)(ulonglong)((uVar6 >> 0xd) - (uint)(uVar6 * 0x80000 < uVar6)) / fVar3) *
            DAT_00063a60;
    *(float *)(iVar7 + 0x1c) =
         DAT_00063a60 +
         ((float)(ulonglong)((uVar11 >> 0xd) - (uint)(uVar11 * 0x80000 < uVar11)) / fVar3) *
         DAT_00063a60;
    *(float *)(iVar7 + 0x20) = -fVar1;
    *(undefined4 *)(iVar7 + 0x24) = uVar4;
    FUN_000671a8(*(undefined4 *)(*(int *)(iVar5 + 0x63978 + DAT_00063a70) + 0x16c),0);
  }
  return;
}



