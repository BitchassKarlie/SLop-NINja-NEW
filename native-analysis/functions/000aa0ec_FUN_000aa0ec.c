/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aa0ec FUN_000aa0ec */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000aa0ec(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  while( true ) {
    iVar1 = (param_4 - param_2 >> 2) * -0x33333333;
    local_30 = param_1;
    local_2c = param_2;
    if (iVar1 < 0x21) {
      if (1 < iVar1) {
        local_40 = param_3;
        local_3c = param_4;
        FUN_000a98bc(param_1,param_2,param_3,param_4,0);
      }
      return;
    }
    if (param_5 < 1) break;
    FUN_000a9f34(&local_40,param_1,param_2,param_3,param_4);
    iVar2 = local_34;
    iVar1 = local_3c;
    param_5 = (param_5 >> 2) + (param_5 >> 1);
    if ((local_3c - param_2 >> 2) * -0x33333333 < (param_4 - local_34 >> 2) * -0x33333333) {
      FUN_000aa0ec(param_1,param_2,local_40,local_3c,param_5);
      param_2 = iVar2;
      param_1 = local_38;
    }
    else {
      FUN_000aa0ec(local_38,local_34,param_3,param_4,param_5);
      param_4 = iVar1;
      param_3 = local_40;
    }
  }
  if (0x27 < param_4 - param_2) {
    local_40 = param_3;
    local_3c = param_4;
    FUN_000a9b6c(param_1,param_2,param_3,param_4,0,0);
  }
  local_40 = param_1;
  local_3c = param_2;
  local_30 = param_3;
  local_2c = param_4;
  FUN_000a9cec(param_1,param_2,param_3,param_4);
  return;
}



