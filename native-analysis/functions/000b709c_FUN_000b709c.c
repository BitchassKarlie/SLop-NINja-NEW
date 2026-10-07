/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b709c FUN_000b709c */

void FUN_000b709c(undefined4 *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = (*param_2)(param_3,&local_18,8,4);
  if (iVar1 < 8) {
    *param_1 = 0x14;
    param_1[1] = 0;
  }
  else {
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}



