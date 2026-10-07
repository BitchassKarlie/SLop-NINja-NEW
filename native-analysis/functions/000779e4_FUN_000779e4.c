/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000779e4 FUN_000779e4 */

int * FUN_000779e4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = DAT_00077a98 + 0x77a0c;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[7] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[5] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[6] = 0;
  }
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[10] = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[8] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete__((void *)param_1[0x14]);
    param_1[0x14] = 0;
  }
  iVar2 = param_1[0xe];
  if (iVar2 != 0) {
    iVar1 = iVar2 + *(int *)(iVar2 + -4) * 4;
    if (iVar2 != iVar1) {
      iVar1 = iVar1 + ~((uint)((iVar1 + -4) - iVar2) >> 2) * 4;
    }
    operator_delete__((void *)(iVar1 + -8));
    param_1[0xe] = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete__((void *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  FUN_00077988(param_1);
  return param_1;
}



