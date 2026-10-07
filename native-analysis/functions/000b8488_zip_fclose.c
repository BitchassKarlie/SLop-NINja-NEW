/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b8488 zip_fclose */

int zip_fclose(int *param_1)

{
  int iVar1;
  int **ppiVar2;
  int iVar3;
  int **ppiVar4;
  
  if (param_1[0xc] != 0) {
    inflateEnd();
  }
  free((void *)param_1[0xb]);
  free((void *)param_1[0xc]);
  iVar1 = *(int *)(*param_1 + 0x34);
  if (0 < iVar1) {
    ppiVar4 = *(int ***)(*param_1 + 0x3c);
    ppiVar2 = ppiVar4;
    if (*ppiVar4 != param_1) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar1) goto LAB_000b84c8;
        ppiVar2 = ppiVar2 + 1;
      } while (*ppiVar2 != param_1);
    }
    *ppiVar2 = ppiVar4[iVar1 + -1];
    *(int *)(*param_1 + 0x34) = *(int *)(*param_1 + 0x34) + -1;
  }
LAB_000b84c8:
  iVar1 = param_1[1];
  if ((iVar1 == 0) && ((param_1[4] & 5U) == 5)) {
    if (param_1[10] == param_1[9]) {
      iVar1 = 0;
    }
    else {
      iVar1 = 7;
    }
  }
  free(param_1);
  return iVar1;
}



