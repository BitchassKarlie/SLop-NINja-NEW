/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005fd38 FUN_0005fd38 */

void FUN_0005fd38(int param_1)

{
  uint *puVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  
  puVar1 = *(uint **)(DAT_0005fd80 + 0x5fd40 + DAT_0005fd84);
  *puVar1 = *puVar1 & 0xffffffbf;
  ppiVar2 = *(int ***)(param_1 + 0xac);
  ppiVar4 = *(int ***)(param_1 + 0xa8);
  if (*(int ***)(param_1 + 0xa8) != ppiVar2) {
    do {
      ppiVar2 = ppiVar4 + 1;
      piVar3 = *ppiVar4;
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      (**(code **)(*piVar3 + 4))(piVar3);
      ppiVar4 = ppiVar2;
    } while (ppiVar2 != *(int ***)(param_1 + 0xac));
    ppiVar2 = *(int ***)(param_1 + 0xa8);
  }
  *(int ***)(param_1 + 0xac) = ppiVar2;
  return;
}



