/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b11d0 FUN_000b11d0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * FUN_000b11d0(float *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  fVar5 = DAT_000b1420;
  fVar4 = DAT_000b141c;
  local_3c = DAT_000b141c;
  local_38 = DAT_000b141c;
  local_34 = DAT_000b141c;
  local_48 = DAT_000b1420;
  local_44 = DAT_000b1420;
  local_40 = DAT_000b1420;
  *param_1 = DAT_000b141c;
  param_1[1] = fVar4;
  param_1[2] = fVar4;
  param_1[3] = fVar5;
  param_1[4] = fVar5;
  param_1[5] = fVar5;
  iVar2 = *(int *)(param_2 + 0x38);
  if ((*(int *)(param_2 + 0x3c) - iVar2 >> 2) * -0xf0f0f0f != 0) {
    iVar3 = 0;
    uVar1 = 0;
    do {
      iVar2 = iVar2 + iVar3;
      FUN_000b1188(&local_a0,param_2,uVar1);
      fVar11 = *(float *)(iVar2 + 0x2c);
      fVar5 = *(float *)(iVar2 + 0x28);
      fVar7 = *(float *)(iVar2 + 0x30);
      fVar4 = *(float *)(iVar2 + 0x38);
      iVar3 = iVar3 + 0x44;
      fVar9 = fVar11 * local_90 + fVar5 * local_a0 + fVar7 * local_80 + local_70;
      fVar10 = fVar11 * local_8c + fVar5 * local_9c + fVar7 * local_7c + local_6c;
      fVar6 = *(float *)(iVar2 + 0x34);
      fVar8 = *(float *)(iVar2 + 0x3c);
      fVar11 = fVar11 * local_88 + fVar5 * local_98 + fVar7 * local_78 + local_68;
      fVar5 = local_70 + local_90 * fVar4 + local_a0 * fVar6 + local_80 * fVar8;
      local_54 = *param_1;
      fVar7 = local_6c + local_8c * fVar4 + local_9c * fVar6 + local_7c * fVar8;
      local_50 = param_1[1];
      fVar4 = local_68 + local_88 * fVar4 + local_98 * fVar6 + local_78 * fVar8;
      local_4c = param_1[2];
      if (fVar9 == local_54 || fVar9 < local_54 != (NAN(fVar9) || NAN(local_54))) {
        local_54 = fVar9;
      }
      if (fVar10 == local_50 || fVar10 < local_50 != (NAN(fVar10) || NAN(local_50))) {
        local_50 = fVar10;
      }
      if (fVar11 == local_4c || fVar11 < local_4c != (NAN(fVar11) || NAN(local_4c))) {
        local_4c = fVar11;
      }
      if (fVar5 == local_54 || fVar5 < local_54 != (NAN(fVar5) || NAN(local_54))) {
        local_54 = fVar5;
      }
      if (fVar7 == local_50 || fVar7 < local_50 != (NAN(fVar7) || NAN(local_50))) {
        local_50 = fVar7;
      }
      if (fVar4 == local_4c || fVar4 < local_4c != (NAN(fVar4) || NAN(local_4c))) {
        local_4c = fVar4;
      }
      local_60 = param_1[3];
      if (-1 < (int)((uint)(fVar9 < param_1[3]) << 0x1f)) {
        local_60 = fVar9;
      }
      *param_1 = local_54;
      param_1[1] = local_50;
      param_1[2] = local_4c;
      local_5c = param_1[4];
      if (-1 < (int)((uint)(fVar10 < param_1[4]) << 0x1f)) {
        local_5c = fVar10;
      }
      local_58 = param_1[5];
      if (-1 < (int)((uint)(fVar11 < param_1[5]) << 0x1f)) {
        local_58 = fVar11;
      }
      if (-1 < (int)((uint)(fVar5 < local_60) << 0x1f)) {
        local_60 = fVar5;
      }
      if (-1 < (int)((uint)(fVar7 < local_5c) << 0x1f)) {
        local_5c = fVar7;
      }
      if (-1 < (int)((uint)(fVar4 < local_58) << 0x1f)) {
        local_58 = fVar4;
      }
      uVar1 = uVar1 + 1;
      param_1[3] = local_60;
      param_1[4] = local_5c;
      param_1[5] = local_58;
      iVar2 = *(int *)(param_2 + 0x38);
    } while (uVar1 < (uint)((*(int *)(param_2 + 0x3c) - iVar2 >> 2) * -0xf0f0f0f));
  }
  return param_1;
}



