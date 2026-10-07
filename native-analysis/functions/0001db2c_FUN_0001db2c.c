/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001db2c FUN_0001db2c */

void FUN_0001db2c(int param_1)

{
  int iVar1;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  iVar1 = DAT_0001dc38 + 0x1db38;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_48 = *(undefined4 *)(param_1 + 0x38);
    local_34 = *(undefined4 *)(param_1 + 0x3c);
    local_5c = *(undefined4 *)(param_1 + 0x34);
    local_20 = DAT_0001dc30;
    local_58 = DAT_0001dc34;
    local_54 = DAT_0001dc34;
    local_50 = DAT_0001dc34;
    local_4c = DAT_0001dc34;
    local_44 = DAT_0001dc34;
    local_40 = DAT_0001dc34;
    local_3c = DAT_0001dc34;
    local_38 = DAT_0001dc34;
    local_30 = DAT_0001dc34;
    local_2c = DAT_0001dc34;
    local_28 = DAT_0001dc34;
    local_24 = DAT_0001dc34;
    FUN_0001d0e0(&local_5c,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    local_2c = local_2c + *(float *)(param_1 + 0x1c);
    iVar1 = *(int *)(iVar1 + DAT_0001dc3c);
    local_28 = local_28 + *(float *)(param_1 + 0x20);
    local_24 = local_24 + *(float *)(param_1 + 0x24);
    *(undefined4 *)(iVar1 + 0x1894) = local_5c;
    *(float *)(iVar1 + 0x1898) = local_58;
    *(float *)(iVar1 + 0x189c) = local_54;
    *(float *)(iVar1 + 0x18a0) = local_50;
    *(float *)(iVar1 + 0x18a4) = local_4c;
    *(undefined4 *)(iVar1 + 0x18a8) = local_48;
    *(float *)(iVar1 + 0x18ac) = local_44;
    *(float *)(iVar1 + 0x18b0) = local_40;
    *(float *)(iVar1 + 0x18b4) = local_3c;
    *(float *)(iVar1 + 0x18b8) = local_38;
    *(undefined4 *)(iVar1 + 0x18bc) = local_34;
    *(float *)(iVar1 + 0x18c0) = local_30;
    *(float *)(iVar1 + 0x18c4) = local_2c;
    *(float *)(iVar1 + 0x18c8) = local_28;
    *(float *)(iVar1 + 0x18cc) = local_24;
    *(undefined4 *)(iVar1 + 0x18d0) = local_20;
    *(int *)(iVar1 + 0x18d8) = *(int *)(iVar1 + 0x18d8) + 1;
    FUN_0008d434(iVar1,1);
    FUN_000995e4(*(undefined4 *)(param_1 + 0x18));
    local_1c = *(undefined *)(param_1 + 0xc);
    local_1b = *(undefined *)(param_1 + 0xd);
    local_1a = *(undefined *)(param_1 + 0xe);
    local_19 = *(undefined *)(param_1 + 0xf);
    FUN_000a35f4(&local_1c);
    FUN_000995e0(*(undefined4 *)(param_1 + 0x18));
  }
  return;
}



