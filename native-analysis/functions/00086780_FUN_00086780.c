/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00086780 FUN_00086780 */

int FUN_00086780(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_000867c4;
  iVar3 = DAT_000867c8 + 0x8678c;
  if (-1 < *(int *)(DAT_000867c4 + 0x867ee) << 0x1f) {
    iVar4 = DAT_000867c4 + 0x867ee;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      FUN_000866ac(iVar1 + 0x867f2);
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0x867f2,DAT_000867d4 + 0x867be,*(undefined4 *)(iVar3 + DAT_000867d0));
    }
  }
  return DAT_000867cc + 0x867fe;
}



