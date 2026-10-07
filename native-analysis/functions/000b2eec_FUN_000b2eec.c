/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b2eec FUN_000b2eec */

int FUN_000b2eec(int param_1,int param_2)

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
      if (*(int *)(param_2 + 0x30) != 0) {
        iVar5 = FUN_000b2ccc(param_2 + 0x30);
      }
      iVar2 = *(int *)(param_2 + 0x34);
      if (iVar2 != 0) {
        iVar2 = FUN_000b2ccc(param_2 + 0x34);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x34);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x34);
          iVar5 = 1;
        }
      }
      uVar3 = *(uint *)(param_2 + 0x30);
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 0x2c);
      }
      if ((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 0x2c))) {
        uVar3 = *(uint *)(iVar2 + 0x2c);
      }
      *(uint *)(param_2 + 0x2c) = uVar3 + 1;
      param_2 = *(int *)(param_2 + 0x38);
    } while (param_2 != 0);
  }
  iVar2 = FUN_000b2ccc(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar4 + 0x30);
  if (iVar2 != 0) {
    iVar5 = 1;
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)(uVar3 + 0x2c);
  }
  if ((*(int *)(iVar4 + 0x34) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar4 + 0x34) + 0x2c), uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar4 + 0x2c) = uVar3 + 1;
  return iVar5;
}



