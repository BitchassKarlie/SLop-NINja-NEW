/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00028a44 FUN_00028a44 */

int FUN_00028a44(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_00028ae0;
  if (-1 < *(int *)(DAT_00028ae0 + 0x28aaa) << 0x1f) {
    iVar5 = DAT_00028ae0 + 0x28aaa;
    iVar2 = __cxa_guard_acquire(iVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_0008f414(DAT_00028ae8 + 0x28a96);
      *(undefined4 *)(iVar1 + 0x28aae) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028aec + 0x28aa0);
      *(undefined4 *)(iVar1 + 0x28ab2) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028af0 + 0x28aaa);
      *(undefined4 *)(iVar1 + 0x28ab6) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028af4 + 0x28ab4);
      *(undefined4 *)(iVar1 + 0x28aba) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028af8 + 0x28abe);
      *(undefined4 *)(iVar1 + 0x28abe) = uVar3;
      uVar3 = FUN_0008f414(DAT_00028afc + 0x28ac8);
      *(undefined4 *)(iVar1 + 0x28ac2) = uVar3;
      __cxa_guard_release(iVar5);
    }
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = FUN_0008f414(param_1);
    if (iVar1 == *(int *)(DAT_00028ae4 + 0x28ac8)) {
      return 1;
    }
    uVar4 = 1;
    do {
      if (iVar1 == *(int *)(DAT_00028ae4 + 0x28ac8 + uVar4 * 4)) {
        return 1 << (uVar4 & 0xff);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 6);
  }
  return 0;
}



