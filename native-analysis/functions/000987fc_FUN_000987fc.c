/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000987fc FUN_000987fc */

void FUN_000987fc(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = *(int *)(param_1 + 0xc) - iVar2;
  if (uVar3 < (*(int *)(param_1 + 8) - iVar2) + 1U) {
    if (*(int *)(param_1 + 0xc) == iVar2) {
      if (0xf < uVar3) {
        return;
      }
      uVar1 = 0x10;
    }
    else {
      uVar1 = uVar3 + (uVar3 >> 1);
      if (uVar1 <= uVar3) {
        return;
      }
    }
    FUN_000987c0(param_1,uVar1);
  }
  return;
}



