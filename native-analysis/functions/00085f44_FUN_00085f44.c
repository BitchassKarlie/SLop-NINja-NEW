/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085f44 FUN_00085f44 */

void FUN_00085f44(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *__format;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int unaff_r11;
  float fVar12;
  float fVar13;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c [8];
  undefined local_6c;
  undefined4 local_68 [8];
  undefined local_48;
  char acStack_44 [16];
  int local_34;
  
  iVar1 = DAT_0008627c;
  iVar6 = DAT_00086278 + 0x85f5c;
  iVar7 = param_3 + 0x16;
  local_34 = **(int **)(iVar6 + DAT_0008627c);
  fVar12 = param_2 + *(float *)(param_1 + iVar7 * 4);
  fVar13 = DAT_00086264;
  if ((0.0 < fVar12) &&
     (fVar13 = fVar12, fVar12 < DAT_0008626c == (NAN(fVar12) || NAN(DAT_0008626c)))) {
    fVar13 = DAT_0008626c;
  }
  *(float *)(param_1 + iVar7 * 4) = fVar13;
  iVar2 = DAT_00086280;
  if (param_2 != 0.0 && param_2 < 0.0 == NAN(param_2)) {
    if (-1 < *(int *)(DAT_00086280 + 0x85fea) << 0x1f) {
      iVar9 = DAT_00086280 + 0x85fea;
      iVar8 = __cxa_guard_acquire(iVar9);
      if (iVar8 != 0) {
        uVar4 = FUN_0008f414(DAT_000862b0 + 0x86138);
        *(undefined4 *)(iVar2 + 0x85fee) = uVar4;
        __cxa_guard_release(iVar9);
      }
    }
    iVar8 = param_3 + 0x18;
    *(undefined4 *)(param_1 + param_3 * 4 + 0x4c) = DAT_00086268;
    iVar2 = DAT_00086284;
    fVar13 = *(float *)(param_1 + iVar8 * 4);
    if (fVar13 == 0.0 || fVar13 < 0.0 != NAN(fVar13)) {
      fVar13 = *(float *)(param_1 + iVar7 * 4);
      if (fVar13 != DAT_00086270 && fVar13 < DAT_00086270 == (NAN(fVar13) || NAN(DAT_00086270))) {
        *(undefined4 *)(param_1 + iVar8 * 4) = DAT_00086274;
        iVar8 = DAT_00086294;
        iVar9 = *(int *)(iVar6 + iVar2);
        FUN_00072a80(*(undefined4 *)(iVar9 + 0x50),*(undefined4 *)(DAT_00086294 + 0x860d2));
        uVar4 = FUN_00072d2c(*(undefined4 *)(iVar9 + 0x50),DAT_00086298 + 0x8609c,
                             *(undefined4 *)(iVar8 + 0x860d2),1,0,0);
        *(undefined4 *)(param_1 + iVar7 * 4 + 4) = uVar4;
        FUN_0002f6fc(5,param_3,0,0);
        if (-1 < *(int *)(iVar8 + 0x860d6) << 0x1f) {
          iVar9 = __cxa_guard_acquire(iVar8 + 0x860d6);
          if (iVar9 != 0) {
            uVar4 = FUN_0008f414(DAT_000862f8 + 0x862e6);
            *(undefined4 *)(iVar8 + 0x860da) = uVar4;
            __cxa_guard_release(iVar8 + 0x860d6);
          }
        }
        uVar4 = FUN_0007b72c();
        iVar8 = DAT_000862a0 + 0x860d8;
        FUN_0007b5d0(uVar4,*(undefined4 *)(DAT_0008629c + 0x8612e));
        uVar4 = *(undefined4 *)(*(int *)(iVar6 + iVar2) + 0x18c);
        local_9c = DAT_000862a4 + 0x860f6;
        local_98 = *(undefined4 *)(iVar6 + DAT_000862a8);
        local_6c = 1;
        local_8c[0] = 0;
        (**(code **)(DAT_000862a4 + 0x860fe))(&local_9c,local_8c);
        FUN_00073a7c(uVar4,iVar8,0,local_8c);
        FUN_0001d388(local_8c);
        local_9c = DAT_000862ac + 0x86126;
      }
    }
    else {
      *(float *)(param_1 + iVar8 * 4) = fVar13 - param_2;
      iVar2 = DAT_00086284;
      if (fVar13 - param_2 <= 0.0) {
        iVar10 = *(int *)(iVar6 + DAT_00086284);
        iVar9 = FUN_00072d2c(*(undefined4 *)(iVar10 + 0x50),DAT_000862b8 + 0x86158,
                             *(undefined4 *)(DAT_000862b4 + 0x861a6),1,0,0);
        __format = (char *)(DAT_000862bc + 0x86176);
        if (iVar9 < 6) {
          unaff_r11 = iVar9;
        }
        bVar11 = (byte)unaff_r11;
        if (5 < iVar9) {
          bVar11 = 6;
        }
        *(int *)(param_1 + iVar7 * 4 + 4) = iVar9;
        uVar5 = (uint)bVar11;
        sprintf(acStack_44,__format,uVar5);
        uVar4 = FUN_0007b72c();
        uVar3 = FUN_0008f414(acStack_44);
        FUN_0007b5d0(uVar4,uVar3);
        if (uVar5 < 2) {
          iVar9 = 0;
        }
        else {
          iVar9 = uVar5 - 1;
        }
        uVar3 = *(undefined4 *)(iVar10 + 0x18c);
        local_68[0] = 0;
        uVar4 = *(undefined4 *)(DAT_000862c0 + 0x861d6 + iVar9 * 4);
        local_94 = DAT_000862c4 + 0x861ea;
        local_90 = *(undefined4 *)(iVar6 + DAT_000862a8);
        local_48 = 1;
        (**(code **)(DAT_000862c4 + 0x861f2))(&local_94,local_68);
        FUN_00073a7c(uVar3,uVar4,0,local_68);
        FUN_0001d388(local_68);
        local_94 = DAT_000862c8 + 0x86222;
        iVar9 = *(int *)(param_1 + iVar7 * 4 + 4);
        if (5 < iVar9) {
          iVar9 = 6;
        }
        FUN_0002f6fc(iVar9 * 5,param_3,0,0);
        *(undefined4 *)(param_1 + iVar8 * 4) = DAT_00086274;
      }
    }
    iVar8 = DAT_00086288;
    if (-1 < *(int *)(DAT_00086288 + 0x86046) << 0x1f) {
      iVar10 = DAT_00086288 + 0x86046;
      iVar9 = __cxa_guard_acquire(iVar10);
      if (iVar9 != 0) {
        uVar4 = FUN_0008f414(DAT_000862cc + 0x86258);
        *(undefined4 *)(iVar8 + 0x8604a) = uVar4;
        __cxa_guard_release(iVar10);
      }
    }
    iVar8 = DAT_0008628c;
    iVar9 = *(int *)(iVar6 + iVar2);
    iVar2 = FUN_0006fbdc(*(undefined4 *)(iVar9 + 0x50),*(undefined4 *)(DAT_0008628c + 0x8605e));
    uVar5 = *(int *)(param_1 + iVar7 * 4 + 4) - iVar2;
    FUN_00072d2c(*(undefined4 *)(iVar9 + 0x50),DAT_00086290 + 0x86010,
                 *(undefined4 *)(iVar8 + 0x8605e),uVar5 & ~((int)uVar5 >> 0x1f),0,0);
  }
  if (local_34 == **(int **)(iVar6 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



