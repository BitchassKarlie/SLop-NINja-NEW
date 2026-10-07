/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bf4a8 FUN_000bf4a8 */

void * FUN_000bf4a8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t __nmemb;
  int *piVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  int local_13c;
  int *local_12c [66];
  
  pvVar1 = calloc(1,0x30c);
  *(int **)((int)pvVar1 + 0x308) = param_3;
  *(int *)((int)pvVar1 + 0x300) = param_3[0xd2];
  if (*param_3 < 1) {
    __nmemb = 2;
    *(undefined4 *)((int)pvVar1 + 0x2fc) = 2;
    local_13c = 0;
  }
  else {
    local_13c = 0;
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      local_13c = local_13c + param_3[*(int *)((int)param_3 + iVar6 + 4) + 0x20];
      iVar6 = iVar5;
    } while (iVar5 != *param_3 * 4);
    __nmemb = local_13c + 2;
    *(size_t *)((int)pvVar1 + 0x2fc) = __nmemb;
    if ((int)__nmemb < 1) {
      qsort(local_12c,__nmemb,4,(__compar_fn_t)(DAT_000bf638 + 0xbf630));
      goto LAB_000bf53e;
    }
  }
  iVar6 = 0;
  do {
    local_12c[iVar6] = param_3 + iVar6 + 0xd1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < (int)__nmemb);
  qsort(local_12c,__nmemb,4,(__compar_fn_t)(DAT_000bf634 + 0xbf522));
  iVar5 = 0;
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
    *(int *)((int)pvVar1 + iVar5) = *(int *)((int)local_12c + iVar5) - (int)(param_3 + 0xd1) >> 2;
    iVar5 = iVar5 + 4;
  } while (iVar6 < (int)__nmemb);
LAB_000bf53e:
  switch(param_3[0xd0]) {
  case 1:
    *(undefined4 *)((int)pvVar1 + 0x304) = 0x100;
    break;
  case 2:
    *(undefined4 *)((int)pvVar1 + 0x304) = 0x80;
    break;
  case 3:
    *(undefined4 *)((int)pvVar1 + 0x304) = 0x56;
    break;
  case 4:
    *(undefined4 *)((int)pvVar1 + 0x304) = 0x40;
  }
  if (0 < local_13c) {
    iVar5 = 0;
    iVar6 = *(int *)((int)pvVar1 + 0x300);
    pvVar11 = pvVar1;
    piVar12 = param_3;
    do {
      iVar3 = 0;
      iVar5 = iVar5 + 1;
      iVar9 = 1;
      iVar10 = 0;
      iVar4 = 0;
      iVar2 = iVar6;
      piVar8 = param_3;
      do {
        iVar7 = piVar8[0xd1];
        if (iVar3 < iVar7 && iVar7 < piVar12[0xd3]) {
          iVar3 = iVar7;
          iVar10 = iVar4;
        }
        if (iVar7 < iVar2 && piVar12[0xd3] < iVar7) {
          iVar9 = iVar4;
          iVar2 = iVar7;
        }
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar4 <= iVar5);
      *(int *)((int)pvVar11 + 0x200) = iVar10;
      piVar12 = piVar12 + 1;
      *(int *)((int)pvVar11 + 0x104) = iVar9;
      pvVar11 = (void *)((int)pvVar11 + 4);
    } while (iVar5 != local_13c);
  }
  return pvVar1;
}



