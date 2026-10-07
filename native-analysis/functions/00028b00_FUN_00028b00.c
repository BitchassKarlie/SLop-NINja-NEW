/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00028b00 FUN_00028b00 */

undefined4 FUN_00028b00(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_00028b90;
  if (-1 < *(int *)(DAT_00028b90 + 0x28b82) << 0x1f) {
    iVar4 = DAT_00028b90 + 0x28b82;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_0008f414(DAT_00028b98 + 0x28b58);
      *(undefined4 *)(iVar1 + 0x28b86) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028b9c + 0x28b62);
      *(undefined4 *)(iVar1 + 0x28b8a) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028ba0 + 0x28b6e);
      *(undefined4 *)(iVar1 + 0x28b8e) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028ba4 + 0x28b7a);
      *(undefined4 *)((int)&DAT_00028b90 + iVar1 + 2) = uVar3;
      __cxa_guard_release(iVar4);
    }
  }
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (iVar1 = FUN_0008f414(param_1), iVar1 != *(int *)((int)&DAT_00028ba0 + DAT_00028b94))) {
    if (iVar1 == *(int *)((int)&DAT_00028ba4 + DAT_00028b94)) {
      return 1;
    }
    if (iVar1 == *(int *)(FUN_00028ba8 + DAT_00028b94)) {
      return 2;
    }
    if (iVar1 == *(int *)(DAT_00028b94 + 0x28bac)) {
      return 3;
    }
  }
  return 0;
}



