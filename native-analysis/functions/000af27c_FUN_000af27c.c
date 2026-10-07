/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af27c FUN_000af27c */

int FUN_000af27c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_3;
  iVar3 = param_2;
  if (param_3 < param_4) {
    do {
      FUN_000af224(iVar3,uVar1);
      FUN_0009e858(uVar1 + 0x18);
      uVar2 = uVar1 + 0x40;
      FUN_00093a84(uVar1);
      uVar1 = uVar2;
      iVar3 = iVar3 + 0x40;
    } while (uVar2 < param_4);
    param_2 = param_2 + (param_4 + ~param_3 & 0xffffffc0) + 0x40;
  }
  return param_2;
}



