/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005ccb8 FUN_0005ccb8 */

void FUN_0005ccb8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  FUN_00017d64(param_1 + 0x68,*(undefined4 *)(param_1 + 0xec));
  *(undefined *)(param_1 + 0x70) = 1;
  *(undefined2 *)(param_1 + 0x72) = 0;
  uVar1 = DAT_0005cd3c;
  fVar4 = *(float *)(DAT_0005cd40 + 0x5cce8) * DAT_0005cd38;
  fVar5 = *(float *)(DAT_0005cd40 + 0x5ccec) * DAT_0005cd38;
  *(float *)(param_1 + 0x14) = *(float *)(DAT_0005cd40 + 0x5cce4) * DAT_0005cd38;
  *(float *)(param_1 + 0x18) = fVar4;
  *(float *)(param_1 + 0x1c) = fVar5;
  iVar3 = 0;
  do {
    iVar2 = param_1 + iVar3;
    iVar3 = iVar3 + 4;
    *(undefined4 *)(iVar2 + 0xac) = uVar1;
  } while (iVar3 != 0x40);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xf0);
  return;
}



