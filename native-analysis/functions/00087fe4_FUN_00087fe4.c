/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00087fe4 FUN_00087fe4 */

int FUN_00087fe4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + -4) * 0x68 + iVar3;
    iVar2 = iVar1;
    if (iVar3 != iVar1) {
      do {
        iVar1 = iVar1 + -0x68;
        FUN_00022424(iVar1);
        iVar2 = *(int *)(param_1 + 8);
      } while (*(int *)(param_1 + 8) != iVar1);
    }
    operator_delete__((void *)(iVar2 + -8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  ppvVar4 = *(void ***)(param_1 + 0x70);
  if (ppvVar4 != (void **)0x0) {
    if (*ppvVar4 != (void *)0x0) {
      operator_delete__(*ppvVar4);
      *ppvVar4 = (void *)0x0;
    }
    operator_delete(ppvVar4);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  FUN_000223ec(param_1 + 0x54);
  return param_1;
}



