/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001e818 FUN_0001e818 */

int FUN_0001e818(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(DAT_0001e858 + 0x1e822);
  iVar3 = DAT_0001e85c + 0x1e824;
  if ((-1 < *piVar2 << 0x1f) && (iVar1 = __cxa_guard_acquire(piVar2), iVar1 != 0)) {
    iVar1 = DAT_0001e864 + 0x1e83e;
    FUN_00093ce0(iVar1);
    __cxa_guard_release(piVar2);
    __aeabi_atexit(iVar1,*(undefined4 *)(iVar3 + DAT_0001e868),*(undefined4 *)(iVar3 + DAT_0001e86c)
                  );
  }
  return DAT_0001e860 + 0x1e82e;
}



