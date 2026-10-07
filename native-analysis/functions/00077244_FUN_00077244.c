/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077244 FUN_00077244 */

void FUN_00077244(void)

{
  void *__dest;
  undefined4 uVar1;
  int *piVar2;
  undefined auStack_6c [8];
  undefined local_64;
  undefined local_44;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_00077298 + 0x7724e + DAT_0007729c);
  local_14 = *piVar2;
  __dest = operator_new(0x58);
  local_18 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = 0;
  local_44 = 0;
  local_64 = 0;
  memcpy(__dest,auStack_6c,0x58);
  uVar1 = FUN_000a3a68();
  FUN_000a371c(uVar1,0);
  *(void **)__dest = __dest;
  *(void **)((int)__dest + 4) = __dest;
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}



