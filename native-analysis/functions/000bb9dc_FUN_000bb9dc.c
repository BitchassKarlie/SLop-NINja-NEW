/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bb9dc FUN_000bb9dc */

undefined4 FUN_000bb9dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if (((iVar3 == 0) || (*(int *)(param_1 + 4) == 0)) ||
     (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1c), iVar2 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    iVar2 = iVar2 / 2;
    *(int *)(param_1 + 0x30) = iVar2;
    *(int *)(param_1 + 0x14) = iVar2;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  }
  return uVar1;
}



