/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5028 FUN_000a5028 */

undefined4 FUN_000a5028(void)

{
  undefined4 uVar1;
  undefined auStack_24 [4];
  void *local_20;
  undefined4 local_10;
  int local_c;
  
  uVar1 = **(undefined4 **)(DAT_000a5064 + 0xa5030 + DAT_000a5068);
  local_c = FUN_000a3de0(uVar1);
  if (local_c != 0) {
    local_10 = uVar1;
    FUN_000a4ef4(auStack_24,&local_10);
    FUN_000a4df4(&local_10,0);
    if (local_20 != (void *)0x0) {
      operator_delete(local_20);
    }
  }
  return 1;
}



