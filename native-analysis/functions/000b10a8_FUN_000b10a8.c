/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b10a8 FUN_000b10a8 */

void FUN_000b10a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int local_94;
  int local_90;
  undefined auStack_8c [76];
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  piVar1 = *(int **)(DAT_000b1120 + 0xb10b4 + DAT_000b1124);
  local_1c = *piVar1;
  local_20 = 1;
  local_40[0] = 0;
  local_94 = DAT_000b1128 + 0xb10da;
  local_90 = DAT_000b112c + 0xb10de;
  (**(code **)(DAT_000b1128 + 0xb10e2))(&local_94,local_40);
  local_94 = DAT_000b1130 + 0xb10f0;
  FUN_000b0f68(local_40);
  FUN_000ae878(local_40);
  FUN_000ac34c(auStack_8c,param_3);
  FUN_000b1038(param_1,auStack_8c);
  FUN_000abe04(auStack_8c);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



