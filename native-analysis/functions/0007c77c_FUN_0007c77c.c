/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007c77c FUN_0007c77c */

void FUN_0007c77c(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int **ppiVar10;
  uint *puVar11;
  int **ppiVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int **ppiVar15;
  int iVar16;
  int iVar17;
  float extraout_s14;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined auStack_50 [8];
  int local_48;
  uint *local_44;
  int local_40;
  undefined4 *local_3c;
  
  fVar19 = *(float *)(param_1 + 0x68);
  FUN_00079374();
  fVar6 = DAT_0007c98c;
  fVar5 = DAT_0007c988;
  fVar4 = DAT_0007c984;
  ppiVar10 = *(int ***)(param_1 + 0x14);
  iVar17 = param_1 + 0x1c;
  iVar16 = 0;
  ppiVar15 = (int **)*ppiVar10;
  while (ppiVar10 != ppiVar15) {
    while( true ) {
      piVar7 = ppiVar15[2];
      if ((piVar7[0x26] == 0) || (fVar18 = param_2, *(int *)(piVar7[0x26] + 4) == 0)) {
        fVar18 = param_2 * fVar19;
      }
      iVar8 = (**(code **)*piVar7)(piVar7,fVar18);
      if (iVar8 == 0) break;
      piVar7 = ppiVar15[2];
      if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
        puVar9 = (uint *)0x0;
        puVar13 = *(uint **)(param_1 + 0x20);
        do {
          if (*puVar13 < (uint)piVar7[4]) {
            puVar11 = (uint *)puVar13[4];
          }
          else {
            puVar11 = (uint *)puVar13[3];
            puVar9 = puVar13;
          }
          puVar13 = puVar11;
        } while (puVar11 != (uint *)0x0);
        if ((puVar9 != (uint *)0x0) && (*puVar9 <= (uint)piVar7[4])) {
          local_48 = iVar17;
          local_44 = puVar9;
          FUN_0007c5c4(auStack_50,iVar17,iVar17,puVar9);
          piVar7 = ppiVar15[2];
        }
      }
      FUN_00079fc4(piVar7,0);
      FUN_0007bc60(ppiVar15[2]);
      piVar7 = ppiVar15[2];
      if (piVar7 != (int *)0x0) {
        FUN_0007bce0(piVar7);
        operator_delete(piVar7);
        ppiVar15[2] = (int *)0x0;
      }
      ppiVar12 = *(int ***)(param_1 + 0x14);
      ppiVar10 = ppiVar12;
      if (ppiVar15 != ppiVar12) {
        ppiVar10 = (int **)*ppiVar15;
        *ppiVar15[1] = (int)ppiVar10;
        (*ppiVar15)[1] = (int)ppiVar15[1];
        operator_delete(ppiVar15);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        ppiVar12 = *(int ***)(param_1 + 0x14);
      }
      ppiVar15 = ppiVar10;
      if (ppiVar12 == ppiVar10) goto LAB_0007c86e;
    }
    piVar7 = ppiVar15[2];
    fVar20 = (float)piVar7[0x29];
    bVar1 = fVar20 < 0.0;
    bVar2 = fVar20 == 0.0;
    bVar3 = NAN(fVar20);
    fVar18 = extraout_s14;
    if (!bVar2 && bVar1 == bVar3) {
      fVar18 = (float)piVar7[0x28];
    }
    if (!bVar2 && bVar1 == bVar3) {
      fVar20 = fVar18 / fVar20;
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar20 = DAT_0007c990;
    }
    if ((int)((uint)(*(float *)(param_1 + 0x7c) < fVar20) << 0x1f) < 0) {
      if ((piVar7[0x26] == 0) || (*(int *)(piVar7[0x26] + 4) == 0)) {
        *(int **)(param_1 + 0x54) = piVar7;
        *(float *)(param_1 + 0x7c) = fVar20;
      }
      else if ((int)((uint)(*(float *)(param_1 + 0x7c) < fVar6) << 0x1f) < 0) {
        *(float *)(param_1 + 0x7c) = fVar6;
      }
    }
    iVar8 = FUN_000794a4(param_1);
    fVar18 = (float)ppiVar15[2][0x33];
    ppiVar15[2][0x33] =
         (int)(fVar18 + (((float)(longlong)(iVar16 * 0x6e) + (float)(longlong)(iVar8 + -1) * fVar4)
                        - fVar18) * fVar5);
    piVar7 = ppiVar15[2];
    fVar18 = (float)piVar7[0x29];
    if (((fVar18 != 0.0 && fVar18 < 0.0 == NAN(fVar18)) && (*(char *)((int)piVar7 + 0x95) == '\0'))
       && ((piVar7[0x26] == 0 || (*(int *)(piVar7[0x26] + 4) == 0)))) {
      iVar16 = iVar16 + 1;
    }
    ppiVar15 = (int **)*ppiVar15;
    ppiVar10 = *(int ***)(param_1 + 0x14);
  }
LAB_0007c86e:
  piVar7 = (int *)**(int **)(param_1 + 0x40);
  local_40 = param_1 + 0x3c;
  if (piVar7 != *(int **)(param_1 + 0x40)) {
    do {
      FUN_00081380(piVar7 + 2,param_2,0,0);
      if (0.0 < (float)piVar7[0x18]) {
        puVar14 = *(undefined4 **)(param_1 + 0x40);
        piVar7 = (undefined4 *)*piVar7;
      }
      else {
        FUN_00082490(piVar7 + 2);
        local_3c = piVar7;
        FUN_000797ac(&local_40,param_1 + 0x3c,local_40,piVar7);
        puVar14 = *(undefined4 **)(param_1 + 0x40);
        piVar7 = local_3c;
      }
    } while (piVar7 != puVar14);
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 100);
  return;
}



