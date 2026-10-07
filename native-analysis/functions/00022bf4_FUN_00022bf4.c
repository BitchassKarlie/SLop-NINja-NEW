/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022bf4 FUN_00022bf4 */

void FUN_00022bf4(int param_1,undefined4 param_2,int *param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  float fVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  
  fVar10 = *(float *)(param_1 + 0x110);
  iVar8 = DAT_00022e80 + 0x22c12;
  if ((int)((uint)(fVar10 < DAT_00022e68) << 0x1f) < 0) {
    fVar10 = *(float *)(param_1 + 0x28) * DAT_00022e6c;
    puVar7 = *(undefined **)(iVar8 + DAT_00022e84);
    local_3b = puVar7[1];
    local_3a = puVar7[2];
    local_3c = *puVar7;
    local_39 = puVar7[3];
    FUN_00022b08(param_2,*(undefined4 *)(param_1 + 0x10),
                 *(float *)(param_1 + 0x14) + fVar10 * DAT_00022e70,fVar10,fVar10,&local_3c);
    *param_3 = *param_3 + 1;
    fVar10 = *(float *)(param_1 + 0x110);
  }
  iVar6 = DAT_00022e88;
  fVar5 = DAT_00022e78;
  if (fVar10 != 0.0 && fVar10 < 0.0 == NAN(fVar10)) {
    puVar7 = *(undefined **)(iVar8 + DAT_00022e84);
    fVar10 = *(float *)(param_1 + 0x28) * DAT_00022e74;
    uVar2 = *puVar7;
    pfVar9 = (float *)(DAT_00022e88 + 0x22ca6);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar1 = puVar7[3];
    FUN_00021e48(&local_8c,param_1 + 0xd0);
    local_4c = *(float *)(iVar6 + 0x22caa);
    local_50 = *pfVar9;
    local_48 = *(float *)(iVar6 + 0x22cae);
    local_5c = *(float *)(param_1 + 0x10) +
               fVar10 * (local_4c * local_80 + local_50 * local_8c + local_48 * local_74) * fVar5;
    local_58 = *(float *)(param_1 + 0x14) +
               fVar10 * (local_4c * local_7c + local_50 * local_88 + local_48 * local_70) * fVar5;
    local_54 = *(float *)(param_1 + 0x18) +
               fVar10 * (local_4c * local_78 + local_50 * local_84 + local_48 * local_6c) * fVar5;
    fVar11 = fVar10 * DAT_00022e7c;
    local_40 = uVar2;
    local_3f = uVar3;
    local_3e = uVar4;
    local_3d = uVar1;
    FUN_00022b08(param_2,local_5c,fVar11 + local_58,fVar10,fVar10,&local_40);
    *param_3 = *param_3 + 1;
    FUN_00021e48(&local_8c,param_1 + 0xe0);
    local_50 = *pfVar9;
    local_4c = *(float *)(iVar6 + 0x22caa);
    local_48 = *(float *)(iVar6 + 0x22cae);
    local_64 = *(float *)(param_1 + 0xbc) +
               fVar10 * (local_4c * local_7c + local_50 * local_88 + local_48 * local_70) * fVar5;
    local_60 = *(float *)(param_1 + 0xc0) +
               fVar10 * (local_4c * local_78 + local_50 * local_84 + local_48 * local_6c) * fVar5;
    local_68 = *(float *)(param_1 + 0xb8) +
               fVar10 * (local_4c * local_80 + local_50 * local_8c + local_48 * local_74) * fVar5;
    local_5c = local_68;
    local_58 = local_64;
    local_54 = local_60;
    local_44 = uVar2;
    local_43 = uVar3;
    local_42 = uVar4;
    local_41 = uVar1;
    FUN_00022b08(param_2,local_68,fVar11 + local_64,fVar10,fVar10,&local_44);
    *param_3 = *param_3 + 1;
  }
  return;
}



