/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005096c FUN_0005096c */

void FUN_0005096c(int param_1)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  undefined4 local_14;
  
  iVar1 = DAT_00050a8c + 0x50980;
  FUN_00017d64(DAT_00050a88 + 0x50988,0);
  if (*(int *)(param_1 + 0xbc) != 0) {
    local_18 = DAT_00050a90 + 0x5099a;
    local_14 = *(undefined4 *)(iVar1 + DAT_00050a94);
    (**(code **)(DAT_00050a90 + 0x509a2))(&local_18,*(int *)(param_1 + 0xbc) + 0x2c);
    local_18 = DAT_00050a98 + 0x509ae;
  }
  FUN_00017d64(param_1 + 0x68,0);
  FUN_0004fa50(param_1 + 0xe4);
  FUN_00017d64(param_1 + 0xdc,0);
  FUN_00017d64(param_1 + 0xd4,0);
  FUN_00017d64(param_1 + 0xe0,0);
  FUN_00017d64(param_1 + 0xd8,0);
  FUN_00017d64(param_1 + 0x7c,0);
  FUN_00017d64(param_1 + 0x80,0);
  FUN_00017d64(param_1 + 0x124,0);
  FUN_00017d64(param_1 + 0x8c,0);
  FUN_00017d64(param_1 + 0x84,0);
  FUN_00017d64(param_1 + 0x88,0);
  FUN_00017d64(param_1 + 0x94,0);
  FUN_00017d64(param_1 + 0x90,0);
  FUN_00017d64(param_1 + 0x98,0);
  FUN_00017d64(param_1 + 0x9c,0);
  FUN_00017d64(param_1 + 0xa0,0);
  pvVar2 = *(void **)(param_1 + 300);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_0008fe40(pvVar2);
    operator_delete(pvVar2);
    *(undefined4 *)(param_1 + 300) = 0;
  }
  return;
}



