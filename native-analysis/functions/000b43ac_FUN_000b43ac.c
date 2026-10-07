/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b43ac FUN_000b43ac */

undefined4 FUN_000b43ac(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(param_2 + 8) - iVar4 >> 4 == iVar5 - iVar3 >> 4) {
    for (; iVar5 != iVar3; iVar3 = iVar3 + 0x10) {
      iVar2 = FUN_000b433c(iVar3,iVar4);
      if (iVar2 == 0) goto LAB_000b43c2;
      if (((*(int *)(iVar3 + 4) != *(int *)(iVar4 + 4)) && (*(int *)(iVar3 + 4) != 0)) &&
         (*(int *)(iVar4 + 4) != 0)) goto LAB_000b43c2;
      iVar4 = iVar4 + 0x10;
    }
    uVar1 = 1;
  }
  else {
LAB_000b43c2:
    uVar1 = 0;
  }
  return uVar1;
}



