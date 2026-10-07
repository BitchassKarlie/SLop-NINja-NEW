/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002d5e4 FUN_0002d5e4 */

void FUN_0002d5e4(float param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  float fVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar6 = DAT_0002d868;
  iVar12 = DAT_0002d864 + 0x2d5fa;
  iVar9 = DAT_0002d86c + 0x2ddec;
  local_34 = **(int **)(iVar12 + DAT_0002d868);
  iVar10 = 0;
  do {
    pfVar7 = (float *)(iVar9 + iVar10);
    pfVar17 = (float *)*pfVar7;
    bVar1 = (float)pfVar17 < 0.0;
    bVar2 = (float)pfVar17 != 0.0;
    bVar3 = NAN((float)pfVar17);
    if (bVar2 && bVar1 == bVar3) {
      pfVar17 = (float *)((float)pfVar17 - param_1);
    }
    if (bVar2 && bVar1 == bVar3) {
      pfVar7 = pfVar17;
    }
    if (bVar2 && bVar1 == bVar3) {
      *(float **)(iVar9 + iVar10) = pfVar7;
    }
    iVar10 = iVar10 + 4;
  } while (iVar10 != 0xc);
  pfVar7 = (float *)(DAT_0002d870 + 0x2de2c);
  fVar18 = *pfVar7;
  if (fVar18 == 0.0 || fVar18 < 0.0 != NAN(fVar18)) {
    if (fVar18 < DAT_0002d858 == (NAN(fVar18) || NAN(DAT_0002d858))) {
      pfVar7 = (float *)(fVar18 - param_1);
    }
    if (fVar18 < DAT_0002d858 == (NAN(fVar18) || NAN(DAT_0002d858))) {
      *(float **)(DAT_0002d870 + 0x2de2c) = pfVar7;
    }
  }
  else {
    *(float *)(DAT_0002d870 + 0x2de2c) = fVar18 - param_1;
    if (fVar18 - param_1 <= 0.0) {
      uVar14 = *(undefined4 *)(*(int *)(iVar12 + DAT_0002d888) + 0x18c);
      puVar11 = *(uint **)(iVar12 + DAT_0002d88c);
      lVar4 = (ulonglong)*puVar11 * (ulonglong)puVar11[2] +
              CONCAT44(puVar11[2] * puVar11[1] + *puVar11 * puVar11[3],puVar11[4]);
      uVar8 = puVar11[5] + (int)((ulonglong)lVar4 >> 0x20);
      *puVar11 = (uint)lVar4;
      puVar11[1] = uVar8;
      if (CARRY4(uVar8,uVar8) == false) {
        iVar9 = DAT_0002d890 + 0x2d78c;
      }
      else {
        iVar9 = DAT_0002d8a0 + 0x2d81c;
      }
      local_60 = DAT_0002d894 + 0x2d79e;
      local_5c = *(undefined4 *)(iVar12 + DAT_0002d898);
      local_38 = 1;
      local_58[0] = 0;
      (**(code **)(DAT_0002d894 + 0x2d7a6))(&local_60,local_58);
      FUN_00073a7c(uVar14,iVar9,0x3f800000,local_58);
      FUN_0001d388(local_58);
      local_60 = DAT_0002d89c + 0x2d7d0;
    }
  }
  FUN_0001c940();
  iVar9 = DAT_0002d874;
  iVar10 = FUN_0001bb58();
  fVar5 = DAT_0002d84c;
  fVar18 = DAT_0002d848;
  piVar13 = (int *)(iVar9 + 0x2d66a);
  fVar19 = DAT_0002d850;
  if (0.0 < (float)(ulonglong)(uint)(iVar10 + *piVar13) / DAT_0002d848 - DAT_0002d84c) {
    FUN_0001c940();
    iVar9 = FUN_0001bb58();
    fVar16 = (float)(ulonglong)(uint)(iVar9 + *piVar13) / fVar18 - fVar5;
    fVar19 = DAT_0002d860;
    if (fVar16 < DAT_0002d85c != (NAN(fVar16) || NAN(DAT_0002d85c))) {
      FUN_0001c940();
      iVar9 = FUN_0001bb58();
      fVar19 = ((float)(ulonglong)(uint)(iVar9 + *piVar13) / fVar18 - fVar5) + DAT_0002d850;
    }
  }
  *(float *)(DAT_0002d878 + 0x2de9a) = fVar19;
  iVar9 = FUN_0006e130();
  if ((iVar9 == 0) ||
     ((iVar9 = FUN_0002f5ec(), iVar9 != 0 &&
      (*(char *)(*(int *)(iVar12 + DAT_0002d888) + 0x174) == '\0')))) {
    *(float *)(DAT_0002d87c + 0x2deb0) = *(float *)(DAT_0002d87c + 0x2deb0) * DAT_0002d854;
  }
  iVar9 = DAT_0002d880;
  piVar13 = *(int **)(DAT_0002d880 + 0x2d6ce);
  if (*(int *)(DAT_0002d880 + 0x2d6d6) < 1) {
    iVar15 = 0;
LAB_0002d70e:
    *(int *)(DAT_0002d884 + 0x2d716) = iVar15;
    if (local_34 == **(int **)(iVar12 + iVar6)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar10 = 0;
  iVar15 = 0;
  do {
    if (*(char *)((int)piVar13 + 0x75) == '\0') {
      if (*(int *)(iVar9 + 0x2d6d6) <= iVar10 + 1) goto LAB_0002d70e;
    }
    else {
      iVar15 = iVar15 + 1;
      (**(code **)(*piVar13 + 0x14))(piVar13,param_1);
      if (*(int *)(iVar9 + 0x2d6d6) <= iVar10 + 1) goto LAB_0002d70e;
    }
    iVar10 = iVar10 + 1;
    piVar13 = piVar13 + 0x1e;
  } while( true );
}



