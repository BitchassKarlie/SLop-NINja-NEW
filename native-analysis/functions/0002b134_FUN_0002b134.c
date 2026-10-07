/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002b134 FUN_0002b134 */

void FUN_0002b134(int param_1,uint param_2,int param_3,undefined4 param_4,char *param_5,
                 char *param_6,char param_7,char *param_8,char *param_9)

{
  longlong lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  iVar11 = DAT_0002b34c;
  iVar4 = DAT_0002b344;
  iVar6 = DAT_0002b348 + 0x2b154;
  puVar10 = (uint *)(DAT_0002b34c + 0x2b15c);
  *(int *)(DAT_0002b344 + 0x2b194) = param_3;
  *puVar10 = param_2;
  *(undefined4 *)(iVar11 + 0x2b160) = param_4;
  if (0 < (int)param_2) {
    iVar11 = 0;
    do {
      iVar7 = param_1 + iVar11;
      iVar9 = iVar4 + 0x2b150 + iVar11;
      *(undefined *)(iVar9 + 3) = *(undefined *)(iVar7 + 3);
      *(undefined *)(iVar9 + 2) = *(undefined *)(iVar7 + 2);
      *(undefined *)(iVar9 + 1) = *(undefined *)(iVar7 + 1);
      *(undefined *)(iVar4 + 0x2b150 + iVar11) = *(undefined *)(param_1 + iVar11);
      iVar11 = iVar11 + 4;
    } while (iVar11 != param_2 * 4);
  }
  iVar4 = DAT_0002b350;
  puVar2 = (undefined *)(DAT_0002b350 + 0x2b1b4);
  *(undefined4 *)(DAT_0002b350 + 0x2b1f8) = DAT_0002b340;
  *(undefined *)(iVar4 + 0x2b1b7) = *(undefined *)(iVar4 + 0x2b1bb);
  *(undefined *)(iVar4 + 0x2b1b6) = *(undefined *)(iVar4 + 0x2b1ba);
  *(undefined *)(iVar4 + 0x2b1b5) = *(undefined *)(iVar4 + 0x2b1b9);
  *puVar2 = *(undefined *)(iVar4 + 0x2b1b8);
  if (param_3 == 2) {
    puVar10 = *(uint **)(iVar6 + DAT_0002b368);
    lVar1 = (ulonglong)*puVar10 * (ulonglong)puVar10[2] +
            CONCAT44(puVar10[2] * puVar10[1] + *puVar10 * puVar10[3],puVar10[4]);
    uVar8 = puVar10[5] + (int)((ulonglong)lVar1 >> 0x20);
    *puVar10 = (uint)lVar1;
    puVar10[1] = uVar8;
    if (param_2 - 1 < 0xfffffffe) {
      uVar8 = (uint)((ulonglong)param_2 * (ulonglong)uVar8 >> 0x20);
    }
    *(float *)(DAT_0002b36c + 0x2b33c) = (float)(ulonglong)uVar8;
  }
  iVar4 = DAT_0002b354;
  *(undefined *)(DAT_0002b354 + 0x2b272) = 0;
  *(undefined4 *)(iVar4 + 0x2b276) = 0;
  *(undefined4 *)(iVar4 + 0x2b29a) = 0;
  *(undefined4 *)(iVar4 + 0x2b282) = 0;
  if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
    FUN_00017d64(DAT_0002b358 + 0x2b2aa,0);
  }
  else {
    FUN_0002fa48(local_2c,param_6);
    FUN_00017d64(iVar4 + 0x2b28a,local_2c[0]);
    FUN_00017d90(local_2c);
  }
  iVar4 = DAT_0002b364;
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    uVar3 = FUN_0008f414(param_5);
    *(undefined4 *)(iVar4 + 0x2b31a) = uVar3;
    uVar3 = FUN_0007e454();
    iVar11 = FUN_0007d7f8(uVar3,*(undefined4 *)(iVar4 + 0x2b31a));
    if (iVar11 != 0) {
      if (param_7 == '\0') {
        uVar5 = 1;
      }
      else {
        uVar5 = 2;
      }
      *(undefined *)(iVar4 + 0x2b316) = uVar5;
    }
  }
  iVar4 = DAT_0002b360;
  if ((param_8 != (char *)0x0) && (*param_8 != '\0')) {
    uVar3 = FUN_0008f414(param_8);
    *(undefined4 *)(iVar4 + 0x2b31a) = uVar3;
    uVar3 = FUN_0007e454();
    iVar11 = FUN_0007d7f8(uVar3,*(undefined4 *)(iVar4 + 0x2b31a));
    if (iVar11 == 0) {
      *(undefined4 *)(iVar4 + 0x2b31a) = 0;
    }
  }
  iVar4 = DAT_0002b370;
  if ((param_9 != (char *)0x0) && (*param_9 != '\0')) {
    uVar3 = FUN_0008f414(param_9);
    *(undefined4 *)(iVar4 + 0x2b3c6) = uVar3;
    uVar3 = FUN_0007e454();
    iVar11 = FUN_0007d7f8(uVar3,*(undefined4 *)(iVar4 + 0x2b3c6));
    if (iVar11 == 0) {
      *(undefined4 *)(iVar4 + 0x2b3c6) = 0;
    }
  }
  if (*(int *)(*(int *)(iVar6 + DAT_0002b35c) + 0x164) != 0) {
    local_34 = 0;
    local_30 = 0;
    uVar3 = FUN_0001c940();
    iVar4 = FUN_0001bd8c(uVar3,3,&local_34);
    while (iVar4 != 0) {
      FUN_0002a14c();
      uVar3 = FUN_0001c940();
      iVar4 = FUN_0001bdb8(uVar3,3,&local_34);
    }
  }
  return;
}



