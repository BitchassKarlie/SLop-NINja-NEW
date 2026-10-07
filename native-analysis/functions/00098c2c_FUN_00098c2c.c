/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098c2c FUN_00098c2c */

void FUN_00098c2c(int *param_1,void *param_2)

{
  int iVar1;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  if ((void *)param_1[1] == param_2) {
    iVar1 = *(int *)((int)param_2 + 8);
    if (iVar1 != 0) {
      param_1[1] = iVar1;
      *(undefined4 *)(iVar1 + 4) = 0;
      goto LAB_00098c4a;
    }
  }
  else {
    if ((void *)param_1[2] != param_2) {
      *(undefined4 *)(*(int *)((int)param_2 + 4) + 8) = *(undefined4 *)((int)param_2 + 8);
      *(undefined4 *)(*(int *)((int)param_2 + 8) + 4) = *(undefined4 *)((int)param_2 + 4);
      goto LAB_00098c4a;
    }
    iVar1 = *(int *)((int)param_2 + 4);
    if (iVar1 != 0) {
      param_1[2] = iVar1;
      *(undefined4 *)(iVar1 + 8) = 0;
      goto LAB_00098c4a;
    }
  }
  param_1[1] = iVar1;
  param_1[2] = iVar1;
LAB_00098c4a:
  if (*(short *)((int)param_1 + 0x12) == 1) {
    if (*param_1 == 0) {
      operator_delete(param_2);
    }
    else {
      FUN_00093040();
    }
  }
  iVar1 = param_1[3];
  param_1[3] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    *(undefined2 *)((int)param_1 + 0x12) = 0;
  }
  return;
}



