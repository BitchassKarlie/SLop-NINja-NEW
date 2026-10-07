/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008b280 FUN_0008b280 */

void FUN_0008b280(int param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  void *pvVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  int iVar13;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar9 = DAT_0008b5c0;
  iVar10 = DAT_0008b5bc + 0x8b292;
  if (*(int *)(*(int *)(iVar10 + DAT_0008b5c0) + 4) == 2) {
    FUN_0007b72c();
    FUN_0007a4e8();
  }
  pvVar12 = *(void **)(param_1 + 0x24);
  *(undefined *)(param_1 + 0x36) = 0;
  *(undefined *)(param_1 + 0x35) = 1;
  *(undefined *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  if (pvVar12 != (void *)0x0) {
    FUN_00088848(pvVar12);
    operator_delete(pvVar12);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0x20);
  if (pvVar12 != (void *)0x0) {
    pvVar3 = *(void **)((int)pvVar12 + 4);
    *(void **)((int)pvVar12 + 8) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(pvVar12);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar6 = DAT_0008b5c4;
  uVar5 = DAT_0008b5a4;
  iVar13 = *(int *)(iVar10 + iVar9);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined *)(iVar13 + 8) = 0;
  *(undefined *)(param_1 + 0x25d) = 0;
  *(undefined *)(param_1 + 0x25e) = 0;
  puVar8 = *(uint **)(iVar6 + 0x8b314);
  lVar2 = (ulonglong)*puVar8 * (ulonglong)puVar8[2] +
          CONCAT44(puVar8[2] * puVar8[1] + *puVar8 * puVar8[3],puVar8[4]);
  uVar7 = puVar8[5] + (int)((ulonglong)lVar2 >> 0x20);
  *puVar8 = (uint)lVar2;
  puVar8[1] = uVar7;
  *(float *)(param_1 + 0x260) =
       DAT_0008b5ac +
       ((float)(ulonglong)((uVar7 >> 0xd) - (uint)(uVar7 * 0x80000 < uVar7)) / DAT_0008b5a8) *
       DAT_0008b5ac;
  FUN_0002f618(0,0xffffffff);
  FUN_0002f630(0,0xffffffff);
  FUN_00020cb0(0xffffffff);
  iVar6 = DAT_0008b5c8;
  *(undefined *)(iVar13 + 0x20) = 0;
  **(undefined4 **)(iVar10 + iVar6) = 0;
  **(undefined4 **)(iVar10 + DAT_0008b5cc) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 600) = uVar5;
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined *)(param_1 + 0x25c) = 1;
  iVar6 = DAT_0008b5d0;
  puVar11 = (undefined8 *)(DAT_0008b5d0 + 0x8b3d4);
  fVar4 = (float)(**(code **)(**(int **)(iVar13 + 0x4c) + 0x20))();
  uVar1 = *puVar11;
  fVar4 = (float)FUN_000927e0((int)(fVar4 * DAT_0008b5b0) & 0xffff);
  fVar4 = DAT_0008b5b4 / fVar4;
  local_44 = *(undefined4 *)puVar11;
  local_40 = *(undefined4 *)(iVar6 + 0x8b3d8);
  local_3c = *(undefined4 *)(iVar6 + 0x8b3dc);
  (**(code **)(**(int **)(iVar13 + 0x4c) + 0x24))(*(int **)(iVar13 + 0x4c),&local_44);
  local_50 = (undefined4)uVar1;
  local_4c = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_48 = fVar4;
  (**(code **)(**(int **)(iVar13 + 0x4c) + 0x2c))(*(int **)(iVar13 + 0x4c),&local_50);
  local_5c = uVar5;
  local_58 = DAT_0008b5b8;
  local_54 = uVar5;
  (**(code **)(**(int **)(iVar13 + 0x4c) + 0x34))(*(int **)(iVar13 + 0x4c),&local_5c);
  if (*(int *)(iVar13 + 0x40) != 0) {
    FUN_00049bd8();
  }
  FUN_00023d7c(0);
  FUN_0001e0f8();
  uVar5 = FUN_0001c940();
  iVar6 = FUN_0001bca0(uVar5,0,0);
  if (iVar6 != 0) {
    iVar13 = 1;
    do {
      *(undefined *)(iVar6 + 0x3d) = 1;
      uVar5 = FUN_0001c940();
      iVar6 = FUN_0001bca0(uVar5,0,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar6 != 0);
  }
  uVar5 = FUN_0001c940();
  iVar6 = FUN_0001bca0(uVar5,1,0);
  if (iVar6 != 0) {
    iVar13 = 1;
    do {
      *(undefined *)(iVar6 + 0x78) = 1;
      uVar5 = FUN_0001c940();
      iVar6 = FUN_0001bca0(uVar5,1,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar6 != 0);
  }
  FUN_0008abb0(param_1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar13 = param_1 + *(int *)(*(int *)(iVar10 + iVar9) + 4) * 0x10;
  iVar6 = *(int *)(iVar13 + 0x210);
  if (iVar6 != *(int *)(iVar13 + 0x214)) {
    do {
      iVar13 = iVar6 + 0x7c;
      FUN_00085b7c(iVar6);
      iVar6 = iVar13;
    } while (iVar13 != *(int *)(param_1 + *(int *)(*(int *)(iVar10 + iVar9) + 4) * 0x10 + 0x214));
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 1;
  do {
    iVar13 = param_1 + iVar6;
    iVar6 = iVar6 + 4;
    *(undefined4 *)(iVar13 + 0x264) = 0xffffffff;
  } while (iVar6 != 0x80);
  iVar6 = param_1 + *(int *)(*(int *)(iVar10 + iVar9) + 4) * 0x10;
  if ((uint)(*(int *)(iVar6 + 0xb4) - *(int *)(iVar6 + 0xb0)) >> 2 != 0) {
    iVar6 = FUN_0002f5f0();
    if (iVar6 == 0) {
      FUN_00089ba0(param_1,0);
    }
    iVar6 = FUN_0002f5f4();
    if (iVar6 != 0) {
      *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) + DAT_0008b5b8;
    }
  }
  fVar4 = DAT_0008b5b8;
  iVar9 = *(int *)(iVar10 + iVar9);
  *(undefined *)(iVar9 + 0x19d) = 0;
  *(float *)(param_1 + 0x78) = fVar4;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + *(int *)(iVar9 + 4) * 4 + 0x8c);
  if (param_2 != 0) {
    FUN_00087ec8(param_1);
  }
  return;
}



