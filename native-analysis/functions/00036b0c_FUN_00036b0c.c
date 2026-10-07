/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00036b0c FUN_00036b0c */

int * FUN_00036b0c(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  FUN_0004a8dc();
  *param_1 = DAT_00036bbc + 0x36b2a;
  param_1[0x22] = 0;
  if (*(char *)(DAT_00036bc0 + 0x36b44) == '\0') {
    FUN_00036a98();
  }
  iVar2 = DAT_00036bc4;
  param_1[0x21] = param_2;
  FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(iVar2 + 0x36b4a));
  uVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  uVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar2 = DAT_00036bb8;
  fVar1 = DAT_00036bb4;
  fVar5 = (float)(ulonglong)uVar4 + DAT_00036bb4;
  param_1[5] = (int)((float)(ulonglong)uVar3 + DAT_00036bb4);
  param_1[6] = (int)fVar5;
  param_1[7] = (int)fVar1;
  param_1[0x1c] = iVar2;
  *(undefined *)((int)param_1 + 0x26) = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[10] = 3;
  return param_1;
}



