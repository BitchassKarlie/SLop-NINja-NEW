/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abe70 FUN_000abe70 */

undefined4 FUN_000abe70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined auStack_18 [4];
  undefined4 *local_14;
  undefined4 *local_10;
  
  (**(code **)*param_1)(auStack_18,param_1,4);
  uVar1 = *local_14;
  local_10 = local_14;
  if (local_14 != (undefined4 *)0x0) {
    operator_delete(local_14);
  }
  return uVar1;
}



