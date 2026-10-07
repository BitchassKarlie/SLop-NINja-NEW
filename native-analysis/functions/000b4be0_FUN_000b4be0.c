/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4be0 FUN_000b4be0 */

int FUN_000b4be0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = DAT_000b4c30 + 0xb4bec;
  if (param_2 < (uint)param_1[1]) {
    iVar1 = *param_1 + param_2 * 0xc;
  }
  else {
    piVar3 = (int *)(DAT_000b4c34 + 0xb4bf2);
    if ((*piVar3 << 0x1f < 0) ||
       (iVar2 = __cxa_guard_acquire(piVar3), iVar1 = DAT_000b4c3c, iVar2 == 0)) {
      iVar1 = DAT_000b4c38 + 0xb4bfc;
    }
    else {
      __cxa_guard_release(piVar3);
      iVar1 = iVar1 + 0xb4c16;
      __aeabi_atexit(iVar1,DAT_000b4c44 + 0xb4c1a,*(undefined4 *)(iVar4 + DAT_000b4c40));
    }
  }
  return iVar1;
}



