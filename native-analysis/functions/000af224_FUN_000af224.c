/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af224 FUN_000af224 */

int FUN_000af224(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_000af160(param_1,param_1,0,param_2,*(undefined4 *)(param_2 + 4),param_2,
               *(undefined4 *)(param_2 + 8));
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  FUN_0009e7a4(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



