/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a89e0 FUN_000a89e0 */

undefined4 FUN_000a89e0(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_20 [4];
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_000ab254(param_1,auStack_20);
  FUN_000a173c(param_2,auStack_20);
  if (local_1c != (void *)0x0) {
    operator_delete(local_1c);
  }
  return param_1;
}



