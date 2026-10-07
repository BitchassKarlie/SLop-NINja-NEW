/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3da4 FUN_000b3da4 */

undefined4 * FUN_000b3da4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_000b3bfc();
  iVar1 = DAT_000b3dd4 + 0xb3e38;
  *param_1 = &UNK_000b3e08 + DAT_000b3dd4;
  param_1[3] = iVar1;
  param_1[0xb] = 0;
  *(undefined *)(param_1 + 10) = 1;
  FUN_000b3ca8(param_1,param_2);
  return param_1;
}



