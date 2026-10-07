/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1504 FUN_000b1504 */

void FUN_000b1504(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x68) = param_2;
  iVar5 = *(int *)(param_1 + 0x38);
  iVar1 = (*(int *)(param_1 + 0x3c) - iVar5 >> 2) * -0xf0f0f0f;
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar4 = 0;
    while( true ) {
      iVar5 = iVar5 + iVar3;
      iVar4 = iVar4 + 1;
      uVar2 = FUN_0009476c(param_2,iVar5);
      iVar3 = iVar3 + 0x44;
      *(undefined4 *)(iVar5 + 0x40) = uVar2;
      if (iVar4 == iVar1) break;
      iVar5 = *(int *)(param_1 + 0x38);
    }
  }
  return;
}



