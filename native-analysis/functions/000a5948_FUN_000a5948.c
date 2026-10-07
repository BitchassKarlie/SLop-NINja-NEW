/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5948 FUN_000a5948 */

void FUN_000a5948(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined auStack_3c [4];
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined auStack_28 [8];
  undefined auStack_20 [8];
  
  local_48 = param_2;
  uStack_44 = param_3;
  FUN_000a5328(auStack_20,&local_48);
  while (iVar1 = FUN_000a5544(auStack_20), iVar1 != 0) {
    while( true ) {
      FUN_000a53dc(auStack_28,auStack_20);
      FUN_000a5654(auStack_3c,auStack_28);
      FUN_000a3654(param_1,local_38,0,0,0,0);
      if (local_38 == (void *)0x0) break;
      operator_delete(local_38);
      local_34 = 0;
      local_30 = 0;
      local_38 = (void *)0x0;
      iVar1 = FUN_000a5544(auStack_20);
      if (iVar1 == 0) goto LAB_000a59ae;
    }
  }
LAB_000a59ae:
  FUN_000a3654(param_1,iVar1,0,0,iVar1,iVar1);
  return;
}



