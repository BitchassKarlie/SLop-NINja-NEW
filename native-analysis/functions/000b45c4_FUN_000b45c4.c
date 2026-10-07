/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b45c4 FUN_000b45c4 */

int * FUN_000b45c4(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_000b698c();
  puVar2 = &UNK_000b460a + DAT_000b45fc;
  *param_1 = DAT_000b45fc + 0xb45de;
  param_1[3] = (int)puVar2;
  iVar1 = FUN_000b41f0(param_1 + 7);
  param_1[9] = 0;
  iVar3 = DAT_000b4600 + 0xb4624;
  *param_1 = DAT_000b4600 + 0xb45f4;
  param_1[3] = iVar3;
  param_1[8] = iVar1;
  return param_1;
}



