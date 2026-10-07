/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001f84c FUN_0001f84c */

void FUN_0001f84c(int param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_60;
  undefined4 local_5c;
  uint local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar2 = DAT_0001fb4c;
  iVar10 = DAT_0001fb48 + 0x1f862;
  local_34 = **(int **)(iVar10 + DAT_0001fb4c);
  if (*(int *)(param_1 + 0x6c) != 0) {
    uVar3 = FUN_0007e454();
    FUN_0007d8e8(uVar3,*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  fVar12 = DAT_0001fb7c;
  fVar16 = DAT_0001fb44;
  fVar13 = DAT_0001fb40;
  fVar11 = DAT_0001fb30;
  iVar8 = *(int *)(param_1 + 0x40);
  switch(iVar8) {
  case 0:
    fVar11 = *(float *)(param_1 + 0x44) - param_2;
    *(float *)(param_1 + 0x44) = fVar11;
    if (fVar11 <= fVar12) {
      *(undefined4 *)(param_1 + 0x40) = 2;
      fVar11 = (float)FUN_000927b8(*(undefined2 *)(param_1 + 0x36));
      fVar16 = *(float *)(param_1 + 0x4c);
      fVar13 = (float)FUN_000927c8(*(undefined2 *)(param_1 + 0x36));
      fVar13 = fVar13 * *(float *)(param_1 + 0x4c) * DAT_0001fb3c;
      *(float *)(param_1 + 0x1c) = fVar11 * fVar16 * DAT_0001fb3c;
      *(float *)(param_1 + 0x20) = fVar13;
      *(float *)(param_1 + 0x24) = fVar12;
      if (*(byte *)(param_1 + 0x48) == 0) {
        uVar3 = *(undefined4 *)(*(int *)(iVar10 + DAT_0001fb54) + 0x18c);
        local_60 = DAT_0001fb58 + 0x1fa68;
        local_5c = *(undefined4 *)(iVar10 + DAT_0001fb5c);
        local_38 = 1;
        local_58[0] = (uint)*(byte *)(param_1 + 0x48);
        (**(code **)(DAT_0001fb58 + 0x1fa70))(&local_60,local_58);
        FUN_00073a7c(uVar3,DAT_0001fb60 + 0x1fa80,0x3f800000,local_58);
        FUN_0001d388(local_58);
        local_60 = DAT_0001fb64;
        *(float *)(param_1 + 0x44) = fVar12;
        local_60 = local_60 + 0x1fa9c;
        *(undefined4 *)(param_1 + 0x40) = 4;
        uVar3 = FUN_0007e454();
        iVar8 = FUN_0007d7f8(uVar3,*(undefined4 *)(param_1 + 0x54));
        if (iVar8 != 0) {
          uVar3 = FUN_0007e454();
          uVar7 = *(undefined4 *)(param_1 + 0x54);
          goto LAB_0001fb14;
        }
      }
    }
  default:
switchD_0001f880_caseD_5:
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar12 = *(float *)(param_1 + 0x20);
    fVar13 = *(float *)(param_1 + 0x24);
    break;
  case 1:
    FUN_0001f6c0(param_1);
    goto LAB_0001f918;
  case 2:
    fVar11 = *(float *)(param_1 + 0x1c) * DAT_0001fb40;
    fVar12 = *(float *)(param_1 + 0x20) * DAT_0001fb40;
    *(float *)(param_1 + 0x1c) = fVar11;
    fVar13 = *(float *)(param_1 + 0x24) * fVar13;
    *(float *)(param_1 + 0x20) = fVar12;
    *(float *)(param_1 + 0x24) = fVar13;
    if ((int)((uint)(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13 < fVar16) << 0x1f) < 0) {
      *(undefined4 *)(param_1 + 0x40) = 3;
      uVar3 = FUN_0007e454();
      iVar8 = FUN_0007d7f8(uVar3,*(undefined4 *)(param_1 + 0x54));
      if (iVar8 == 0) goto switchD_0001f880_caseD_5;
      uVar3 = FUN_0007e454();
      uVar7 = *(undefined4 *)(param_1 + 0x54);
LAB_0001fb14:
      uVar3 = FUN_0007da40(uVar3,uVar7,0);
      fVar11 = *(float *)(param_1 + 0x1c);
      fVar12 = *(float *)(param_1 + 0x20);
      fVar13 = *(float *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x68) = uVar3;
    }
    break;
  case 3:
    fVar13 = *(float *)(param_1 + 0x44);
    fVar16 = fVar13 + param_2;
    *(float *)(param_1 + 0x44) = fVar16;
    if ((fVar13 <= fVar11) && (fVar16 != fVar11 && fVar16 < fVar11 == (NAN(fVar16) || NAN(fVar11))))
    {
      uVar3 = FUN_0001c940();
      uVar4 = FUN_0001bb84(uVar3,2);
      if (0x13 < uVar4) {
        puVar9 = *(uint **)(iVar10 + DAT_0001fe94);
        lVar1 = (ulonglong)*puVar9 * (ulonglong)puVar9[2] +
                CONCAT44(puVar9[2] * puVar9[1] + *puVar9 * puVar9[3],puVar9[4]);
        uVar6 = puVar9[5] + (int)((ulonglong)lVar1 >> 0x20);
        *puVar9 = (uint)lVar1;
        puVar9[1] = uVar6;
        uVar4 = uVar6 * 3;
        if ((char)(CARRY4(uVar6,uVar6) + CARRY4(uVar6 * 2,uVar6)) != '\0') {
          fVar16 = *(float *)(param_1 + 0x44);
          goto LAB_0001f8b4;
        }
      }
      uVar3 = FUN_0007e454(uVar4);
      iVar8 = FUN_0007d7f8(uVar3,*(undefined4 *)(param_1 + 0x58));
      if (iVar8 != 0) {
        uVar3 = FUN_0007e454();
        iVar8 = FUN_0007da40(uVar3,*(undefined4 *)(param_1 + 0x58),0);
        *(int *)(param_1 + 0x6c) = iVar8;
        if (iVar8 != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0x14);
          uVar7 = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(iVar8 + 0xc) = uVar3;
          *(undefined4 *)(iVar8 + 0x10) = uVar7;
          fVar16 = *(float *)(param_1 + 0x44);
          goto LAB_0001f8b4;
        }
      }
      fVar16 = *(float *)(param_1 + 0x44);
    }
LAB_0001f8b4:
    if (fVar16 < DAT_0001fb34 != (NAN(fVar16) || NAN(DAT_0001fb34))) goto switchD_0001f880_caseD_5;
    *(float *)(param_1 + 0x44) = DAT_0001fb7c;
    *(undefined4 *)(param_1 + 0x40) = 4;
    iVar8 = FUN_00092918(*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x10),
                         *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x14));
    uVar6 = (uint)*(ushort *)(param_1 + 0x36);
    uVar4 = iVar8 - uVar6;
    if (0x8000 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
      if ((int)uVar6 < iVar8) {
        uVar4 = uVar4 - 0x10000;
      }
      else {
        uVar4 = (0x10000 - uVar6) + iVar8;
      }
    }
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar12 = *(float *)(param_1 + 0x20);
    fVar13 = *(float *)(param_1 + 0x24);
    *(ushort *)(param_1 + 0x36) =
         *(ushort *)(param_1 + 0x36) + (short)(int)((float)(longlong)(int)uVar4 * DAT_0001fb80);
    break;
  case 4:
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + param_2;
    fVar13 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x10);
    fVar16 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x14);
    fVar11 = (float)FUN_00092d98(fVar16 * fVar16 + fVar13 * fVar13);
    if ((int)((uint)(fVar11 < DAT_0001fb38) << 0x1f) < 0) {
      uVar3 = FUN_0001c940();
      uVar4 = FUN_0001bb84(uVar3,2);
      if (uVar4 < 0x14) {
LAB_0001f9c0:
        uVar3 = FUN_0007e454(uVar4);
        iVar8 = FUN_0007d7f8(uVar3,*(undefined4 *)(param_1 + 0x58));
        if (iVar8 != 0) {
          uVar3 = FUN_0007e454();
          iVar8 = FUN_0007da40(uVar3,*(undefined4 *)(param_1 + 0x58),0);
          *(int *)(param_1 + 0x6c) = iVar8;
          if (iVar8 != 0) {
            uVar3 = *(undefined4 *)(param_1 + 0x14);
            uVar7 = *(undefined4 *)(param_1 + 0x18);
            *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(param_1 + 0x10);
            *(undefined4 *)(iVar8 + 0xc) = uVar3;
            *(undefined4 *)(iVar8 + 0x10) = uVar7;
          }
        }
      }
      else {
        puVar9 = *(uint **)(iVar10 + DAT_0001fb50);
        lVar1 = (ulonglong)*puVar9 * (ulonglong)puVar9[2] +
                CONCAT44(puVar9[2] * puVar9[1] + *puVar9 * puVar9[3],puVar9[4]);
        uVar6 = puVar9[5] + (int)((ulonglong)lVar1 >> 0x20);
        *puVar9 = (uint)lVar1;
        puVar9[1] = uVar6;
        uVar4 = uVar6 * 3;
        if ((char)(CARRY4(uVar6,uVar6) + CARRY4(uVar6 * 2,uVar6)) == '\0') goto LAB_0001f9c0;
      }
      *(undefined4 *)(param_1 + 0x40) = 1;
      goto LAB_0001f918;
    }
    iVar5 = FUN_00092918(fVar13,fVar16);
    fVar13 = DAT_0001fb80;
    fVar16 = *(float *)(param_1 + 0x44);
    fVar12 = DAT_0001fb70 + fVar16 * DAT_0001fb68;
    fVar11 = DAT_0001fb94 - fVar11;
    if (fVar11 == 0.0 || fVar11 < 0.0 != NAN(fVar11)) {
      iVar8 = 0;
    }
    if (fVar11 != 0.0 && fVar11 < 0.0 == NAN(fVar11)) {
      iVar8 = 1;
    }
    fVar14 = DAT_0001fb98;
    fVar15 = DAT_0001fb7c;
    if (iVar8 != 0) {
      fVar14 = (fVar11 * DAT_0001fb90) / DAT_0001fb94 + DAT_0001fb98;
      fVar15 = fVar11 / DAT_0001fb8c;
    }
    if ((int)((uint)((fVar12 + fVar15) * DAT_0001fb84 < fVar14) << 0x1f) < 0) {
      fVar15 = DAT_0001fb7c;
      if (iVar8 != 0) {
        fVar15 = fVar11 / DAT_0001fb8c;
      }
      fVar12 = (fVar15 + fVar12) * DAT_0001fb84;
    }
    else {
      fVar12 = DAT_0001fb98;
      if (iVar8 != 0) {
        fVar12 = (fVar11 * DAT_0001fb90) / DAT_0001fb94 + DAT_0001fb98;
      }
    }
    uVar6 = (uint)*(ushort *)(param_1 + 0x36);
    uVar4 = iVar5 - uVar6;
    if (0x8000 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
      if ((int)uVar6 < iVar5) {
        uVar4 = uVar4 - 0x10000;
      }
      else {
        uVar4 = (0x10000 - uVar6) + iVar5;
      }
    }
    fVar15 = DAT_0001fb80 - fVar16;
    *(ushort *)(param_1 + 0x36) =
         *(ushort *)(param_1 + 0x36) + (short)(int)(fVar12 * (float)(longlong)(int)uVar4);
    fVar11 = DAT_0001fb7c;
    if ((0.0 < fVar15) && (fVar11 = DAT_0001fb88, fVar15 < fVar13 != (NAN(fVar15) || NAN(fVar13))))
    {
      fVar11 = fVar15 + fVar15;
    }
    fVar11 = fVar11 + fVar16 + DAT_0001fb6c + fVar16 + DAT_0001fb6c;
    if (-1 < (int)((uint)(fVar11 < DAT_0001fb70) << 0x1f)) {
      fVar11 = DAT_0001fb70;
    }
    fVar13 = (float)(longlong)(int)(uint)*(ushort *)(param_1 + 0x50) +
             fVar11 * DAT_0001fb74 * param_2 * DAT_0001fb78;
    *(ushort *)(param_1 + 0x50) = (ushort)(0.0 < fVar13) * (short)(int)fVar13;
    fVar11 = fVar11 * (*(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x4c));
    fVar16 = (float)FUN_000927b8();
    fVar12 = (float)FUN_000927c8(*(undefined2 *)(param_1 + 0x36));
    fVar13 = DAT_0001fb7c;
    *(float *)(param_1 + 0x1c) = fVar16 * fVar11;
    *(float *)(param_1 + 0x20) = fVar12 * fVar11;
    *(float *)(param_1 + 0x24) = fVar13;
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar12 = *(float *)(param_1 + 0x20);
    fVar13 = *(float *)(param_1 + 0x24);
  }
  iVar8 = *(int *)(param_1 + 0x68);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + param_2 * fVar11;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + param_2 * fVar12;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + param_2 * fVar13;
  if (iVar8 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar8 + 0xc) = uVar3;
    *(undefined4 *)(iVar8 + 0x10) = uVar7;
    iVar8 = *(int *)(param_1 + 0x68);
    uVar3 = FUN_000927b8(*(undefined2 *)(param_1 + 0x36));
    *(undefined4 *)(iVar8 + 0x30) = uVar3;
    iVar8 = *(int *)(param_1 + 0x68);
    uVar3 = FUN_000927c8(*(undefined2 *)(param_1 + 0x36));
    *(undefined4 *)(iVar8 + 0x2c) = uVar3;
  }
LAB_0001f918:
  if (local_34 != **(int **)(iVar10 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



