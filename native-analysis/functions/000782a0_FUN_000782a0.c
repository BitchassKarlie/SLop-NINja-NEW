/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000782a0 FUN_000782a0 */

undefined4 FUN_000782a0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_00078318;
  piVar4 = (int *)(DAT_00078318 + 0x782aa);
  if ((-1 < *piVar4 << 0x1f) && (iVar1 = __cxa_guard_acquire(piVar4), iVar1 != 0)) {
    uVar2 = FUN_0008f414(DAT_0007831c + 0x782c6);
    *(undefined4 *)(iVar3 + 0x782ae) = uVar2;
    uVar2 = FUN_0008f414(DAT_00078320 + 0x782d0);
    *(undefined4 *)(iVar3 + 0x782b2) = uVar2;
    uVar2 = FUN_0008f414(DAT_00078324 + 0x782da);
    *(undefined4 *)(iVar3 + 0x782b6) = uVar2;
    __cxa_guard_release(piVar4);
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar3 = FUN_0008f414(param_1);
    if (iVar3 == *(int *)(DAT_00078328 + 0x782fe)) {
      return 0;
    }
    if (iVar3 == *(int *)(DAT_00078328 + 0x78302)) {
      return 1;
    }
    if (iVar3 == *(int *)(DAT_00078328 + 0x78306)) {
      return 2;
    }
  }
  return 0xffffffff;
}



