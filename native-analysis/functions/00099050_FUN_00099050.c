/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099050 FUN_00099050 */

int FUN_00099050(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_00099090;
  piVar3 = (int *)(DAT_00099090 + 0x9905a);
  iVar4 = DAT_00099094 + 0x9905c;
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    *(int *)(iVar1 + 0x9905e) = DAT_0009909c + 0x99082;
    __cxa_guard_release(piVar3);
    __aeabi_atexit(iVar1 + 0x9905e,DAT_000990a4 + 0x9908a,*(undefined4 *)(iVar4 + DAT_000990a0));
  }
  return DAT_00099098 + 0x9906a;
}



