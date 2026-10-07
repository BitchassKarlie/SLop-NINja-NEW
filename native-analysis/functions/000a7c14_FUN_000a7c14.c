/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a7c14 FUN_000a7c14 */

undefined4 *
FUN_000a7c14(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_5 - param_3 >> 2;
  while (uVar3 = uVar2, 0 < (int)uVar3) {
    while( true ) {
      uVar2 = (int)uVar3 >> 1;
      iVar4 = param_3 + uVar2 * 4;
      iVar1 = FUN_000a7c04(iVar4,*param_6);
      if (iVar1 == 0) break;
      param_3 = iVar4 + 4;
      uVar3 = uVar3 + ~uVar2;
      if ((int)uVar3 < 1) goto LAB_000a7c62;
    }
  }
LAB_000a7c62:
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}



