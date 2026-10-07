/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a9fc FUN_0009a9fc */

int * FUN_0009a9fc(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2[5] == 0) {
    (**(code **)(*param_2 + 4))();
    param_2 = (int *)FUN_0009a138(param_1);
    if (param_2 != (int *)0x0) {
      uVar1 = FUN_0009a138(param_1);
      FUN_0009d4f8(uVar1,0x10,0,0,0);
      param_2 = (int *)0x0;
    }
  }
  else {
    param_2[4] = param_1;
    param_2[9] = *(int *)(param_1 + 0x1c);
    param_2[10] = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(int **)(param_1 + 0x18) = param_2;
    }
    else {
      *(int **)(*(int *)(param_1 + 0x1c) + 0x28) = param_2;
    }
    *(int **)(param_1 + 0x1c) = param_2;
  }
  return param_2;
}



