/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a27c FUN_0007a27c */

void FUN_0007a27c(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24 [2];
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0xb4) != 0) {
      iVar1 = FUN_00055e9c();
      local_30 = *param_4;
      local_2c = param_4[1];
      local_28 = param_4[2];
      local_24[0] = param_3;
      FUN_00017d64(local_24,*(undefined4 *)(param_1 + 0xb4));
      FUN_00056f04(iVar1,&local_30,0,local_24);
      FUN_00017d90(local_24);
      *(undefined4 *)(iVar1 + 0x28) = 1;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_0002f550(-*(int *)(*(int *)(param_1 + 0x98) + 4));
    }
  }
  ppiVar3 = *(int ***)(param_1 + 8);
  ppiVar4 = (int **)*ppiVar3;
  if (ppiVar3 != ppiVar4) {
    do {
      while (piVar2 = ppiVar4[2], *(char *)(piVar2 + 6) != '\0') {
        ppiVar4 = (int **)*ppiVar4;
        if (ppiVar4 == ppiVar3) goto LAB_0007a312;
      }
      (**(code **)(*piVar2 + 0x14))(piVar2,param_3,param_5);
      ppiVar3 = *(int ***)(param_1 + 8);
      ppiVar4 = (int **)*ppiVar4;
    } while (ppiVar4 != ppiVar3);
  }
LAB_0007a312:
  if ((*(int *)(param_1 + 0xb8) != 0) && (param_2 != 0)) {
    FUN_0008107c();
  }
  return;
}



