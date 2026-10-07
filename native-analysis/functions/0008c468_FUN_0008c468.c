/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008c468 FUN_0008c468 */

undefined4 FUN_0008c468(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) != 0) {
    uVar1 = FUN_000a7c78(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),
                         *(undefined4 *)(param_2 + 4));
  }
  return uVar1;
}



