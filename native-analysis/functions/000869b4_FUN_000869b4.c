/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000869b4 FUN_000869b4 */

void FUN_000869b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 != iVar2) {
    do {
      if (*(void **)(iVar1 + 4) != (void *)0x0) {
        operator_delete(*(void **)(iVar1 + 4));
        *(undefined4 *)(iVar1 + 8) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      iVar1 = iVar1 + 0x10;
    } while (iVar2 != iVar1);
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = iVar2;
  FUN_0008696c(param_1,param_1,iVar1,param_2,param_3,param_4,param_5);
  return;
}



