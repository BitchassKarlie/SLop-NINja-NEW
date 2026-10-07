/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072584 FUN_00072584 */

void FUN_00072584(int param_1,float param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *__dest;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  undefined auStack_28 [8];
  int local_20;
  undefined4 *local_1c;
  
  fVar3 = DAT_00072710;
  puVar9 = *(undefined4 **)(param_1 + 0x144);
  if (*(undefined4 **)(param_1 + 0x144) != (undefined4 *)0x0) {
    do {
      puVar8 = puVar9;
      puVar9 = (undefined4 *)puVar8[0x23];
    } while (puVar9 != (undefined4 *)0x0);
    iVar6 = (uint)((float)puVar8[0x21] < DAT_0007270c) << 0x1f;
    if (iVar6 < 0) {
      puVar9 = puVar8;
    }
    fVar10 = (float)puVar8[0x21];
    if (-1 < iVar6) {
      fVar10 = DAT_0007270c;
    }
    puVar7 = (undefined4 *)puVar8[0x24];
    if ((undefined4 *)puVar8[0x24] == (undefined4 *)0x0) goto LAB_000725f8;
    while( true ) {
      do {
        puVar4 = puVar7;
        puVar7 = (undefined4 *)puVar4[0x23];
      } while ((undefined4 *)puVar4[0x23] != (undefined4 *)0x0);
      if (puVar4 == (undefined4 *)0x0) break;
      puVar7 = (undefined4 *)puVar4[0x24];
      fVar11 = fVar10;
      while( true ) {
        iVar6 = (uint)((float)puVar4[0x21] < fVar11) << 0x1f;
        if (iVar6 < 0) {
          puVar9 = puVar4;
        }
        fVar10 = (float)puVar4[0x21];
        if (-1 < iVar6) {
          fVar10 = fVar11;
        }
        puVar8 = puVar4;
        if (puVar7 != (undefined4 *)0x0) break;
LAB_000725f8:
        puVar4 = (undefined4 *)puVar8[0x25];
        if (puVar4 == (undefined4 *)0x0) goto LAB_0007261e;
        puVar7 = (undefined4 *)puVar4[0x24];
        fVar11 = fVar10;
        if (puVar8 == puVar7) {
          puVar8 = puVar4;
          puVar4 = (undefined4 *)puVar4[0x25];
          while( true ) {
            if (puVar4 == (undefined4 *)0x0) goto LAB_0007261e;
            puVar7 = (undefined4 *)puVar4[0x24];
            if (puVar8 != puVar7) break;
            puVar8 = puVar4;
            puVar4 = (undefined4 *)puVar4[0x25];
          }
        }
      }
    }
LAB_0007261e:
    if (puVar9 != (undefined4 *)0x0) {
      fVar10 = (float)puVar9[0x21];
      fVar11 = fVar10 - param_2;
      bVar1 = fVar10 < DAT_00072710;
      bVar2 = NAN(DAT_00072710);
      puVar9[0x21] = fVar11;
      if ((bVar1 == (NAN(fVar10) || bVar2)) && ((int)((uint)(fVar11 < fVar3) << 0x1f) < 0)) {
        if ((*(byte *)(puVar9 + 1) < 0x30) || (0x39 < *(byte *)(puVar9 + 1))) {
          uVar5 = FUN_0007832c();
          FUN_000777a8(uVar5,*puVar9);
        }
        else {
          uVar5 = FUN_000a3a68();
          FUN_000a5028(uVar5,puVar9 + 1);
        }
        uVar5 = FUN_00017e38();
        FUN_00017da8(uVar5,*puVar9,param_3);
        fVar11 = (float)puVar9[0x21];
      }
      if (fVar11 <= 0.0) {
        __dest = (void *)FUN_000721d0(param_1 + 0x150,puVar9);
        iVar6 = param_1 + 0x140;
        memcpy(__dest,puVar9 + 1,0x84);
        local_20 = iVar6;
        local_1c = puVar9;
        FUN_0007244c(auStack_28,iVar6,iVar6,puVar9);
      }
    }
  }
  FUN_000a3a68();
  iVar6 = FUN_000a5318();
  if (iVar6 == 0) {
    *(undefined4 *)(DAT_00072720 + 0x728c8) = DAT_00072718;
  }
  else if ((int)((uint)(*(float *)(DAT_0007271c + 0x7288a) < DAT_00072714) << 0x1f) < 0) {
    param_2 = param_2 + *(float *)(DAT_0007271c + 0x7288a);
    bVar1 = param_2 < DAT_00072714;
    bVar2 = NAN(DAT_00072714);
    *(float *)(DAT_0007271c + 0x7288a) = param_2;
    if (bVar1 == (NAN(param_2) || bVar2)) {
      if (*(char *)(param_1 + 0x30) == '\0') {
        FUN_000a3a68();
        iVar6 = FUN_00094cac();
        if (iVar6 != 0) {
          return;
        }
      }
      FUN_0006fea4(param_1);
    }
  }
  return;
}



