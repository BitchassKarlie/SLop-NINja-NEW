/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000996c4 FUN_000996c4 */

int FUN_000996c4(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar1 = DAT_00099704;
  puVar3 = (uint *)(DAT_00099704 + 0x996ce);
  iVar4 = DAT_00099708 + 0x996d0;
  if (((*puVar3 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar3), iVar2 != 0)) {
    *(undefined4 *)(iVar1 + 0x996d6) = 0;
    *(undefined4 *)(iVar1 + 0x996da) = 0;
    *(undefined4 *)(iVar1 + 0x996de) = 0;
    __cxa_guard_release(puVar3);
    __aeabi_atexit(iVar1 + 0x996d2,DAT_00099714 + 0x996fe,*(undefined4 *)(iVar4 + DAT_00099710));
  }
  return DAT_0009970c + 0x996e0;
}



