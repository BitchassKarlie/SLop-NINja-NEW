/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000794e4 FUN_000794e4 */

float FUN_000794e4(int param_1,float param_2)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  ppiVar1 = *(int ***)(param_1 + 0x14);
  ppiVar3 = (int **)*ppiVar1;
  fVar6 = DAT_00079578;
  if (ppiVar1 != ppiVar3) {
    piVar2 = (int *)0x0;
    do {
      piVar4 = ppiVar3[2];
      fVar5 = (float)piVar4[0x29];
      if (((fVar5 == 0.0 || fVar5 < 0.0 != NAN(fVar5)) || (*(char *)((int)piVar4 + 0x95) != '\0'))
         || ((piVar4[0x26] != 0 && (*(int *)(piVar4[0x26] + 4) != 0)))) {
        piVar4 = piVar2;
      }
      piVar2 = piVar4;
      ppiVar3 = (int **)*ppiVar3;
    } while (ppiVar1 != ppiVar3);
    if (piVar2 != (int *)0x0) {
      fVar6 = DAT_00079574;
      if (param_2 == 0.0 || param_2 < 0.0 != NAN(param_2)) {
        fVar5 = (float)piVar2[0x29];
        if (fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)) {
          fVar6 = (float)piVar2[0x28] / fVar5;
        }
      }
      else {
        fVar5 = (float)piVar2[0x29];
        if (fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)) {
          fVar6 = ((float)piVar2[0x28] - param_2) / fVar5;
        }
      }
    }
  }
  return fVar6;
}



