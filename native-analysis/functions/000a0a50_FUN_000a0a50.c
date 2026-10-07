/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0a50 FUN_000a0a50 */

int * FUN_000a0a50(int *param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  
  *param_1 = DAT_000a0a80 + 0xa0a62;
  uVar2 = FUN_0009e480(param_2);
  FUN_0009faf4(param_1 + 1,uVar2,0);
  uVar1 = FUN_0009f718(param_1 + 1);
  *(undefined *)(param_1 + 0x11) = uVar1;
  return param_1;
}



