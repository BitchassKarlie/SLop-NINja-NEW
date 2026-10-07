/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a71a8 FUN_000a71a8 */

void FUN_000a71a8(int param_1)

{
  int iVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined auStack_4e4 [1024];
  undefined auStack_e4 [64];
  undefined auStack_a4 [64];
  undefined auStack_64 [64];
  int local_24;
  
  iVar4 = DAT_000a7308;
  iVar1 = DAT_000a7304;
  iVar9 = DAT_000a7300 + 0xa71b8;
  local_24 = **(int **)(iVar9 + DAT_000a7304);
  if (-1 < *(int *)(DAT_000a7308 + 0xa71c8) << 0x1f) {
    iVar10 = DAT_000a7308 + 0xa71c8;
    iVar5 = __cxa_guard_acquire(iVar10);
    if (iVar5 != 0) {
      piVar6 = (int *)FUN_0008d120();
      uVar2 = (**(code **)(*piVar6 + 0x44))();
      *(undefined *)(iVar4 + 0xa71cc) = uVar2;
      __cxa_guard_release(iVar10);
    }
  }
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0009e480(param_1 + 0x1c);
  if (*(char *)(DAT_000a730c + 0xa71e8) != '\0') {
    FUN_000a6d38(auStack_4e4,0x400,uVar3);
    iVar4 = FUN_0009fac8(auStack_4e4);
    if (iVar4 != 0) {
      FUN_0009faf4(auStack_64,auStack_4e4,0);
      iVar4 = FUN_0009f4cc(auStack_64,0,0);
      if (iVar4 != 0) {
        uVar7 = FUN_000ab3d8(auStack_64);
        uVar8 = FUN_000ab3d4(auStack_64);
        FUN_000a7034(param_1,uVar7,uVar8,uVar11);
        FUN_000ab40c(auStack_64);
        FUN_0009faf4(auStack_a4,uVar3,0);
        iVar4 = FUN_0009f4cc(auStack_a4,0,0);
        if (iVar4 != 0) {
          iVar4 = FUN_000ab3d8(auStack_a4);
          *(uint *)(param_1 + 0x14) = (uint)*(ushort *)(iVar4 + 0xc);
          *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(iVar4 + 0xe);
          FUN_000ab40c(auStack_a4);
        }
        FUN_000ab448(auStack_a4);
      }
      FUN_000ab448(auStack_64);
      goto LAB_000a7206;
    }
  }
  FUN_0009faf4(auStack_e4,uVar3,0);
  iVar4 = FUN_0009f4cc(auStack_e4,0,0);
  if (iVar4 != 0) {
    uVar3 = FUN_000ab3d8(auStack_e4);
    uVar7 = FUN_000ab3d4(auStack_e4);
    FUN_000a7034(param_1,uVar3,uVar7,uVar11);
    FUN_000ab40c(auStack_e4);
  }
  FUN_000ab448(auStack_e4);
LAB_000a7206:
  if (local_24 == **(int **)(iVar9 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



