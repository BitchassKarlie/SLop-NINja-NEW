/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bce48 FUN_000bce48 */

int * FUN_000bce48(int param_1,int param_2,int param_3)

{
  int *piVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t in_r12;
  
  piVar1 = (int *)calloc(1,0x24);
  iVar11 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  *piVar1 = param_3;
  piVar1[1] = *(int *)(param_2 + 0xc);
  sVar2 = *(size_t *)(param_3 + 0xc);
  piVar1[2] = sVar2;
  piVar1[4] = *(int *)(iVar11 + 0xc20);
  iVar5 = *(int *)(iVar11 + 0xc20);
  iVar6 = *(int *)(param_3 + 0x10) * 0x34;
  piVar1[5] = iVar5 + iVar6;
  iVar5 = *(int *)(iVar5 + iVar6);
  pvVar3 = calloc(sVar2,4);
  iVar6 = piVar1[2];
  if (iVar6 < 1) {
    in_r12 = 0;
  }
  piVar1[6] = (int)pvVar3;
  if (0 < iVar6) {
    in_r12 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar8 = param_3;
    do {
      uVar7 = *(uint *)(iVar8 + 0x14);
      if (uVar7 != 0) {
        sVar2 = 0;
        do {
          sVar2 = sVar2 + 1;
          uVar7 = uVar7 >> 1;
        } while (uVar7 != 0);
        iVar6 = piVar1[6];
        if ((int)in_r12 < (int)sVar2) {
          in_r12 = sVar2;
        }
        pvVar3 = calloc(sVar2,4);
        *(void **)(iVar6 + iVar10 * 4) = pvVar3;
        uVar7 = 0;
        do {
          if ((*(int *)(iVar8 + 0x14) >> (uVar7 & 0xff)) << 0x1f < 0) {
            iVar6 = iVar9 * 4;
            iVar9 = iVar9 + 1;
            *(int *)(*(int *)(piVar1[6] + iVar10 * 4) + uVar7 * 4) =
                 *(int *)(param_3 + iVar6 + 0x114) * 0x34 + *(int *)(iVar11 + 0xc20);
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)sVar2);
        iVar6 = piVar1[2];
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < iVar6);
  }
  piVar1[7] = iVar6;
  if (1 < iVar5) {
    iVar8 = 1;
    iVar11 = iVar6;
    do {
      iVar8 = iVar8 + 1;
      iVar11 = iVar6 * iVar11;
    } while (iVar8 != iVar5);
    piVar1[7] = iVar11;
  }
  piVar1[3] = in_r12;
  pvVar3 = malloc(piVar1[7] << 2);
  iVar6 = piVar1[7];
  piVar1[8] = (int)pvVar3;
  if (0 < iVar6) {
    iVar11 = 0;
    while( true ) {
      iVar8 = piVar1[2];
      pvVar4 = malloc(iVar5 << 2);
      *(void **)((int)pvVar3 + iVar11 * 4) = pvVar4;
      if (0 < iVar5) {
        iVar8 = __aeabi_idiv(iVar6,iVar8);
        iVar9 = 0;
        iVar6 = iVar11;
        do {
          iVar10 = __aeabi_idiv(iVar6,iVar8);
          iVar6 = iVar6 - iVar8 * iVar10;
          iVar8 = __aeabi_idiv(iVar8,piVar1[2]);
          *(int *)(*(int *)(piVar1[8] + iVar11 * 4) + iVar9 * 4) = iVar10;
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar5);
      }
      iVar6 = piVar1[7];
      iVar11 = iVar11 + 1;
      if (iVar6 <= iVar11) break;
      pvVar3 = (void *)piVar1[8];
    }
  }
  return piVar1;
}



