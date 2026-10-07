/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a4ca4 FUN_000a4ca4 */

undefined4 FUN_000a4ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  uVar1 = **(undefined4 **)(DAT_000a4ce0 + 0xa4cb0 + DAT_000a4ce4);
  uVar2 = FUN_000a3cf4(uVar1);
  local_14 = (int)uVar2;
  if (local_14 != 0) {
    local_18 = uVar1;
    local_1c = FUN_000a3d74(uVar1,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
    local_20 = uVar1;
    FUN_000a4c18(&local_20,&local_18,0);
  }
  return 1;
}



