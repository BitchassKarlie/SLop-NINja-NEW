/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3780 FUN_000b3780 */

int FUN_000b3780(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_18;
  void *local_14;
  
  local_18 = 0;
  do {
    iVar2 = FUN_000a7ae4(param_1,&local_18);
  } while (iVar2 != 0);
  FUN_000a7a20(&local_18);
  local_14 = *(void **)(param_1 + 4);
  iVar2 = FUN_000b6ab4((void **)(param_1 + 4),0,local_14);
  if (iVar2 != 0) {
    FUN_000b6ab4(param_1,0,local_14);
  }
  pvVar1 = local_14;
  if (local_14 != (void *)0x0) {
    FUN_000a7a20((int)local_14 + 8);
    operator_delete(pvVar1);
  }
  return param_1;
}



