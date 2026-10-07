/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085de4 FUN_00085de4 */

undefined4 FUN_00085de4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_00085e78;
  if (-1 < *(int *)(DAT_00085e78 + 0x85e1a) << 0x1f) {
    iVar4 = DAT_00085e78 + 0x85e1a;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_0008f414(DAT_00085e80 + 0x85e32);
      *(undefined4 *)(iVar1 + 0x85e1e) = uVar3;
      uVar3 = FUN_0008f414(DAT_00085e84 + 0x85e3c);
      *(undefined4 *)(iVar1 + 0x85e22) = uVar3;
      uVar3 = FUN_0008f414(DAT_00085e88 + 0x85e46);
      *(undefined4 *)(iVar1 + 0x85e26) = uVar3;
      uVar3 = FUN_0008f414(DAT_00085e8c + 0x85e50);
      *(undefined4 *)(iVar1 + 0x85e2a) = uVar3;
      uVar3 = FUN_0008f414(DAT_00085e90 + 0x85e5a);
      *(undefined4 *)(iVar1 + 0x85e2e) = uVar3;
      __cxa_guard_release(iVar4);
    }
  }
  iVar1 = FUN_0008f414(param_1);
  if (iVar1 != *(int *)(DAT_00085e7c + 0x85e2e)) {
    if (iVar1 == *(int *)(DAT_00085e7c + 0x85e32)) {
      return 1;
    }
    if (iVar1 == *(int *)(DAT_00085e7c + 0x85e36)) {
      return 2;
    }
    if (iVar1 == *(int *)(DAT_00085e7c + 0x85e3a)) {
      return 3;
    }
    if (iVar1 == *(int *)(DAT_00085e7c + 0x85e3e)) {
      return 4;
    }
  }
  return 0;
}



