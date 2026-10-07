/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3e6c FUN_000b3e6c */

int * FUN_000b3e6c(int *param_1)

{
  int iVar1;
  undefined auStack_14 [8];
  
  iVar1 = DAT_000b3ec0 + 0xb3ef8;
  *param_1 = (int)(&UNK_000b3ec8 + DAT_000b3ec0);
  param_1[3] = iVar1;
  FUN_000b3c3c(auStack_14);
  FUN_000b3ca8(param_1,auStack_14);
  FUN_000a09d4(auStack_14);
  FUN_000a09d4(param_1 + 0xb);
  iVar1 = DAT_000b3ec4 + 0xb3ee0;
  *param_1 = DAT_000b3ec4 + 0xb3eb0;
  param_1[3] = iVar1;
  FUN_000a0090(param_1 + 7);
  FUN_000b679c(param_1);
  return param_1;
}



