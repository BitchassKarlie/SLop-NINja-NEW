/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098cb0 FUN_00098cb0 */

void FUN_00098cb0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      FUN_00098c8c(param_1,*puVar1);
    }
    FUN_00098be8(param_1 + 4);
  }
  return;
}



