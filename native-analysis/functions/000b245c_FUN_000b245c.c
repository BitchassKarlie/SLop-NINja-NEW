/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b245c FUN_000b245c */

int * FUN_000b245c(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined auStack_5c [4];
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined auStack_4c [4];
  void *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_3c [4];
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  undefined auStack_24 [8];
  
  puVar4 = &local_80;
  iVar3 = DAT_000b25ec + 0xb2474;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = iVar3;
  FUN_0009e838(param_1 + 3,0);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_0009e770(param_1 + 3,param_3);
  iVar3 = DAT_000b25f0;
  param_1[0x1a] = 0;
  FUN_000a0c2c(auStack_3c,iVar3 + 0xb24ac,auStack_24);
  local_80 = 0;
  FUN_000a173c(&local_80,auStack_3c);
  local_7c = 3;
  local_78 = 1;
  if (local_38 != (void *)0x0) {
    operator_delete(local_38);
    local_34 = 0;
    local_30 = 0;
    local_38 = (void *)0x0;
  }
  FUN_000a0c2c(auStack_4c,DAT_000b25f4 + 0xb24de,auStack_28);
  local_74 = 0;
  FUN_000a173c(&local_74,auStack_4c);
  local_70 = 3;
  local_6c = 1;
  if (local_48 != (void *)0x0) {
    operator_delete(local_48);
    local_44 = 0;
    local_40 = 0;
    local_48 = (void *)0x0;
  }
  FUN_000a0c2c(auStack_5c,DAT_000b25f8 + 0xb2510,auStack_2c);
  local_68 = 0;
  FUN_000a173c(&local_68,auStack_5c);
  local_64 = 3;
  local_60 = 1;
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
    local_54 = 0;
    local_50 = 0;
    local_58 = (void *)0x0;
  }
  if (param_1[0x15] == 0) {
LAB_000b25ae:
    piVar2 = (int *)operator_new(0x24);
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    FUN_000b2314(piVar2 + 3,&local_80,auStack_5c,param_2);
    iVar3 = DAT_000b2608;
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = iVar3 + 0xb25e8;
    FUN_000a1260(param_1 + 0x15,piVar2);
  }
  else {
    iVar3 = *param_2;
    do {
      iVar1 = FUN_000a9338(iVar3 + 0xc,puVar4);
      if (iVar1 == 0) goto LAB_000b25ae;
      puVar4 = (undefined4 *)((int)puVar4 + 0xc);
    } while (puVar4 != (undefined4 *)auStack_5c);
    FUN_000a1260(param_1 + 0x15,*param_2);
  }
  iVar3 = FUN_000a92dc(param_1[0x15] + 0xc,DAT_000b25fc + 0xb2570);
  iVar1 = DAT_000b2600 + 0xb2578;
  param_1[0x1b] = iVar3;
  iVar3 = FUN_000a92dc(param_1[0x15] + 0xc,iVar1);
  iVar1 = DAT_000b2604 + 0xb2586;
  param_1[0x1c] = iVar3;
  iVar3 = FUN_000a92dc(param_1[0x15] + 0xc,iVar1);
  param_1[0x1d] = iVar3;
  FUN_000a08c8(&local_68);
  FUN_000a08c8(&local_74);
  FUN_000a08c8(&local_80);
  return param_1;
}



