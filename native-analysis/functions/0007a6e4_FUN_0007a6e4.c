/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a6e4 FUN_0007a6e4 */

void FUN_0007a6e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *__s2;
  char *__s1;
  int *piVar15;
  char *__s1_00;
  undefined4 ****local_3c;
  undefined4 ****local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  iVar12 = DAT_0007a99c + 0x7a6fe;
  pcVar3 = (char *)FUN_0009a4a0(param_2,DAT_0007a998 + 0x7a6fa);
  strcpy((char *)(param_1 + 0x14),pcVar3);
  uVar4 = FUN_0008f414((char *)(param_1 + 0x14));
  uVar13 = (uint)*(byte *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  if (uVar13 != 0) {
    uVar8 = 0;
    iVar10 = param_1;
    uVar14 = uVar13;
    do {
      *(char *)(iVar10 + 0x54) = (char)uVar14;
      if ((uVar14 - 0x61 & 0xff) < 0x1a) {
        *(char *)(iVar10 + 0x54) = (char)uVar14 + -0x20;
      }
      uVar14 = (uint)*(byte *)(iVar10 + 0x15);
      uVar13 = uVar8 + 1;
      iVar10 = iVar10 + 1;
      uVar8 = uVar13;
    } while (uVar14 != 0);
  }
  iVar10 = DAT_0007a9a0;
  *(undefined *)(param_1 + uVar13 + 0x54) = 0;
  uVar4 = FUN_0009a4a0(param_2,DAT_0007a9a4 + 0x7a74e);
  uVar2 = FUN_00084524(uVar4,iVar10 + 0x7a74c);
  iVar9 = DAT_0007a9a8 + 0x7a75c;
  *(undefined *)(param_1 + 0x94) = uVar2;
  uVar4 = FUN_0009a4a0(param_2,iVar9);
  uVar2 = FUN_00084524(uVar4,iVar10 + 0x7a74c);
  iVar10 = DAT_0007a9ac + 0x7a772;
  *(undefined *)(param_1 + 0x95) = uVar2;
  uVar4 = FUN_0009a4a0(param_2,iVar10);
  FUN_00084804(param_1 + 0xa8,uVar4);
  uVar4 = FUN_0009a4a0(param_2,DAT_0007a9b0 + 0x7a78c);
  FUN_00084948(local_2c,uVar4);
  FUN_00017d64(param_1 + 0xb0,local_2c[0]);
  FUN_00017d90(local_2c);
  uVar4 = FUN_0009a4a0(param_2,DAT_0007a9b4 + 0x7a7b0);
  FUN_00084948(&local_30,uVar4);
  FUN_00017d64(param_1 + 0xb4,local_30);
  FUN_00017d90(&local_30);
  *(int *)(param_1 + 0xa4) = DAT_0007a98c;
  iVar9 = FUN_0009a0e8(param_2);
  iVar10 = DAT_0007a9c4;
  if (iVar9 != 0) {
    pcVar3 = (char *)(DAT_0007a9b8 + 0x7a7ee);
    __s1 = (char *)(DAT_0007a9bc + 0x7a7f2);
    __s1_00 = (char *)(DAT_0007a9c0 + 0x7a7f4);
    do {
      while( true ) {
        __s2 = (char *)(*(int *)(iVar9 + 0x20) + 8);
        iVar5 = strcmp((char *)(iVar10 + 0x7a812),__s2);
        if (iVar5 == 0) break;
        iVar5 = strcmp(pcVar3,__s2);
        if (iVar5 == 0) {
          if (*(int *)(param_1 + 0xb8) == 0) {
            pvVar7 = operator_new(0x60);
            FUN_00080ea8();
            *(void **)(param_1 + 0xb8) = pvVar7;
            *(int *)((int)pvVar7 + 0x54) = param_1;
            FUN_00082650(*(undefined4 *)(param_1 + 0xb8),iVar9);
          }
          goto LAB_0007a7fe;
        }
        iVar5 = strcmp(__s1,__s2);
        piVar15 = (int *)0x0;
        if (iVar5 == 0) {
          piVar15 = (int *)operator_new(0x48);
          FUN_0008b63c();
          __s2 = (char *)(*(int *)(iVar9 + 0x20) + 8);
        }
        iVar5 = strcmp(__s1_00,__s2);
        if (iVar5 == 0) {
          piVar15 = (int *)operator_new(0x40);
          FUN_000829c0();
          __s2 = (char *)(*(int *)(iVar9 + 0x20) + 8);
        }
        iVar5 = strcmp((char *)(DAT_0007a9c8 + 0x7a850),__s2);
        if (iVar5 == 0) {
          piVar15 = (int *)operator_new(0x3c);
          iVar11 = DAT_0007a9d0;
          iVar5 = DAT_0007a98c;
          piVar15[5] = DAT_0007a990;
          *(undefined *)(piVar15 + 4) = 0;
          piVar15[1] = iVar5;
          piVar15[3] = iVar5;
          *(undefined *)(piVar15 + 6) = 0;
          iVar1 = DAT_0007a994;
          piVar15[7] = 0;
          piVar15[0xd] = iVar5;
          piVar15[0xe] = 0;
          piVar15[8] = iVar1;
          *(undefined *)(piVar15 + 0xb) = 0;
          piVar15[10] = iVar1;
          iVar11 = *(int *)(iVar12 + iVar11);
          piVar15[9] = iVar5;
          piVar15[0xc] = iVar1;
          *piVar15 = iVar11 + 8;
          __s2 = (char *)(*(int *)(iVar9 + 0x20) + 8);
        }
        iVar5 = strcmp((char *)(DAT_0007a9cc + 0x7a860),__s2);
        if (iVar5 == 0) {
          piVar15 = (int *)operator_new(0x3c);
          FUN_000807bc();
        }
        if (piVar15 == (int *)0x0) goto LAB_0007a7fe;
        FUN_00079e78(piVar15,iVar9);
        iVar5 = *(int *)(param_1 + 8);
        if ((int)((uint)(*(float *)(param_1 + 0xa4) < (float)piVar15[1]) << 0x1f) < 0) {
          *(int *)(param_1 + 0xa4) = piVar15[1];
        }
        piVar6 = (int *)operator_new(0xc);
        local_3c = &local_3c;
        *piVar6 = (int)local_3c;
        piVar6[1] = (int)local_3c;
        piVar6[2] = (int)piVar15;
        *piVar6 = iVar5;
        piVar6[1] = *(int *)(iVar5 + 4);
        *(int **)(iVar5 + 4) = piVar6;
        *(int **)piVar6[1] = piVar6;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        local_38 = local_3c;
        local_34 = piVar15;
        iVar9 = FUN_0009a110(iVar9);
        if (iVar9 == 0) {
          return;
        }
      }
      pvVar7 = operator_new(0xc4);
      FUN_0007a3a4();
      *(void **)(param_1 + 0x98) = pvVar7;
      FUN_0007a588(pvVar7,iVar9);
      *(undefined *)(param_1 + 0x94) = 1;
LAB_0007a7fe:
      iVar9 = FUN_0009a110(iVar9);
    } while (iVar9 != 0);
  }
  return;
}



