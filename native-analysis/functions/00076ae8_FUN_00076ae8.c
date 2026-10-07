/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076ae8 FUN_00076ae8 */

undefined4 FUN_00076ae8(int param_1,undefined4 param_2,void *param_3,void *param_4,void *param_5)

{
  int **ppiVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  piVar2 = (int *)FUN_0008f414(param_2);
  ppiVar7 = *(int ***)(param_1 + 4);
  ppiVar5 = (int **)*ppiVar7;
  if (ppiVar7 == ppiVar5) {
LAB_00076b16:
    uVar3 = 0;
  }
  else {
    piVar4 = ppiVar5[0x12];
    ppiVar1 = ppiVar7;
    while (piVar2 != piVar4) {
      ppiVar6 = (int **)*ppiVar5;
      if (ppiVar7 == ppiVar6) goto LAB_00076b16;
      ppiVar1 = ppiVar5;
      ppiVar5 = ppiVar6;
      piVar4 = ppiVar6[0x12];
    }
    memcpy(param_3,ppiVar5 + 2,0x50);
    piVar2 = *(int **)(param_1 + 4);
    if (((int **)piVar2 != ppiVar1) && (param_4 != (void *)0x0)) {
      memcpy(param_4,ppiVar1 + 2,0x50);
      piVar2 = *(int **)(param_1 + 4);
    }
    if (*ppiVar5 != piVar2) {
      memcpy(param_5,*ppiVar5 + 2,0x50);
    }
    uVar3 = 1;
  }
  return uVar3;
}



