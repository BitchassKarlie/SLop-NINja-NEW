/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006117c FUN_0006117c */

void FUN_0006117c(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0xc) >> 1;
  if (*(int *)(param_1 + 0xc) << 0x1f < 0) {
    iVar1 = *(int *)(param_1 + 4);
    pcVar3 = *(code **)(*(int *)(iVar1 + iVar2) + *(int *)(param_1 + 8));
  }
  else {
    pcVar3 = *(code **)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 4);
  }
  (*pcVar3)(iVar1 + iVar2);
  return;
}



