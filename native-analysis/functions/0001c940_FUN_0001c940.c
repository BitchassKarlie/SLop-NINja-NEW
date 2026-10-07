/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c940 FUN_0001c940 */

int FUN_0001c940(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_0001c980;
  piVar3 = (int *)(DAT_0001c980 + 0x1c94a);
  iVar4 = DAT_0001c984 + 0x1c94c;
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    FUN_0001c8ac(iVar1 + 0x1c94e);
    __cxa_guard_release(piVar3);
    __aeabi_atexit(iVar1 + 0x1c94e,DAT_0001c990 + 0x1c97a,*(undefined4 *)(iVar4 + DAT_0001c98c));
  }
  return DAT_0001c988 + 0x1c95a;
}



