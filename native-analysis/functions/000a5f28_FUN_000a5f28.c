/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5f28 FUN_000a5f28 */

int FUN_000a5f28(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_000a5f68;
  piVar3 = (int *)(DAT_000a5f68 + 0xa5f32);
  iVar4 = DAT_000a5f6c + 0xa5f34;
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    FUN_000a5f10(iVar1 + 0xa5f36);
    __cxa_guard_release(piVar3);
    __aeabi_atexit(iVar1 + 0xa5f36,DAT_000a5f78 + 0xa5f62,*(undefined4 *)(iVar4 + DAT_000a5f74));
  }
  return DAT_000a5f70 + 0xa5f42;
}



