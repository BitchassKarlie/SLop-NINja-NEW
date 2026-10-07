/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a0d8 FUN_0007a0d8 */

uint FUN_0007a0d8(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  int iVar4;
  int **ppiVar5;
  int **ppiVar6;
  float fVar7;
  
  iVar4 = 0;
  ppiVar5 = (int **)**(int ***)(param_1 + 8);
  *(float *)(param_1 + 0xa0) = DAT_0007a21c;
  if (*(int ***)(param_1 + 8) != ppiVar5) {
    do {
      iVar1 = (**(code **)(*ppiVar5[2] + 0xc))(ppiVar5[2],param_2);
      if (iVar1 == 0) {
        fVar7 = (float)ppiVar5[2][3];
        if ((int)((uint)(*(float *)(param_1 + 0xa0) < fVar7) << 0x1f) < 0) {
          *(float *)(param_1 + 0xa0) = fVar7;
          if ((int)((uint)(*(float *)(param_1 + 0xa4) < fVar7) << 0x1f) < 0) {
            *(float *)(param_1 + 0xa4) = fVar7;
          }
        }
        ppiVar5 = (int **)*ppiVar5;
        iVar4 = iVar4 + 1;
        ppiVar3 = *(int ***)(param_1 + 8);
      }
      else {
        (**(code **)(*ppiVar5[2] + 0x18))();
        if (ppiVar5[2] != (int *)0x0) {
          (**(code **)(*ppiVar5[2] + 4))();
          ppiVar5[2] = (int *)0x0;
        }
        ppiVar3 = *(int ***)(param_1 + 8);
        if (ppiVar3 != ppiVar5) {
          ppiVar6 = (int **)*ppiVar5;
          *ppiVar5[1] = (int)ppiVar6;
          (*ppiVar5)[1] = (int)ppiVar5[1];
          operator_delete(ppiVar5);
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
          ppiVar3 = *(int ***)(param_1 + 8);
          ppiVar5 = ppiVar6;
        }
      }
    } while (ppiVar3 != ppiVar5);
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00081380(*(int *)(param_1 + 0xb8),param_2,*(undefined4 *)(param_1 + 0xa0),
                 *(undefined4 *)(param_1 + 0xa4));
  }
  fVar7 = *(float *)(param_1 + 0xa0);
  if (fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7)) {
    fVar7 = *(float *)(param_1 + 0xac) + param_2 * DAT_0007a220;
    if (-1 < (int)((uint)(fVar7 < DAT_0007a224) << 0x1f)) {
      fVar7 = DAT_0007a224;
    }
    *(float *)(param_1 + 0xac) = fVar7;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar2 = 0;
    if (iVar4 == 0) {
      fVar7 = *(float *)(param_1 + 0xac);
      if (fVar7 == 0.0 || fVar7 < 0.0 != NAN(fVar7)) {
        uVar2 = 1;
      }
      else {
        fVar7 = fVar7 + param_2 * DAT_0007a228;
        if (fVar7 == 0.0 || fVar7 < 0.0 != NAN(fVar7)) {
          fVar7 = DAT_0007a21c;
        }
        *(float *)(param_1 + 0xac) = fVar7;
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x98) + 0xc0) >> 0x1f;
    if (iVar4 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



