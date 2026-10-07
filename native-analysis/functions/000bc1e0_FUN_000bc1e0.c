/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc1e0 FUN_000bc1e0 */

undefined4 FUN_000bc1e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
  }
  return uVar1;
}



