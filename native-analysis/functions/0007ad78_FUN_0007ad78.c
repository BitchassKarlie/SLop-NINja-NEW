/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007ad78 FUN_0007ad78 */

int * FUN_0007ad78(int *param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = DAT_0007ae2c;
  *param_1 = DAT_0007ae30 + 0x7adbc;
  iVar3 = DAT_0007ae34;
  puVar5 = (undefined4 *)operator_new(0xc);
  *puVar5 = local_2c;
  puVar5[1] = uStack_28;
  puVar5[2] = uStack_24;
  *puVar5 = puVar5;
  puVar5[1] = puVar5;
  param_1[0x28] = iVar2;
  param_1[2] = (int)puVar5;
  param_1[0x29] = iVar2;
  iVar4 = DAT_0007ae38;
  *(undefined *)(param_1 + 0x2a) = 0;
  *(undefined *)((int)param_1 + 0xa9) = 0;
  puVar6 = *(undefined **)(iVar3 + 0x7ad9c + iVar4);
  *(undefined *)((int)param_1 + 0xaa) = 0;
  *(undefined *)((int)param_1 + 0xab) = 0xff;
  param_1[0x2c] = 0;
  param_1[3] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined *)(param_1 + 0x27) = 0;
  *(undefined *)((int)param_1 + 0xab) = puVar6[3];
  *(undefined *)((int)param_1 + 0xaa) = puVar6[2];
  *(undefined *)((int)param_1 + 0xa9) = puVar6[1];
  uVar1 = *puVar6;
  param_1[0x2b] = iVar2;
  *(undefined *)(param_1 + 0x2a) = uVar1;
  FUN_00017d64(param_1 + 0x2c,0);
  FUN_00017d64(param_1 + 0x2d,0);
  param_1[0x32] = -1;
  param_1[0x33] = iVar2;
  *(undefined *)((int)param_1 + 0x95) = 0;
  return param_1;
}



