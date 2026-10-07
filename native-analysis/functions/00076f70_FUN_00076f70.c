/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076f70 FUN_00076f70 */

void FUN_00076f70(undefined4 param_1,void *param_2)

{
  void *__dest;
  undefined4 uVar1;
  int *piVar2;
  undefined4 ***local_6c;
  undefined4 ***local_68;
  undefined auStack_64 [76];
  undefined4 local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_00076fc0 + 0x76f7a + DAT_00076fc4);
  local_14 = *piVar2;
  __dest = operator_new(0x58);
  memcpy(auStack_64,param_2,0x50);
  local_6c = &local_6c;
  local_68 = local_6c;
  memcpy(__dest,local_6c,0x58);
  uVar1 = FUN_000a3a68();
  FUN_000a371c(uVar1,local_18);
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}



