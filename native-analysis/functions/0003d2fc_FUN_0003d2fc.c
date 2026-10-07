/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003d2fc FUN_0003d2fc */

int * FUN_0003d2fc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = DAT_0003d354;
  FUN_0004a8dc();
  *param_1 = *(int *)(iVar1 + 0x3d30e + DAT_0003d358) + 8;
  iVar1 = FUN_0003d2a4(param_1 + 0x1c);
  param_1[0x1e] = 0;
  param_1[0x1d] = iVar1;
  puVar2 = (undefined4 *)operator_new(0xc);
  iVar1 = DAT_0003d350;
  *puVar2 = local_1c;
  puVar2[1] = uStack_18;
  puVar2[2] = uStack_14;
  *puVar2 = puVar2;
  puVar2[1] = puVar2;
  param_1[0x20] = (int)puVar2;
  param_1[0x22] = iVar1;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  return param_1;
}



