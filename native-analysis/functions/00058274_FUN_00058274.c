/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00058274 FUN_00058274 */

void FUN_00058274(int *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  int local_7c [7];
  int local_60;
  undefined4 local_5c;
  uint local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar5 = DAT_00058410;
  iVar9 = DAT_0005840c + 0x58288;
  local_34 = **(int **)(iVar9 + DAT_00058410);
  FUN_0004a8dc();
  iVar10 = DAT_00058414;
  param_1[0x40] = param_5;
  *param_1 = iVar10 + 0x582b2;
  piVar11 = param_1 + 0x1f;
  FUN_00017d64(param_1 + 0x1a,*param_4);
  iVar10 = DAT_00058418;
  *(undefined *)((int)param_1 + 0x26) = 0;
  FUN_0008f060(piVar11,0x80,iVar10 + 0x582c4,param_2);
  cVar4 = *(char *)(param_1 + 0x1f);
  piVar8 = piVar11;
  iVar10 = DAT_000583fc;
  fVar14 = DAT_00058408;
  while (DAT_000583fc = iVar10, DAT_00058408 = fVar14, cVar4 != '\0') {
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      *(char *)piVar8 = cVar4 + -0x20;
    }
    piVar8 = (int *)((int)piVar8 + 1);
    iVar10 = DAT_000583fc;
    fVar14 = DAT_00058408;
    cVar4 = *(char *)piVar8;
  }
  uVar7 = ~param_3 >> 0x1f;
  if (param_5 != 1) {
    uVar7 = 0;
  }
  if (uVar7 == 0) {
    *(undefined *)(param_1 + 0x3f) = 0;
    param_1[0x1c] = iVar10;
    param_1[0x40] = param_5;
    iVar10 = DAT_0005841c;
    fVar14 = DAT_00058400;
    if (param_5 == 2) {
      uVar12 = *(undefined4 *)(*(int *)(iVar9 + DAT_0005841c) + 0x18c);
      local_60 = DAT_00058424 + 0x583a4;
      local_5c = *(undefined4 *)(iVar9 + DAT_00058428);
      local_38 = 1;
      local_58[0] = uVar7;
      (**(code **)(DAT_00058424 + 0x583ac))(&local_60,local_58);
      FUN_00073a7c(uVar12,DAT_0005842c + 0x583be,0x3f800000,local_58);
      FUN_0001d388(local_58);
      local_60 = DAT_00058430 + 0x583d6;
    }
  }
  else {
    FUN_0008f060(param_1 + 0x3f,4,DAT_00058434 + 0x583e0,param_3);
    iVar10 = DAT_0005841c;
    param_1[0x1c] = DAT_000583fc;
    param_1[0x40] = 1;
  }
  uVar12 = *(undefined4 *)(*(int *)(iVar9 + iVar10) + 0x58);
  FUN_00036320(local_7c,piVar11);
  fVar6 = (float)FUN_00090978(uVar12,local_7c);
  iVar10 = DAT_00058420;
  fVar13 = (float)param_1[0x1c];
  param_1[0x1e] = param_3;
  local_7c[0] = *(int *)(iVar9 + iVar10) + 8;
  fVar6 = fVar6 * fVar13;
  bVar1 = fVar6 < fVar14;
  bVar2 = fVar6 != fVar14;
  bVar3 = NAN(fVar6) || NAN(fVar14);
  if (bVar2 && bVar1 == bVar3) {
    fVar6 = fVar14 / fVar6;
  }
  if (bVar2 && bVar1 == bVar3) {
    fVar13 = fVar13 * fVar6;
  }
  if (bVar2 && bVar1 == bVar3) {
    param_1[0x1c] = (int)fVar13;
  }
  param_1[10] = 1;
  piVar8 = *(int **)(iVar9 + iVar5);
  param_1[0x1d] = DAT_00058404;
  if (local_34 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



