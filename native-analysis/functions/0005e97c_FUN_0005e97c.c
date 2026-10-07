/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005e97c FUN_0005e97c */

void FUN_0005e97c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined auStack_84 [28];
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined auStack_44 [32];
  int local_24;
  
  iVar1 = DAT_0005eaf0;
  iVar4 = DAT_0005eaec + 0x5e98a;
  local_5c = *(undefined4 *)(DAT_0005eaf4 + 0x5e992);
  uStack_58 = *(undefined4 *)(DAT_0005eaf4 + 0x5e996);
  uStack_54 = *(undefined4 *)(DAT_0005eaf4 + 0x5e99a);
  local_24 = **(int **)(iVar4 + DAT_0005eaf0);
  puVar3 = *(undefined **)(iVar4 + DAT_0005eaf8);
  *(undefined *)(param_1 + 0x53) = puVar3[3];
  *(undefined *)(param_1 + 0x52) = puVar3[2];
  *(undefined *)(param_1 + 0x51) = puVar3[1];
  *(undefined *)(param_1 + 0x50) = *puVar3;
  FUN_0004a638(param_1,&local_5c);
  uVar5 = *(undefined4 *)(*(int *)(iVar4 + DAT_0005eafc) + 0x5c);
  if ((int)((uint)(*(float *)(param_1 + 0x88) < DAT_0005eadc) << 0x1f) < 0) {
    *(undefined *)(param_1 + 0x51) = 0x96;
    iVar2 = DAT_0005eb00;
    *(undefined *)(param_1 + 0x53) = 0xff;
    *(undefined *)(param_1 + 0x52) = 0x14;
    *(undefined *)(param_1 + 0x50) = 0x14;
    FUN_0008f060(auStack_44,0x20,iVar2 + 0x5e9f4,*(undefined4 *)(param_1 + 0x80));
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(iVar4 + DAT_0005eafc) + 0x84);
    FUN_0008f060(auStack_44,0x20,DAT_0005eb0c + 0x5eacc,*(undefined4 *)(param_1 + 0x84));
  }
  FUN_00036320(auStack_84,auStack_44);
  local_64 = *(float *)(param_1 + 0xc) + *(float *)(DAT_0005eb04 + 0x5ea24) * DAT_0005eae0;
  local_48 = *(undefined *)(param_1 + 0x50);
  local_47 = *(undefined *)(param_1 + 0x51);
  local_46 = *(undefined *)(param_1 + 0x52);
  local_45 = *(undefined *)(param_1 + 0x53);
  local_60 = *(float *)(param_1 + 0x10) + *(float *)(DAT_0005eb04 + 0x5ea28) * DAT_0005eae0;
  local_68 = *(float *)(param_1 + 8) + *(float *)(DAT_0005eb04 + 0x5ea20) * DAT_0005eae0;
  local_50 = *(undefined4 *)(DAT_0005eb08 + 0x5ea5e);
  local_4c = *(undefined4 *)(DAT_0005eb08 + 0x5ea62);
  FUN_000909a4(uVar5,auStack_84,&local_68,&local_48,*(float *)(param_1 + 0x8c) * DAT_0005eae4,
               &local_50,0xf,DAT_0005eae8,0);
  if (local_24 == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



