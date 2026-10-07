/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9b6c FUN_000a9b6c */

void FUN_000a9b6c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = (param_4 - param_2 >> 2) * -0x33333333;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    puVar2 = (undefined4 *)(param_2 + iVar3 * 0x14);
    while( true ) {
      local_34 = 0;
      FUN_000a07fc(&local_34,*puVar2);
      local_30 = puVar2[1];
      local_2c = puVar2[2];
      local_28 = puVar2[3];
      local_24 = puVar2[4];
      puVar2 = puVar2 + -5;
      FUN_000a9a7c(param_1,param_2,iVar3,iVar1,&local_34);
      FUN_000a08c8(&local_34);
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
    }
  }
  return;
}



