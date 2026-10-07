/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac34c FUN_000ac34c */

void FUN_000ac34c(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int local_8c;
  undefined auStack_88 [68];
  undefined auStack_44 [40];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000ac3d4 + 0xac354 + DAT_000ac3d8);
  local_1c = *piVar1;
  *param_1 = 0;
  FUN_0009e838(param_1 + 1,0);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_000ab824(auStack_44,param_2);
  FUN_0009e770(param_1 + 1,auStack_44);
  FUN_0009e858(auStack_44);
  FUN_000a0a50(&local_8c,param_2);
  FUN_000ac114(param_1,&local_8c);
  local_8c = DAT_000ac3dc + 0xac3ba;
  FUN_0009f378(auStack_88);
  FUN_000ab448(auStack_88);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



