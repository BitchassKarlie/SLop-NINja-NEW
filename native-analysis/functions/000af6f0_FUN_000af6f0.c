/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af6f0 FUN_000af6f0 */

void FUN_000af6f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar1 = *(int **)(DAT_000af77c + 0xaf6f8 + DAT_000af780);
  local_1c = *piVar1;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_0009e838(&local_54,0);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_000af68c(param_1,param_2,&local_54);
  FUN_00093aa4(&uStack_2c);
  FUN_0009e858(&local_54);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



