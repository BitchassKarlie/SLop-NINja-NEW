/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000780d8 FUN_000780d8 */

void FUN_000780d8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0009a5d8(param_2,DAT_00078208 + 0x780e8);
  iVar3 = DAT_0007820c;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    FUN_0009a8bc(iVar1,iVar3 + 0x78100,(undefined4 *)(param_1 + 0xc));
    uVar2 = FUN_0009a4a0(iVar1,DAT_00078210 + 0x7810a);
    FUN_0003e474(param_1 + 0x1c,uVar2);
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar2 = FUN_0009a1d4(iVar1);
      uVar2 = FUN_000832f8(uVar2,0);
      FUN_0003e474(param_1 + 0x1c,uVar2);
    }
    FUN_0009a8bc(iVar1,DAT_00078214 + 0x78126,param_1 + 0x24);
    uVar2 = FUN_0009a4a0(iVar1,DAT_00078218 + 0x78130);
    FUN_0003e474(param_1 + 0x20,uVar2);
  }
  uVar2 = FUN_0009a4a0(param_2,DAT_0007821c + 0x78144);
  FUN_0003e474(param_1 + 4,uVar2);
  uVar2 = FUN_0008f414(*(undefined4 *)(param_1 + 4));
  iVar3 = DAT_00078220 + 0x7815a;
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_0009a4a0(param_2,iVar3);
  uVar2 = FUN_000832f8(uVar2,0);
  FUN_0003e474(param_1 + 0x14,uVar2);
  iVar3 = FUN_0009a5d8(param_2,DAT_00078224 + 0x78178);
  if (iVar3 != 0) {
    uVar2 = FUN_0009a1d4();
    uVar2 = FUN_000832f8(uVar2,0);
    FUN_0003e474(param_1 + 0x18,uVar2);
  }
  uVar2 = FUN_0009a4a0(param_2,DAT_00078228 + 0x78198);
  FUN_0003e474(param_1 + 0x28,uVar2);
  uVar2 = FUN_0009a4a0(param_2,DAT_0007822c + 0x781ac);
  FUN_00084804(param_1 + 0x2c,uVar2);
  iVar3 = DAT_00078230;
  *(undefined *)(param_1 + 0x33) = *(undefined *)(param_1 + 0x2f);
  *(undefined *)(param_1 + 0x32) = *(undefined *)(param_1 + 0x2e);
  *(undefined *)(param_1 + 0x31) = *(undefined *)(param_1 + 0x2d);
  *(undefined *)(param_1 + 0x30) = *(undefined *)(param_1 + 0x2c);
  uVar2 = FUN_0009a4a0(param_2,iVar3 + 0x781c8);
  FUN_00084804((undefined *)(param_1 + 0x30),uVar2);
  return;
}



