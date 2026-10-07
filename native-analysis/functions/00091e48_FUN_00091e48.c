/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00091e48 FUN_00091e48 */

void FUN_00091e48(int param_1,undefined4 param_2,int **param_3)

{
  int iVar1;
  int **ppiVar2;
  int iVar3;
  int **ppiVar4;
  int **ppiVar5;
  int *piVar6;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_00091ec8;
  iVar3 = DAT_00091ec4 + 0x91e58;
  local_2c = **(int **)(iVar3 + DAT_00091ec8);
  ppiVar5 = *(int ***)(param_1 + 8);
  ppiVar4 = (int **)*ppiVar5;
  if (ppiVar5 != ppiVar4) {
    do {
      piVar6 = ppiVar4[2];
      local_30 = 1;
      local_50[0] = 0;
      ppiVar2 = param_3;
      if (*(char *)(param_3 + 8) != '\0') {
        ppiVar2 = (int **)*param_3;
      }
      if (ppiVar2 != (int **)0x0) {
        (**(code **)((int)*ppiVar2 + 8))(ppiVar2,local_50);
      }
      FUN_000ad45c(piVar6,param_2,local_50);
      FUN_0002ee58(local_50);
      ppiVar4 = (int **)*ppiVar4;
    } while (ppiVar5 != ppiVar4);
  }
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



