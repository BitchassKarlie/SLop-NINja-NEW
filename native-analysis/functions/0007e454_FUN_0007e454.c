/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007e454 FUN_0007e454 */

int FUN_0007e454(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0007e4b0;
  iVar3 = DAT_0007e4b4 + 0x7e462;
  if ((*(uint *)(DAT_0007e4b0 + 0x7f030) & 1) == 0) {
    iVar4 = DAT_0007e4b0 + 0x7f030;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      *(undefined2 *)(iVar1 + 0x7f038) = 0;
      *(undefined4 *)(iVar1 + 0x7f048) = 0;
      *(undefined4 *)(iVar1 + 0x7f040) = 0;
      *(undefined4 *)(iVar1 + 0x7f034) = 0;
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0x7f034,DAT_0007e4c0 + 0x7e4aa,*(undefined4 *)(iVar3 + DAT_0007e4bc));
    }
  }
  return DAT_0007e4b8 + 0x7f044;
}



