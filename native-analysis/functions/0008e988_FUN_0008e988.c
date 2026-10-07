/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e988 FUN_0008e988 */

int FUN_0008e988(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_0008e9c8;
  piVar3 = (int *)(DAT_0008e9c8 + 0x8e992);
  iVar4 = DAT_0008e9cc + 0x8e994;
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    FUN_0008e90c(iVar1 + 0x8e996);
    __cxa_guard_release(piVar3);
    __aeabi_atexit(iVar1 + 0x8e996,DAT_0008e9d8 + 0x8e9c2,*(undefined4 *)(iVar4 + DAT_0008e9d4));
  }
  return DAT_0008e9d0 + 0x8e9a2;
}



