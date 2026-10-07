/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be7cc FUN_000be7cc */

int * FUN_000be7cc(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int unaff_r8;
  
  iVar11 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  piVar1 = (int *)calloc(1,0x18);
  piVar1[2] = *param_3;
  iVar8 = *(int *)(iVar11 + *param_2 * 4) / 2;
  *piVar1 = iVar8;
  iVar11 = param_3[2];
  piVar1[4] = (int)param_3;
  piVar1[1] = iVar11;
  pvVar2 = malloc((iVar8 + 1) * 4);
  if (*piVar1 < 1) {
    unaff_r8 = 0;
  }
  piVar1[3] = (int)pvVar2;
  if (*piVar1 < 1) {
LAB_000be910:
    *(undefined4 *)(piVar1[3] + unaff_r8 * 4) = 0xffffffff;
    pvVar2 = malloc(piVar1[1] << 2);
    piVar1[5] = (int)pvVar2;
    if (0 < piVar1[1]) {
      iVar11 = 0;
      iVar8 = DAT_000be98c + 0xbe934;
      while( true ) {
        iVar12 = iVar11 * 4;
        uVar4 = __aeabi_idiv(iVar11 << 0x10);
        uVar4 = uVar4 & 0x1ffff;
        if (0x10000 < uVar4) {
          uVar4 = 0x20000 - uVar4;
        }
        iVar11 = iVar11 + 1;
        iVar5 = *(int *)(iVar8 + ((int)uVar4 >> 9) * 4 + 0x70);
        *(int *)((int)pvVar2 + iVar12) =
             (int)((uVar4 & 0x1ff) * (*(int *)(iVar8 + ((int)uVar4 >> 9) * 4 + 0x74) - iVar5) +
                  iVar5 * 0x200) >> 9;
        if (piVar1[1] <= iVar11) break;
        pvVar2 = (void *)piVar1[5];
      }
    }
    return piVar1;
  }
  unaff_r8 = 0;
  iVar12 = param_3[1];
  piVar9 = (int *)(DAT_000be980 + 0xbe826);
  iVar11 = DAT_000be984 + 0xbe82e;
  iVar8 = DAT_000be988 + 0xbe834;
  do {
    iVar14 = piVar1[1];
    iVar12 = iVar12 / 2;
    iVar3 = __aeabi_idiv(unaff_r8 * iVar12);
    piVar7 = piVar9;
    iVar5 = 1;
    do {
      iVar13 = iVar5;
      iVar5 = *piVar7;
      if ((iVar5 <= iVar3) && (iVar10 = piVar7[1], iVar3 < iVar10)) {
        iVar13 = iVar13 + -1;
        goto LAB_000be880;
      }
      piVar7 = piVar7 + 1;
      iVar5 = iVar13 + 1;
    } while (iVar13 + 1 != 0x1c);
    if (iVar13 == 0x1b) {
      iVar5 = 0x6c000000;
    }
    else {
      iVar10 = *(int *)(iVar11 + (iVar13 + 1) * 4);
      iVar5 = *(int *)(iVar11 + iVar13 * 4);
LAB_000be880:
      iVar5 = __aeabi_idiv((iVar3 - iVar5) * 0x8000,iVar10 - iVar5);
      iVar5 = (iVar5 + iVar13 * 0x8000) * 0x800;
    }
    iVar3 = 1;
    piVar7 = piVar9;
    do {
      iVar13 = iVar3;
      iVar3 = *piVar7;
      if ((iVar3 <= iVar12) && (iVar10 = piVar7[1], iVar12 < iVar10)) {
        iVar13 = iVar13 + -1;
        goto LAB_000be8c6;
      }
      piVar7 = piVar7 + 1;
      iVar3 = iVar13 + 1;
    } while (iVar13 + 1 != 0x1c);
    if (iVar13 == 0x1b) {
      puVar6 = &DAT_000d8000;
    }
    else {
      iVar10 = *(int *)(iVar8 + (iVar13 + 1) * 4);
      iVar3 = *(int *)(iVar8 + iVar13 * 4);
LAB_000be8c6:
      iVar12 = __aeabi_idiv((iVar12 - iVar3) * 0x8000,iVar10 - iVar3);
      puVar6 = (undefined *)(iVar12 + iVar13 * 0x8000);
    }
    iVar12 = __aeabi_idiv(iVar5,puVar6);
    iVar12 = iVar14 * iVar12 >> 0xb;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14 + -1;
    }
    *(int *)((int)pvVar2 + unaff_r8 * 4) = iVar12;
    unaff_r8 = unaff_r8 + 1;
    if (*piVar1 <= unaff_r8) goto LAB_000be910;
    pvVar2 = (void *)piVar1[3];
    iVar12 = param_3[1];
  } while( true );
}



