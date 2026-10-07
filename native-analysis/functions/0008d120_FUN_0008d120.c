/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d120 FUN_0008d120 */

int FUN_0008d120(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_0008d160;
  piVar3 = (int *)(DAT_0008d160 + 0x8d12a);
  iVar4 = DAT_0008d164 + 0x8d12c;
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    FUN_0009eee4(iVar1 + 0x8d12e);
    __cxa_guard_release(piVar3);
    __aeabi_atexit(iVar1 + 0x8d12e,*(undefined4 *)(iVar4 + DAT_0008d16c),
                   *(undefined4 *)(iVar4 + DAT_0008d170));
  }
  return DAT_0008d168 + 0x8d13a;
}



