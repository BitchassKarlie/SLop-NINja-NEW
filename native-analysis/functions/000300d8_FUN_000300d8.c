/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000300d8 FUN_000300d8 */

void FUN_000300d8(undefined4 *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_00030114;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  iVar4 = DAT_00030118 + 0x300ec;
  *(undefined4 *)(DAT_00030114 + 0x300ee) = *param_1;
  *(undefined4 *)(iVar1 + 0x300f2) = uVar2;
  *(undefined4 *)(iVar1 + 0x300f6) = uVar3;
  *(undefined *)(iVar1 + 0x300fd) = param_2[3];
  *(undefined *)(iVar1 + 0x300fc) = param_2[2];
  *(undefined *)(iVar1 + 0x300fb) = param_2[1];
  *(undefined *)(iVar1 + 0x300fa) = *param_2;
  *(undefined4 *)(*(int *)(iVar4 + DAT_0003011c) + 0x30) = **(undefined4 **)(iVar4 + DAT_00030120);
  return;
}



