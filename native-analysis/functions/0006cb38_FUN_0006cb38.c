/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006cb38 FUN_0006cb38 */

undefined4 FUN_0006cb38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = DAT_0006cbb0;
  piVar4 = (int *)(DAT_0006cbb0 + 0x6cb42);
  if ((-1 < *piVar4 << 0x1f) && (iVar3 = __cxa_guard_acquire(piVar4), iVar3 != 0)) {
    uVar2 = FUN_0008f414(DAT_0006cbb8 + 0x6cb76);
    *(undefined4 *)(iVar1 + 0x6cb46) = uVar2;
    uVar2 = FUN_0008f414(DAT_0006cbbc + 0x6cb80);
    *(undefined4 *)(iVar1 + 0x6cb4a) = uVar2;
    uVar2 = FUN_0008f414(DAT_0006cbc0 + 0x6cb8a);
    *(undefined4 *)(iVar1 + 0x6cb4e) = uVar2;
    uVar2 = FUN_0008f414(DAT_0006cbc4 + 0x6cb94);
    *(undefined4 *)(iVar1 + 0x6cb52) = uVar2;
    __cxa_guard_release(piVar4);
  }
  if (*(int *)(DAT_0006cbb4 + 0x6cb50) == param_1) {
    uVar2 = 0;
  }
  else if (*(int *)(DAT_0006cbb4 + 0x6cb54) == param_1) {
    uVar2 = 1;
  }
  else if (*(int *)(DAT_0006cbb4 + 0x6cb58) == param_1) {
    uVar2 = 2;
  }
  else if (*(int *)(DAT_0006cbb4 + 0x6cb5c) == param_1) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



