/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a438 FUN_0009a438 */

int FUN_0009a438(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  while( true ) {
    if (iVar2 == param_1) {
      return 0;
    }
    iVar1 = strcmp((char *)(*(int *)(iVar2 + 0x14) + 8),param_2);
    if (iVar1 == 0) break;
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  return iVar2;
}



