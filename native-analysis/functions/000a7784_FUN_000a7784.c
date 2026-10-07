/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a7784 FUN_000a7784 */

int FUN_000a7784(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(DAT_000a77c4 + 0xa778e);
  iVar3 = DAT_000a77c8 + 0xa7790;
  if ((-1 < *piVar2 << 0x1f) && (iVar1 = __cxa_guard_acquire(piVar2), iVar1 != 0)) {
    iVar1 = DAT_000a77d0 + 0xa77aa;
    FUN_000b38f0(iVar1);
    __cxa_guard_release(piVar2);
    __aeabi_atexit(iVar1,*(undefined4 *)(iVar3 + DAT_000a77d4),*(undefined4 *)(iVar3 + DAT_000a77d8)
                  );
  }
  return DAT_000a77cc + 0xa779a;
}



