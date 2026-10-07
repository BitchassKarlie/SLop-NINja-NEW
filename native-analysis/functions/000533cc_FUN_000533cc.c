/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000533cc FUN_000533cc */

void FUN_000533cc(int param_1,float param_2)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  
  ppiVar1 = *(int ***)(param_1 + 0x104);
  fVar8 = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x110);
  ppiVar3 = (int **)*ppiVar1;
  if (ppiVar1 != ppiVar3) {
    do {
      piVar2 = ppiVar3[2];
      if (piVar2 != (int *)0x0) {
        piVar2[8] = (int)((float)piVar2[8] + param_2 * (float)ppiVar3[3]);
        piVar6 = ppiVar3[8];
        piVar4 = ppiVar3[9];
        fVar5 = *(float *)(param_1 + 0xc);
        fVar7 = *(float *)(param_1 + 0x10);
        piVar2 = ppiVar3[2];
        piVar2[2] = (int)(*(float *)(param_1 + 8) + fVar8 * (float)ppiVar3[7]);
        piVar2[3] = (int)(fVar5 + fVar8 * (float)piVar6);
        piVar2[4] = (int)(fVar7 + fVar8 * (float)piVar4);
        piVar4 = ppiVar3[5];
        piVar6 = ppiVar3[6];
        piVar2 = ppiVar3[2];
        piVar2[5] = (int)(fVar8 * (float)ppiVar3[4]);
        piVar2[6] = (int)(fVar8 * (float)piVar4);
        piVar2[7] = (int)(fVar8 * (float)piVar6);
        ppiVar1 = *(int ***)(param_1 + 0x104);
      }
      ppiVar3 = (int **)*ppiVar3;
    } while (ppiVar3 != ppiVar1);
  }
  return;
}



