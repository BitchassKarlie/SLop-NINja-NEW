/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3f18 FUN_000a3f18 */

void FUN_000a3f18(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 param_5;
  undefined auStack_24 [12];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined local_c;
  
  local_c = 1;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_000a3ef0(auStack_24,**(undefined4 **)(DAT_000a3f58 + 0xa3f2c + DAT_000a3f5c),in_r3);
  uVar1 = FUN_000a3a68();
  FUN_00094abc(uVar1,local_18,param_5,0);
  if (local_18 != (void *)0x0) {
    operator_delete(local_18);
  }
  return;
}



