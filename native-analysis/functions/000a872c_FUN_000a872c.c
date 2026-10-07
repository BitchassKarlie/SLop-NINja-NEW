/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a872c FUN_000a872c */

undefined4 *
FUN_000a872c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_5 - param_3 >> 2;
  while (uVar3 = uVar2, 0 < (int)uVar3) {
    while( true ) {
      uVar2 = (int)uVar3 >> 1;
      iVar1 = FUN_000a86e4(*(int *)(param_3 + uVar2 * 4) + 0x3c,*param_6 + 0x3c);
      if (-1 < iVar1) break;
      param_3 = param_3 + uVar2 * 4 + 4;
      uVar3 = uVar3 + ~uVar2;
      if ((int)uVar3 < 1) goto LAB_000a877e;
    }
  }
LAB_000a877e:
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}



