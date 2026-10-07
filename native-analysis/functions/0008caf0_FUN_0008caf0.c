/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008caf0 FUN_0008caf0 */

int * FUN_0008caf0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0008cb20;
  *param_1 = DAT_0008cb24 + 0x8cb04;
  iVar2 = *(int *)(DAT_0008cb28 + 0x8cb10);
  iVar3 = *(int *)(DAT_0008cb28 + 0x8cb14);
  param_1[1] = *(int *)(DAT_0008cb28 + 0x8cb0c);
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  param_1[5] = iVar1;
  *(undefined *)(param_1 + 4) = 0;
  return param_1;
}



