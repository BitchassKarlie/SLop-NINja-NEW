/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094864 FUN_00094864 */

undefined4 * FUN_00094864(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  ppiVar4 = *(int ***)(param_2 + 0x3c);
  ppiVar3 = *(int ***)(param_2 + 0x38);
  while( true ) {
    if (ppiVar4 == ppiVar3) {
      *param_1 = 0;
      return param_1;
    }
    uVar1 = (**(code **)(**ppiVar3 + 0xc))();
    iVar2 = FUN_0009e5e0(uVar1,param_3);
    if (iVar2 != 0) break;
    ppiVar3 = ppiVar3 + 1;
  }
  *param_1 = 0;
  FUN_00094838(param_1,*ppiVar3);
  return param_1;
}



