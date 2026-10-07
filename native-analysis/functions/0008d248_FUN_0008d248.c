/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d248 FUN_0008d248 */

int * FUN_0008d248(int *param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = DAT_0008d300 + 0x8d258;
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = iVar5;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)((int)param_1 + 6) = 0;
  *(undefined *)((int)param_1 + 7) = 0xff;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 9) = 0;
  *(undefined *)((int)param_1 + 10) = 0;
  *(undefined *)((int)param_1 + 0xb) = 0xff;
  iVar4 = DAT_0008d304;
  FUN_00098d84();
  iVar3 = DAT_0008d2fc;
  iVar2 = DAT_0008d2f8;
  iVar5 = DAT_0008d2f4;
  puVar6 = *(undefined **)(iVar4 + 0x8d27c + DAT_0008d308);
  *(undefined *)((int)param_1 + 7) = puVar6[3];
  *(undefined *)((int)param_1 + 6) = puVar6[2];
  *(undefined *)((int)param_1 + 5) = puVar6[1];
  *(undefined *)(param_1 + 1) = *puVar6;
  puVar6 = *(undefined **)(iVar4 + 0x8d27c + DAT_0008d30c);
  *(undefined *)((int)param_1 + 0xb) = puVar6[3];
  *(undefined *)((int)param_1 + 10) = puVar6[2];
  *(undefined *)((int)param_1 + 9) = puVar6[1];
  uVar1 = *puVar6;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined *)(param_1 + 2) = uVar1;
  param_1[6] = 0x1e0;
  param_1[5] = 0x280;
  param_1[7] = iVar5;
  param_1[8] = iVar2;
  param_1[9] = iVar3;
  *(undefined *)(param_1 + 0xb) = 0;
  param_1[10] = -0x1000000;
  *(undefined *)((int)param_1 + 0x2d) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  param_1[0x11] = 1;
  param_1[0x12] = 1;
  param_1[0x13] = 1;
  param_1[0x14] = 1;
  return param_1;
}



