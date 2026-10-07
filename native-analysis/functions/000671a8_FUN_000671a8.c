/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000671a8 FUN_000671a8 */

void FUN_000671a8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_00067224;
  if (param_2 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    fVar7 = DAT_0006722c;
    fVar8 = (*(float *)(param_2 + 0x110) + *(float *)(param_2 + 0x138) * fVar8) - DAT_00067228;
    bVar1 = fVar8 < DAT_0006722c;
    bVar2 = fVar8 != DAT_0006722c;
    bVar3 = NAN(fVar8) || NAN(DAT_0006722c);
    *(float *)(param_1 + 0x8c) = fVar8;
    if (bVar2 && bVar1 == bVar3) {
      fVar7 = DAT_00067230;
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
  }
  *(undefined4 *)(param_1 + 0x70) = DAT_00067234;
  return;
}



