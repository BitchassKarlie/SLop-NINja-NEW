/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022718 FUN_00022718 */

undefined4 * FUN_00022718(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = DAT_0002276c + 0x22726;
  if (param_2 < (uint)param_1[1]) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
  }
  else {
    puVar4 = (uint *)(DAT_00022770 + 0x2272c);
    if (((*puVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar4), iVar2 != 0)) {
      puVar1 = (undefined4 *)(DAT_00022778 + 0x2274c);
      *puVar1 = 0;
      __cxa_guard_release(puVar4);
      __aeabi_atexit(puVar1,DAT_00022780 + 0x2275a,*(undefined4 *)(iVar3 + DAT_0002277c));
    }
    else {
      puVar1 = (undefined4 *)(DAT_00022774 + 0x22738);
    }
  }
  return puVar1;
}



