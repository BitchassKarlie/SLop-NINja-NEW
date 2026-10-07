/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae1f4 FUN_000ae1f4 */

int FUN_000ae1f4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_000ae238;
  iVar3 = DAT_000ae23c + 0xae200;
  if (-1 < *(int *)(DAT_000ae238 + 0xae206) << 0x1f) {
    iVar4 = DAT_000ae238 + 0xae206;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      FUN_000ae1a8(iVar1 + 0xae20a);
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0xae20a,DAT_000ae248 + 0xae232,*(undefined4 *)(iVar3 + DAT_000ae244));
    }
  }
  return DAT_000ae240 + 0xae216;
}



