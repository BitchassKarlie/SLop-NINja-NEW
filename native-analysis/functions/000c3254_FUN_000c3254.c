/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3254 FUN_000c3254 */

undefined4 FUN_000c3254(int *param_1,int **param_2,int param_3)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  uint *puVar4;
  undefined uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined uVar9;
  int *piVar10;
  undefined uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  
  iVar14 = param_1[7];
  if (*param_1 != 0) {
    iVar8 = iVar14;
    if (0xfe < iVar14) {
      iVar8 = 0xff;
    }
    if (iVar8 == 0) {
      return 0;
    }
    if (param_1[0x53] == 0) {
      if (iVar8 < 1) {
        uVar15 = 0;
        uVar16 = 0;
        iVar6 = 0;
      }
      else {
        if (*(char *)param_1[4] == -1) {
          iVar6 = 0;
          do {
            iVar6 = iVar6 + 1;
            if (iVar6 == iVar8) {
              uVar15 = 0;
              uVar16 = 0;
              goto LAB_000c3326;
            }
          } while (((char *)param_1[4])[iVar6 * 4] == -1);
        }
        else {
          iVar6 = 0;
        }
        iVar6 = iVar6 + 1;
        uVar15 = 0;
        uVar16 = 0;
      }
    }
    else if (iVar8 < 1) {
      uVar15 = 0xffffffff;
      uVar16 = 0xffffffff;
      iVar6 = 0;
    }
    else {
      iVar12 = 0;
      iVar7 = 0;
      piVar17 = (int *)param_1[4];
      iVar6 = 0;
      uVar15 = 0xffffffff;
      uVar16 = 0xffffffff;
      do {
        piVar10 = piVar17 + iVar6;
        if (*(byte *)piVar10 == 0xff) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar12 + 1;
          puVar4 = (uint *)(param_1[5] + iVar6 * 8);
          uVar15 = *puVar4;
          uVar16 = puVar4[1];
          iVar12 = iVar13;
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == iVar8) goto LAB_000c3480;
        iVar7 = iVar7 + (uint)*(byte *)piVar10;
      } while (iVar13 < 4 || iVar7 < 0x1001);
      param_3 = 1;
LAB_000c3480:
      if (iVar6 == 0xff) {
        iVar8 = 0x7f8;
        iVar12 = 0x3fc;
        piVar10 = (int *)0x11a;
        uVar11 = 0xff;
        goto LAB_000c333c;
      }
    }
LAB_000c3326:
    if (param_3 != 0) {
      piVar17 = (int *)param_1[4];
      uVar11 = (undefined)iVar6;
      piVar10 = (int *)(iVar6 + 0x1b);
      iVar12 = iVar6 << 2;
      iVar8 = iVar6 << 3;
LAB_000c333c:
      param_1[10] = 0x5367674f;
      *(undefined *)(param_1 + 0xb) = 0;
      *(undefined *)((int)param_1 + 0x2d) = 0;
      if (-1 < *piVar17 << 0x17) {
        *(undefined *)((int)param_1 + 0x2d) = 1;
      }
      if (param_1[0x53] == 0) {
        *(byte *)((int)param_1 + 0x2d) = *(byte *)((int)param_1 + 0x2d) | 2;
      }
      if ((param_1[0x52] != 0) && (iVar14 == iVar6)) {
        *(byte *)((int)param_1 + 0x2d) = *(byte *)((int)param_1 + 0x2d) | 4;
      }
      param_1[0x53] = 1;
      iVar14 = 6;
      do {
        iVar7 = iVar14 + 1;
        *(char *)((int)param_1 + iVar14 + 0x28) = (char)uVar15;
        uVar15 = uVar15 >> 8 | uVar16 << 0x18;
        uVar16 = (int)uVar16 >> 8;
        iVar14 = iVar7;
      } while (iVar7 != 0xe);
      iVar14 = param_1[0x54];
      *(char *)((int)param_1 + 0x36) = (char)iVar14;
      *(char *)((int)param_1 + 0x37) = (char)((uint)iVar14 >> 8);
      *(char *)((int)param_1 + 0x39) = (char)((uint)iVar14 >> 0x18);
      iVar7 = param_1[0x55];
      *(char *)(param_1 + 0xe) = (char)((uint)iVar14 >> 0x10);
      if (iVar7 == -1) {
        uVar2 = 0;
        iVar14 = 1;
        param_1[0x55] = 0;
        uVar9 = 0;
        uVar3 = uVar2;
        uVar5 = uVar2;
      }
      else {
        iVar14 = iVar7 + 1;
        uVar9 = (undefined)iVar7;
        uVar2 = (undefined)((uint)iVar7 >> 8);
        uVar3 = (char)((uint)iVar7 >> 0x10);
        uVar5 = (char)((uint)iVar7 >> 0x18);
      }
      *(undefined *)((int)param_1 + 0x3a) = uVar9;
      piVar17 = (int *)0x0;
      param_1[0x55] = iVar14;
      *(undefined *)((int)param_1 + 0x3b) = uVar2;
      *(undefined *)(param_1 + 0xf) = uVar3;
      *(undefined *)((int)param_1 + 0x3d) = uVar5;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      *(undefined *)((int)param_1 + 0x3f) = 0;
      *(undefined *)(param_1 + 0x10) = 0;
      *(undefined *)((int)param_1 + 0x41) = 0;
      *(undefined *)((int)param_1 + 0x42) = uVar11;
      if (0 < iVar6) {
        iVar7 = param_1[4];
        iVar14 = 0;
        do {
          bVar1 = *(byte *)(iVar7 + iVar14 * 4);
          iVar13 = iVar14 + 1;
          piVar17 = (int *)((int)piVar17 + (uint)bVar1);
          *(byte *)((int)param_1 + iVar14 + 0x43) = bVar1;
          iVar14 = iVar13;
        } while (iVar13 != iVar6);
      }
      *param_2 = param_1 + 10;
      param_1[0x51] = (int)piVar10;
      param_2[1] = piVar10;
      iVar14 = *param_1;
      iVar7 = param_1[3];
      param_2[3] = piVar17;
      param_2[2] = (int *)(iVar14 + iVar7);
      iVar14 = param_1[7];
      param_1[7] = iVar14 - iVar6;
      memmove((void *)param_1[4],(void *)((int)(void *)param_1[4] + iVar12),(iVar14 - iVar6) * 4);
      memmove((void *)param_1[5],(void *)((int)(void *)param_1[5] + iVar8),param_1[7] << 3);
      param_1[3] = param_1[3] + (int)piVar17;
      FUN_000c2f2c(param_2);
      return 1;
    }
  }
  return 0;
}



