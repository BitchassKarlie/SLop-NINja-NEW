/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bb58 FUN_0001bb58 */

int FUN_0001bb58(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1020) < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = *(int *)(param_1 + 0x1010);
    iVar2 = 0;
    do {
      piVar1 = (int *)(iVar3 + 8);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
      iVar2 = iVar2 + *piVar1;
    } while (iVar4 != *(int *)(param_1 + 0x1020));
  }
  return iVar2;
}



