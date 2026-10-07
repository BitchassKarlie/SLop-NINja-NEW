/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a804c FUN_000a804c */

undefined4 *
FUN_000a804c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_4;
  if (param_4 != param_6) {
    do {
      iVar3 = iVar2 + 0xc;
      FUN_000a08c8(iVar2);
      iVar2 = iVar3;
    } while (iVar3 != param_6);
    uVar1 = FUN_000a7f70(param_2,param_4,iVar3,*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 8) = uVar1;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



