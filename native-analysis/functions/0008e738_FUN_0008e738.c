/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e738 FUN_0008e738 */

int * FUN_0008e738(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = DAT_0008e77c + 0x8e74a;
  FUN_00093804(param_1,0,0x3c);
  iVar3 = DAT_0008e780;
  piVar4 = (int *)(DAT_0008e780 + 0x8e756);
  iVar1 = *(int *)(DAT_0008e780 + 0x8e75a);
  iVar2 = *(int *)(DAT_0008e780 + 0x8e75e);
  param_1[4] = *piVar4;
  param_1[5] = iVar1;
  param_1[6] = iVar2;
  iVar1 = *(int *)(iVar3 + 0x8e75a);
  iVar3 = *(int *)(iVar3 + 0x8e75e);
  param_1[7] = *piVar4;
  param_1[8] = iVar1;
  param_1[9] = iVar3;
  *(undefined *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xdf;
  return param_1;
}



