/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1ee8 FUN_000b1ee8 */

int FUN_000b1ee8(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < (uint)param_1[1]) {
    iVar1 = *param_1 + param_2 * 0x40;
  }
  else {
    piVar2 = (int *)(DAT_000b1f20 + 0xb1ef6);
    if ((*piVar2 << 0x1f < 0) || (iVar1 = __cxa_guard_acquire(piVar2), iVar1 == 0)) {
      iVar1 = DAT_000b1f24 + 0xb1f00;
    }
    else {
      __cxa_guard_release(piVar2);
      iVar1 = DAT_000b1f28 + 0xb1f16;
    }
  }
  return iVar1;
}



