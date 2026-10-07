/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00025114 FUN_00025114 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00025114(int param_1,int param_2,float *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined auStack_74 [16];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  fVar14 = DAT_000252c4;
  fVar5 = DAT_000252bc;
  fVar4 = DAT_000252b8;
  puVar7 = *(uint **)(DAT_000252c8 + 0x25130 + DAT_000252cc);
  uVar6 = puVar7[2];
  uVar2 = (ulonglong)*puVar7 * (ulonglong)uVar6 +
          CONCAT44(uVar6 * puVar7[1] + *puVar7 * puVar7[3],puVar7[4]);
  uVar9 = puVar7[5] + (int)(uVar2 >> 0x20);
  fVar13 = (float)(ulonglong)((uVar9 >> 0xd) - (uint)(uVar9 * 0x80000 < uVar9)) / DAT_000252c0;
  lVar3 = (ulonglong)uVar6 * (uVar2 & 0xffffffff) +
          CONCAT44(uVar6 * uVar9 + (int)uVar2 * puVar7[3],puVar7[4]);
  uVar6 = puVar7[5] + (int)((ulonglong)lVar3 >> 0x20);
  *puVar7 = (uint)lVar3;
  puVar7[1] = uVar6;
  iVar8 = 0;
  fVar15 = fVar5;
  if (CARRY4(uVar6,uVar6) != false) {
    fVar15 = fVar4;
  }
  fVar15 = (fVar13 + fVar13 + fVar14) * fVar15;
  iVar11 = param_1;
  iVar12 = param_1;
  do {
    iVar10 = param_1 + (iVar8 + 0xd) * 0x10;
    FUN_00024f54(iVar10,1);
    if (param_2 != 0) {
      local_54 = 0;
      local_48 = fVar5;
      local_50 = 0;
      local_4c = 0;
      FUN_00022344(&local_54,*param_3,param_3[1],param_3[2],0);
      local_64 = 0;
      local_60 = 0;
      local_58 = fVar5;
      local_5c = 0;
      iVar1 = (uint)(*param_3 + param_3[1] < 0.0) << 0x1f;
      fVar14 = *param_3 + param_3[1];
      if (-1 < iVar1) {
        fVar14 = fVar4;
      }
      if (iVar1 < 0) {
        fVar14 = fVar5;
      }
      FUN_00022344(&local_64,0,0,fVar14,0x4e34);
      FUN_00021dd0(auStack_74,iVar10,&local_54);
      FUN_00021dd0(&local_84,auStack_74,&local_64);
      *(undefined4 *)(iVar12 + 0xd0) = local_84;
      *(undefined4 *)(iVar12 + 0xd4) = uStack_80;
      *(undefined4 *)(iVar12 + 0xd8) = uStack_7c;
      *(undefined4 *)(iVar12 + 0xdc) = uStack_78;
    }
    local_40 = fVar15 * param_3[1];
    iVar8 = iVar8 + 1;
    iVar12 = iVar12 + 0x10;
    local_3c = fVar15 * param_3[2];
    local_44 = fVar15 * *param_3;
    *(float *)(iVar11 + 0xf0) = local_44;
    *(float *)(iVar11 + 0xf4) = local_40;
    *(float *)(iVar11 + 0xf8) = local_3c;
    iVar11 = iVar11 + 0xc;
  } while (iVar8 != 2);
  return;
}



