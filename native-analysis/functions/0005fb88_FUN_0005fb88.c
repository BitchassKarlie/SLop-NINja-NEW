/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005fb88 FUN_0005fb88 */

int * FUN_0005fb88(int *param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int local_18;
  int local_14;
  
  iVar2 = DAT_0005fc04;
  *(undefined *)((int)param_1 + 0x17) = 0xff;
  *(undefined *)(param_1 + 0x14) = 1;
  iVar3 = DAT_0005fc14;
  iVar6 = DAT_0005fc0c;
  piVar5 = (int *)(DAT_0005fc0c + 0x5fbaa);
  *param_1 = DAT_0005fc10 + 0x5fbb6;
  *(undefined *)(param_1 + 5) = 0;
  *(undefined *)((int)param_1 + 0x15) = 0;
  *(undefined *)((int)param_1 + 0x16) = 0;
  param_1[0xc] = 0;
  iVar4 = *(int *)(iVar6 + 0x5fbae);
  iVar6 = *(int *)(iVar6 + 0x5fbb2);
  param_1[6] = *piVar5;
  param_1[7] = iVar4;
  param_1[8] = iVar6;
  param_1[0x15] = 0;
  puVar7 = *(undefined **)(iVar3 + 0x5fbba + DAT_0005fc18);
  *(undefined *)((int)param_1 + 0x17) = puVar7[3];
  *(undefined *)((int)param_1 + 0x16) = puVar7[2];
  *(undefined *)((int)param_1 + 0x15) = puVar7[1];
  uVar1 = *puVar7;
  param_1[9] = iVar2;
  param_1[10] = DAT_0005fc08;
  *(undefined *)(param_1 + 5) = uVar1;
  local_18 = DAT_0005fc1c + 0x5fbf8;
  local_14 = DAT_0005fc20 + 0x5fbfc;
  (**(code **)(DAT_0005fc1c + 0x5fc00))(&local_18,param_1 + 0xc);
  return param_1;
}



