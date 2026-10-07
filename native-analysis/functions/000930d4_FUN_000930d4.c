/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000930d4 FUN_000930d4 */

void FUN_000930d4(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  
  if (param_2 != (undefined4 *)0x0) {
    ppiVar9 = (int **)((int)param_2 + (-0x10 - ((uint)param_1[8] >> 1)));
    if ((*(char *)((int)ppiVar9 + 0xf) != '\x01') && (*(char *)((int)ppiVar9 + 0xf) != '\x04')) {
      *(undefined *)((int)ppiVar9 + 0xf) = 1;
      ppiVar9[2] = (int *)(DAT_0009320c + 0x930fe);
      if (*param_1 == 0) {
        *param_1 = (int)param_2;
        param_1[1] = (int)param_2;
        *param_2 = 0;
      }
      else {
        *(undefined4 **)param_1[1] = param_2;
        param_1[1] = (int)param_2;
        *param_2 = 0;
      }
      ppiVar4 = (int **)param_1[3];
      if (ppiVar4 == ppiVar9) {
        do {
          if (ppiVar4 == (int **)0x0) {
            return;
          }
          if (*(char *)((int)ppiVar4 + 0xf) != '\x01') {
            return;
          }
          puVar7 = (undefined4 *)*param_1;
          iVar6 = ((uint)param_1[8] >> 1) + 0x10;
          puVar8 = (undefined4 *)((int)ppiVar4 + iVar6);
          if (puVar8 == puVar7) {
            *param_1 = *(int *)((int)ppiVar4 + iVar6);
          }
          else {
            puVar2 = (undefined4 *)*puVar7;
            do {
              if (puVar8 == puVar2) {
                puVar5 = (undefined4 *)param_1[1];
                if (puVar8 == puVar5) {
                  *puVar7 = 0;
                }
                if (puVar8 == puVar5) {
                  param_1[1] = (int)puVar7;
                }
                else {
                  *puVar7 = *puVar2;
                }
                param_1[6] = param_1[6] - ((uint)((int **)param_1[3])[3] & 0xffffff);
                piVar3 = *(int **)param_1[3];
                param_1[3] = (int)piVar3;
                goto joined_r0x000931d6;
              }
              puVar5 = (undefined4 *)*puVar2;
              puVar7 = puVar2;
              puVar2 = puVar5;
            } while (puVar5 != (undefined4 *)0x0);
          }
          param_1[6] = param_1[6] - ((uint)ppiVar4[3] & 0xffffff);
          piVar3 = *ppiVar4;
          param_1[3] = (int)piVar3;
joined_r0x000931d6:
          if (piVar3 == (int *)0x0) {
            param_1[2] = 0;
            return;
          }
          piVar3[1] = 0;
          ppiVar4 = (int **)param_1[3];
        } while( true );
      }
      do {
        ppiVar4 = ppiVar9;
        ppiVar9 = (int **)*ppiVar4;
        if (ppiVar9 == (int **)0x0) break;
      } while (*(char *)((int)ppiVar9 + 0xf) == '\x01');
      piVar3 = ppiVar4[1];
      cVar1 = *(char *)((int)piVar3 + 0xf);
      while (cVar1 == '\x01') {
        puVar7 = (undefined4 *)*param_1;
        iVar6 = ((uint)param_1[8] >> 1) + 0x10;
        puVar8 = (undefined4 *)((int)piVar3 + iVar6);
        if (puVar8 == puVar7) {
          *param_1 = *(int *)((int)piVar3 + iVar6);
        }
        else {
          puVar2 = (undefined4 *)*puVar7;
          do {
            if (puVar8 == puVar2) {
              puVar5 = (undefined4 *)param_1[1];
              if (puVar8 == puVar5) {
                *puVar7 = 0;
              }
              if (puVar8 == puVar5) {
                param_1[1] = (int)puVar7;
              }
              else {
                *puVar7 = *puVar2;
              }
              break;
            }
            puVar5 = (undefined4 *)*puVar2;
            puVar7 = puVar2;
            puVar2 = puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        ppiVar4[3] = (int *)((uint)ppiVar4[3] & 0xff000000 |
                            (piVar3[3] & 0xffffffU) + ((uint)ppiVar4[3] & 0xffffff) & 0xffffff);
        ppiVar4[1] = (int *)piVar3[1];
        *(int ***)piVar3[1] = ppiVar4;
        piVar3 = (int *)piVar3[1];
        cVar1 = *(char *)((int)piVar3 + 0xf);
      }
    }
  }
  return;
}



