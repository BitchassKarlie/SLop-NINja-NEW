/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006e848 FUN_0006e848 */

int FUN_0006e848(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_2 + 8);
  local_1c = *(undefined4 *)(param_2 + 0x10);
  local_18 = local_1c;
  FUN_00095e5c(param_1,&local_1c,0x24);
  uVar2 = FUN_000986bc(&local_1c);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_000986bc(&local_1c);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar1 = FUN_0009871c(&local_1c);
  *(undefined2 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_0009871c(&local_1c);
  *(undefined2 *)(param_1 + 0x1a) = uVar1;
  uVar2 = FUN_000986fc(&local_1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_000986bc(&local_1c);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return param_1;
}



