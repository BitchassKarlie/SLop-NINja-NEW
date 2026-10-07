/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008ba90 FUN_0008ba90 */

void FUN_0008ba90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined auStack_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [20];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  double local_38;
  
  iVar2 = FUN_0009a884(param_2,DAT_0008bbdc + 0x8baa6,&local_38);
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x38) = (float)local_38;
  }
  iVar2 = FUN_0009a884(param_2,DAT_0008bbe0 + 0x8bac4,&local_38);
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x30) = (float)local_38;
  }
  iVar2 = FUN_0009a884(param_2,DAT_0008bbe4 + 0x8bade,&local_38);
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x34) = (float)local_38;
  }
  iVar2 = FUN_0009a884(param_2,DAT_0008bbe8 + 0x8baf8,&local_38);
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x44) = (float)local_38;
  }
  iVar2 = FUN_0009a884(param_2,DAT_0008bbec + 0x8bb12,&local_38);
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x3c) = (float)local_38;
  }
  FUN_0009a8bc(param_2,DAT_0008bbf0 + 0x8bb2e,param_1 + 0x40);
  iVar3 = DAT_0008bbf4 + 0x8bb38;
  iVar2 = FUN_0009a5d8(param_2,iVar3);
  uVar1 = DAT_0008bbd8;
  if (iVar2 != 0) {
    do {
      local_a4 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_40 = 0xfff0bdc0;
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0;
      local_48 = 0;
      puVar4 = &local_b4;
      do {
        puVar4[7] = 0xffffffff;
        puVar4 = puVar4 + 1;
      } while (puVar4 != local_98 + 0xd);
      local_44 = uVar1;
      local_3c = 0;
      FUN_00086624(&local_b4,iVar2);
      FUN_00087f54(param_1 + 0x20);
      FUN_00086a14(*(undefined4 *)(param_1 + 0x28),&local_b4);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x7c;
      FUN_000223ec(auStack_a8);
      iVar2 = FUN_0009a4f0(param_2,iVar3);
    } while (iVar2 != 0);
  }
  return;
}



