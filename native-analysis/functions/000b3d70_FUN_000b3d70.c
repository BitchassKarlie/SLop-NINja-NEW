/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3d70 FUN_000b3d70 */

int * FUN_000b3d70(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  FUN_000b3bfc();
  puVar1 = &UNK_000b3e04 + DAT_000b3da0;
  *param_1 = (int)&DAT_000b3dd4 + DAT_000b3da0;
  param_1[3] = (int)puVar1;
  param_1[0xb] = 0;
  *(undefined *)(param_1 + 10) = 1;
  FUN_000b3ca8(param_1,param_2);
  return param_1;
}



