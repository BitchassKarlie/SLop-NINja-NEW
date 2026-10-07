/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004a130 FUN_0004a130 */

void FUN_0004a130(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  FUN_00055f40(param_2);
  *(undefined4 *)(param_1 + 0x24) = DAT_0004a1c8;
  ppiVar4 = (int **)**(int ***)(param_1 + 4);
  if (ppiVar4 != *(int ***)(param_1 + 4)) {
    do {
      piVar2 = ppiVar4[2];
      if (*(char *)(piVar2 + 9) != '\0') {
        (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
        piVar2 = ppiVar4[2];
      }
      if (*(char *)((int)piVar2 + 0x27) == '\0') {
        ppiVar3 = *(int ***)(param_1 + 4);
        ppiVar5 = (int **)*ppiVar4;
      }
      else {
        piVar1 = piVar2 + 0xb;
        if (*(char *)(piVar2 + 0x13) != '\0') {
          piVar1 = (int *)piVar2[0xb];
        }
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))();
          piVar2 = ppiVar4[2];
        }
        if (*(char *)((int)piVar2 + 0x26) == '\0') {
          (**(code **)(*piVar2 + 4))(piVar2);
          ppiVar4[2] = (int *)0x0;
        }
        ppiVar3 = *(int ***)(param_1 + 4);
        ppiVar5 = ppiVar3;
        if (ppiVar3 != ppiVar4) {
          ppiVar5 = (int **)*ppiVar4;
          *ppiVar4[1] = (int)ppiVar5;
          (*ppiVar4)[1] = (int)ppiVar4[1];
          operator_delete(ppiVar4);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          ppiVar3 = *(int ***)(param_1 + 4);
        }
      }
      ppiVar4 = ppiVar5;
    } while (ppiVar5 != ppiVar3);
  }
  return;
}



