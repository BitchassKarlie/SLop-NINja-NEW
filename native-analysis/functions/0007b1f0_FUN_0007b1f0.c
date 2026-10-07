/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b1f0 FUN_0007b1f0 */

int * FUN_0007b1f0(int *param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar4 = DAT_0007b2f8;
  *param_1 = DAT_0007b2fc + 0x7b234;
  puVar5 = (undefined4 *)operator_new(0xc);
  *puVar5 = local_2c;
  puVar5[1] = uStack_28;
  puVar5[2] = uStack_24;
  *puVar5 = puVar5;
  puVar5[1] = puVar5;
  param_1[0x33] = iVar4;
  param_1[0x2c] = 0;
  param_1[2] = (int)puVar5;
  param_1[3] = 0;
  *(undefined *)(param_1 + 0x2a) = 0;
  *(undefined *)((int)param_1 + 0xa9) = 0;
  *(undefined *)((int)param_1 + 0xaa) = 0;
  *(undefined *)((int)param_1 + 0xab) = 0xff;
  param_1[0x2d] = 0;
  param_1[4] = *(int *)(param_2 + 0x10);
  strcpy((char *)(param_1 + 5),(char *)(param_2 + 0x14));
  strcpy((char *)(param_1 + 0x15),(char *)(param_2 + 0x54));
  param_1[0x26] = 0;
  uVar1 = *(undefined *)(param_2 + 0xa8);
  uVar2 = *(undefined *)(param_2 + 0xaa);
  uVar3 = *(undefined *)(param_2 + 0xab);
  *(undefined *)((int)param_1 + 0xa9) = *(undefined *)(param_2 + 0xa9);
  *(undefined *)((int)param_1 + 0xaa) = uVar2;
  *(undefined *)((int)param_1 + 0xab) = uVar3;
  *(undefined *)(param_1 + 0x2a) = uVar1;
  *(undefined *)(param_1 + 0x25) = *(undefined *)(param_2 + 0x94);
  uVar1 = *(undefined *)(param_2 + 0x95);
  param_1[0x28] = iVar4;
  *(undefined *)((int)param_1 + 0x95) = uVar1;
  *(undefined *)(param_1 + 0x27) = 1;
  iVar7 = *(int *)(param_2 + 0xa4);
  param_1[0x2b] = iVar4;
  param_1[0x29] = iVar7;
  param_1[0x32] = -1;
  param_1[0x2e] = 0;
  if (*(int *)(param_2 + 0xb8) != 0) {
    pvVar6 = operator_new(0x60);
    FUN_00080ea8();
    param_1[0x2e] = (int)pvVar6;
    FUN_0007b120(pvVar6,*(undefined4 *)(param_2 + 0xb8));
    *(int **)(param_1[0x2e] + 0x54) = param_1;
  }
  FUN_00017d64(param_1 + 0x2c,*(undefined4 *)(param_2 + 0xb0));
  FUN_00017d64(param_1 + 0x2d,*(undefined4 *)(param_2 + 0xb4));
  return param_1;
}



