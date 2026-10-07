/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a57a0 FUN_000a57a0 */

void FUN_000a57a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined auStack_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined auStack_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined auStack_28 [12];
  
  iVar4 = DAT_000a5848 + 0xa57bc;
  local_50 = param_2;
  uStack_4c = param_3;
  FUN_000a5490(auStack_28,&local_50);
  while (iVar1 = FUN_000a55cc(auStack_28), iVar1 != 0) {
    FUN_000a506c(&local_30,auStack_28);
    FUN_000a5740(param_1,local_30,uStack_2c);
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    FUN_000a3654(param_1,0,0,0,0,0);
  }
  else {
    FUN_000a4500(auStack_38);
    pvVar2 = operator_new(0x50);
    FUN_000a36ac(pvVar2,param_1);
    uVar3 = **(undefined4 **)(iVar4 + DAT_000a584c);
    FUN_000a48e8(auStack_48,uVar3,pvVar2);
    local_3c = local_44;
    local_40 = uVar3;
    FUN_000a4ce8(auStack_38,uVar3,local_44);
    FUN_000a3654(param_1,0,0,0,0,0);
  }
  return;
}



