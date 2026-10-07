/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00033ffc FUN_00033ffc */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00033ffc(undefined4 *param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint local_a0;
  uint local_90;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar2 = DAT_0003424c;
  iVar10 = DAT_00034248 + 0x34012;
  local_34 = **(int **)(iVar10 + DAT_0003424c);
  uVar16 = *param_1;
  uVar17 = param_1[1];
  uVar18 = param_1[2];
  if (param_3 != DAT_00034244 && param_3 < DAT_00034244 == (NAN(param_3) || NAN(DAT_00034244))) {
    puVar4 = *(uint **)(iVar10 + DAT_00034250);
    uVar15 = puVar4[3];
    uVar8 = puVar4[2];
    lVar1 = (ulonglong)*puVar4 * (ulonglong)uVar8;
    uVar11 = puVar4[4];
    uVar13 = puVar4[5];
    local_90 = (uint)lVar1;
    uVar12 = uVar11 + local_90;
    uVar14 = uVar13 + (int)((ulonglong)lVar1 >> 0x20) + uVar8 * puVar4[1] + *puVar4 * uVar15 +
                      (uint)CARRY4(uVar11,local_90);
    *puVar4 = uVar12;
    puVar4[1] = uVar14;
    if ((char)(CARRY4(uVar14,uVar14) + CARRY4(uVar14 * 2,uVar14)) == '\0') {
      uVar7 = *(undefined4 *)(*(int *)(iVar10 + DAT_0003425c) + 0x18c);
      local_90 = (uint)((ulonglong)uVar8 * (ulonglong)uVar12);
      uVar3 = uVar11 + local_90;
      uVar12 = uVar13 + uVar8 * uVar14 + uVar12 * uVar15 +
                        (int)((ulonglong)uVar8 * (ulonglong)uVar12 >> 0x20) +
                        (uint)CARRY4(uVar11,local_90);
      *puVar4 = uVar3;
      puVar4[1] = uVar12;
      if ((char)(CARRY4(uVar12,uVar12) + CARRY4(uVar12 * 2,uVar12)) == '\0') {
        iVar6 = DAT_00034274 + 0x34234;
      }
      else {
        local_a0 = (uint)((ulonglong)uVar8 * (ulonglong)uVar3);
        uVar13 = uVar13 + (int)((ulonglong)uVar8 * (ulonglong)uVar3 >> 0x20) +
                          uVar8 * uVar12 + uVar3 * uVar15 + (uint)CARRY4(uVar11,local_a0);
        *puVar4 = uVar11 + local_a0;
        puVar4[1] = uVar13;
        if (CARRY4(uVar13,uVar13) == false) {
          iVar6 = DAT_00034260 + 0x341e0;
        }
        else {
          iVar6 = DAT_00034270 + 0x3422c;
        }
      }
      local_60 = DAT_00034264 + 0x341f2;
      local_5c = *(undefined4 *)(iVar10 + DAT_00034268);
      local_38 = 1;
      local_58[0] = 0;
      (**(code **)(DAT_00034264 + 0x341fa))(&local_60,local_58);
      FUN_00073a7c(uVar7,iVar6,0x3f800000,local_58);
      FUN_0001d388(local_58);
      local_60 = DAT_0003426c + 0x34224;
    }
  }
  iVar6 = *(int *)(DAT_00034254 + 0x3415c);
  if (*(int *)(iVar6 + 0xc) < 1) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    iVar5 = *(int *)(iVar6 + 0xc) + -1;
    *(int *)(iVar6 + 0xc) = iVar5;
    puVar9 = *(undefined4 **)(*(int *)(iVar6 + 8) + iVar5 * 4);
  }
  *puVar9 = 0;
  puVar9[1] = param_3;
  puVar9[2] = param_2;
  puVar9[3] = uVar16;
  puVar9[4] = uVar17;
  puVar9[5] = uVar18;
  puVar9[6] = param_4;
  puVar9[7] = 0;
  iVar6 = *(int *)(DAT_00034258 + 0x34132);
  if (*(short *)(iVar6 + 0x12) == 0) {
    *(undefined2 *)(iVar6 + 0x12) = 2;
  }
  if (*(int *)(iVar6 + 4) == 0) {
    *(undefined4 **)(iVar6 + 4) = puVar9;
    *(undefined4 **)(iVar6 + 8) = puVar9;
    puVar9[8] = 0;
    puVar9[9] = 0;
  }
  else {
    puVar9[8] = 0;
    puVar9[9] = *(undefined4 *)(iVar6 + 4);
    *(undefined4 **)(*(int *)(iVar6 + 4) + 0x20) = puVar9;
    *(undefined4 **)(iVar6 + 4) = puVar9;
  }
  *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
  if (local_34 == **(int **)(iVar10 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



