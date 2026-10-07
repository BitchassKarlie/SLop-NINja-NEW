/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00061b00 FUN_00061b00 */

void FUN_00061b00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_1 + 0x8c) = param_2;
  iVar3 = DAT_00061be8;
  if ((((*(char *)(*(int *)(param_1 + 0x88) + 0xc1) != '\0') && (*(int *)(param_1 + 0x80) != 0)) &&
      (*(int *)(param_2 + 0x278) != 0)) && (*(int *)(param_1 + 0xa8) == 1)) {
    if ((*(uint *)(DAT_00061be8 + 0x61b7e) & 1) == 0) {
      iVar4 = DAT_00061be8 + 0x61b7e;
      iVar1 = __cxa_guard_acquire(iVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_00022674(DAT_00061bf4 + 0x61b90,0);
        *(undefined4 *)(iVar3 + 0x61b82) = uVar2;
        __cxa_guard_release(iVar4);
      }
    }
    iVar3 = DAT_00061bec;
    if ((*(uint *)(DAT_00061bec + 0x61b92) & 1) == 0) {
      iVar4 = DAT_00061bec + 0x61b92;
      iVar1 = __cxa_guard_acquire(iVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_00022674(DAT_00061bf8 + 0x61bb2,0);
        *(undefined4 *)(iVar3 + 0x61b96) = uVar2;
        __cxa_guard_release(iVar4);
      }
    }
    iVar1 = DAT_00061bfc;
    iVar3 = DAT_00061bf0;
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x278) + 0xc) < 1) {
      FUN_00017d64(*(int *)(param_1 + 0x80) + 0x68,*(undefined4 *)(DAT_00061bfc + 0x61be4));
      iVar3 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
      if (iVar3 != 0) {
        FUN_00023078(iVar3,*(undefined4 *)(iVar1 + 0x61c18),0x3f800000);
      }
    }
    else {
      FUN_00017d64(*(int *)(param_1 + 0x80) + 0x68,*(undefined4 *)(DAT_00061bf0 + 0x61b74));
      iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
      if (iVar1 != 0) {
        FUN_00023078(iVar1,*(undefined4 *)(iVar3 + 0x61bb4),0x3f800000);
      }
    }
  }
  return;
}



