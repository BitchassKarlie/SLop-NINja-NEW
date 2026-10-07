/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003f06c FUN_0003f06c */

int * FUN_0003f06c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  *param_1 = DAT_0003f0b0 + 0x3f07c;
  FUN_0003efb4();
  piVar3 = param_1 + 0x7a;
  do {
    uVar2 = FUN_000a3a68();
    piVar1 = piVar3 + -1;
    piVar3 = piVar3 + -0x14;
    FUN_000a371c(uVar2,*piVar1);
  } while (piVar3 != param_1 + 0x3e);
  FUN_00017d90(param_1 + 0x34);
  FUN_00017d90(param_1 + 0x20);
  FUN_0004a8a4(param_1);
  return param_1;
}



