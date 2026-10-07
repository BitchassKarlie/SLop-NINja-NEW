/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007cae4 FUN_0007cae4 */

/* WARNING: Type propagation algorithm not settling */

int * FUN_0007cae4(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int **ppiVar5;
  uint *puVar6;
  uint *puVar7;
  int **ppiVar8;
  uint *puVar9;
  int **ppiVar10;
  int iVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  float fVar14;
  float fVar15;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  int *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined auStack_44 [4];
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  uint *local_30;
  float local_2c [2];
  
  if (*(uint **)(param_1 + 4) != (uint *)0x0) {
    puVar4 = (uint *)0x0;
    puVar7 = *(uint **)(param_1 + 4);
    do {
      if (*puVar7 < param_2) {
        puVar6 = (uint *)puVar7[4];
      }
      else {
        puVar6 = (uint *)puVar7[3];
        puVar4 = puVar7;
      }
      puVar7 = puVar6;
    } while (puVar6 != (uint *)0x0);
    if ((puVar4 != (uint *)0x0) && (*puVar4 <= param_2)) {
      puVar7 = (uint *)0x0;
      puVar6 = *(uint **)(param_1 + 0x20);
      if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
        do {
          if (*puVar6 < param_2) {
            puVar9 = (uint *)puVar6[4];
          }
          else {
            puVar9 = (uint *)puVar6[3];
            puVar7 = puVar6;
          }
          puVar6 = puVar9;
        } while (puVar9 != (uint *)0x0);
        if ((puVar7 != (uint *)0x0) && (*puVar7 <= param_2)) {
          ppiVar5 = *(int ***)(puVar7[1] + 8);
          ppiVar10 = (int **)*ppiVar5;
          local_2c[0] = DAT_0007ce10;
          if (ppiVar5 != ppiVar10) {
            piVar1 = ppiVar10[2];
            while (piVar1 != (int *)0x0) {
              fVar14 = (float)piVar1[1];
              ppiVar10 = (int **)*ppiVar10;
              if (fVar14 == local_2c[0] || fVar14 < local_2c[0] != (NAN(fVar14) || NAN(local_2c[0]))
                 ) {
                fVar14 = local_2c[0];
              }
              local_2c[0] = fVar14;
              if (ppiVar5 == ppiVar10) break;
              piVar1 = ppiVar10[2];
            }
          }
          if (param_4 != 0) {
            param_4 = 1;
          }
          local_50 = *param_3;
          local_4c = param_3[1];
          local_48 = param_3[2];
          FUN_0007a27c(puVar7[1],0,param_4,&local_50,local_2c);
          return (int *)puVar7[1];
        }
      }
      piVar1 = (int *)FUN_0007b300(puVar4[1]);
      iVar11 = *(int *)(param_1 + 0x14);
      piVar2 = (int *)operator_new(0xc);
      local_80 = &local_80;
      *piVar2 = (int)local_80;
      piVar2[1] = (int)local_80;
      piVar2[2] = (int)piVar1;
      *piVar2 = iVar11;
      piVar2[1] = *(int *)(iVar11 + 4);
      *(int **)(iVar11 + 4) = piVar2;
      *(int **)piVar2[1] = piVar2;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      local_7c = local_80;
      local_78 = piVar1;
      iVar3 = FUN_000794a4(param_1);
      iVar11 = DAT_0007ce0c;
      if ((((iVar3 == 0) || (*(char *)((int)piVar1 + 0x95) != '\0')) ||
          ((piVar1[0x26] != 0 && (*(int *)(piVar1[0x26] + 4) != 0)))) || (param_4 != 0)) {
        iVar11 = param_4;
        if (param_4 != 0) {
          iVar11 = 1;
        }
        local_74 = *param_3;
        local_70 = param_3[1];
        local_6c = param_3[2];
        FUN_0007a27c(piVar1,1,iVar11,&local_74,param_4);
      }
      else {
        ppiVar5 = (int **)piVar1[2];
        ppiVar10 = (int **)*ppiVar5;
        local_2c[0] = DAT_0007ce10;
        if (ppiVar5 != ppiVar10) {
          piVar2 = ppiVar10[2];
          while (piVar2 != (int *)0x0) {
            fVar14 = (float)piVar2[1];
            ppiVar10 = (int **)*ppiVar10;
            if (fVar14 == local_2c[0] || fVar14 < local_2c[0] != (NAN(fVar14) || NAN(local_2c[0])))
            {
              fVar14 = local_2c[0];
            }
            local_2c[0] = fVar14;
            if (ppiVar5 == ppiVar10) break;
            piVar2 = ppiVar10[2];
          }
        }
        ppiVar13 = *(int ***)(param_1 + 0x14);
        ppiVar8 = (int **)*ppiVar13;
        ppiVar10 = ppiVar8;
        ppiVar5 = ppiVar13;
        if (ppiVar13 != ppiVar8) {
          do {
            piVar2 = ppiVar8[2];
            fVar14 = (float)piVar2[0x29];
            if (((fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) &&
                (*(char *)((int)piVar2 + 0x95) == '\0')) &&
               ((piVar2[0x26] == 0 || (*(int *)(piVar2[0x26] + 4) == 0)))) {
              ppiVar5 = (int **)piVar2[2];
              ppiVar10 = (int **)*ppiVar5;
              fVar14 = DAT_0007ce10;
              if (ppiVar5 != ppiVar10) {
                piVar2 = ppiVar10[2];
                while (piVar2 != (int *)0x0) {
                  fVar15 = (float)piVar2[1];
                  ppiVar10 = (int **)*ppiVar10;
                  if (fVar15 == fVar14 || fVar15 < fVar14 != (NAN(fVar15) || NAN(fVar14))) {
                    fVar15 = fVar14;
                  }
                  fVar14 = fVar15;
                  if (ppiVar5 == ppiVar10) break;
                  piVar2 = ppiVar10[2];
                }
              }
              if (local_2c[0] != fVar14 && local_2c[0] < fVar14 == (NAN(local_2c[0]) || NAN(fVar14))
                 ) {
                local_2c[0] = fVar14;
              }
            }
            ppiVar8 = (int **)*ppiVar8;
          } while (ppiVar8 != ppiVar13);
          ppiVar10 = (int **)*ppiVar13;
          ppiVar5 = ppiVar8;
        }
        if (ppiVar5 != ppiVar10) {
          puVar12 = (undefined4 *)(DAT_0007ce0c + 0x7cd38);
          do {
            piVar2 = ppiVar10[2];
            fVar14 = (float)piVar2[0x29];
            if ((((fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) &&
                 (*(char *)((int)piVar2 + 0x95) == '\0')) &&
                ((piVar2[0x26] == 0 || (*(int *)(piVar2[0x26] + 4) == 0)))) && (piVar1 != piVar2)) {
              local_5c = *puVar12;
              local_58 = *(undefined4 *)(iVar11 + 0x7cd3c);
              local_54 = *(undefined4 *)(iVar11 + 0x7cd40);
              FUN_0007a27c(piVar2,0,0,&local_5c,local_2c);
              ppiVar13 = *(int ***)(param_1 + 0x14);
            }
            ppiVar10 = (int **)*ppiVar10;
          } while (ppiVar10 != ppiVar13);
        }
        local_68 = *param_3;
        local_64 = param_3[1];
        local_60 = param_3[2];
        FUN_0007a27c(piVar1,1,0,&local_68,local_2c);
      }
      iVar11 = FUN_000794a4(param_1);
      piVar1[0x33] = (int)((float)(longlong)iVar11 * DAT_0007ce08);
      if (*(char *)(piVar1 + 0x25) == '\0') {
        return piVar1;
      }
      puVar4 = *(uint **)(param_1 + 0x20);
      local_30 = puVar4;
      if (puVar4 != (uint *)0x0) {
        local_30 = (uint *)0x0;
        do {
          if (*puVar4 < param_2) {
            puVar7 = (uint *)puVar4[4];
          }
          else {
            puVar7 = (uint *)puVar4[3];
            local_30 = puVar4;
          }
          puVar4 = puVar7;
        } while (puVar7 != (uint *)0x0);
        if ((local_30 != (uint *)0x0) && (*local_30 <= param_2)) {
          local_30[1] = (uint)piVar1;
          return piVar1;
        }
      }
      local_34 = param_1 + 0x1c;
      local_38 = 0;
      local_3c = param_2;
      FUN_0007ca10(auStack_44,local_34,local_34,local_30,&local_3c);
      *(int **)(local_40 + 4) = piVar1;
      return piVar1;
    }
  }
  return (int *)0x0;
}



