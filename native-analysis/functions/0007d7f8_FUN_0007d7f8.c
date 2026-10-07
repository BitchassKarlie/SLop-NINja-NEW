/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007d7f8 FUN_0007d7f8 */

undefined4 FUN_0007d7f8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) < 1) {
LAB_0007d826:
    uVar1 = 0;
  }
  else {
    if (*(int *)(iVar3 + 0x40) != param_2) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        if (iVar2 == *(int *)(param_1 + 0x18)) goto LAB_0007d826;
        iVar4 = iVar3 + (uint)*(byte *)(iVar3 + 0x4b) * 0x24;
        iVar3 = iVar4 + 0x4c;
      } while (*(int *)(iVar4 + 0x8c) != param_2);
    }
    uVar1 = 1;
  }
  return uVar1;
}



