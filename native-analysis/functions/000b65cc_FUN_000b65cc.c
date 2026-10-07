/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b65cc FUN_000b65cc */

int FUN_000b65cc(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_50 [4];
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_40 [4];
  undefined4 local_3c;
  int local_38;
  undefined auStack_34 [4];
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = FUN_000b559c(param_1,param_2,&local_2c);
  local_38 = local_28;
  local_3c = local_2c;
  if (local_24 == 0) {
    FUN_000b520c(auStack_50,param_2,&local_24);
    FUN_000b6470(auStack_34,param_1,local_3c,local_38,auStack_50);
    FUN_000a0778(auStack_40);
    if (local_4c != (void *)0x0) {
      operator_delete(local_4c);
      local_4c = (void *)0x0;
      local_48 = 0;
      local_44 = 0;
    }
    FUN_000a0778(&local_24);
    local_28 = local_30;
  }
  return local_28 + 0x10;
}



