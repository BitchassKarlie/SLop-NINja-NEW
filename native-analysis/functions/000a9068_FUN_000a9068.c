/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9068 FUN_000a9068 */

undefined4 FUN_000a9068(undefined4 param_1,int *param_2,int param_3)

{
  void *pvVar1;
  undefined auStack_48 [4];
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined auStack_38 [16];
  undefined *local_28;
  int local_24;
  undefined *local_20;
  int local_1c;
  int local_14;
  
  if (*param_2 == 0x54434645) {
    local_14 = param_2[1];
    FUN_000ab22c(auStack_38,param_2 + 2,param_3 + -8);
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    FUN_000a900c(auStack_38,auStack_48);
    if (local_40 - local_44 >> 2 == 0) {
      FUN_000a867c(param_1);
    }
    else {
      local_1c = local_44;
      local_24 = local_40;
      local_28 = auStack_48;
      local_20 = auStack_48;
      pvVar1 = operator_new(0x48);
      FUN_000a8924(pvVar1,local_20,local_1c,local_28,local_24);
      FUN_000a867c(param_1,pvVar1);
    }
    FUN_000a7dc0(auStack_48);
  }
  else {
    FUN_000a867c(param_1,0);
  }
  return param_1;
}



