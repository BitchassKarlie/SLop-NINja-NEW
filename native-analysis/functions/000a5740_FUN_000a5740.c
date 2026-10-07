/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5740 FUN_000a5740 */

void FUN_000a5740(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_40;
  int local_3c;
  undefined auStack_34 [4];
  void *local_30;
  undefined auStack_20 [12];
  
  local_40 = param_2;
  local_3c = param_3;
  if (param_3 == 0) {
    FUN_000a3654(param_1,0,0,0,0,0);
  }
  else {
    FUN_000a5120(auStack_20,&local_40);
    FUN_000a5654(auStack_34,auStack_20);
    uVar2 = FUN_000a41fc(&local_40);
    uVar1 = FUN_000a4014(&local_40);
    FUN_000a3654(param_1,local_30,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar1,0);
    if (local_30 != (void *)0x0) {
      operator_delete(local_30);
    }
  }
  return;
}



