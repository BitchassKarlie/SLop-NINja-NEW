/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a544 FUN_0009a544 */

int FUN_0009a544(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  while ((iVar2 != 0 && (iVar1 = strcmp((char *)(*(int *)(iVar2 + 0x20) + 8),param_2), iVar1 != 0)))
  {
    iVar2 = *(int *)(iVar2 + 0x28);
  }
  return iVar2;
}



