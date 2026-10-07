/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aba20 FUN_000aba20 */

void FUN_000aba20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined auStack_c4 [4];
  int local_c0;
  int local_bc;
  undefined auStack_b4 [4];
  int local_b0;
  int local_ac;
  undefined auStack_a4 [40];
  undefined auStack_7c [40];
  undefined auStack_54 [40];
  int local_2c;
  
  iVar1 = DAT_000abc30;
  iVar3 = DAT_000abc2c + 0xaba2e;
  iVar5 = 0;
  local_2c = **(int **)(iVar3 + DAT_000abc30);
  FUN_000ab8a8(auStack_54);
  FUN_0009e770(param_2,auStack_54);
  FUN_0009e858(auStack_54);
  FUN_000ab8a8(auStack_7c,param_3);
  FUN_0009e770(param_3,auStack_7c);
  iVar2 = DAT_000abc34;
  FUN_0009e858(auStack_7c);
  FUN_000ab6a8(auStack_b4,param_2,iVar2 + 0xaba7a,2,0);
  FUN_000ab6a8(auStack_c4,param_3,iVar2 + 0xaba7a,2,0);
  uVar4 = (local_bc - local_c0 >> 3) * -0x33333333;
  uVar6 = (local_ac - local_b0 >> 3) * -0x33333333;
  if (uVar6 <= uVar4) {
    uVar4 = uVar6;
  }
  uVar6 = uVar4;
  if (uVar4 != 0) {
    uVar6 = 0;
    iVar2 = FUN_000ab4fc(local_b0,local_c0);
    while (iVar2 != 0) {
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x28;
      if (uVar6 == uVar4) break;
      iVar2 = FUN_000ab4fc(local_b0 + iVar5,local_c0 + iVar5);
    }
  }
  FUN_0009e838(param_1,0);
  if ((local_bc - local_c0 >> 3) * -0x33333333 != uVar6) {
    uVar4 = 0;
    iVar5 = DAT_000abc38 + 0xabb12;
    do {
      FUN_0009e838(auStack_a4,iVar5);
      uVar4 = uVar4 + 1;
      FUN_0009e714(param_1,auStack_a4);
      FUN_0009e858(auStack_a4);
      FUN_0009e750(param_1,0x2f);
    } while (uVar4 < (local_bc - local_c0 >> 3) * -0x33333333 - uVar6);
  }
  iVar5 = uVar6 * 0x28;
  if (uVar6 < (uint)((local_ac - local_b0 >> 3) * -0x33333333)) {
    do {
      FUN_0009e714(param_1,local_b0 + iVar5);
      uVar6 = uVar6 + 1;
      iVar2 = local_ac - local_b0;
      if (uVar6 < (uint)((iVar2 >> 3) * -0x33333333)) {
        FUN_0009e750(param_1,0x2f);
        iVar2 = local_ac - local_b0;
      }
      iVar5 = iVar5 + 0x28;
    } while (uVar6 < (uint)((iVar2 >> 3) * -0x33333333));
  }
  FUN_000ab4d0(auStack_c4);
  FUN_000ab4d0(auStack_b4);
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



