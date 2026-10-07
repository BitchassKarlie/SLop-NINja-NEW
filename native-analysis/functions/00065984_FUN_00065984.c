/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00065984 FUN_00065984 */

int * FUN_00065984(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined4 local_24 [2];
  
  iVar1 = DAT_00065a40;
  FUN_0004a8dc();
  iVar4 = DAT_00065a50 + 0x659a8;
  *param_1 = DAT_00065a4c + 0x659aa;
  FUN_0002fa48(local_24,iVar4);
  FUN_00017d64(param_1 + 0x1a,local_24[0]);
  FUN_00017d90(local_24);
  param_1[0x24] = 0;
  param_1[0x1d] = iVar1;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  uVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  uVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar4 = DAT_00065a48;
  fVar5 = (float)(ulonglong)uVar3 * DAT_00065a44;
  param_1[5] = (int)(float)(ulonglong)uVar2;
  param_1[6] = (int)fVar5;
  param_1[7] = iVar1;
  param_1[0x1f] = (int)(float)(ulonglong)uVar2;
  param_1[0x20] = (int)fVar5;
  param_1[0x21] = iVar1;
  param_1[0x1e] = iVar1;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x22] = iVar4;
  param_1[0x23] = iVar1;
  param_1[0x25] = 0;
  param_1[10] = 2;
  param_1[0x27] = iVar1;
  return param_1;
}



