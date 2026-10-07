/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e654 FUN_0008e654 */

void FUN_0008e654(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_0008e6d8;
  iVar5 = DAT_0008e6d4 + 0x8e662;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 4) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 8) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc) = *(undefined4 *)(param_1 + 0x18);
    if (-1 < *(int *)(iVar1 + 0x8e67c) << 0x1f) {
      iVar2 = __cxa_guard_acquire(iVar1 + 0x8e67c);
      if (iVar2 != 0) {
        __cxa_guard_release(iVar1 + 0x8e67c);
        __aeabi_atexit(iVar1 + 0x8e680,DAT_0008e6e8 + 0x8e6cc,*(undefined4 *)(iVar5 + DAT_0008e6e4))
        ;
      }
    }
    iVar1 = DAT_0008e6e0;
    uVar3 = *(undefined4 *)(DAT_0008e6dc + 0x8e696);
    uVar4 = *(undefined4 *)(DAT_0008e6dc + 0x8e69a);
    puVar6 = (undefined4 *)(DAT_0008e6e0 + 0x8e6a0);
    *puVar6 = *(undefined4 *)(DAT_0008e6dc + 0x8e692);
    *(undefined4 *)(iVar1 + 0x8e6a4) = uVar3;
    *(undefined4 *)(iVar1 + 0x8e6a8) = uVar4;
    (**(code **)(**(int **)(param_1 + 0x38) + 0xc))(*(int **)(param_1 + 0x38),param_2,puVar6);
  }
  return;
}



