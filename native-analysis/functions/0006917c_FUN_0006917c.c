/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006917c FUN_0006917c */

void FUN_0006917c(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  undefined4 local_48;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  
  iVar6 = DAT_0006948c;
  FUN_00068904();
  iVar12 = *(int *)(param_1 + 0x120);
  if (iVar12 != 0) {
    uVar7 = FUN_00022674(DAT_00069490 + 0x691a2,0);
    FUN_00023078(iVar12,uVar7,0x3f800000);
    local_58 = 0x3f800000;
    local_5c = DAT_00069478;
    local_54 = DAT_00069478;
    FUN_00025114(*(undefined4 *)(param_1 + 0x120),0,&local_5c);
    uVar11 = *(undefined4 *)(param_1 + 0x120);
    uVar7 = FUN_0008f414(DAT_00069494 + 0x691d2);
    FUN_0002224c(uVar11,uVar7);
  }
  iVar12 = DAT_00069498;
  uVar11 = DAT_00069488;
  fVar5 = DAT_00069484;
  fVar4 = DAT_00069480;
  fVar3 = DAT_0006947c;
  uVar7 = DAT_00069478;
  FUN_00017d64(param_1 + 0x68,*(undefined4 *)(DAT_00069498 + 0x69204));
  puVar10 = *(uint **)(iVar6 + 0x69196 + DAT_0006949c);
  lVar1 = (ulonglong)*puVar10 * (ulonglong)puVar10[2] +
          CONCAT44(puVar10[2] * puVar10[1] + *puVar10 * puVar10[3],puVar10[4]);
  *puVar10 = (uint)lVar1;
  puVar10[1] = puVar10[5] + (int)((ulonglong)lVar1 >> 0x20);
  local_48 = 0;
  FUN_00017d64(&local_48,*(undefined4 *)(iVar12 + 0x69208));
  uVar8 = puVar10[2];
  local_68 = uVar7;
  local_64 = uVar7;
  local_60 = uVar11;
  local_44 = 0x25;
  uVar2 = (ulonglong)*puVar10 * (ulonglong)uVar8 +
          CONCAT44(uVar8 * puVar10[1] + *puVar10 * puVar10[3],puVar10[4]);
  uVar9 = puVar10[5] + (int)(uVar2 >> 0x20);
  lVar1 = (ulonglong)uVar8 * (uVar2 & 0xffffffff) +
          CONCAT44(uVar8 * uVar9 + (int)uVar2 * puVar10[3],puVar10[4]);
  uVar8 = puVar10[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar10 = (uint)lVar1;
  puVar10[1] = uVar8;
  iVar6 = DAT_000694a0;
  puVar13 = (undefined4 *)(DAT_000694a0 + 0x692e0);
  local_41 = 0x53;
  local_42 = 0xff;
  local_43 = 0xbb;
  local_74 = *puVar13;
  local_70 = *(undefined4 *)(DAT_000694a0 + 0x692e4);
  local_6c = *(undefined4 *)(DAT_000694a0 + 0x692e8);
  fVar14 = (float)(ulonglong)((uVar8 >> 0xd) - (uint)(uVar8 * 0x80000 < uVar8)) / fVar3;
  FUN_00053c44(param_1,&local_48,0,
               ((float)(ulonglong)((uVar9 >> 0xd) - (uint)(uVar9 * 0x80000 < uVar9)) / fVar3) *
               fVar4,-(fVar14 + fVar14 + fVar5),&local_74,&local_68,&local_44,3);
  FUN_00017d90(&local_48);
  local_50 = 0;
  FUN_00017d64(&local_50,*(undefined4 *)(iVar12 + 0x69208));
  local_80 = uVar7;
  uVar8 = puVar10[2];
  local_7c = uVar7;
  local_78 = uVar11;
  uVar2 = (ulonglong)*puVar10 * (ulonglong)uVar8 +
          CONCAT44(uVar8 * puVar10[1] + *puVar10 * puVar10[3],puVar10[4]);
  uVar9 = puVar10[5] + (int)(uVar2 >> 0x20);
  lVar1 = (ulonglong)uVar8 * (uVar2 & 0xffffffff) +
          CONCAT44(uVar8 * uVar9 + (int)uVar2 * puVar10[3],puVar10[4]);
  uVar8 = puVar10[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar10 = (uint)lVar1;
  puVar10[1] = uVar8;
  local_49 = 0x25;
  local_4a = 0xff;
  local_4b = 0xed;
  local_4c = 0x50;
  fVar14 = (float)(ulonglong)((uVar8 >> 0xd) - (uint)(uVar8 * 0x80000 < uVar8)) / fVar3;
  local_8c = *puVar13;
  local_88 = *(undefined4 *)(iVar6 + 0x692e4);
  local_84 = *(undefined4 *)(iVar6 + 0x692e8);
  FUN_00053c44(param_1,&local_50,0,
               ((float)(ulonglong)((uVar9 >> 0xd) - (uint)(uVar9 * 0x80000 < uVar9)) / fVar3) *
               fVar4,fVar14 + fVar14 + fVar5,&local_8c,&local_80,&local_4c,3);
  FUN_00017d90(&local_50);
  return;
}



