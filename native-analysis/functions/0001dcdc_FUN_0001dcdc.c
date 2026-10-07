/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001dcdc FUN_0001dcdc */

void FUN_0001dcdc(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar2 = DAT_0001de98;
  iVar5 = DAT_0001de94 + 0x1dcee;
  local_1c = **(int **)(iVar5 + DAT_0001de98);
  *(undefined4 *)(param_1 + 0xa8) = DAT_0001de7c;
  fVar1 = DAT_0001de80;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * DAT_0001de80;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * fVar1;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * fVar1;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(*(int *)(param_1 + 0x38) + 0x14) = *(float *)(*(int *)(param_1 + 0x38) + 0x14) * fVar1;
  if (param_2 == 0) {
    local_5c = *(undefined4 *)(param_1 + 0x8c);
    local_58 = *(undefined4 *)(param_1 + 0x90);
    local_54 = *(undefined4 *)(param_1 + 0x94);
    FUN_0001a178(&local_5c);
    iVar6 = *(int *)(param_1 + 100);
    uVar3 = FUN_0007e454();
    if (iVar6 == 2) {
      iVar6 = DAT_0001deb4 + 0x1de78;
    }
    else {
      iVar6 = DAT_0001de9c + 0x1dd78;
    }
    uVar4 = FUN_0008f414(iVar6);
    iVar6 = FUN_0007da40(uVar3,uVar4,0);
    fVar1 = DAT_0001de84;
    if (iVar6 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(iVar6 + 0xc) = uVar3;
      *(undefined4 *)(iVar6 + 0x10) = uVar4;
      fVar7 = *(float *)(param_1 + 0x20);
      fVar8 = *(float *)(param_1 + 0x24);
      *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) + *(float *)(param_1 + 0x1c) * fVar1;
      *(float *)(iVar6 + 0xc) = *(float *)(iVar6 + 0xc) + fVar7 * fVar1;
      uVar3 = DAT_0001de88;
      *(float *)(iVar6 + 0x10) = *(float *)(iVar6 + 0x10) + fVar8 * fVar1;
      uVar4 = DAT_0001de8c;
      if ((int)((uint)(*(float *)(param_1 + 0x10) < 0.0) << 0x1f) < 0) {
        uVar4 = uVar3;
      }
      *(undefined4 *)(iVar6 + 8) = uVar4;
      local_44 = *(undefined4 *)(param_1 + 0x20);
      local_48 = *(undefined4 *)(param_1 + 0x1c);
      FUN_0001dc40(&local_48);
      *(undefined4 *)(iVar6 + 0x2c) = local_44;
      *(undefined4 *)(iVar6 + 0x30) = local_48;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar5 + DAT_0001dea0) + 0x18c);
    local_50 = DAT_0001dea4 + 0x1de2c;
    local_4c = *(undefined4 *)(iVar5 + DAT_0001dea8);
    local_20 = 1;
    local_40[0] = 0;
    (**(code **)(DAT_0001dea4 + 0x1de34))(&local_50,local_40);
    FUN_00073a7c(uVar3,DAT_0001deac + 0x1de48,0x3f800000,local_40);
    FUN_0001d388(local_40);
    local_50 = DAT_0001deb0;
    *(undefined4 *)(param_1 + 0xa4) = DAT_0001de90;
    local_50 = local_50 + 0x1de68;
  }
  if (local_1c == **(int **)(iVar5 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



