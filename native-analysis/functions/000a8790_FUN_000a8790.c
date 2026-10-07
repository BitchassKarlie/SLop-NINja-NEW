/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8790 FUN_000a8790 */

undefined4 *
FUN_000a8790(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_5 - param_3 >> 2) * -0x55555555;
  while (uVar3 = uVar2, 0 < (int)uVar3) {
    while( true ) {
      uVar2 = (int)uVar3 >> 1;
      iVar1 = FUN_000a86e4(*(int *)(param_3 + uVar2 * 0xc) + 0xc,*param_6 + 0xc);
      if (-1 < iVar1) break;
      param_3 = param_3 + uVar2 * 0xc + 0xc;
      uVar3 = uVar3 + ~uVar2;
      if ((int)uVar3 < 1) goto LAB_000a87fa;
    }
  }
LAB_000a87fa:
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}



