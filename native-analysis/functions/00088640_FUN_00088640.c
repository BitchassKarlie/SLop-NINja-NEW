/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088640 FUN_00088640 */

void FUN_00088640(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint **ppuVar9;
  undefined *local_5c;
  uint local_50;
  undefined auStack_48 [4];
  void *local_44;
  int *local_40;
  undefined4 local_3c;
  float local_38;
  int local_34 [4];
  
  local_44 = (void *)0x0;
  local_40 = (int *)0x0;
  local_3c = 0;
  local_34[2] = *(int *)(param_2 + 0x6c);
  local_38 = DAT_000887f0;
  local_34[0] = 0;
  local_34[1] = 0;
  puVar5 = *(uint **)(DAT_000887f4 + 0x88668);
  lVar1 = (ulonglong)*puVar5 * (ulonglong)puVar5[2] +
          CONCAT44(puVar5[2] * puVar5[1] + *puVar5 * puVar5[3],puVar5[4]);
  uVar3 = puVar5[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar5 = (uint)lVar1;
  puVar5[1] = uVar3;
  uVar3 = (uint)((ulonglong)uVar3 * 100 >> 0x20);
  if (param_3 == 0) {
    if (uVar3 < 0x14) {
      uVar3 = 5;
    }
    else if (uVar3 < 0x28) {
      uVar3 = 0x5f;
    }
    else if (uVar3 < 0x32) {
      uVar3 = 0x23;
    }
    else if (uVar3 < 0x3c) {
      uVar3 = 0x41;
    }
    else {
      uVar3 = 0x32;
    }
  }
  else if (uVar3 < 0x33) {
    uVar3 = 0xfffffffc;
  }
  else {
    uVar3 = 0xfffffffd;
  }
  iVar6 = *(int *)(param_2 + 0x78);
  if (0 < iVar6) {
    iVar7 = 0;
    ppuVar9 = (uint **)(DAT_000887f8 + 0x886cc);
    do {
      if (uVar3 == 0xfffffffc) {
        iVar8 = 2;
        uVar3 = 0xfffffffd;
        iVar6 = local_34[2];
      }
      else {
        iVar6 = local_34[1];
        if (uVar3 == 0xfffffffd) {
          iVar8 = 1;
          uVar3 = 0xfffffffc;
        }
        else if ((uVar3 == 0x32) &&
                (uVar4 = local_34[1] - local_34[2] >> 0x1f,
                1 < (int)((local_34[1] - local_34[2] ^ uVar4) - uVar4))) {
          if (local_34[1] < local_34[2]) {
            iVar8 = 1;
          }
          else {
LAB_0008877c:
            iVar8 = 2;
            iVar6 = local_34[2];
          }
        }
        else {
          puVar5 = *ppuVar9;
          lVar1 = (ulonglong)*puVar5 * (ulonglong)puVar5[2];
          local_50 = (uint)lVar1;
          uVar4 = puVar5[5] +
                  puVar5[2] * puVar5[1] + *puVar5 * puVar5[3] + (int)((ulonglong)lVar1 >> 0x20) +
                  (uint)CARRY4(puVar5[4],local_50);
          *puVar5 = puVar5[4] + local_50;
          puVar5[1] = uVar4;
          if ((uint)((ulonglong)uVar4 * 100 >> 0x20) <= uVar3) goto LAB_0008877c;
          iVar8 = 1;
          iVar6 = local_34[1];
        }
      }
      iVar7 = iVar7 + 1;
      local_34[iVar8] = iVar6 + 1;
      FUN_00074640(auStack_48);
      *local_40 = iVar8;
      local_40 = local_40 + 1;
      iVar6 = *(int *)(param_2 + 0x78);
    } while (iVar7 < iVar6);
  }
  local_5c = auStack_48;
  if (-2 < (int)uVar3) {
    local_38 = (float)(longlong)local_34[1] / (float)(longlong)iVar6;
  }
  iVar6 = *(int *)(param_1 + 4);
  piVar2 = (int *)FUN_000885fc(param_1,local_5c);
  *piVar2 = iVar6;
  piVar2[1] = *(int *)(iVar6 + 4);
  *(int **)(iVar6 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  local_40 = (int *)local_44;
  if (local_44 != (void *)0x0) {
    operator_delete(local_44);
  }
  return;
}



