/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a2e68 FUN_000a2e68 */

undefined4 * FUN_000a2e68(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  uVar3 = *(undefined4 *)(DAT_000a2ecc + 0xa2e70 + DAT_000a2ed0);
  FUN_000a7488(uVar3);
  uVar1 = FUN_000a05a8();
  local_1c[0] = *(undefined4 *)(DAT_000a2ed4 + 0xa2e8a);
  puVar2 = (undefined4 *)FUN_000a223c(uVar1,local_1c);
  puVar2 = (undefined4 *)*puVar2;
  FUN_000a748c(uVar3);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_000a068c(param_1,0);
  }
  else {
    (**(code **)*puVar2)(&local_20,puVar2,param_2);
    *param_1 = 0;
    FUN_000a09a8(param_1,local_20);
    FUN_000a1438(&local_20);
  }
  return param_1;
}



