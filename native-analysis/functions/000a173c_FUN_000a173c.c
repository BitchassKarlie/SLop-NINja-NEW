/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a173c FUN_000a173c */

void FUN_000a173c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)operator_new(0x1c);
  iVar3 = DAT_000a17ac + 0xa175a;
  piVar1[1] = 0;
  piVar1[2] = 0;
  *piVar1 = iVar3;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc) - iVar6;
  if (iVar3 == -1) {
    FUN_00017cb8(piVar1 + 3,0xffffffff);
  }
  else {
    FUN_00017cb8(piVar1 + 3,iVar3);
    if (iVar3 == 0) goto LAB_000a1776;
  }
  iVar4 = piVar1[4];
  iVar2 = (piVar1[5] + -1) - iVar4;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      iVar2 = iVar2 + -1;
      *(undefined *)(iVar4 + iVar5) = *(undefined *)(iVar6 + iVar5);
      if (iVar2 == 0) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar3);
    iVar4 = piVar1[4];
  }
  piVar1[6] = iVar4 + iVar3;
LAB_000a1776:
  FUN_000a07fc(param_1,piVar1);
  return;
}



