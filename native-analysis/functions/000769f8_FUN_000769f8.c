/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000769f8 FUN_000769f8 */

void FUN_000769f8(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc) >> 1;
  if (*(int *)(param_1 + 0xc) << 0x1f < 0) {
    iVar3 = *(int *)(param_1 + 4);
    pcVar2 = *(code **)(*(int *)(iVar3 + iVar1) + *(int *)(param_1 + 8));
  }
  else {
    pcVar2 = *(code **)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 4);
  }
  (*pcVar2)(iVar3 + iVar1);
  return;
}



