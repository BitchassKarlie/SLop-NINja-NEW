/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00074488 FUN_00074488 */

void FUN_00074488(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = DAT_000744d8;
  piVar5 = (int *)(DAT_000744d8 + 0x74494);
  iVar4 = DAT_000744dc + 0x74496;
  if ((-1 < *piVar5 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar5), iVar2 != 0)) {
    uVar3 = FUN_0008f414(DAT_000744e8 + 0x744c2);
    *(undefined4 *)(iVar1 + 0x74498) = uVar3;
    __cxa_guard_release(piVar5);
  }
  if (param_1 == *(int *)(DAT_000744e0 + 0x744a4)) {
    FUN_0002f60c(0);
  }
  else {
    FUN_0006fbdc(*(undefined4 *)(*(int *)(iVar4 + DAT_000744e4) + 0x50),param_1);
  }
  return;
}



