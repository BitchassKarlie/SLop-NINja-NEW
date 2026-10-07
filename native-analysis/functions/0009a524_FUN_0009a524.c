/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a524 FUN_0009a524 */

int FUN_0009a524(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  while ((iVar2 != 0 && (iVar1 = strcmp((char *)(*(int *)(iVar2 + 0x20) + 8),param_2), iVar1 != 0)))
  {
    iVar2 = *(int *)(iVar2 + 0x24);
  }
  return iVar2;
}



