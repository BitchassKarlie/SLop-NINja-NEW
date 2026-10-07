/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000794a4 FUN_000794a4 */

int FUN_000794a4(int param_1)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  float fVar5;
  
  ppiVar2 = *(int ***)(param_1 + 0x14);
  ppiVar4 = (int **)*ppiVar2;
  if (ppiVar2 == ppiVar4) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      piVar3 = ppiVar4[2];
      fVar5 = (float)piVar3[0x29];
      if (((fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)) && (*(char *)((int)piVar3 + 0x95) == '\0'))
         && ((piVar3[0x26] == 0 || (*(int *)(piVar3[0x26] + 4) == 0)))) {
        iVar1 = iVar1 + 1;
      }
      ppiVar4 = (int **)*ppiVar4;
    } while (ppiVar2 != ppiVar4);
  }
  return iVar1;
}



