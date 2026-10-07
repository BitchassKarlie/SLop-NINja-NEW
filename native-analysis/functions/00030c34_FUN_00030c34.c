/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030c34 FUN_00030c34 */

void FUN_00030c34(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar1 = iVar2 + *(int *)(iVar2 + -4) * 0x28;
    if (iVar2 != iVar1) {
      iVar1 = iVar1 + (((uint)((iVar1 + -0x28) - iVar2) >> 3) * 0xccccccd & 0x1fffffff) * -0x28 +
                      -0x28;
    }
    operator_delete__((void *)(iVar1 + -8));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



