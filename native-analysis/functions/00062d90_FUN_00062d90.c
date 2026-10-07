/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00062d90 FUN_00062d90 */

int * FUN_00062d90(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  FUN_0004a8dc();
  iVar3 = DAT_00062e20;
  *param_1 = DAT_00062e1c + 0x62df4;
  if (*(char *)(DAT_00062e24 + 0x62df6) == '\0') {
    FUN_00062c08();
  }
  param_1[0x20] = 0;
  param_1[0x21] = param_2;
  FUN_00017d64(param_1 + 0x1a,0);
  param_1[10] = 3;
  iVar4 = DAT_00062e28;
  iVar1 = DAT_00062e14;
  param_1[0x1c] = DAT_00062e14;
  param_1[0x23] = 0;
  param_1[0x1f] = iVar1;
  param_1[0x22] = 0;
  fVar2 = DAT_00062e18;
  *(undefined *)((int)param_1 + 0x26) = 0;
  param_1[0x1e] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = (int)((float)(longlong)*(int *)(*(int *)(iVar3 + 0x62dac + iVar4) + 0x24) + fVar2)
  ;
  return param_1;
}



