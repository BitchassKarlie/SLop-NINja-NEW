/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002d1c0 FUN_0002d1c0 */

void FUN_0002d1c0(int *param_1,int *param_2,int *param_3,undefined param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_r1;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  
  iVar6 = DAT_0002d534;
  iVar13 = DAT_0002d530 + 0x2d1d4;
  *(undefined *)(param_1 + 6) = param_4;
  iVar3 = DAT_0002d538;
  if (param_5 < **(int **)(iVar13 + iVar6)) {
    param_1[1] = DAT_0002d544;
    FUN_00021610(&local_44,param_5);
    *(undefined *)((int)param_1 + 0xb) = local_41;
    *(undefined *)((int)param_1 + 10) = local_42;
    *(undefined *)((int)param_1 + 9) = local_43;
    *(undefined *)(param_1 + 2) = local_44;
  }
  else {
    param_1[1] = (int)DAT_0002d50c;
    puVar10 = *(undefined **)(iVar13 + iVar3);
    *(undefined *)((int)param_1 + 0xb) = puVar10[3];
    *(undefined *)((int)param_1 + 10) = puVar10[2];
    *(undefined *)((int)param_1 + 9) = puVar10[1];
    *(undefined *)(param_1 + 2) = *puVar10;
  }
  iVar3 = DAT_0002d53c;
  fVar17 = DAT_0002d514;
  fVar5 = DAT_0002d510;
  puVar14 = *(uint **)(iVar13 + DAT_0002d53c);
  lVar2 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
          CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
  uVar11 = puVar14[5] + (int)((ulonglong)lVar2 >> 0x20);
  *puVar14 = (uint)lVar2;
  puVar14[1] = uVar11;
  *(bool *)(param_1 + 0xd) = CARRY4(uVar11,uVar11);
  param_1[3] = (int)(float)(ulonglong)*(byte *)((int)param_1 + 0xb);
  iVar8 = DAT_0002d544;
  iVar7 = param_2[1];
  iVar9 = param_2[2];
  param_1[0xe] = *param_2;
  param_1[0xf] = iVar7;
  param_1[0x10] = iVar9;
  param_1[0x10] = iVar8;
  iVar8 = param_3[1];
  iVar7 = param_3[2];
  param_1[0x17] = *param_3;
  param_1[0x18] = iVar8;
  param_1[0x19] = iVar7;
  fVar4 = (float)FUN_00092d98((float)param_1[0x18] * (float)param_1[0x18] +
                              (float)param_1[0x17] * (float)param_1[0x17] +
                              (float)param_1[0x19] * (float)param_1[0x19]);
  fVar16 = fVar4 * DAT_0002d518 - DAT_0002d51c;
  lVar2 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
          CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
  uVar11 = puVar14[5] + (int)((ulonglong)lVar2 >> 0x20);
  *puVar14 = (uint)lVar2;
  puVar14[1] = uVar11;
  fVar4 = DAT_0002d520;
  fVar15 = (float)param_1[0x18] * DAT_0002d50c * DAT_0002d520;
  param_1[0x17] = (int)((float)param_1[0x17] * DAT_0002d520);
  param_1[0x18] = (int)fVar15;
  param_1[0x19] =
       (int)((fVar16 - ((float)(ulonglong)((uVar11 >> 0xd) - (uint)(uVar11 * 0x80000 < uVar11)) /
                       fVar5) * fVar17) * fVar4);
  lVar2 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
          CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
  uVar11 = puVar14[5] + (int)((ulonglong)lVar2 >> 0x20);
  *puVar14 = (uint)lVar2;
  puVar14[1] = uVar11;
  uVar1 = (ulonglong)uVar11 * 0x168;
  puVar12 = *(undefined4 **)(iVar13 + iVar6);
  param_1[5] = param_5;
  param_1[4] = (int)(float)(uVar1 >> 0x20);
  __aeabi_idivmod(param_5,*puVar12,(int)uVar1);
  iVar8 = FUN_00021680(extraout_r1);
  *(undefined *)((int)param_1 + 0x19) = *(undefined *)(iVar8 + 0x2d5);
  lVar2 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
          CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
  uVar11 = puVar14[5] + (int)((ulonglong)lVar2 >> 0x20);
  *puVar14 = (uint)lVar2;
  puVar14[1] = uVar11;
  fVar17 = fVar17 + ((float)(ulonglong)((uVar11 >> 0xd) - (uint)(uVar11 * 0x80000 < uVar11)) / fVar5
                    ) * fVar17;
  param_1[0x13] = (int)fVar17;
  param_1[0x11] = (int)fVar17;
  param_1[0x12] = (int)-fVar17;
  param_1[0x14] = param_1[0x11];
  param_1[0x15] = param_1[0x12];
  param_1[0x16] = param_1[0x13];
  param_1[0x1c] = -1;
  (**(code **)(*param_1 + 8))(param_1,0,0,0);
  iVar8 = FUN_0002f5f4();
  if (iVar8 != 0) {
    if (*(float *)(*(int *)(iVar13 + DAT_0002d540) + 0x10) == 0.0) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
  }
  puVar14 = *(uint **)(iVar13 + iVar3);
  *(char *)(param_1 + 0x1d) = (char)iVar8;
  lVar2 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
          CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
  uVar11 = puVar14[5] + (int)((ulonglong)lVar2 >> 0x20);
  *puVar14 = (uint)lVar2;
  puVar14[1] = uVar11;
  if ((uVar11 >> 0x1e != 0) && (*(char *)((int)param_1 + 0xb) != '\0')) {
    if ((**(int **)(iVar13 + iVar6) <= param_1[5]) ||
       (iVar6 = FUN_00021680(), *(char *)(iVar6 + 0x2b8) == '\0')) goto LAB_0002d448;
    lVar2 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
            CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
    uVar11 = puVar14[5] + (int)((ulonglong)lVar2 >> 0x20);
    *puVar14 = (uint)lVar2;
    puVar14[1] = uVar11;
    if ((char)(CARRY4(uVar11,uVar11) + CARRY4(uVar11 * 2,uVar11)) != '\0') goto LAB_0002d448;
  }
  *(undefined *)((int)param_1 + 0x75) = 0;
LAB_0002d448:
  iVar6 = DAT_0002d544;
  fVar17 = DAT_0002d528;
  fVar5 = DAT_0002d524;
  fVar15 = (float)FUN_000927c8((int)((float)param_1[4] * DAT_0002d524) & 0xffff);
  fVar16 = (float)FUN_000927b8((int)((float)param_1[4] * fVar5) & 0xffff);
  fVar4 = DAT_0002d52c;
  param_1[7] = (int)(fVar15 * fVar17);
  param_1[8] = (int)(fVar16 * fVar17);
  param_1[9] = iVar6;
  fVar15 = (float)FUN_000927c8((int)(((float)param_1[4] + fVar4) * fVar5) & 0xffff);
  fVar5 = (float)FUN_000927b8((int)(((float)param_1[4] + fVar4) * fVar5) & 0xffff);
  param_1[10] = (int)(fVar15 * fVar17);
  param_1[0xb] = (int)(fVar5 * fVar17);
  param_1[0xc] = iVar6;
  return;
}



