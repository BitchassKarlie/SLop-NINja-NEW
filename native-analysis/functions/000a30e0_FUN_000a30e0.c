/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a30e0 FUN_000a30e0 */

void FUN_000a30e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4 [8];
  undefined local_94;
  undefined4 local_90 [8];
  undefined local_70;
  undefined4 local_6c [8];
  undefined local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  piVar1 = *(int **)(DAT_000a31ec + 0xa30ee + DAT_000a31f0);
  local_48[0] = 0;
  local_28 = 1;
  local_24 = *piVar1;
  local_bc = DAT_000a31f4 + 0xa3118;
  local_b8 = DAT_000a31f8 + 0xa311c;
  (**(code **)(DAT_000a31f4 + 0xa3120))(&local_bc,local_48);
  local_bc = DAT_000a31fc + 0xa312e;
  FUN_000a229c(local_48);
  FUN_0009fc6c(local_48);
  local_6c[0] = 0;
  local_c4 = DAT_000a3200 + 0xa3144;
  local_c0 = DAT_000a3204 + 0xa314c;
  local_4c = 1;
  (**(code **)(DAT_000a3200 + 0xa314c))(&local_c4,local_6c);
  local_c4 = DAT_000a3208 + 0xa3162;
  FUN_000a236c(local_6c);
  FUN_0009fc9c(local_6c);
  local_90[0] = 0;
  local_cc = DAT_000a320c + 0xa3178;
  local_c8 = DAT_000a3210 + 0xa3180;
  local_70 = 1;
  (**(code **)(DAT_000a320c + 0xa3180))(&local_cc,local_90);
  local_cc = DAT_000a3214 + 0xa3196;
  FUN_000a243c(local_90);
  FUN_0009fccc(local_90);
  local_b4[0] = 0;
  local_d4 = DAT_000a3218 + 0xa31ac;
  local_d0 = DAT_000a321c + 0xa31b4;
  local_94 = 1;
  (**(code **)(DAT_000a3218 + 0xa31b4))(&local_d4,local_b4);
  local_d4 = DAT_000a3220 + 0xa31ca;
  FUN_000a250c(local_b4);
  FUN_0009fcfc(local_b4);
  FUN_000a305c(param_1,param_3);
  if (local_24 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



