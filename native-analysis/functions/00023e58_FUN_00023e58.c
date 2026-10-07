/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023e58 FUN_00023e58 */

int FUN_00023e58(int param_1)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  
  FUN_00017d64(param_1 + 0x2c0,0);
  FUN_00017d64(param_1 + 700,0);
  if (*(void **)(param_1 + 0x230) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x230));
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2d8);
  if (iVar1 != 0) {
    iVar2 = iVar1 + *(int *)(iVar1 + -4) * 0xc;
    if (iVar1 != iVar2) {
      do {
        if (*(void **)(iVar2 + -0xc) != (void *)0x0) {
          operator_delete__(*(void **)(iVar2 + -0xc));
          *(undefined4 *)(iVar2 + -0xc) = 0;
          iVar1 = *(int *)(param_1 + 0x2d8);
        }
        iVar2 = iVar2 + -0xc;
      } while (iVar1 != iVar2);
    }
    operator_delete__((void *)(iVar1 + -8));
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  ppvVar3 = *(void ***)(param_1 + 0x2e8);
  if (ppvVar3 != (void **)0x0) {
    if (*ppvVar3 != (void *)0x0) {
      operator_delete__(*ppvVar3);
      *ppvVar3 = (void *)0x0;
    }
    operator_delete(ppvVar3);
    *(undefined4 *)(param_1 + 0x2e8) = 0;
  }
  FUN_00017d90(param_1 + 0x2c0);
  FUN_00017d90(param_1 + 700);
  return param_1;
}



