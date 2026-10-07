/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098ec8 FUN_00098ec8 */

void FUN_00098ec8(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *__nptr;
  
  strcpy((char *)(param_1 + 4),(char *)param_2);
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  iVar3 = atoi((char *)param_2);
  *(int *)(param_1 + 0xa8) = iVar3;
  bVar1 = *param_2;
  bVar4 = bVar1;
  if (bVar1 != 0) {
    bVar4 = 1;
  }
  if (bVar1 == 0x2e) {
    bVar4 = 0;
  }
  else {
    bVar4 = bVar4 & 1;
  }
  while (bVar4 != 0) {
    param_2 = param_2 + 1;
    bVar1 = *param_2;
    bVar4 = bVar1;
    if (bVar1 != 0) {
      bVar4 = 1;
    }
    if (bVar1 == 0x2e) {
      bVar4 = 0;
    }
    else {
      bVar4 = bVar4 & 1;
    }
  }
  if (bVar1 != 0) {
    __nptr = param_2 + 1;
    iVar3 = atoi((char *)__nptr);
    *(int *)(param_1 + 0xac) = iVar3;
    uVar8 = (uint)param_2[1];
    uVar6 = uVar8 - 0x2e;
    if (uVar6 != 0) {
      uVar6 = 1;
    }
    if (uVar8 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 & 1;
    }
    pbVar2 = param_2;
    if (uVar6 == 0) {
LAB_00098fb2:
      if (uVar8 != 0) {
LAB_00098fca:
        iVar9 = atoi((char *)(__nptr + 1));
        *(int *)(param_1 + 0xb0) = iVar9;
        if (__nptr[2] == 0) {
          iVar9 = iVar9 * 10;
          *(int *)(param_1 + 0xb0) = iVar9;
        }
        iVar3 = *(int *)(param_1 + 0xa8);
        goto LAB_00098f24;
      }
    }
    else {
      do {
        pbVar7 = pbVar2;
        uVar8 = (uint)pbVar7[2];
        uVar6 = uVar8;
        if (uVar8 != 0) {
          uVar6 = 1;
        }
        if (uVar8 == 0x2e) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 & 1;
        }
        pbVar2 = pbVar7 + 1;
      } while (uVar6 != 0);
      __nptr = pbVar7 + 2;
      if ((int)(pbVar7 + 1) - (int)param_2 != 1) goto LAB_00098fb2;
      *(int *)(param_1 + 0xac) = iVar3 * 10;
      if (pbVar7[2] != 0) goto LAB_00098fca;
    }
    iVar3 = *(int *)(param_1 + 0xa8);
  }
  iVar9 = *(int *)(param_1 + 0xb0);
LAB_00098f24:
  sprintf((char *)(param_1 + 0x44),(char *)(DAT_00098fec + 0x98f32),iVar3,
          *(undefined4 *)(param_1 + 0xac),iVar9);
  *(int *)(param_1 + 0xa4) =
       *(int *)(param_1 + 0xa8) * 10000 + *(int *)(param_1 + 0xac) * 100 + *(int *)(param_1 + 0xb0);
  *(undefined *)(param_1 + 0xf4) = 0;
  uVar5 = *(undefined4 *)(DAT_00098ff0 + 0x98f68);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(DAT_00098ff0 + 0x98f64);
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  return;
}



