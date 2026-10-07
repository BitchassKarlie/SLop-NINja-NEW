/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a958c FUN_000a958c */

void FUN_000a958c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(param_3 + 0x3c);
  *(int *)(param_2 + 0x3c) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
    *(undefined4 **)(param_2 + 0x38) = puVar5;
    puVar3 = *(undefined4 **)(param_3 + 0x38);
    puVar1 = puVar5;
    iVar2 = iVar4;
    while( true ) {
      *puVar1 = 0;
      FUN_00022208(puVar1,*puVar3);
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) break;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
    puVar5 = puVar5 + iVar4;
  }
  FUN_000a94e8(puVar5,param_2,param_3);
  return;
}



