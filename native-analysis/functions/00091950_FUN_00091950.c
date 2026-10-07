/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00091950 FUN_00091950 */

undefined4 FUN_00091950(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(DAT_000919dc + 0x9195a);
  if ((-1 < *piVar4 << 0x1f) &&
     (iVar1 = __cxa_guard_acquire(piVar4), iVar3 = DAT_000919e8, iVar1 != 0)) {
    uVar2 = FUN_0008f414(DAT_000919e4 + 0x91990);
    *(undefined4 *)(iVar3 + 0x91996) = uVar2;
    uVar2 = FUN_0008f414(DAT_000919ec + 0x9199c);
    *(undefined4 *)(iVar3 + 0x9199e) = uVar2;
    uVar2 = FUN_0008f414(DAT_000919f0 + 0x919a6);
    *(undefined4 *)(iVar3 + 0x919a6) = uVar2;
    uVar2 = FUN_0008f414(DAT_000919f4 + 0x919b0);
    *(undefined4 *)(iVar3 + 0x919ae) = uVar2;
    uVar2 = FUN_0008f414(DAT_000919f8 + 0x919ba);
    *(undefined4 *)(iVar3 + 0x919b6) = uVar2;
    uVar2 = FUN_0008f414(DAT_000919fc + 0x919c4);
    *(undefined4 *)(iVar3 + 0x919be) = uVar2;
    uVar2 = FUN_0008f414(DAT_00091a00 + 0x919ce);
    *(undefined4 *)(iVar3 + 0x919c6) = uVar2;
    __cxa_guard_release(piVar4);
  }
  iVar3 = 0;
  do {
    if (*(int *)(DAT_000919e0 + 0x91966 + iVar3 * 8) == param_2) {
      return *(undefined4 *)(DAT_000919e0 + 0x91966 + iVar3 * 8 + 4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 7);
  return 0;
}



