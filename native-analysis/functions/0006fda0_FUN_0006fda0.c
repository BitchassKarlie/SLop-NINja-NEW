/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fda0 FUN_0006fda0 */

void FUN_0006fda0(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *__nptr;
  
  iVar9 = 10000;
  if (param_1 != (byte *)0x0) {
    iVar9 = atoi((char *)param_1);
    bVar1 = *param_1;
    bVar5 = bVar1;
    if (bVar1 != 0) {
      bVar5 = 1;
    }
    if (bVar1 == 0x2e) {
      bVar5 = 0;
    }
    else {
      bVar5 = bVar5 & 1;
    }
    while (bVar5 != 0) {
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      bVar5 = bVar1;
      if (bVar1 != 0) {
        bVar5 = 1;
      }
      if (bVar1 == 0x2e) {
        bVar5 = 0;
      }
      else {
        bVar5 = bVar5 & 1;
      }
    }
    if (bVar1 == 0) {
      iVar9 = iVar9 * 10000;
    }
    else {
      __nptr = param_1 + 1;
      iVar3 = atoi((char *)__nptr);
      uVar8 = (uint)param_1[1];
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
      pbVar2 = param_1;
      if (uVar6 != 0) {
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
        if ((int)(pbVar7 + 1) - (int)param_1 == 1) {
          iVar3 = iVar3 * 10;
        }
      }
      if (uVar8 == 0) {
        iVar9 = iVar3 * 100 + iVar9 * 10000;
      }
      else {
        iVar4 = atoi((char *)(__nptr + 1));
        if (__nptr[2] == 0) {
          iVar9 = iVar9 * 10000 + iVar3 * 100 + iVar4 * 10;
        }
        else {
          iVar9 = iVar9 * 10000 + iVar3 * 100 + iVar4;
        }
      }
    }
  }
  *(int *)(param_2 + 0x1ac) = iVar9;
  return;
}



