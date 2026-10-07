/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000809c8 FUN_000809c8 */

void FUN_000809c8(int *param_1,undefined4 param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0009a5d8(param_2,DAT_00080a34 + 0x809d0);
  (**(code **)(*param_1 + 8))(param_1);
  if (iVar2 != 0) {
    FUN_0009a8bc(iVar2,DAT_00080a38 + 0x809f0,param_1 + 8);
    FUN_0009a8bc(iVar2,DAT_00080a3c + 0x809fe,param_1 + 9);
    FUN_0009a8bc(iVar2,DAT_00080a40 + 0x80a0c,param_1 + 10);
    FUN_0009a8bc(iVar2,DAT_00080a44 + 0x80a1a,param_1 + 0xb);
    uVar3 = FUN_0009a4a0(iVar2,DAT_00080a48 + 0x80a24);
    uVar1 = FUN_00084524(uVar3,DAT_00080a4c + 0x80a2c);
    *(undefined *)(param_1 + 0xd) = uVar1;
  }
  return;
}



