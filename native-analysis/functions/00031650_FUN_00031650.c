/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031650 FUN_00031650 */

void FUN_00031650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_000316a0 + 0x31658;
  if (param_1 == 0) {
    if (*(int *)(DAT_000316a4 + 0x31662) == 0) {
      return;
    }
    iVar1 = FUN_00058dd8();
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = DAT_000316ac;
  iVar3 = *(int *)(iVar3 + DAT_000316a8);
  *(undefined4 *)(iVar3 + 0x10) = DAT_0003169c;
  FUN_00058e98(*(undefined4 *)(iVar1 + 0x3167a));
  uVar2 = *(undefined4 *)(iVar1 + 0x3170a);
  *(undefined *)(iVar3 + 2) = 1;
  *(undefined *)(iVar3 + 8) = 0;
  FUN_0004f43c(uVar2);
  FUN_00049ca8(*(undefined4 *)(iVar3 + 0x40));
  FUN_000308ac();
  return;
}



