/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017e38 FUN_00017e38 */

int FUN_00017e38(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00017e94;
  iVar4 = DAT_00017e98 + 0x17e44;
  if (((*(uint *)(DAT_00017e94 + 0x17e42) & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire((uint *)(DAT_00017e94 + 0x17e42)), iVar3 != 0)) {
    *(undefined4 *)(iVar1 + 0x17e4a) = 0;
    iVar3 = iVar1 + 0x17e66;
    *(undefined4 *)(iVar1 + 0x17e4e) = 0;
    *(undefined4 *)(iVar1 + 0x17e52) = 0;
    do {
      *(undefined4 *)(iVar3 + -0xc) = 0;
      *(undefined4 *)(iVar3 + -8) = 0;
      *(undefined4 *)(iVar3 + -4) = 0;
      iVar2 = DAT_00017ea0;
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != iVar1 + 0x17f16);
    __cxa_guard_release(DAT_00017ea0 + 0x17e80);
    __aeabi_atexit(iVar2 + 0x17e84,DAT_00017ea8 + 0x17e8e,*(undefined4 *)(iVar4 + DAT_00017ea4));
  }
  return DAT_00017e9c + 0x17e54;
}



