/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082490 FUN_00082490 */

void FUN_00082490(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = DAT_00082590 + 0x824a2;
  if (iVar4 != iVar3) {
    do {
      iVar5 = iVar4 + 0x20;
      if (*(int *)(iVar4 + 4) != 0) {
        uVar2 = FUN_0007e454();
        FUN_0007d8e8(uVar2,*(undefined4 *)(iVar4 + 4));
        *(undefined4 *)(iVar4 + 4) = 0;
        iVar3 = *(int *)(param_1 + 8);
      }
      iVar4 = iVar5;
    } while (iVar3 != iVar5);
  }
  fVar1 = DAT_0008258c;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar4 != iVar3) {
    iVar6 = *(int *)(iVar6 + DAT_00082594);
LAB_00082520:
    do {
      iVar5 = iVar4;
      if ((*(int *)(iVar6 + 0x40) != 0) && (iVar4 = *(int *)(iVar5 + 8), iVar4 != 0)) {
        if (*(char *)(iVar5 + 0xd) == '\0') {
          *(undefined *)(iVar4 + 0x27) = 1;
          iVar3 = *(int *)(param_1 + 0x18);
          iVar4 = iVar5 + 0x7c;
          if (iVar5 + 0x7c == iVar3) break;
          goto LAB_00082520;
        }
        iVar3 = *(int *)(param_1 + 0x54);
        fVar7 = *(float *)(iVar3 + 0xa4);
        if ((fVar7 == 0.0 || fVar7 < 0.0 != NAN(fVar7)) ||
           (*(float *)(iVar3 + 0xa0) / fVar7 <= fVar1)) {
          *(int *)(iVar4 + 0x84) = *(int *)(iVar3 + 200) << 1;
        }
        else {
          *(undefined4 *)(iVar4 + 0x84) = 0;
        }
        iVar4 = *(int *)(iVar5 + 8);
        *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(*(int *)(iVar5 + 8) + 0x7c) = 0;
        iVar3 = *(int *)(param_1 + 0x18);
      }
      iVar4 = iVar5 + 0x7c;
    } while (iVar5 + 0x7c != iVar3);
    iVar4 = iVar5 + 0x7c;
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar4 != *(int *)(param_1 + 0x14)) {
      do {
        FUN_00084cd8(iVar3,0);
        iVar6 = iVar3 + 0x7c;
        FUN_00017d90(iVar3);
        iVar3 = iVar6;
      } while (iVar6 != iVar4);
      iVar4 = *(int *)(param_1 + 0x14);
    }
  }
  *(int *)(param_1 + 0x18) = iVar4;
  iVar3 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x34) != iVar3) {
    do {
      iVar6 = iVar4 + 0x2c;
      FUN_000812b0(iVar4);
      iVar4 = iVar6;
    } while (iVar3 != iVar6);
    iVar3 = *(int *)(param_1 + 0x34);
  }
  *(int *)(param_1 + 0x38) = iVar3;
  return;
}



