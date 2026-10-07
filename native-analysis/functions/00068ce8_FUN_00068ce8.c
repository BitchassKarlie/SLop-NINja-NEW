/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00068ce8 FUN_00068ce8 */

void FUN_00068ce8(undefined4 *param_1,float param_2,int **param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_99;
  undefined4 local_98;
  undefined local_94;
  undefined local_93;
  undefined local_92;
  undefined local_91;
  undefined4 local_90;
  undefined4 local_8c [8];
  undefined local_6c;
  undefined4 local_68 [8];
  undefined local_48;
  int local_44;
  
  iVar7 = DAT_000690e0;
  iVar17 = DAT_000690dc + 0x68d00;
  local_44 = **(int **)(iVar17 + DAT_000690e0);
  FUN_00068904();
  local_90 = 0;
  FUN_00017d64(&local_90,*(undefined4 *)(DAT_000690e4 + 0x68d34));
  local_b4 = *param_1;
  local_b0 = param_1[1];
  local_ac = param_1[2];
  local_48 = 1;
  local_68[0] = 0;
  if (*(char *)(param_3 + 8) != '\0') {
    param_3 = (int **)*param_3;
  }
  if (param_3 != (int **)0x0) {
    (**(code **)((int)*param_3 + 8))(param_3,local_68);
  }
  iVar8 = DAT_000690ec;
  uVar10 = FUN_00022674(DAT_000690e8 + 0x68d6e,0);
  fVar6 = DAT_000690d0;
  fVar5 = DAT_000690cc;
  fVar4 = DAT_000690c8;
  uVar3 = DAT_000690c4;
  puVar16 = (undefined4 *)(iVar8 + 0x68d78);
  local_c0 = *puVar16;
  local_a8 = DAT_000690f0 + 0x68d84;
  local_bc = *(undefined4 *)(iVar8 + 0x68d7c);
  local_8c[0] = 0;
  local_a4 = *(undefined4 *)(iVar17 + DAT_000690f4);
  local_b8 = *(undefined4 *)(iVar8 + 0x68d80);
  local_6c = 1;
  (**(code **)(DAT_000690f0 + 0x68d8c))(&local_a8,local_8c);
  pvVar11 = operator_new(0x148);
  FUN_000550e8(pvVar11,&local_90,&local_b4,local_68,uVar10,&local_c0,local_8c);
  FUN_0001d358(local_8c);
  iVar9 = DAT_000690fc;
  local_a8 = DAT_000690f8 + 0x68dfe;
  FUN_0001d358(local_68);
  FUN_00017d90(&local_90);
  fVar19 = param_2 * DAT_000690d4;
  iVar12 = *(int *)((int)pvVar11 + 0x120);
  *(float *)((int)pvVar11 + 0x110) = *(float *)((int)pvVar11 + 0x110) * fVar19;
  *(float *)((int)pvVar11 + 0x114) = *(float *)((int)pvVar11 + 0x114) * fVar19;
  *(float *)((int)pvVar11 + 0x118) = *(float *)((int)pvVar11 + 0x118) * fVar19;
  *(float *)(iVar12 + 0x28) = *(float *)(iVar12 + 0x28) * fVar19;
  *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * fVar19;
  *(float *)(iVar12 + 0x30) = *(float *)(iVar12 + 0x30) * fVar19;
  local_cc = uVar3;
  local_c8 = DAT_000690d8;
  local_c4 = uVar3;
  FUN_00025114(*(undefined4 *)((int)pvVar11 + 0x120),0,&local_cc);
  uVar14 = *(undefined4 *)((int)pvVar11 + 0x120);
  uVar10 = FUN_0008f414(DAT_00069100 + 0x68e82);
  FUN_0002224c(uVar14,uVar10);
  local_98 = 0;
  puVar15 = *(uint **)(iVar17 + DAT_00069104);
  lVar1 = (ulonglong)*puVar15 * (ulonglong)puVar15[2] +
          CONCAT44(puVar15[2] * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
  uVar10 = *(undefined4 *)(iVar9 + 0x68e32);
  *puVar15 = (uint)lVar1;
  puVar15[1] = puVar15[5] + (int)((ulonglong)lVar1 >> 0x20);
  FUN_00017d64(&local_98,uVar10);
  local_d8 = uVar3;
  uVar18 = puVar15[2];
  local_d4 = uVar3;
  uVar2 = (ulonglong)*puVar15 * (ulonglong)uVar18 +
          CONCAT44(uVar18 * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
  uVar13 = puVar15[5] + (int)(uVar2 >> 0x20);
  local_94 = 0x25;
  lVar1 = (ulonglong)uVar18 * (uVar2 & 0xffffffff) +
          CONCAT44(uVar18 * uVar13 + (int)uVar2 * puVar15[3],puVar15[4]);
  uVar18 = puVar15[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar15 = (uint)lVar1;
  puVar15[1] = uVar18;
  local_91 = 0x53;
  local_92 = 0xff;
  local_93 = 0xbb;
  local_e4 = *puVar16;
  local_e0 = *(undefined4 *)(iVar8 + 0x68d7c);
  local_dc = *(undefined4 *)(iVar8 + 0x68d80);
  fVar19 = (float)(ulonglong)((uVar18 >> 0xd) - (uint)(uVar18 * 0x80000 < uVar18)) / fVar4;
  local_d0 = param_2 + param_2;
  FUN_00053c44(pvVar11,&local_98,0,
               ((float)(ulonglong)((uVar13 >> 0xd) - (uint)(uVar13 * 0x80000 < uVar13)) / fVar4) *
               fVar5,-(fVar19 + fVar19 + fVar6),&local_e4,&local_d8,&local_94,3);
  FUN_00017d90(&local_98);
  local_a0 = 0;
  FUN_00017d64(&local_a0,*(undefined4 *)(iVar9 + 0x68e32));
  local_f0 = uVar3;
  local_ec = uVar3;
  uVar2 = (ulonglong)*puVar15 * (ulonglong)puVar15[2] +
          CONCAT44(puVar15[2] * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
  uVar13 = puVar15[5] + (int)(uVar2 >> 0x20);
  lVar1 = (ulonglong)puVar15[2] * (uVar2 & 0xffffffff) +
          CONCAT44(puVar15[2] * uVar13 + (int)uVar2 * puVar15[3],puVar15[4]);
  uVar18 = puVar15[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar15 = (uint)lVar1;
  puVar15[1] = uVar18;
  local_99 = 0x25;
  local_9b = 0xed;
  local_9a = 0xff;
  local_9c = 0x50;
  fVar19 = (float)(ulonglong)((uVar18 >> 0xd) - (uint)(uVar18 * 0x80000 < uVar18)) / fVar4;
  local_fc = *puVar16;
  local_f8 = *(undefined4 *)(iVar8 + 0x68d7c);
  local_f4 = *(undefined4 *)(iVar8 + 0x68d80);
  local_e8 = param_2 + param_2;
  FUN_00053c44(pvVar11,&local_a0,0,
               ((float)(ulonglong)((uVar13 >> 0xd) - (uint)(uVar13 * 0x80000 < uVar13)) / fVar4) *
               fVar5,fVar19 + fVar19 + fVar6,&local_fc,&local_f0,&local_9c,3);
  FUN_00017d90(&local_a0);
  FUN_00049d7c(*(undefined4 *)(*(int *)(iVar17 + DAT_00069178) + 0x40),pvVar11,0);
  if (local_44 == **(int **)(iVar17 + iVar7)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar11);
}



