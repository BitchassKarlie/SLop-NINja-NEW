/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000964b0 FUN_000964b0 */

void FUN_000964b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0xac) = 3;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x78);
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x18))();
  uVar1 = DAT_00096514;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x30) - (float)(ulonglong)uVar2;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x10b0) = uVar1;
  return;
}



