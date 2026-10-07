/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006e1cc FUN_0006e1cc */

int * FUN_0006e1cc(void)

{
  int **ppiVar1;
  int *piVar2;
  
  ppiVar1 = (int **)(DAT_0006e200 + 0x6e1d4);
  piVar2 = *ppiVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x100);
    FUN_00098da0();
    *piVar2 = DAT_0006e204 + 0x6e1f6;
    *(undefined *)(piVar2 + 0x3f) = 0;
    *(undefined *)((int)piVar2 + 0xfd) = 0;
    *ppiVar1 = piVar2;
  }
  return piVar2;
}



