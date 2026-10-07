/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004bfcc FUN_0004bfcc */

void FUN_0004bfcc(int param_1)

{
  FUN_00017d64(param_1 + 0x68,0);
  FUN_00017d64(param_1 + 0xbc,0);
  FUN_00017d64(param_1 + 0xc0,0);
  FUN_00017d64(param_1 + 0xc4,0);
  FUN_00017d64(param_1 + 200,0);
  if (*(void **)(param_1 + 0x9c) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}



