/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084f38 FUN_00084f38 */

int FUN_00084f38(byte *param_1,undefined4 param_2)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  undefined auStack_48 [4];
  void *local_44;
  void *local_40;
  void *local_3c;
  undefined auStack_38 [4];
  void *local_34;
  int local_30;
  int local_2c;
  
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    iVar10 = 0;
  }
  else {
    sVar6 = 0;
    local_34 = (void *)0x0;
    local_30 = 0;
    local_2c = 0;
    sVar1 = strlen((char *)param_1);
    FUN_00017cb8(auStack_38,sVar1);
    if (sVar1 != 0) {
      iVar10 = (local_30 + -1) - (int)local_34;
      if (iVar10 != 0) {
        do {
          iVar10 = iVar10 + -1;
          *(byte *)((int)local_34 + sVar6) = param_1[sVar6];
          if (iVar10 == 0) break;
          sVar6 = sVar6 + 1;
        } while (sVar6 != sVar1);
      }
      local_2c = sVar1 + (int)local_34;
    }
    uVar5 = (uint)*param_1;
    pvVar9 = local_34;
    if (uVar5 != 0) {
      iVar10 = 0;
      iVar7 = 0;
      do {
        uVar2 = uVar5 - 0x2c;
        if (uVar2 != 0) {
          uVar2 = 1;
        }
        if (uVar5 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 & 1;
        }
        iVar8 = iVar7;
        if (uVar2 != 0) {
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            uVar3 = (uint)param_1[uVar5 + iVar7];
            uVar2 = uVar3;
            if (uVar3 != 0) {
              uVar2 = 1;
            }
            if (uVar3 == 0x2c) {
              local_44 = (void *)0x0;
            }
            else {
              local_44 = (void *)(uVar2 & 1);
            }
          } while (local_44 != (void *)0x0);
          iVar8 = uVar5 + iVar7;
          uVar2 = (local_2c - (int)pvVar9) - iVar7;
          if (uVar5 <= uVar2) {
            uVar2 = uVar5;
          }
          local_40 = local_44;
          local_3c = local_44;
          FUN_00017cb8(auStack_48,uVar2);
          if (uVar2 != 0) {
            iVar4 = (int)local_40 + (-1 - (int)local_44);
            if (iVar4 != 0) {
              uVar3 = 0;
              do {
                iVar4 = iVar4 + -1;
                *(undefined *)((int)local_44 + uVar3) = *(undefined *)((int)pvVar9 + uVar3 + iVar7);
                if (iVar4 == 0) break;
                uVar3 = uVar3 + 1;
              } while (uVar3 != uVar2);
            }
            local_3c = (void *)((int)local_44 + uVar2);
          }
          FUN_00084ec8(param_2,auStack_48);
          iVar10 = iVar10 + 1;
          if (local_44 != (void *)0x0) {
            operator_delete(local_44);
            local_40 = (void *)0x0;
            local_3c = (void *)0x0;
            local_44 = (void *)0x0;
          }
          uVar5 = (uint)param_1[uVar5 + iVar7];
          pvVar9 = local_34;
        }
        if (uVar5 == 0) goto LAB_0008504e;
        do {
          iVar8 = iVar8 + 1;
          uVar5 = (uint)param_1[iVar8];
          iVar7 = iVar8;
        } while (uVar5 == 0x20);
      } while( true );
    }
    iVar10 = 0;
LAB_0008504e:
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  return iVar10;
}



