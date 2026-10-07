/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af8b4 FUN_000af8b4 */

undefined4 * FUN_000af8b4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  iVar1 = DAT_000af924;
  puVar4 = (uint *)(DAT_000af924 + 0xaf8c2);
  iVar5 = DAT_000af928 + 0xaf8c4;
  if (((*puVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar4), iVar2 != 0)) {
    piVar3 = (int *)operator_new(0x1c);
    iVar2 = DAT_000af930 + 0xaf8fe;
    piVar3[1] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[2] = 0;
    *piVar3 = iVar2;
    FUN_000af7a4(iVar1 + 0xaf8c6,piVar3);
    __cxa_guard_release(puVar4);
    __aeabi_atexit(iVar1 + 0xaf8c6,DAT_000af938 + 0xaf91c,*(undefined4 *)(iVar5 + DAT_000af934));
  }
  *param_1 = 0;
  FUN_000af888(param_1,*(undefined4 *)(DAT_000af92c + 0xaf8da));
  return param_1;
}



