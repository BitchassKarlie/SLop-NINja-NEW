/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9bf8 FUN_000a9bf8 */

void FUN_000a9bf8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6,undefined4 *param_7)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_000a07fc(param_6,*param_2);
  *(undefined4 *)(param_6 + 4) = param_2[1];
  *(undefined4 *)(param_6 + 8) = param_2[2];
  *(undefined4 *)(param_6 + 0xc) = param_2[3];
  *(undefined4 *)(param_6 + 0x10) = param_2[4];
  local_2c = 0;
  FUN_000a07fc(&local_2c,*param_7);
  local_28 = param_7[1];
  local_24 = param_7[2];
  local_20 = param_7[3];
  local_1c = param_7[4];
  FUN_000a9a7c(param_1,param_2,0,(param_4 - (int)param_2 >> 2) * -0x33333333,&local_2c);
  FUN_000a08c8(&local_2c);
  return;
}



