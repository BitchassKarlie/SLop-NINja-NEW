/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4ee8 FUN_000b4ee8 */

void FUN_000b4ee8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar2 != iVar3) {
    do {
      iVar1 = iVar2 + 4;
      iVar2 = iVar2 + 0x14;
      FUN_000b4ebc(iVar1);
    } while (iVar3 != iVar2);
    iVar3 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x3c) = iVar3;
  return;
}



