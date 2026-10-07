/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5850 FUN_000a5850 */

void FUN_000a5850(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_000a588c;
  iVar3 = DAT_000a5888 + 0xa585c;
  puVar4 = *(undefined4 **)(iVar3 + DAT_000a588c);
  *puVar4 = param_1;
  if (param_2 != 0) {
    local_20 = param_1;
    local_1c = param_2;
    uVar2 = FUN_000a409c(&local_20);
    FUN_000a57a0(uVar2,*puVar4,param_3);
  }
  **(undefined4 **)(iVar3 + iVar1) = 0;
  return;
}



