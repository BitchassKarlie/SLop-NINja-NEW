/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9260 FUN_000a9260 */

undefined4 *
FUN_000a9260(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  for (uVar3 = (param_5 - param_3 >> 2) * -0x33333333; 0 < (int)uVar3; uVar3 = uVar3 + ~uVar2) {
    uVar4 = *param_6;
    while( true ) {
      uVar2 = (int)uVar3 >> 1;
      iVar1 = FUN_000a7bb0(*(int *)(param_3 + uVar2 * 0x14) + 0xc,uVar4);
      if (iVar1 < 0) break;
      uVar3 = uVar2;
      if ((int)uVar2 < 1) goto LAB_000a92ca;
    }
    param_3 = param_3 + uVar2 * 0x14 + 0x14;
  }
LAB_000a92ca:
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}



