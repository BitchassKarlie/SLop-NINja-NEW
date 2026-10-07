/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e4b0 FUN_0003e4b0 */

int * FUN_0003e4b0(int *param_1,char *param_2,int param_3,int param_4,int param_5,char *param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  FUN_0004cbfc();
  *param_1 = DAT_0003e574 + 0x3e4d4;
  strcpy((char *)(param_1 + 0x19),param_2);
  strncpy((char *)(param_1 + 0x99),param_6,0x1f);
  *(undefined *)((int)param_1 + 0x283) = 0;
  FUN_0003e474(param_1 + 0x15,param_1 + 0x99);
  FUN_00084478(param_1[0x15]);
  *(undefined *)((int)param_1 + 0x17) = 0xff;
  *(undefined *)((int)param_1 + 0x16) = 0x74;
  *(undefined *)((int)param_1 + 0x15) = 0x5d;
  *(undefined *)(param_1 + 5) = 0x3b;
  iVar2 = DAT_0003e578;
  param_1[9] = DAT_0003e56c;
  *(undefined *)((int)param_1 + 99) = 0;
  fVar1 = DAT_0003e570;
  *(undefined *)(param_1 + 0x18) = 0;
  param_1[0x17] = param_3;
  param_1[0x16] = param_4;
  fVar3 = *(float *)(iVar2 + 0x3e528);
  fVar4 = *(float *)(iVar2 + 0x3e52c);
  param_1[6] = (int)(*(float *)(iVar2 + 0x3e524) * fVar1);
  param_1[7] = (int)(fVar3 * fVar1);
  param_1[8] = (int)(fVar4 * fVar1);
  param_1[0xa1] = 0;
  *(undefined *)((int)param_1 + 0x62) = 0;
  param_1[0xa2] = param_5;
  return param_1;
}



