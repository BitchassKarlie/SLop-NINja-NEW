/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000966d0 FUN_000966d0 */

void FUN_000966d0(int param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  size_t sVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  byte bVar19;
  float fVar20;
  int local_70 [7];
  int local_54 [8];
  
  iVar10 = DAT_00096928 + 0x966e6;
  sVar6 = strlen((char *)(param_1 + 0xb0));
  iVar17 = 0;
  pvVar7 = operator_new__(sVar6 + 1);
  *(undefined *)(param_1 + 0x10d4) = 0;
  *(undefined *)(param_1 + 0x12d4) = 0;
  iVar14 = DAT_0009692c;
  fVar5 = DAT_00096920;
  fVar4 = DAT_0009691c;
  fVar3 = DAT_00096918;
  fVar2 = DAT_00096914;
  if (0 < (int)sVar6) {
    iVar16 = 0;
    do {
      if (*(char *)(param_1 + 0x14) == '\0') {
        bVar19 = *(byte *)(param_1 + iVar17 + 0xb0);
        if (bVar19 == 9 || bVar19 == 0xd) {
LAB_0009676a:
          bVar19 = 0x20;
          *(undefined *)(param_1 + iVar17 + 0xb0) = 0x20;
        }
        else {
LAB_000967b6:
          iVar15 = param_1 + iVar17;
          if (bVar19 == 0x5b) {
            iVar8 = FUN_00096518(param_1,iVar17,sVar6);
            if (0 < iVar8) {
              if (*(int *)(param_1 + 0xc) == 0) {
                fVar20 = DAT_00096924 / (float)(ulonglong)*(uint *)(param_1 + 0x1c);
              }
              else {
                uVar9 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
                fVar20 = (fVar4 + (float)(ulonglong)uVar9 * fVar3) /
                         (float)(ulonglong)*(uint *)(param_1 + 0x1c);
              }
              iVar12 = (int)(fVar20 + fVar5);
              iVar17 = (iVar17 + iVar8) - iVar12;
              iVar15 = param_1 + iVar17;
              *(undefined *)(iVar15 + 0xb0) = 10;
              if (-1 < iVar12) {
                iVar8 = 0;
                do {
                  iVar11 = iVar15 + iVar8;
                  iVar8 = iVar8 + 1;
                  *(undefined *)(iVar11 + 0xb0) = 10;
                } while (iVar8 <= iVar12);
              }
              *(undefined *)((int)pvVar7 + iVar16) = 0;
              uVar13 = *(undefined4 *)(param_1 + 0x10);
              FUN_00036320(local_54,pvVar7);
              fVar20 = (float)FUN_000906c0(uVar13,local_54,
                                           (float)(ulonglong)*(uint *)(param_1 + 0x1c),
                                           (float)(ulonglong)*(uint *)(param_1 + 0x38));
              *(float *)(param_1 + 0x10c0) =
                   fVar20 + (float)(ulonglong)*(uint *)(param_1 + 0x1c) + fVar2;
              uVar13 = *(undefined4 *)(param_1 + 0x10);
              iVar8 = *(int *)(iVar10 + iVar14) + 8;
              local_54[0] = iVar8;
              FUN_00036320(local_70,param_1 + 0x12d4,uVar13,iVar8,iVar8);
              fVar20 = (float)FUN_00090978(uVar13,local_70);
              *(float *)(param_1 + 0x10c4) = fVar20 * *(float *)(param_1 + 0x10cc);
              local_70[0] = iVar8;
            }
            bVar19 = *(byte *)(iVar15 + 0xb0);
          }
        }
      }
      else {
        bVar19 = *(byte *)(param_1 + iVar17 + 0xb0);
        if ((bVar19 < 0x61) || (0x7a < bVar19)) {
          if (bVar19 == 9 || bVar19 == 0xd) goto LAB_0009676a;
          goto LAB_000967b6;
        }
        cVar18 = bVar19 - 0x20;
        bVar19 = bVar19 - 0x20;
        *(char *)(param_1 + iVar17 + 0xb0) = cVar18;
      }
      iVar15 = FUN_0009660c(param_1,bVar19);
      if (iVar15 != 0) {
        *(byte *)((int)pvVar7 + iVar16) = bVar19;
        iVar16 = iVar16 + 1;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)sVar6);
    if (iVar16 != 0) {
      iVar14 = 0;
      do {
        iVar10 = param_1 + iVar14;
        puVar1 = (undefined *)((int)pvVar7 + iVar14);
        iVar14 = iVar14 + 1;
        *(undefined *)(iVar10 + 0xb0) = *puVar1;
      } while (iVar14 != iVar16);
      goto LAB_000968d2;
    }
  }
  iVar14 = 0;
LAB_000968d2:
  *(undefined *)(param_1 + iVar14 + 0xb0) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete__(pvVar7);
  }
  return;
}



