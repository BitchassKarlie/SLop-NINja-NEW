/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00096be0 FUN_00096be0 */

int * FUN_00096be0(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *param_1 = DAT_00096cc0 + 0x96bf0;
  FUN_00096b60(param_1 + 1);
  iVar1 = DAT_00096ca8;
  param_1[0x25] = DAT_00096ca8;
  param_1[0x26] = iVar1;
  param_1[0x27] = iVar1;
  param_1[0x28] = iVar1;
  param_1[0x2b] = 0;
  param_1[0x42c] = iVar1;
  param_1[0x42e] = iVar1;
  param_1[0x42f] = 0;
  iVar2 = DAT_00096cac;
  param_1[0x431] = iVar1;
  param_1[0x430] = iVar2;
  *(undefined *)(param_1 + 0x432) = 0;
  param_1[0x434] = iVar1;
  fVar3 = DAT_00096cb0;
  param_1[0x11] = 0xf0;
  param_1[0xf] = -0xf0;
  param_1[0x10] = 0xa0;
  param_1[0x12] = -0xa0;
  fVar3 = (float)param_1[0xb] + (float)(ulonglong)(uint)param_1[0xe] * fVar3;
  param_1[0x15] = -9999;
  param_1[0x13] = -9999;
  param_1[0x14] = -9999;
  param_1[0x16] = -9999;
  param_1[0x17] = (int)fVar3;
  param_1[0x19] = (int)(fVar3 + (float)(ulonglong)(uint)param_1[0xe]);
  fVar3 = DAT_00096cb8;
  fVar4 = (float)param_1[0xc] + DAT_00096cb4;
  param_1[0x18] = (int)fVar4;
  param_1[0x1a] = (int)(fVar4 - fVar3);
  *(undefined *)((int)param_1 + 0x10c9) = 0;
  param_1[0x433] = (int)((float)param_1[0x1b] * DAT_00096cbc);
  return param_1;
}



