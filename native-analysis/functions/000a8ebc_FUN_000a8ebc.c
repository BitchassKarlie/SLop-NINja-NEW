/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8ebc FUN_000a8ebc */

void FUN_000a8ebc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined auStack_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) != iVar2) {
    do {
      iVar1 = iVar3 + 0x30;
      FUN_000a898c(iVar3);
      iVar3 = iVar1;
    } while (iVar2 != iVar1);
    iVar2 = *(int *)(param_2 + 4);
  }
  *(int *)(param_2 + 8) = iVar2;
  FUN_000a8698(param_1,&local_24);
  FUN_000a8e90(param_2,local_24);
  if (local_24 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      local_50 = 0;
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(param_2 + 4) + iVar3;
      local_4c = 0;
      local_48 = 0;
      local_40 = 0;
      iVar3 = iVar3 + 0x30;
      local_3c = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      FUN_000a8c3c(iVar2,auStack_54);
      FUN_000a898c(auStack_54);
      FUN_000ab254(param_1,iVar2);
      FUN_000a8aa4(param_1,iVar2 + 0x10);
      FUN_000a8a24(param_1,iVar2 + 0x20);
    } while (uVar4 < local_24);
  }
  return;
}



