/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00075c1c FUN_00075c1c */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00075c1c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *__src;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined auStack_68 [4];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined auStack_58 [4];
  int local_54;
  uint local_50;
  undefined4 local_4c;
  int *local_48;
  uint *local_44;
  undefined auStack_40 [4];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [2];
  
  FUN_0009a8bc(param_2,DAT_00075e78 + 0x75c2e,param_1);
  FUN_0009a8bc(param_2,DAT_00075e7c + 0x75c3c,param_1 + 1);
  local_2c[0] = -1;
  FUN_0009a8bc(param_2,DAT_00075e80 + 0x75c52,local_2c);
  iVar2 = DAT_00075e84;
  if (-1 < local_2c[0]) {
    param_1[1] = local_2c[0];
  }
  if (-1 < local_2c[0]) {
    *param_1 = local_2c[0];
  }
  FUN_0009a8bc(param_2,iVar2 + 0x75c68,param_1 + 0xb);
  FUN_0009a8bc(param_2,DAT_00075e88 + 0x75c7a,param_1 + 10);
  uVar1 = FUN_0009a4a0(param_2,DAT_00075e8c + 0x75c84);
  FUN_00084948(&local_30,uVar1);
  FUN_00017d64(param_1 + 0x31,local_30);
  FUN_00017d90(&local_30);
  iVar10 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  uVar1 = FUN_0009a4a0(param_2,DAT_00075e90 + 0x75ca8);
  iVar2 = FUN_00084f38(uVar1,auStack_68);
  if (0 < iVar2) {
    do {
      iVar11 = iVar10 * 0x10;
      iVar10 = iVar10 + 1;
      uVar1 = FUN_0008f414(*(undefined4 *)(local_64 + iVar11 + 4));
      FUN_0007479c(param_1 + 0x2c);
      *(undefined4 *)param_1[0x2e] = uVar1;
      param_1[0x2e] = param_1[0x2e] + 4;
    } while (iVar10 != iVar2);
  }
  iVar2 = *(int *)(param_2 + 0x4c);
  if ((iVar2 != param_2 + 0x2c) && (iVar2 != 0)) {
    piVar6 = param_1 + 6;
    piVar8 = param_1 + 2;
    iVar10 = DAT_00075e94 + 0x75d0e;
    iVar11 = DAT_00075e98 + 0x75d12;
    do {
      iVar12 = *(int *)(iVar2 + 0x14);
      iVar3 = FUN_000844d0(iVar12 + 8,iVar10);
      if (iVar3 == 0) {
        iVar3 = FUN_000844d0(iVar12 + 8,iVar11);
        if (iVar3 != 0) {
          uVar4 = FUN_0008f414(iVar12 + 0xc);
          puVar9 = (uint *)param_1[7];
          puVar5 = puVar9;
          if (puVar9 != (uint *)0x0) {
            puVar5 = (uint *)0x0;
            do {
              if (*puVar9 < uVar4) {
                puVar7 = (uint *)puVar9[4];
              }
              else {
                puVar7 = (uint *)puVar9[3];
                puVar5 = puVar9;
              }
              puVar9 = puVar7;
            } while (puVar7 != (uint *)0x0);
            if ((puVar5 != (uint *)0x0) && (*puVar5 <= uVar4)) goto LAB_00075dfa;
          }
          local_4c = 0;
          local_50 = uVar4;
          local_48 = piVar6;
          local_44 = puVar5;
          FUN_00075b48(auStack_58,piVar6,piVar6,puVar5,&local_50);
          puVar5 = (uint *)(local_54 + 4);
          goto LAB_00075d92;
        }
      }
      else {
        uVar4 = FUN_0008f414(iVar12 + 0xc);
        puVar9 = (uint *)param_1[3];
        puVar5 = puVar9;
        if (puVar9 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            if (*puVar9 < uVar4) {
              puVar7 = (uint *)puVar9[4];
            }
            else {
              puVar7 = (uint *)puVar9[3];
              puVar5 = puVar9;
            }
            puVar9 = puVar7;
          } while (puVar7 != (uint *)0x0);
          if ((puVar5 != (uint *)0x0) && (*puVar5 <= uVar4)) {
LAB_00075dfa:
            puVar5 = puVar5 + 1;
            goto LAB_00075d92;
          }
        }
        local_34 = 0;
        local_48 = piVar8;
        local_44 = puVar5;
        local_38 = uVar4;
        FUN_00075b48(auStack_40,piVar8,piVar8,puVar5,&local_38);
        puVar5 = (uint *)(local_3c + 4);
LAB_00075d92:
        uVar4 = FUN_0009a6f8(iVar2);
        *puVar5 = uVar4;
      }
      iVar2 = FUN_0009a240(iVar2);
    } while (iVar2 != 0);
  }
  iVar2 = FUN_0009a4a0(param_2,DAT_00075e9c + 0x75db2);
  if (iVar2 == 0) {
    param_1[0x30] = 0;
  }
  else {
    iVar2 = FUN_0008f414();
    iVar10 = DAT_00075ea0 + 0x75dc2;
    param_1[0x30] = iVar2;
    iVar2 = FUN_0009a4a0(param_2,iVar10);
    if (iVar2 == 0) {
      param_1[0xb] = -1;
    }
  }
  iVar2 = FUN_0009a1d4(param_2);
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0xc) = 0;
  }
  else {
    uVar1 = FUN_0009a1d4(param_2);
    __src = (char *)FUN_000832f8(uVar1,0);
    strcpy((char *)(param_1 + 0xc),__src);
  }
  FUN_000223ec(auStack_68);
  return;
}



