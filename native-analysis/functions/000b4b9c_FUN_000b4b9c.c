/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4b9c FUN_000b4b9c */

int FUN_000b4b9c(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < (uint)param_1[1]) {
    iVar1 = *param_1 + param_2 * 0x40;
  }
  else {
    piVar2 = (int *)(DAT_000b4bd4 + 0xb4baa);
    if ((*piVar2 << 0x1f < 0) || (iVar1 = __cxa_guard_acquire(piVar2), iVar1 == 0)) {
      iVar1 = DAT_000b4bd8 + 0xb4bb4;
    }
    else {
      __cxa_guard_release(piVar2);
      iVar1 = DAT_000b4bdc + 0xb4bca;
    }
  }
  return iVar1;
}



