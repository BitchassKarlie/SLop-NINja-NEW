/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006784c FUN_0006784c */

int * FUN_0006784c(int *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  FUN_0004a8dc();
  iVar1 = DAT_000678c0 + 0x67866;
  *param_1 = DAT_000678bc + 0x6786a;
  param_1[0x20] = 0;
  *(undefined *)(param_1 + 0x21) = 0;
  *(undefined *)((int)param_1 + 0x85) = 0;
  *(undefined *)((int)param_1 + 0x86) = 0;
  *(undefined *)((int)param_1 + 0x87) = 0xff;
  FUN_0002fa48(local_14,iVar1);
  FUN_00017d64(param_1 + 0x1a,local_14[0]);
  FUN_00017d90(local_14);
  FUN_0002fa48(&local_18,DAT_000678c4 + 0x6789e);
  FUN_00017d64(param_1 + 0x20,local_18);
  FUN_00017d90(&local_18);
  param_1[10] = 1;
  return param_1;
}



