/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a0a8 FUN_0009a0a8 */

undefined4 FUN_0009a0a8(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2[4] == param_1) {
    if (param_2[10] == 0) {
      *(int *)(param_1 + 0x1c) = param_2[9];
    }
    else {
      *(int *)(param_2[10] + 0x24) = param_2[9];
    }
    if (param_2[9] == 0) {
      *(int *)(param_1 + 0x18) = param_2[10];
    }
    else {
      *(int *)(param_2[9] + 0x28) = param_2[10];
    }
    (**(code **)(*param_2 + 4))(param_2);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



