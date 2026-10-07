/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094538 FUN_00094538 */

void FUN_00094538(int param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  void *__base;
  uint __nmemb;
  int **ppiVar4;
  uint uVar5;
  int iVar6;
  int **ppiVar7;
  int **ppiVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined auStack_c8 [64];
  undefined auStack_88 [8];
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  ppiVar4 = *(int ***)(param_1 + 0x3c);
  __nmemb = (int)ppiVar4 - (int)*(int ***)(param_1 + 0x38) >> 2;
  if (__nmemb < 2) {
    (**(code **)(***(int ***)(param_1 + 0x38) + 0x10))();
  }
  else {
    iVar6 = *(int *)(DAT_00094684 + 0x94552 + DAT_0009468c);
    iVar9 = *(int *)(DAT_00094688 + 0x94566);
    iVar3 = DAT_00094688 + 0x9456a;
    *(int *)(DAT_00094688 + 0x94566) = __nmemb + iVar9;
    FUN_0001d16c(param_2,iVar6 + 0x104c,auStack_c8);
    __base = (void *)(iVar3 + iVar9 * 8);
    FUN_0001d16c(auStack_c8,iVar6 + 0x804,auStack_88);
    fVar1 = DAT_00094680;
    if (ppiVar4 != *(int ***)(param_1 + 0x38)) {
      iVar3 = 0;
      ppiVar7 = *(int ***)(param_1 + 0x38);
      do {
        (**(code **)(**ppiVar7 + 0x14))(&local_48);
        ppiVar8 = ppiVar7 + 1;
        fVar11 = (local_48 + local_3c) * fVar1;
        fVar10 = (local_44 + local_38) * fVar1;
        fVar12 = (local_40 + local_34) * fVar1;
        *(int **)((int)__base + iVar3) = *ppiVar7;
        *(float *)((int)__base + iVar3 + 4) =
             (fVar10 * local_70 + fVar11 * local_80 + fVar12 * local_60 + local_50) /
             (fVar10 * local_6c + fVar11 * local_7c + fVar12 * local_5c + local_4c);
        iVar3 = iVar3 + 8;
        ppiVar7 = ppiVar8;
      } while (ppiVar4 != ppiVar8);
    }
    uVar5 = 0;
    qsort(__base,__nmemb,8,(__compar_fn_t)(DAT_00094690 + 0x9464c));
    do {
      piVar2 = *(int **)((int)__base + uVar5 * 8);
      uVar5 = uVar5 + 1;
      (**(code **)(*piVar2 + 0x10))(piVar2,param_2);
    } while (uVar5 != __nmemb);
    *(int *)(DAT_00094694 + 0x94668) = iVar9;
  }
  return;
}



