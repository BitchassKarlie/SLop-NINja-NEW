/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031e20 FUN_00031e20 */

undefined4 FUN_00031e20(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = DAT_00031e7c + 0x31e30;
  if (*(int *)(param_1 + 4) - 0x89U < 0x10) {
    FUN_0002a574(*(undefined4 *)(DAT_00031e80 + (*(byte *)(param_1 + 4) - 0x89) * 4 + 0x31ed8),
                 param_1);
    iVar1 = *(int *)(iVar2 + DAT_00031e84) + (*(int *)(param_1 + 4) + -0x89) * 0xc;
    fVar3 = *(float *)(iVar1 + 0xac);
    iVar2 = (uint)(fVar3 < 0.0) << 0x1f;
    if (iVar2 < 0) {
      fVar3 = DAT_00031e74;
    }
    if (-1 < iVar2) {
      fVar3 = DAT_00031e78;
    }
    *(float *)(iVar1 + 0xac) = fVar3;
  }
  return 1;
}



