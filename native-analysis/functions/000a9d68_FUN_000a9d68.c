/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9d68 FUN_000a9d68 */

void FUN_000a9d68(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_24 = 0;
  FUN_000a07fc(&local_24,*param_1);
  local_20 = param_1[1];
  local_1c = param_1[2];
  local_18 = param_1[3];
  local_14 = param_1[4];
  FUN_000a07fc(param_1,*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  FUN_000a07fc(param_2,local_24);
  param_2[1] = local_20;
  param_2[2] = local_1c;
  param_2[3] = local_18;
  param_2[4] = local_14;
  FUN_000a08c8(&local_24);
  return;
}



