/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007832c FUN_0007832c */

int FUN_0007832c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00078370;
  iVar3 = DAT_00078374 + 0x78338;
  if (-1 < *(int *)(DAT_00078370 + 0x78346) << 0x1f) {
    iVar4 = DAT_00078370 + 0x78346;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      FUN_00077728(iVar1 + 0x7834a);
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0x7834a,DAT_00078380 + 0x7836a,*(undefined4 *)(iVar3 + DAT_0007837c));
    }
  }
  return DAT_00078378 + 0x78356;
}



