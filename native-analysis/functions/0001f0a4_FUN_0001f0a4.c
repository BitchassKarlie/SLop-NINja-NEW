/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001f0a4 FUN_0001f0a4 */

void FUN_0001f0a4(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  uint local_68;
  undefined4 local_34 [2];
  
  pvVar6 = *(void **)(param_1 + 0x38);
  iVar8 = DAT_0001f2e4 + 0x1f0b6;
  uVar4 = DAT_0001f2cc;
  fVar11 = DAT_0001f2d0;
  iVar9 = DAT_0001f2e8;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_0008caf0();
    *(void **)(param_1 + 0x38) = pvVar6;
    uVar4 = DAT_0001f2cc;
    fVar11 = DAT_0001f2d0;
    iVar9 = DAT_0001f2e8;
  }
  fVar16 = DAT_0001f2d4;
  if (param_4 != (float *)0x0) {
    fVar16 = *param_4;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x14);
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  DAT_0001f2cc = uVar4;
  DAT_0001f2d0 = fVar11;
  DAT_0001f2e8 = iVar9;
  *(undefined4 *)((int)pvVar6 + 4) = uVar13;
  *(undefined4 *)((int)pvVar6 + 8) = uVar15;
  *(undefined4 *)((int)pvVar6 + 0xc) = uVar4;
  iVar2 = DAT_0001f2ec;
  uVar17 = CONCAT44(DAT_0001f2ec,uVar13);
  *(float *)(*(int *)(param_1 + 0x38) + 0x14) =
       fVar16 * *(float *)(*(int *)(iVar8 + DAT_0001f2ec) + 0x90) * fVar11;
  if (*(int *)(iVar9 + 0x1f0fc) == 0) {
    FUN_0002fa48(local_34,DAT_0001f2f4 + 0x1f2b6);
    FUN_00017d64(iVar9 + 0x1f0fc,local_34[0]);
    uVar17 = FUN_00017d90(local_34);
  }
  iVar10 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined *)(param_1 + 0x78) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xef | 2;
  fVar11 = DAT_0001f2d4;
  *(undefined *)(param_1 + 0x68) = 0;
  *(float *)(param_1 + 0xa8) = fVar11;
  uVar4 = DAT_0001f2cc;
  lVar1 = 1;
  *(undefined *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = DAT_0001f2d8;
  iVar9 = param_1;
  do {
    iVar3 = FUN_00086780((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)lVar1);
    iVar10 = iVar10 + 1;
    uVar5 = *(uint *)(iVar3 + 8);
    lVar1 = (ulonglong)uVar5 * (ulonglong)*(uint *)(iVar3 + 0x10) +
            CONCAT44(*(uint *)(iVar3 + 0x10) * *(int *)(iVar3 + 0xc) +
                     uVar5 * *(int *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18));
    uVar7 = *(int *)(iVar3 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar3 + 8) = (int)lVar1;
    *(uint *)(iVar3 + 0xc) = uVar7;
    *(ushort *)(iVar9 + 0x70) = ((ushort)(uVar7 >> 0x1d) - (ushort)(uVar7 * 8 < uVar7)) + 1;
    iVar3 = FUN_00086780(iVar3,uVar5,uVar7 * 7);
    uVar5 = *(uint *)(iVar3 + 8);
    uVar17 = CONCAT44(uVar5,iVar3);
    lVar1 = (ulonglong)uVar5 * (ulonglong)*(uint *)(iVar3 + 0x10);
    local_68 = (uint)lVar1;
    uVar5 = *(int *)(iVar3 + 0x1c) +
            *(uint *)(iVar3 + 0x10) * *(int *)(iVar3 + 0xc) + uVar5 * *(int *)(iVar3 + 0x14) +
            (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(*(uint *)(iVar3 + 0x18),local_68);
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 0x18) + local_68;
    *(uint *)(iVar3 + 0xc) = uVar5;
    lVar1 = (ulonglong)uVar5 * 0x167;
    *(short *)(iVar9 + 0x74) = (short)((ulonglong)lVar1 >> 0x20);
    iVar9 = iVar9 + 2;
  } while (iVar10 != 2);
  *(undefined *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar13 = DAT_0001f2e0;
  uVar4 = DAT_0001f2cc;
  fVar14 = *(float *)(*(int *)(iVar8 + iVar2) + 0x8c);
  fVar11 = fVar16 * fVar14 * *(float *)(DAT_0001f2f0 + 0x1f20c) * DAT_0001f2dc;
  fVar12 = fVar16 * fVar14 * *(float *)(DAT_0001f2f0 + 0x1f210) * DAT_0001f2dc;
  fVar16 = fVar16 * fVar14 * *(float *)(DAT_0001f2f0 + 0x1f208) * DAT_0001f2dc;
  *(float *)(param_1 + 0x28) = fVar16;
  *(float *)(param_1 + 0x2c) = fVar11;
  *(float *)(param_1 + 0x30) = fVar12;
  *(float *)(param_1 + 0x98) = fVar16;
  *(float *)(param_1 + 0x9c) = fVar11;
  *(float *)(param_1 + 0xa0) = fVar12;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = uVar13;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  uVar4 = FUN_00030234();
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  return;
}



