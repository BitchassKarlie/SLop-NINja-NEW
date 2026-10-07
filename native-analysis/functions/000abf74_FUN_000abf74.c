/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abf74 FUN_000abf74 */

void FUN_000abf74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_7 - param_5 >> 2;
  iVar1 = iVar2 * 0x286bca1b;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_000abea0(param_1,param_3,iVar1,iVar2 * 0x3600,param_2), param_7 != param_5)) {
    do {
      iVar2 = param_5 + 0x4c;
      FUN_000abfc8(iVar1,param_5);
      iVar1 = iVar1 + 0x4c;
      param_5 = iVar2;
    } while (param_7 != iVar2);
  }
  return;
}



