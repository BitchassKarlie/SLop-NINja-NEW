/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0608 FUN_000a0608 */

int FUN_000a0608(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = DAT_000a0658 + 0xa0614;
  if (param_2 < (uint)param_1[1]) {
    iVar1 = *param_1 + param_2 * 0xc;
  }
  else {
    piVar3 = (int *)(DAT_000a065c + 0xa061a);
    if ((*piVar3 << 0x1f < 0) ||
       (iVar2 = __cxa_guard_acquire(piVar3), iVar1 = DAT_000a0664, iVar2 == 0)) {
      iVar1 = DAT_000a0660 + 0xa0624;
    }
    else {
      __cxa_guard_release(piVar3);
      iVar1 = iVar1 + 0xa063e;
      __aeabi_atexit(iVar1,DAT_000a066c + 0xa0642,*(undefined4 *)(iVar4 + DAT_000a0668));
    }
  }
  return iVar1;
}



