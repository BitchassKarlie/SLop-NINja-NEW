/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b72c FUN_0007b72c */

int FUN_0007b72c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0007b770;
  iVar3 = DAT_0007b774 + 0x7b738;
  if (-1 < *(int *)(DAT_0007b770 + 0x7b73a) << 0x1f) {
    iVar4 = DAT_0007b770 + 0x7b73a;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      FUN_0007b6c0(iVar1 + 0x7b73e);
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0x7b73e,DAT_0007b780 + 0x7b768,*(undefined4 *)(iVar3 + DAT_0007b77c));
    }
  }
  return DAT_0007b778 + 0x7b74a;
}



