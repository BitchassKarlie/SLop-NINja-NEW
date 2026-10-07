/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001feec FUN_0001feec */

int * FUN_0001feec(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0008e738();
  iVar1 = DAT_0001ff84;
  *(undefined *)(param_1 + 0x24) = 1;
  *param_1 = iVar1 + 0x1ff0a;
  param_1[0x1c] = 0;
  if (*(char *)(DAT_0001ff88 + 0x1ff0e) == '\0') {
    *(char *)(DAT_0001ff88 + 0x1ff0e) = '\x01';
  }
  iVar3 = DAT_0001ff8c;
  iVar1 = DAT_0001ff78;
  param_1[0x11] = DAT_0001ff78;
  param_1[0xf] = 1;
  param_1[0x10] = 0;
  iVar2 = DAT_0001ff7c;
  iVar4 = *(int *)(iVar3 + 0x1ff26);
  iVar5 = *(int *)(iVar3 + 0x1ff2a);
  param_1[4] = *(int *)(iVar3 + 0x1ff22);
  param_1[5] = iVar4;
  param_1[6] = iVar5;
  iVar4 = *(int *)(iVar3 + 0x1ff26);
  iVar5 = *(int *)(iVar3 + 0x1ff2a);
  param_1[7] = *(int *)(iVar3 + 0x1ff22);
  param_1[8] = iVar4;
  param_1[9] = iVar5;
  param_1[0x13] = iVar1;
  *(undefined *)(param_1 + 0x12) = 1;
  iVar3 = DAT_0001ff80;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xee;
  param_1[0x17] = iVar2;
  param_1[0x18] = iVar3;
  param_1[0x19] = iVar1;
  return param_1;
}



