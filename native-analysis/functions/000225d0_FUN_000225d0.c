/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000225d0 FUN_000225d0 */

void FUN_000225d0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  
  iVar1 = DAT_00022664;
  if ((int)((uint)(param_2 < 0.0) << 0x1f) < 0) {
    param_2 = DAT_0002265c;
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x18);
  iVar2 = DAT_00022668;
  *(float *)(param_1 + 0x80) = param_2;
  iVar2 = FUN_0008f414(iVar2 + 0x2260e);
  ppiVar3 = *(int ***)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_0002266c + 0x2261a) +
                      0x2e8);
  if (((ppiVar3 != (int **)0x0) &&
      ((int)((uint)(*(float *)(*(int *)(*(int *)(iVar1 + 0x2260c + DAT_00022670) + 0x50) + 0xf0) -
                    param_2 < DAT_00022660) << 0x1f) < 0)) && (iVar2 != **ppiVar3)) {
    *(int *)(DAT_0002266c + 0x22636) = *(int *)(DAT_0002266c + 0x22636) + -1;
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
  }
  return;
}



