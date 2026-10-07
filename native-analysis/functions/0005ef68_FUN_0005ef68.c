/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005ef68 FUN_0005ef68 */

int * FUN_0005ef68(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0004a8dc();
  iVar2 = DAT_0005efb4;
  param_1[0x21] = -1;
  iVar1 = DAT_0005efb8;
  param_1[0x22] = DAT_0005efac;
  *param_1 = iVar2 + 0x5ef8c;
  param_1[0x23] = DAT_0005efb0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  iVar2 = *(int *)(iVar1 + 0x5ef90);
  iVar3 = *(int *)(iVar1 + 0x5ef94);
  param_1[0x1c] = *(int *)(iVar1 + 0x5ef8c);
  param_1[0x1d] = iVar2;
  param_1[0x1e] = iVar3;
  return param_1;
}



