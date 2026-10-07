/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ef30 FUN_0009ef30 */

int * FUN_0009ef30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_0008d248();
  *param_1 = DAT_0009ef78 + 0x9ef64;
  puVar1 = (undefined4 *)operator_new(0xc);
  *puVar1 = local_1c;
  puVar1[1] = uStack_18;
  puVar1[2] = uStack_14;
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  param_1[0x16] = (int)puVar1;
  param_1[0x17] = 0;
  iVar2 = FUN_000a6398();
  iVar3 = FUN_000a63a4();
  param_1[5] = iVar2;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined *)(param_1 + 0xb) = 0;
  param_1[6] = iVar3;
  return param_1;
}



