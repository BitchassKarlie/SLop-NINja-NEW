/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049c2c FUN_00049c2c */

void FUN_00049c2c(int param_1,int param_2)

{
  int *piVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_24 = *(undefined4 *)(DAT_00049ca4 + 0x49c36);
  uStack_20 = *(undefined4 *)(DAT_00049ca4 + 0x49c3a);
  uStack_1c = *(undefined4 *)(DAT_00049ca4 + 0x49c3e);
  ppiVar2 = *(int ***)(param_1 + 4);
  ppiVar3 = (int **)*ppiVar2;
  if (ppiVar2 != ppiVar3) {
    do {
      while ((piVar1 = ppiVar3[2], *(char *)(piVar1 + 9) != '\0' && (piVar1[10] == param_2))) {
        if (*(char *)(piVar1 + 0x15) == '\0') {
          (**(code **)(*piVar1 + 0x18))(piVar1,&local_24);
          (**(code **)(*ppiVar3[2] + 0x1c))(ppiVar3[2],&local_24);
          ppiVar2 = *(int ***)(param_1 + 4);
          break;
        }
        (**(code **)(*piVar1 + 0x18))(piVar1,param_1 + 0xc);
        (**(code **)(*ppiVar3[2] + 0x1c))(ppiVar3[2],param_1 + 0xc);
        ppiVar2 = *(int ***)(param_1 + 4);
        ppiVar3 = (int **)*ppiVar3;
        if (ppiVar3 == ppiVar2) {
          return;
        }
      }
      ppiVar3 = (int **)*ppiVar3;
    } while (ppiVar3 != ppiVar2);
  }
  return;
}



