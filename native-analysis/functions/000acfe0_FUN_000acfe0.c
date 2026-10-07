/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000acfe0 FUN_000acfe0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000acfe0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint in_stack_ffffff90;
  uint in_stack_ffffff94;
  uint uVar3;
  uint3 uVar4;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  while( true ) {
    iVar2 = param_4 - param_2 >> 4;
    uVar4 = (uint3)(in_stack_ffffff90 >> 8);
    if (iVar2 < 0x21) {
      if (1 < iVar2) {
        FUN_000ac870(param_1,param_2,param_3,param_4,(uint)uVar4 << 8);
      }
      return;
    }
    if ((int)param_5 < 1) break;
    uVar3 = in_stack_ffffff94 & 0xffffff00;
    FUN_000accfc(&local_40,param_1,param_2,param_3,param_4,uVar3);
    iVar1 = local_34;
    iVar2 = local_3c;
    param_5 = ((int)param_5 >> 2) + ((int)param_5 >> 1);
    uVar4 = (uint3)(uVar3 >> 8);
    in_stack_ffffff90 = param_5;
    if (local_3c - param_2 >> 4 < param_4 - local_34 >> 4) {
      in_stack_ffffff94 = (uint)uVar4 << 8;
      FUN_000acfe0(param_1,param_2,local_40,local_3c,param_5,in_stack_ffffff94);
      param_2 = iVar1;
      param_1 = local_38;
    }
    else {
      in_stack_ffffff94 = (uint)uVar4 << 8;
      FUN_000acfe0(local_38,local_34,param_3,param_4,param_5,in_stack_ffffff94);
      param_4 = iVar2;
      param_3 = local_40;
    }
  }
  if (0x1f < param_4 - param_2) {
    in_stack_ffffff90 = (uint)uVar4 << 8;
    local_40 = param_1;
    local_3c = param_2;
    local_30 = param_3;
    local_2c = param_4;
    FUN_000acabc(param_1,param_2,param_3,param_4,in_stack_ffffff90,0,0);
  }
  local_40 = param_3;
  local_3c = param_4;
  local_30 = param_1;
  local_2c = param_2;
  FUN_000acf5c(param_1,param_2,param_3,param_4,in_stack_ffffff90 & 0xffffff00);
  return;
}



