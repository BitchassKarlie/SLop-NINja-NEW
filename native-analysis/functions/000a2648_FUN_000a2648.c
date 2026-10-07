/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a2648 FUN_000a2648 */

undefined4 * FUN_000a2648(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  uVar3 = *(undefined4 *)(DAT_000a26a8 + 0xa2650 + DAT_000a26ac);
  FUN_000a7488(uVar3);
  uVar1 = FUN_000a05a8();
  local_1c[0] = *(undefined4 *)(DAT_000a26b0 + 0xa266a);
  puVar2 = (undefined4 *)FUN_000a223c(uVar1,local_1c);
  puVar2 = (undefined4 *)*puVar2;
  FUN_000a748c(uVar3);
  if (puVar2 == (undefined4 *)0x0) {
    *param_1 = 0;
  }
  else {
    (**(code **)*puVar2)(&local_20,puVar2,param_2);
    *param_1 = 0;
    FUN_000a0928(param_1,local_20);
    FUN_000a1438(&local_20);
  }
  return param_1;
}



