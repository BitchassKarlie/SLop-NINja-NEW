/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9144 FUN_000a9144 */

undefined4 * FUN_000a9144(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
  *(int *)(param_2 + 0x3c) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0;
    iVar3 = *(int *)(param_3 + 0x20);
    *(int *)(param_2 + 0x44) = iVar3;
  }
  else {
    *(undefined4 **)(param_2 + 0x38) = puVar1;
    iVar3 = iVar4;
    puVar2 = puVar1;
    do {
      iVar3 = iVar3 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0);
    iVar3 = *(int *)(param_3 + 0x20);
    puVar1 = puVar1 + iVar4;
    *(int *)(param_2 + 0x44) = iVar3;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0x40) = 0;
    iVar4 = *(int *)(param_3 + 0x24);
    *(int *)(param_2 + 0x4c) = iVar4;
  }
  else {
    *(undefined4 **)(param_2 + 0x40) = puVar1;
    iVar4 = iVar3;
    puVar2 = puVar1;
    do {
      iVar4 = iVar4 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (iVar4 != 0);
    iVar4 = *(int *)(param_3 + 0x24);
    puVar1 = puVar1 + iVar3;
    *(int *)(param_2 + 0x4c) = iVar4;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  else {
    *(undefined4 **)(param_2 + 0x48) = puVar1;
    puVar2 = puVar1;
    iVar3 = iVar4;
    do {
      iVar3 = iVar3 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0);
    puVar1 = puVar1 + iVar4;
  }
  return puVar1;
}



