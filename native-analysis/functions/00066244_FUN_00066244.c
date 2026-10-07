/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00066244 FUN_00066244 */

void FUN_00066244(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined uVar7;
  undefined uVar8;
  byte bVar9;
  undefined uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined local_79;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar5 = DAT_000665c0;
  iVar2 = DAT_000665bc;
  iVar11 = DAT_000665b8 + 0x66256;
  piVar12 = (int *)(DAT_000665c0 + 0x66260);
  local_2c = **(int **)(iVar11 + DAT_000665bc);
  if ((-1 < *piVar12 << 0x1f) && (iVar4 = __cxa_guard_acquire(piVar12), iVar4 != 0)) {
    *(undefined4 *)(iVar5 + 0x66264) = *(undefined4 *)(param_1 + 8);
    __cxa_guard_release(piVar12);
  }
  iVar4 = FUN_0002f5d4();
  iVar5 = DAT_000665c4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(*(int *)(*(int *)(iVar11 + DAT_000665c4) + 0x50) + 0xf0) = DAT_000665a8;
    goto LAB_00066332;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar4 = *(int *)(iVar11 + iVar5);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_000665c8 + 0x66284);
  fVar15 = DAT_000665a0;
  if (((*(char *)(iVar4 + 2) == '\0') && (*(char *)(iVar4 + 8) == '\0')) &&
     ((*(char *)(iVar4 + 0x174) == '\0' || (*(char *)(iVar4 + 0x19d) != '\0')))) {
    fVar16 = *(float *)(param_1 + 0xb4);
    if (fVar16 == 0.0 || fVar16 < 0.0 != NAN(fVar16)) {
      param_2 = param_2 + *(float *)(param_1 + 0x70);
      *(float *)(param_1 + 0x70) = param_2;
      *(float *)(param_1 + 0xb8) = (float)(longlong)((int)param_2 % 6) + fVar15;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x50);
      iVar4 = FUN_0002f5c0();
      if (iVar4 != 0) {
        iVar13 = FUN_0007b72c();
        iVar4 = DAT_000665e4;
        fVar15 = *(float *)(iVar13 + 0x5c);
        if (fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15)) {
          *(undefined *)(param_1 + 0x53) = 0xff;
          *(undefined *)(param_1 + 0x52) = 0xff;
          *(undefined *)(param_1 + 0x51) = 100;
          *(undefined *)(param_1 + 0x50) = 100;
          FUN_0008f060(param_1 + 0xbc,0x40,iVar4 + 0x66576,(int)fVar15 + 1);
          goto LAB_0006628e;
        }
      }
      *(undefined *)(param_1 + 0xbc) = 0;
      iVar4 = FUN_0002f5c0();
      if (iVar4 == 0) {
        param_2 = *(float *)(param_1 + 0x70) - param_2;
        *(float *)(param_1 + 0x70) = param_2;
      }
      else {
        fVar15 = *(float *)(param_1 + 0x70);
        iVar4 = FUN_0007b72c();
        param_2 = fVar15 - param_2 * *(float *)(iVar4 + 0x60);
        *(float *)(param_1 + 0x70) = param_2;
      }
      if ((int)((uint)(param_2 < DAT_000665a0) << 0x1f) < 0) {
        FUN_000318fc(0xffffffff,0xbf800000,0xffffffff);
        uVar14 = DAT_0006679c;
        local_50[0] = 0;
        **(undefined4 **)(iVar11 + DAT_000667a4) = 0;
        **(undefined4 **)(iVar11 + DAT_000667a8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x70) = uVar14;
        *(undefined *)(param_1 + 0x53) = 0xff;
        *(undefined *)(param_1 + 0x52) = 0xff;
        *(undefined *)(param_1 + 0x51) = 100;
        *(undefined *)(param_1 + 0x50) = 100;
        uVar14 = *(undefined4 *)(*(int *)(iVar11 + iVar5) + 0x18c);
        local_84 = DAT_000667ac + 0x666a6;
        local_80 = *(undefined4 *)(iVar11 + DAT_000667b0);
        local_30 = 1;
        (**(code **)(DAT_000667ac + 0x666ae))(&local_84,local_50);
        FUN_00073a7c(uVar14,DAT_000667b4 + 0x666c0,0x3f800000,local_50);
        FUN_0001d388(local_50);
        local_84 = DAT_000667b8 + 0x666d8;
      }
      else if ((int)((uint)(param_2 < DAT_000665ac) << 0x1f) < 0) {
        if ((int)(param_2 * DAT_000665b0) << 0x1f < 0) {
          uVar10 = 100;
          uVar8 = 0xff;
          uVar7 = 100;
          uVar3 = 0xff;
        }
        else {
          puVar6 = *(undefined **)(iVar11 + DAT_000667bc);
          uVar10 = *puVar6;
          uVar7 = puVar6[1];
          uVar8 = puVar6[2];
          uVar3 = puVar6[3];
        }
        *(undefined *)(param_1 + 0x53) = uVar3;
        *(undefined *)(param_1 + 0x52) = uVar8;
        *(undefined *)(param_1 + 0x51) = uVar7;
        *(undefined *)(param_1 + 0x50) = uVar10;
      }
      else if ((int)((uint)(param_2 < DAT_000665e8) << 0x1f) < 0) {
        if ((int)(param_2 * DAT_000665ec) << 0x1f < 0) {
          local_75 = 0xff;
          local_76 = 0xff;
          local_77 = 100;
          local_78 = 100;
        }
        else {
          puVar6 = *(undefined **)(iVar11 + DAT_000667bc);
          local_78 = *puVar6;
          local_77 = puVar6[1];
          local_76 = puVar6[2];
          local_75 = puVar6[3];
        }
        *(undefined *)(param_1 + 0x53) = local_75;
        *(undefined *)(param_1 + 0x52) = local_76;
        *(undefined *)(param_1 + 0x51) = local_77;
        *(undefined *)(param_1 + 0x50) = local_78;
      }
      else if ((int)((uint)(param_2 < DAT_000667a0) << 0x1f) < 0) {
        if ((int)(param_2 + param_2) << 0x1f < 0) {
          local_79 = 0xff;
          local_7a = 0xff;
          local_7b = 100;
          local_7c = 100;
        }
        else {
          puVar6 = *(undefined **)(iVar11 + DAT_000667bc);
          local_7c = *puVar6;
          local_7b = puVar6[1];
          local_7a = puVar6[2];
          local_79 = puVar6[3];
        }
        *(undefined *)(param_1 + 0x53) = local_79;
        *(undefined *)(param_1 + 0x52) = local_7a;
        *(undefined *)(param_1 + 0x51) = local_7b;
        *(undefined *)(param_1 + 0x50) = local_7c;
      }
      param_2 = *(float *)(param_1 + 0x70);
      if (((param_2 != 0.0 && param_2 < 0.0 == NAN(param_2)) &&
          ((int)((uint)(param_2 < DAT_000665b4) << 0x1f) < 0)) &&
         (*(char *)(param_1 + 0x50) != cVar1)) {
        bVar9 = *(byte *)(DAT_000665d0 + 0x664b0) ^ 1;
        *(byte *)(DAT_000665d0 + 0x664b0) = bVar9;
        uVar14 = *(undefined4 *)(*(int *)(iVar11 + iVar5) + 0x18c);
        if (bVar9 == 0) {
          iVar4 = DAT_000665d4 + 0x664ca;
        }
        else {
          iVar4 = DAT_000667c0 + 0x6677a;
        }
        local_8c = DAT_000665d8 + 0x664de;
        local_88 = *(undefined4 *)(iVar11 + DAT_000665dc);
        local_54 = 1;
        local_74[0] = 0;
        (**(code **)(DAT_000665d8 + 0x664e6))(&local_8c,local_74);
        FUN_00073a7c(uVar14,iVar4,0x3f800000,local_74);
        FUN_0001d388(local_74);
        param_2 = *(float *)(param_1 + 0x70);
        local_8c = DAT_000665e0 + 0x66514;
      }
      *(float *)(param_1 + 0xb8) =
           (float)(longlong)((int)(*(float *)(param_1 + 0xb4) - param_2) % 6) + DAT_000665a0;
    }
  }
  else {
LAB_0006628e:
    param_2 = *(float *)(param_1 + 0x70);
  }
  iVar4 = DAT_000665cc;
  fVar15 = DAT_00066590;
  iVar13 = *(int *)(iVar11 + iVar5);
  *(float *)(*(int *)(iVar13 + 0x50) + 0xf0) = param_2;
  FUN_0008f060(param_1 + 0x74,0x40,iVar4 + 0x662b8,(int)(*(float *)(param_1 + 0x70) / fVar15),
               (int)*(float *)(param_1 + 0x70) % 0x3c);
  iVar5 = FUN_0002f5f4();
  if (iVar5 == 0) {
    fVar15 = *(float *)(iVar13 + 0x10);
    if ((int)((uint)(fVar15 < 0.0) << 0x1f) < 0) {
      fVar15 = -fVar15;
    }
    fVar15 = DAT_00066594 - fVar15;
  }
  else {
    fVar15 = *(float *)(iVar13 + 0x10);
    if ((int)((uint)(fVar15 < 0.0) << 0x1f) < 0) {
      fVar15 = -fVar15;
    }
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar15 * DAT_000665a4;
    fVar15 = DAT_00066594;
  }
  fVar16 = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0xc) =
       fVar16 * DAT_0006659c * fVar15 + (fVar16 + fVar16 + DAT_00066598) * DAT_000665a0;
LAB_00066332:
  if (local_2c == **(int **)(iVar11 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



