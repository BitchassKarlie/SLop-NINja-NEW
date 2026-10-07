/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030984 FUN_00030984 */

void FUN_00030984(int *param_1,void *param_2)

{
  int iVar1;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  if ((void *)param_1[1] == param_2) {
    iVar1 = *(int *)((int)param_2 + 0x24);
    if (iVar1 != 0) {
      param_1[1] = iVar1;
      *(undefined4 *)(iVar1 + 0x20) = 0;
      goto LAB_000309a2;
    }
  }
  else {
    if ((void *)param_1[2] != param_2) {
      *(undefined4 *)(*(int *)((int)param_2 + 0x20) + 0x24) = *(undefined4 *)((int)param_2 + 0x24);
      *(undefined4 *)(*(int *)((int)param_2 + 0x24) + 0x20) = *(undefined4 *)((int)param_2 + 0x20);
      goto LAB_000309a2;
    }
    iVar1 = *(int *)((int)param_2 + 0x20);
    if (iVar1 != 0) {
      param_1[2] = iVar1;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      goto LAB_000309a2;
    }
  }
  param_1[1] = iVar1;
  param_1[2] = iVar1;
LAB_000309a2:
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



