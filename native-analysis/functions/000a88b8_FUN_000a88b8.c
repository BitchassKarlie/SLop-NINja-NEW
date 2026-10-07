/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a88b8 FUN_000a88b8 */

void FUN_000a88b8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_38 [8];
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  
  local_24 = *(undefined4 *)(param_1 + 0x20);
  local_2c = *(undefined4 *)(param_1 + 0x24);
  iVar3 = param_1 + 0x1c;
  local_30 = iVar3;
  local_28 = iVar3;
  FUN_000a872c(&local_20,iVar3,local_24,iVar3,local_2c,param_2,0);
  if ((*(int **)(param_1 + 0x24) == local_1c) ||
     (iVar1 = FUN_000a86e4(*local_1c + 0x3c,*param_2 + 0x3c), iVar1 != 0)) {
    uVar2 = FUN_000b463c(*param_2);
    iVar1 = FUN_000a880c(param_1,uVar2);
    if (iVar1 != 0) {
      FUN_000a85c0(auStack_38,iVar3,local_20,local_1c,param_2);
    }
  }
  return;
}



