/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3a10 FUN_000a3a10 */

int FUN_000a3a10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_000a3a54;
  iVar3 = DAT_000a3a58 + 0xa3a1c;
  if (-1 < *(int *)(DAT_000a3a54 + 0xa3a1e) << 0x1f) {
    iVar4 = DAT_000a3a54 + 0xa3a1e;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      FUN_000a39ec(iVar1 + 0xa3a22);
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0xa3a22,DAT_000a3a64 + 0xa3a4c,*(undefined4 *)(iVar3 + DAT_000a3a60));
    }
  }
  return DAT_000a3a5c + 0xa3a2e;
}



