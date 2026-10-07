/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a93c FUN_0009a93c */

int FUN_0009a93c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_2 != 0) && (iVar3 = *(int *)(param_2 + 0x10), iVar3 == param_1)) {
    if (param_3[5] != 0) {
      iVar1 = (**(code **)(*param_3 + 0x40))(param_3);
      if (iVar1 == 0) {
        return 0;
      }
      *(int *)(iVar1 + 0x10) = iVar3;
      *(int *)(iVar1 + 0x24) = param_2;
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x28) != 0) {
        *(int *)(*(int *)(param_2 + 0x28) + 0x24) = iVar1;
        *(int *)(param_2 + 0x28) = iVar1;
        return iVar1;
      }
      *(int *)(iVar3 + 0x1c) = iVar1;
      *(int *)(param_2 + 0x28) = iVar1;
      return iVar1;
    }
    iVar1 = FUN_0009a138(iVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_0009a138(iVar3);
      FUN_0009d4f8(uVar2,0x10,0,0,0);
      return 0;
    }
  }
  return 0;
}



