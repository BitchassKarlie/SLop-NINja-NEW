/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a94e8 FUN_000a94e8 */

undefined4 * FUN_000a94e8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(param_3 + 0x44);
  *(int *)(param_2 + 0x44) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_2 + 0x40) = 0;
    iVar3 = *(int *)(param_3 + 0x4c);
    *(int *)(param_2 + 0x4c) = iVar3;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
    *(undefined4 **)(param_2 + 0x40) = puVar5;
    puVar2 = *(undefined4 **)(param_3 + 0x40);
    puVar1 = puVar5;
    iVar3 = iVar4;
    while( true ) {
      *puVar1 = 0;
      FUN_000a9490(puVar1,*puVar2);
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
    }
    iVar3 = *(int *)(param_3 + 0x4c);
    puVar5 = puVar5 + iVar4;
    *(int *)(param_2 + 0x4c) = iVar3;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0x48) = 0;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 **)(param_2 + 0x48) = puVar5;
    puVar2 = *(undefined4 **)(param_3 + 0x48);
    puVar1 = puVar5;
    iVar4 = iVar3;
    while( true ) {
      *puVar1 = 0;
      FUN_000a94bc(puVar1,*puVar2);
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) break;
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
    }
    puVar5 = puVar5 + iVar3;
  }
  return puVar5;
}



