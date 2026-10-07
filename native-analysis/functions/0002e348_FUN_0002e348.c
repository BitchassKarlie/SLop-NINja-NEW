/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002e348 FUN_0002e348 */

int FUN_0002e348(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(DAT_0002e388 + 0x2e352);
  iVar3 = DAT_0002e38c + 0x2e354;
  if ((-1 < *piVar2 << 0x1f) && (iVar1 = __cxa_guard_acquire(piVar2), iVar1 != 0)) {
    iVar1 = DAT_0002e394 + 0x2e36e;
    FUN_00092314(iVar1);
    __cxa_guard_release(piVar2);
    __aeabi_atexit(iVar1,*(undefined4 *)(iVar3 + DAT_0002e398),*(undefined4 *)(iVar3 + DAT_0002e39c)
                  );
  }
  return DAT_0002e390 + 0x2e35e;
}



