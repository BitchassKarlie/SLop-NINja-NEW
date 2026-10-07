/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004a470 FUN_0004a470 */

int * FUN_0004a470(int *param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int local_10;
  int local_c;
  
  iVar3 = DAT_0004a504;
  *param_1 = DAT_0004a500 + 0x4a482;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 0x25) = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  *(undefined *)((int)param_1 + 0x27) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar2 = DAT_0004a508;
  *(undefined *)(param_1 + 9) = 1;
  *(undefined *)(param_1 + 0x13) = 1;
  puVar6 = *(undefined **)(iVar3 + 0x4a486 + iVar2);
  *(undefined *)(param_1 + 0x14) = *puVar6;
  *(undefined *)((int)param_1 + 0x51) = puVar6[1];
  *(undefined *)((int)param_1 + 0x52) = puVar6[2];
  iVar3 = DAT_0004a50c;
  uVar1 = puVar6[3];
  piVar4 = (int *)(DAT_0004a50c + 0x4a4be);
  *(undefined *)(param_1 + 0x15) = 1;
  *(undefined *)((int)param_1 + 0x53) = uVar1;
  iVar2 = DAT_0004a510;
  iVar3 = *(int *)(iVar3 + 0x4a4c2);
  piVar5 = (int *)(DAT_0004a510 + 0x4a4d2);
  param_1[0x16] = *piVar4;
  param_1[0x17] = iVar3;
  iVar3 = *(int *)(iVar2 + 0x4a4d6);
  param_1[0x18] = *piVar5;
  param_1[0x19] = iVar3;
  local_10 = DAT_0004a514 + 0x4a4f4;
  local_c = DAT_0004a518 + 0x4a4f8;
  (**(code **)(DAT_0004a514 + 0x4a4fc))(&local_10,param_1 + 0xb);
  return param_1;
}



