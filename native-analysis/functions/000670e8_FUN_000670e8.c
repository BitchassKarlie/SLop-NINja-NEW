/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000670e8 FUN_000670e8 */

void FUN_000670e8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_00067190;
  fVar7 = *(float *)(param_1 + 0x70);
  if ((int)((uint)(fVar7 < 0.0) << 0x1f) < 0) {
    if (param_2 != 0) {
      uVar4 = *(undefined4 *)(param_2 + 0xc);
      uVar6 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      fVar7 = DAT_00067198;
      fVar8 = (*(float *)(param_2 + 0x110) + *(float *)(param_2 + 0x138) * fVar8) - DAT_00067194;
      bVar1 = fVar8 < DAT_00067198;
      bVar2 = fVar8 != DAT_00067198;
      bVar3 = NAN(fVar8) || NAN(DAT_00067198);
      *(float *)(param_1 + 0x8c) = fVar8;
      if (bVar2 && bVar1 == bVar3) {
        fVar7 = DAT_0006719c;
      }
      if (bVar2 && bVar1 == bVar3) {
        fVar8 = fVar8 * fVar7;
      }
      if (bVar2 && bVar1 == bVar3) {
        *(float *)(param_1 + 0x8c) = fVar8;
      }
      fVar8 = *(float *)(param_1 + 8);
      if (fVar8 == 0.0 || fVar8 < 0.0 != NAN(fVar8)) {
        uVar6 = 0;
      }
      bVar5 = (byte)uVar6;
      if (fVar8 != 0.0 && fVar8 < 0.0 == NAN(fVar8)) {
        bVar5 = 1;
      }
      *(byte *)(param_1 + 0x90) = bVar5;
      if (*(char *)(param_2 + 0x10c) != '\0') {
        *(byte *)(param_1 + 0x90) = bVar5 ^ 1;
      }
      fVar7 = *(float *)(param_1 + 0x70);
    }
    fVar7 = fVar7 + DAT_000671a0;
    *(float *)(param_1 + 0x70) = fVar7;
    fVar8 = fVar7;
    if (fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7)) {
      fVar8 = DAT_000671a4;
    }
    if (fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7)) {
      *(float *)(param_1 + 0x70) = fVar8;
    }
  }
  return;
}



