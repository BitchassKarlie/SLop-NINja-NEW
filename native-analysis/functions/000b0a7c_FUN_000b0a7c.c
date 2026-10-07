/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b0a7c FUN_000b0a7c */

int FUN_000b0a7c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2;
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(param_2 + 0x44) != 0) {
        iVar5 = FUN_000b085c(param_2 + 0x44);
      }
      iVar2 = *(int *)(param_2 + 0x48);
      if (iVar2 != 0) {
        iVar2 = FUN_000b085c(param_2 + 0x48);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x48);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x48);
          iVar5 = 1;
        }
      }
      uVar3 = *(uint *)(param_2 + 0x44);
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 0x40);
      }
      if ((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 0x40))) {
        uVar3 = *(uint *)(iVar2 + 0x40);
      }
      *(uint *)(param_2 + 0x40) = uVar3 + 1;
      param_2 = *(int *)(param_2 + 0x4c);
    } while (param_2 != 0);
  }
  iVar2 = FUN_000b085c(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar4 + 0x44);
  if (iVar2 != 0) {
    iVar5 = 1;
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)(uVar3 + 0x40);
  }
  if ((*(int *)(iVar4 + 0x48) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar4 + 0x48) + 0x40), uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar4 + 0x40) = uVar3 + 1;
  return iVar5;
}



