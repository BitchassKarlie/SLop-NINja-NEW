/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00075738 FUN_00075738 */

void FUN_00075738(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_7 - param_5 >> 3) * -0x3d70a3d7;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_00075680(param_1,param_3,iVar1,0xc28f5c29,param_2), param_7 != param_5)) {
    do {
      iVar2 = param_5 + 200;
      FUN_000750d4(iVar1,param_5);
      iVar1 = iVar1 + 200;
      param_5 = iVar2;
    } while (param_7 != iVar2);
  }
  return;
}



