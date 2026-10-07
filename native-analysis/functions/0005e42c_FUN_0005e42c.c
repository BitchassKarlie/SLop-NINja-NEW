/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005e42c FUN_0005e42c */

int * FUN_0005e42c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14 [2];
  
  FUN_0004a8dc();
  iVar3 = DAT_0005e4b8;
  iVar2 = DAT_0005e4b4;
  iVar1 = DAT_0005e4a4;
  param_1[8] = DAT_0005e4a4;
  param_1[0x1d] = iVar1;
  *(undefined *)(param_1 + 1) = 1;
  *param_1 = iVar2 + 0x5e44c;
  param_1[0x20] = DAT_0005e4a8;
  param_1[0x25] = 0;
  param_1[0x1f] = 0;
  iVar1 = DAT_0005e4ac;
  param_1[0x26] = 0;
  param_1[0x21] = iVar1;
  param_1[0x3b] = 0;
  iVar1 = DAT_0005e4b0;
  param_1[0x3c] = 0;
  param_1[0x27] = iVar1;
  FUN_0002fa48(local_14,iVar3 + 0x5e484);
  FUN_00017d64(param_1 + 0x3b,local_14[0]);
  FUN_00017d90(local_14);
  FUN_0005ccb8(param_1);
  return param_1;
}



