/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bdb8 FUN_0001bdb8 */

undefined4 FUN_0001bdb8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_3 + 4);
  *(int *)(param_3 + 4) = iVar2;
  if (iVar2 == *(int *)(*(int *)(param_1 + 0x1010) + param_2 * 0xc + 4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  return uVar1;
}



