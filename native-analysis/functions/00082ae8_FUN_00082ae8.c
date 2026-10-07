/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082ae8 FUN_00082ae8 */

int * FUN_00082ae8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = DAT_00082b3c + 0x82af8;
  if (*(char *)(param_1 + 4) != '\0') {
    if ((void *)param_1[0xc] != (void *)0x0) {
      operator_delete__((void *)param_1[0xc]);
      param_1[0xc] = 0;
    }
    if ((void *)param_1[0xd] != (void *)0x0) {
      operator_delete__((void *)param_1[0xd]);
      param_1[0xd] = 0;
    }
    iVar2 = param_1[8];
    if (iVar2 != 0) {
      iVar1 = iVar2 + *(int *)(iVar2 + -4) * 4;
      if (iVar2 != iVar1) {
        iVar1 = iVar1 + ~((uint)((iVar1 + -4) - iVar2) >> 2) * 4;
      }
      operator_delete__((void *)(iVar1 + -8));
      param_1[8] = 0;
    }
  }
  return param_1;
}



