/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000438cc FUN_000438cc */

void FUN_000438cc(int param_1)

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
    iVar1 = *(int *)(param_1 + 4);
    pcVar3 = *(code **)(param_1 + 8);
  }
  (*pcVar3)(iVar1 + iVar2);
  return;
}



