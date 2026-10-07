/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4f5c FUN_000b4f5c */

void FUN_000b4f5c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0xc) != *param_2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    FUN_000b4d98(param_1 + 0xc,*param_2,*(int *)(param_1 + 0xc),iVar2);
    FUN_000b4ee8(param_1);
    piVar4 = *(int **)(param_1 + 0x48);
    for (ppiVar3 = (int **)*piVar4; (int **)piVar4 != ppiVar3; ppiVar3 = (int **)*ppiVar3) {
      piVar1 = (int *)(ppiVar3 + 2);
      if (*(char *)(ppiVar3 + 10) != '\0') {
        piVar1 = ppiVar3[2];
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
      }
    }
  }
  return;
}



