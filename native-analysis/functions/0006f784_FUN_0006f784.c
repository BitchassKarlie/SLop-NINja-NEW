/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006f784 FUN_0006f784 */

int FUN_0006f784(int param_1,int param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_2 + 8);
  local_1c = *(undefined4 *)(param_2 + 0x10);
  local_18 = local_1c;
  FUN_00095e5c(param_1,&local_1c,0x28);
  uVar2 = FUN_000986bc(&local_1c);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_000986bc(&local_1c);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_000986bc(&local_1c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_000986fc(&local_1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_000986bc(&local_1c);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar1 = FUN_00098748(&local_1c);
  *(undefined *)(param_1 + 0x24) = uVar1;
  return param_1;
}



