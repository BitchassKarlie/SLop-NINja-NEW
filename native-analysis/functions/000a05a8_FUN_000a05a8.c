/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a05a8 FUN_000a05a8 */

int FUN_000a05a8(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = (uint *)(DAT_000a05f0 + 0xa05b4);
  iVar4 = DAT_000a05f4 + 0xa05b6;
  if (((*puVar3 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(puVar3), iVar1 = DAT_000a05fc, iVar2 != 0)) {
    iVar2 = DAT_000a05fc + 0xa05d6;
    *(undefined4 *)(DAT_000a05fc + 0xa05da) = 0;
    *(undefined4 *)(iVar1 + 0xa05de) = 0;
    *(undefined4 *)(iVar1 + 0xa05e2) = 0;
    __cxa_guard_release(puVar3);
    __aeabi_atexit(iVar2,DAT_000a0604 + 0xa05e8,*(undefined4 *)(iVar4 + DAT_000a0600));
  }
  return DAT_000a05f8 + 0xa05c2;
}



