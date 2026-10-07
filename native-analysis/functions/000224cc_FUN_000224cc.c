/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000224cc FUN_000224cc */

void FUN_000224cc(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_30;
  uint local_2c;
  
  local_30 = (uint)*(byte *)(param_1 + 0xb4);
  if (local_30 == 0) {
    local_2c = local_30;
    uVar7 = FUN_0001c940();
    iVar8 = FUN_0001bd8c(uVar7,1,&local_30);
    fVar6 = DAT_000225cc;
    fVar5 = DAT_000225c8;
    fVar4 = DAT_000225c4;
    fVar3 = DAT_000225c0;
    fVar2 = DAT_000225bc;
    while (iVar8 != 0) {
      if ((*(float *)(iVar8 + 0xa4) <= 0.0) && (*(int *)(iVar8 + 0x38) != 0)) {
        fVar10 = *(float *)(iVar8 + 0x10) - *(float *)(param_1 + 0x10);
        fVar11 = *(float *)(iVar8 + 0x14) - *(float *)(param_1 + 0x14);
        fVar9 = *(float *)(iVar8 + 0x18) - *(float *)(param_1 + 0x18);
        if (((int)((uint)(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9 < fVar2) << 0x1f) < 0)
           && (fVar11 = *(float *)(param_1 + 0x20) - *(float *)(iVar8 + 0x20),
              fVar9 = *(float *)(param_1 + 0x1c) - *(float *)(iVar8 + 0x1c),
              fVar9 = fVar11 * fVar11 + fVar9 * fVar9, (int)((uint)(fVar9 < fVar3) << 0x1f) < 0)) {
          iVar1 = (uint)(fVar10 < 0.0) << 0x1f;
          if (-1 < iVar1) {
            fVar9 = fVar5;
          }
          if (iVar1 < 0) {
            fVar9 = fVar4;
          }
          *(float *)(iVar8 + 0x1c) = *(float *)(iVar8 + 0x1c) + fVar9 * param_2 * fVar6;
        }
      }
      uVar7 = FUN_0001c940();
      iVar8 = FUN_0001bdb8(uVar7,1,&local_30);
    }
  }
  return;
}



