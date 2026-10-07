/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd370 FUN_000bd370 */

/* WARNING: Type propagation algorithm not settling */

void * FUN_000bd370(int param_1,int param_2,int param_3)

{
  uint uVar1;
  size_t __size;
  void *__ptr;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint auStack_b0 [32];
  uint auStack_30 [3];
  
  if (param_3 == 0) {
    __size = param_2 << 2;
  }
  else {
    __size = param_3 << 2;
  }
  __ptr = malloc(__size);
  memset(auStack_b0 + 1,0,0x84);
  if (0 < param_2) {
    iVar8 = 0;
    iVar7 = 0;
    do {
      while (uVar5 = *(uint *)(param_1 + iVar7 * 4), 0 < (int)uVar5) {
        uVar6 = auStack_b0[uVar5 + 1];
        if (((int)uVar5 < 0x20) && (uVar6 >> (uVar5 & 0xff) != 0)) {
          free(__ptr);
          return (void *)0x0;
        }
        puVar4 = auStack_b0 + 1 + uVar5;
        *(uint *)((int)__ptr + iVar8 * 4) = uVar6;
        iVar8 = iVar8 + 1;
        puVar2 = puVar4;
        uVar3 = uVar5;
        do {
          if ((*puVar2 & 1) != 0) {
            if (uVar3 == 1) {
              auStack_b0[2] = auStack_b0[2] + 1;
            }
            else {
              auStack_b0[uVar3 + 1] = auStack_b0[uVar3] << 1;
            }
            break;
          }
          uVar3 = uVar3 - 1;
          *puVar2 = *puVar2 + 1;
          puVar2 = puVar2 + -1;
        } while (uVar3 != 0);
        if (((int)(uVar5 + 1) < 0x21) &&
           (uVar3 = auStack_b0[uVar5 + 2], uVar6 == auStack_b0[uVar5 + 2] >> 1)) {
          do {
            puVar4[1] = *puVar4 << 1;
            if (puVar4 == auStack_30) break;
            puVar2 = puVar4 + 2;
            puVar4 = puVar4 + 1;
            bVar9 = uVar3 == *puVar2 >> 1;
            uVar3 = *puVar2;
          } while (bVar9);
        }
LAB_000bd41c:
        iVar7 = iVar7 + 1;
        if (iVar7 == param_2) goto LAB_000bd424;
      }
      if (param_3 != 0) goto LAB_000bd41c;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar7 != param_2);
LAB_000bd424:
    iVar7 = 0;
    iVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + iVar8 * 4);
      if ((int)uVar5 < 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        uVar3 = 0;
        do {
          uVar1 = uVar3 & 0xff;
          uVar3 = uVar3 + 1;
          uVar6 = *(uint *)((int)__ptr + iVar7 * 4) >> uVar1 & 1 | uVar6 << 1;
        } while (uVar3 != uVar5);
      }
      if ((param_3 == 0) || (uVar5 != 0)) {
        *(uint *)((int)__ptr + iVar7 * 4) = uVar6;
        iVar7 = iVar7 + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != param_2);
  }
  return __ptr;
}



