/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007af4c FUN_0007af4c */

void FUN_0007af4c(int param_1)

{
  int **ppiVar1;
  int local_18;
  int **local_14;
  
  ppiVar1 = (int **)**(int ***)(param_1 + 0x40);
  if (*(int ***)(param_1 + 0x40) != ppiVar1) {
    do {
      FUN_00082490(ppiVar1 + 2);
      ppiVar1 = (int **)*ppiVar1;
    } while (ppiVar1 != *(int ***)(param_1 + 0x40));
  }
  local_14 = (int **)*ppiVar1;
  local_18 = param_1 + 0x3c;
  while (ppiVar1 != local_14) {
    FUN_000797ac(&local_18,param_1 + 0x3c,local_18,local_14);
  }
  return;
}



