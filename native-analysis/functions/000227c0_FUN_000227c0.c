/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000227c0 FUN_000227c0 */

undefined4 * FUN_000227c0(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = DAT_00022814 + 0x227ce;
  if (param_2 < (uint)param_1[1]) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
  }
  else {
    puVar4 = (uint *)(DAT_00022818 + 0x227d4);
    if (((*puVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar4), iVar2 != 0)) {
      puVar1 = (undefined4 *)(DAT_00022820 + 0x227f4);
      *puVar1 = 0;
      __cxa_guard_release(puVar4);
      __aeabi_atexit(puVar1,DAT_00022828 + 0x22802,*(undefined4 *)(iVar3 + DAT_00022824));
    }
    else {
      puVar1 = (undefined4 *)(DAT_0002281c + 0x227e0);
    }
  }
  return puVar1;
}



