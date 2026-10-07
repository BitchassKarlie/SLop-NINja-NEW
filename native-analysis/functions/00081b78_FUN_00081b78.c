/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00081b78 FUN_00081b78 */

void FUN_00081b78(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = FUN_0009a4a0(param_2,DAT_00081be0 + 0x81b88);
  FUN_00084684(&local_1c,uVar1);
  param_1[2] = local_1c;
  param_1[3] = uStack_18;
  param_1[4] = uStack_14;
  uVar1 = FUN_0009a4a0(param_2,DAT_00081be4 + 0x81baa);
  FUN_00084684(&local_28,uVar1);
  iVar3 = DAT_00081be8 + 0x81bc2;
  param_1[5] = local_28;
  param_1[6] = uStack_24;
  param_1[7] = uStack_20;
  iVar2 = FUN_0009a4a0(param_2,iVar3);
  if (iVar2 != 0) {
    FUN_0009a4a0(param_2,iVar3);
    uVar1 = FUN_0008f414();
    *param_1 = uVar1;
  }
  return;
}



