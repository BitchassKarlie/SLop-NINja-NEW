/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006591c FUN_0006591c */

int * FUN_0006591c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00065978 + 0x6592c;
  *param_1 = DAT_00065974 + 0x65932;
  if (param_1[0x24] != 0) {
    iVar2 = *(int *)(iVar2 + DAT_0006597c);
    FUN_00073984(*(undefined4 *)(iVar2 + 0x18c),param_1[0x24],
                 *(undefined4 *)(DAT_00065980 + 0x65940 + param_1[0x26] * 4));
    uVar1 = DAT_00065970;
    param_1[0x24] = 0;
    **(undefined4 **)(iVar2 + 0x18c) = uVar1;
  }
  FUN_00017d64(param_1 + 0x1a,0);
  FUN_0004a8a4(param_1);
  return param_1;
}



