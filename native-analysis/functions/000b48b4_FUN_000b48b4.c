/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b48b4 FUN_000b48b4 */

void FUN_000b48b4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_1c;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) != iVar2) {
    do {
      iVar1 = iVar3 + 0x28;
      FUN_000a7d48(iVar3);
      iVar3 = iVar1;
    } while (iVar2 != iVar1);
    iVar2 = *(int *)(param_2 + 4);
  }
  *(int *)(param_2 + 8) = iVar2;
  FUN_000a8698(param_1,&local_1c);
  FUN_000b487c(param_2,local_1c);
  if (local_1c != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(param_2 + 4) + iVar3;
      iVar3 = iVar3 + 0x28;
      FUN_000a8a10(param_1,iVar2);
      FUN_000a8a10(param_1,iVar2 + 8);
      FUN_000a8a10(param_1,iVar2 + 0x10);
      FUN_000a8a10(param_1,iVar2 + 0x18);
      FUN_000a8a10(param_1,iVar2 + 0x20);
    } while (uVar4 < local_1c);
  }
  return;
}



