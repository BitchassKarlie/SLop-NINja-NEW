/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007555c FUN_0007555c */

int FUN_0007555c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_000755a0;
  iVar3 = DAT_000755a4 + 0x75568;
  if (-1 < *(int *)(DAT_000755a0 + 0x7557a) << 0x1f) {
    iVar4 = DAT_000755a0 + 0x7557a;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      FUN_00075538(iVar1 + 0x7557e);
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0x7557e,DAT_000755b0 + 0x7559a,*(undefined4 *)(iVar3 + DAT_000755ac));
    }
  }
  return DAT_000755a8 + 0x7558a;
}



