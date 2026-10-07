/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00060910 FUN_00060910 */

int * FUN_00060910(int *param_1,int param_2,int param_3,undefined4 param_4,int **param_5)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar2 = DAT_00060990;
  iVar3 = DAT_0006098c;
  *(undefined *)((int)param_1 + 0x17) = 0xff;
  *param_1 = iVar3 + 0x60930;
  *(undefined *)(param_1 + 0x14) = 1;
  *(undefined *)(param_1 + 5) = 0;
  *(undefined *)((int)param_1 + 0x15) = 0;
  *(undefined *)((int)param_1 + 0x16) = 0;
  param_1[0xc] = 0;
  if (*(char *)(param_5 + 8) != '\0') {
    param_5 = (int **)*param_5;
  }
  if (param_5 != (int **)0x0) {
    (**(code **)((int)*param_5 + 8))(param_5,param_1 + 0xc);
  }
  iVar3 = *(int *)(DAT_00060994 + 0x60962);
  iVar4 = *(int *)(DAT_00060994 + 0x60966);
  param_1[6] = *(int *)(DAT_00060994 + 0x6095e);
  param_1[7] = iVar3;
  param_1[8] = iVar4;
  param_1[0x15] = 0;
  FUN_000608e0(param_1,param_4);
  puVar5 = *(undefined **)(iVar2 + 0x60938 + DAT_00060998);
  *(undefined *)((int)param_1 + 0x17) = puVar5[3];
  *(undefined *)((int)param_1 + 0x16) = puVar5[2];
  *(undefined *)((int)param_1 + 0x15) = puVar5[1];
  uVar1 = *puVar5;
  param_1[9] = param_2;
  param_1[10] = param_3;
  *(undefined *)(param_1 + 5) = uVar1;
  return param_1;
}



