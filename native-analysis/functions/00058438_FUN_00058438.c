/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00058438 FUN_00058438 */

void FUN_00058438(int *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int param_5)

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
  
  iVar5 = DAT_000585d4;
  iVar9 = DAT_000585d0 + 0x5844c;
  local_34 = **(int **)(iVar9 + DAT_000585d4);
  FUN_0004a8dc();
  iVar10 = DAT_000585d8;
  param_1[0x40] = param_5;
  *param_1 = iVar10 + 0x58476;
  piVar11 = param_1 + 0x1f;
  FUN_00017d64(param_1 + 0x1a,*param_4);
  iVar10 = DAT_000585dc;
  *(undefined *)((int)param_1 + 0x26) = 0;
  FUN_0008f060(piVar11,0x80,iVar10 + 0x58488,param_2);
  cVar4 = *(char *)(param_1 + 0x1f);
  piVar8 = piVar11;
  iVar10 = DAT_000585c0;
  fVar14 = DAT_000585cc;
  while (DAT_000585c0 = iVar10, DAT_000585cc = fVar14, cVar4 != '\0') {
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      *(char *)piVar8 = cVar4 + -0x20;
    }
    piVar8 = (int *)((int)piVar8 + 1);
    iVar10 = DAT_000585c0;
    fVar14 = DAT_000585cc;
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
    iVar10 = DAT_000585e0;
    fVar14 = DAT_000585c4;
    if (param_5 == 2) {
      uVar12 = *(undefined4 *)(*(int *)(iVar9 + DAT_000585e0) + 0x18c);
      local_60 = DAT_000585e8 + 0x58568;
      local_5c = *(undefined4 *)(iVar9 + DAT_000585ec);
      local_38 = 1;
      local_58[0] = uVar7;
      (**(code **)(DAT_000585e8 + 0x58570))(&local_60,local_58);
      FUN_00073a7c(uVar12,DAT_000585f0 + 0x58582,0x3f800000,local_58);
      FUN_0001d388(local_58);
      local_60 = DAT_000585f4 + 0x5859a;
    }
  }
  else {
    FUN_0008f060(param_1 + 0x3f,4,DAT_000585f8 + 0x585a4,param_3);
    iVar10 = DAT_000585e0;
    param_1[0x1c] = DAT_000585c0;
    param_1[0x40] = 1;
  }
  uVar12 = *(undefined4 *)(*(int *)(iVar9 + iVar10) + 0x58);
  FUN_00036320(local_7c,piVar11);
  fVar6 = (float)FUN_00090978(uVar12,local_7c);
  iVar10 = DAT_000585e4;
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
  param_1[0x1d] = DAT_000585c8;
  if (local_34 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



