/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be990 FUN_000be990 */

int * FUN_000be990(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  piVar1 = (int *)malloc(0x58);
  iVar2 = FUN_000c28b4(param_2,8);
  *piVar1 = iVar2;
  iVar2 = FUN_000c28b4(param_2,0x10);
  piVar1[1] = iVar2;
  iVar2 = FUN_000c28b4(param_2,0x10);
  piVar1[2] = iVar2;
  iVar2 = FUN_000c28b4(param_2,6);
  piVar1[3] = iVar2;
  iVar2 = FUN_000c28b4(param_2,8);
  piVar1[4] = iVar2;
  iVar2 = FUN_000c28b4(param_2,4);
  piVar1[5] = iVar2 + 1;
  if ((((*piVar1 < 1) || (piVar1[1] < 1)) || (piVar1[2] < 1)) || (iVar2 + 1 < 1)) {
LAB_000bea1c:
    FUN_000be7b4(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = 0;
    piVar4 = piVar1;
    do {
      iVar3 = FUN_000c28b4(param_2,8);
      piVar4[6] = iVar3;
      if ((iVar3 < 0) || (*(int *)(iVar5 + 0x1c) <= iVar3)) goto LAB_000bea1c;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < piVar1[5]);
  }
  return piVar1;
}



