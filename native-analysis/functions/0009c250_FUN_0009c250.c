/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c250 FUN_0009c250 */

int * FUN_0009c250(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0009c2ac;
  iVar3 = DAT_0009c2a8 + 0x9c25c;
  param_1[2] = -1;
  param_1[1] = -1;
  param_1[3] = 0;
  iVar2 = DAT_0009c2b0;
  iVar1 = *(int *)(iVar3 + iVar1);
  param_1[0x10] = -1;
  param_1[8] = iVar1;
  iVar2 = *(int *)(iVar3 + iVar2);
  param_1[0xd] = iVar1;
  *param_1 = iVar2 + 8;
  iVar1 = DAT_0009c2b4;
  param_1[0xf] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 4;
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  FUN_00099d70(param_1 + 0xd,iVar1 + 0x9c288,0);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  return param_1;
}



