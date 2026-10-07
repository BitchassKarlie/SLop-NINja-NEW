/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f800 FUN_0009f800 */

int FUN_0009f800(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0009f84c;
  iVar3 = DAT_0009f850 + 0x9f80e;
  if ((*(uint *)(DAT_0009f84c + 0x9f81c) & 1) == 0) {
    iVar4 = DAT_0009f84c + 0x9f81c;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x9f824) = 0;
      *(undefined4 *)(iVar1 + 0x9f828) = 0;
      *(undefined4 *)(iVar1 + 0x9f82c) = 0;
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0x9f820,DAT_0009f85c + 0x9f844,*(undefined4 *)(iVar3 + DAT_0009f858));
    }
  }
  return DAT_0009f854 + 0x9f82e;
}



