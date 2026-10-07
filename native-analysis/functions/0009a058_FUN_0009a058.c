/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a058 FUN_0009a058 */

int FUN_0009a058(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_2[4] == param_1) {
    iVar1 = (**(code **)(*param_3 + 0x40))(param_3);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x28) = param_2[10];
      *(int *)(iVar1 + 0x24) = param_2[9];
      if (param_2[10] == 0) {
        *(int *)(param_1 + 0x1c) = iVar1;
      }
      else {
        *(int *)(param_2[10] + 0x24) = iVar1;
      }
      if (param_2[9] == 0) {
        *(int *)(param_1 + 0x18) = iVar1;
      }
      else {
        *(int *)(param_2[9] + 0x28) = iVar1;
      }
      (**(code **)(*param_2 + 4))(param_2);
      *(int *)(iVar1 + 0x10) = param_1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



