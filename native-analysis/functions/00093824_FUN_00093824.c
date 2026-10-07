/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093824 FUN_00093824 */

int * FUN_00093824(int **param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2 + 3U & 0xfffffffc;
  if (*(short *)((int)param_1 + 0x96) == 0) {
    piVar2 = param_1[2];
    iVar4 = *(ushort *)(param_1 + 0x25) + 8 + uVar3;
    if ((int *)(iVar4 + (int)piVar2) < param_1[3]) {
      if (*(ushort *)(param_1 + 0x25) == 0) {
        piVar1 = piVar2 + 2;
      }
      else {
        piVar1 = piVar2 + 3;
        piVar2[2] = -0x21523f22;
        *(undefined4 *)((int)piVar1 + uVar3) = 0xdeadc0de;
      }
      piVar2 = param_1[2];
      *piVar2 = iVar4;
      piVar2[1] = param_3;
      param_1[2] = (int *)((int)param_1[2] + iVar4);
    }
    else {
      for (piVar1 = *param_1; piVar1 < piVar2; piVar1 = (int *)((int)piVar1 + *piVar1)) {
      }
      piVar1 = (int *)0x0;
    }
  }
  else {
    piVar1 = param_1[2];
    if ((int *)(uVar3 + (int)piVar1) < param_1[3]) {
      param_1[2] = (int *)(uVar3 + (int)piVar1);
    }
    else {
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}



