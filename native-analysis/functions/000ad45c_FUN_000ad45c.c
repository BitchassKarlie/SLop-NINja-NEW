/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad45c FUN_000ad45c */

void FUN_000ad45c(int param_1,int param_2,int **param_3)

{
  int iVar1;
  int **ppiVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_000ad4e4;
  iVar3 = DAT_000ad4e0 + 0xad46a;
  local_2c = **(int **)(iVar3 + DAT_000ad4e4);
  ppiVar6 = *(int ***)(param_1 + 8);
  ppiVar4 = (int **)*ppiVar6;
  if (ppiVar6 != ppiVar4) {
    do {
      while (piVar5 = ppiVar4[2], param_2 == piVar5[1]) {
        local_50[0] = 0;
        local_30 = 1;
        ppiVar2 = param_3;
        if (*(char *)(param_3 + 8) != '\0') {
          ppiVar2 = (int **)*param_3;
        }
        if (ppiVar2 != (int **)0x0) {
          (**(code **)((int)*ppiVar2 + 8))(ppiVar2,local_50);
        }
        FUN_000ad43c(piVar5,local_50);
        FUN_0002ee58(local_50);
        ppiVar4 = (int **)*ppiVar4;
        if (ppiVar6 == ppiVar4) goto LAB_000ad4ca;
      }
      ppiVar4 = (int **)*ppiVar4;
    } while (ppiVar6 != ppiVar4);
  }
LAB_000ad4ca:
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



