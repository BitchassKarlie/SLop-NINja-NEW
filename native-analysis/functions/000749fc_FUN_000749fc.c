/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000749fc FUN_000749fc */

int FUN_000749fc(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  bool bVar10;
  
  if (((param_2 < *param_1) || (param_1[1] < param_2)) ||
     ((0 < param_1[10] && (__aeabi_idivmod(param_2), extraout_r1 != 0)))) {
LAB_00074ad4:
    iVar2 = 0;
  }
  else {
    puVar1 = *(uint **)(param_3 + 4);
    puVar8 = puVar1;
    if (puVar1 != (uint *)0x0) {
      do {
        puVar4 = puVar8;
        puVar8 = (uint *)puVar4[3];
      } while (puVar8 != (uint *)0x0);
joined_r0x00074a38:
      do {
        if ((uint *)param_1[3] == (uint *)0x0) {
LAB_00074ac0:
          uVar9 = 0;
        }
        else {
          puVar8 = (uint *)0x0;
          puVar7 = (uint *)param_1[3];
          do {
            if (*puVar7 < *puVar4) {
              puVar5 = (uint *)puVar7[4];
            }
            else {
              puVar5 = (uint *)puVar7[3];
              puVar8 = puVar7;
            }
            puVar7 = puVar5;
          } while (puVar5 != (uint *)0x0);
          if ((puVar8 == (uint *)0x0) || (*puVar4 < *puVar8)) goto LAB_00074ac0;
          uVar9 = puVar8[1];
        }
        if ((uint *)param_1[7] == (uint *)0x0) {
LAB_00074a98:
          uVar6 = 1000000;
        }
        else {
          puVar8 = (uint *)0x0;
          puVar7 = (uint *)param_1[7];
          do {
            if (*puVar7 < *puVar4) {
              puVar5 = (uint *)puVar7[4];
            }
            else {
              puVar5 = (uint *)puVar7[3];
              puVar8 = puVar7;
            }
            puVar7 = puVar5;
          } while (puVar5 != (uint *)0x0);
          if ((puVar8 == (uint *)0x0) || (*puVar4 < *puVar8)) goto LAB_00074a98;
          uVar6 = puVar8[1];
        }
        if (((int)puVar4[1] < (int)uVar9) || ((int)uVar6 < (int)puVar4[1])) goto LAB_00074ad4;
        puVar8 = (uint *)puVar4[4];
        if ((uint *)puVar4[4] == (uint *)0x0) {
          puVar8 = (uint *)puVar4[5];
          if (puVar8 == (uint *)0x0) break;
          bVar10 = (uint *)puVar8[4] == puVar4;
          puVar4 = puVar8;
          if (bVar10) {
            do {
              puVar4 = (uint *)puVar8[5];
              if (puVar4 == (uint *)0x0) goto LAB_00074ac6;
              bVar10 = puVar8 == (uint *)puVar4[4];
              puVar8 = puVar4;
            } while (bVar10);
          }
          goto joined_r0x00074a38;
        }
        do {
          puVar4 = puVar8;
          puVar8 = (uint *)puVar4[3];
        } while ((uint *)puVar4[3] != (uint *)0x0);
      } while (puVar4 != (uint *)0x0);
    }
LAB_00074ac6:
    puVar8 = (uint *)param_1[0x2d];
    if (puVar8 != (uint *)param_1[0x2e]) {
      if (puVar1 == (uint *)0x0) goto LAB_00074ad4;
      bVar10 = true;
      uVar9 = 0xffffffff;
      do {
        puVar4 = (uint *)0x0;
        puVar7 = puVar1;
        do {
          if (*puVar7 < *puVar8) {
            puVar5 = (uint *)puVar7[4];
          }
          else {
            puVar5 = (uint *)puVar7[3];
            puVar4 = puVar7;
          }
          puVar7 = puVar5;
        } while (puVar5 != (uint *)0x0);
        if ((puVar4 == (uint *)0x0) || (*puVar8 < *puVar4)) goto LAB_00074ad4;
        if (bVar10) {
          uVar9 = puVar4[1];
          if ((int)uVar9 < 1) goto LAB_00074ad4;
        }
        else if (uVar9 != puVar4[1]) goto LAB_00074ad4;
        puVar8 = puVar8 + 1;
        bVar10 = false;
      } while ((uint *)param_1[0x2e] != puVar8);
    }
    if ((param_1[0x30] != 0) && (0 < param_1[0xb])) {
      uVar3 = FUN_00017e38();
      FUN_00018e74(uVar3,param_1[0x30]);
    }
    sprintf((char *)(param_1 + 0x1c),(char *)(param_1 + 0xc),param_2);
    iVar2 = param_1[0xb];
  }
  return iVar2;
}



