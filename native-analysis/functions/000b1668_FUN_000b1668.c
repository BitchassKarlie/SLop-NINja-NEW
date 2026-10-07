/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1668 FUN_000b1668 */

undefined4 * FUN_000b1668(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  FUN_000a1260(param_1,*param_2);
  if (param_2[2] == 0) {
    param_1[2] = 0;
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_000b1620(param_1 + 1);
    param_1[2] = iVar2;
    iVar3 = iVar2;
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar3 = iVar1;
      iVar2 = *(int *)(iVar1 + 0x34);
    }
  }
  param_1[3] = iVar3;
  param_1[4] = param_2[4];
  return param_1;
}



