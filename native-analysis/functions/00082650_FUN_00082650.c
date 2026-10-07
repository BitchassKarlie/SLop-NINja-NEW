/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082650 FUN_00082650 */

void FUN_00082650(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *__s2;
  uint *puVar10;
  char *__s2_00;
  int iVar11;
  char *__s2_01;
  float fVar12;
  undefined auStack_104 [124];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  double local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  iVar1 = DAT_00082934;
  iVar11 = DAT_00082930 + 0x82660;
  local_2c = **(int **)(iVar11 + DAT_00082934);
  pcVar3 = (char *)FUN_0009a4a0(param_2,DAT_00082938 + 0x8266c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)(DAT_00082960 + 0x8291e);
  }
  strcpy((char *)(param_1 + 0x40),pcVar3);
  uVar4 = FUN_0008f414((char *)(param_1 + 0x40));
  iVar9 = DAT_0008293c + 0x82696;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  iVar9 = FUN_0009a884(param_2,iVar9,&local_60);
  if (iVar9 == 0) {
    fVar12 = (float)local_60;
    *(float *)(param_1 + 0x5c) = fVar12;
  }
  else {
    fVar12 = *(float *)(param_1 + 0x5c);
  }
  if (fVar12 != 0.0 && fVar12 < 0.0 == NAN(fVar12)) {
    *(float *)(param_1 + 0x58) = fVar12;
  }
  iVar5 = FUN_0009a0e8(param_2);
  iVar2 = DAT_00082954;
  iVar9 = DAT_00082944;
  if (iVar5 != 0) {
    __s2 = (char *)(DAT_00082940 + 0x826e0);
    __s2_00 = (char *)(DAT_00082948 + 0x826f0);
    __s2_01 = (char *)(DAT_0008294c + 0x826f4);
    pcVar3 = (char *)(DAT_00082950 + 0x826f6);
    do {
      while (pcVar7 = (char *)FUN_0009a4a0(iVar5,iVar2 + 0x827aa), pcVar7 == (char *)0x0) {
LAB_0008270a:
        pcVar7 = (char *)(*(int *)(iVar5 + 0x20) + 8);
        iVar8 = strcmp(pcVar7,__s2_00);
joined_r0x00082802:
        if (iVar8 == 0) {
          FUN_00081a84(auStack_104);
          FUN_0008204c(auStack_104,iVar5);
          FUN_00082614(param_1 + 0x10);
          FUN_00079bac(*(undefined4 *)(param_1 + 0x18),auStack_104);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x7c;
          FUN_00084cd8(auStack_104,0);
          FUN_00017d90(auStack_104);
        }
        else {
          uVar6 = strcmp(pcVar7,__s2_01);
          if (uVar6 == 0) {
            local_80 = *(uint *)(iVar9 + 0x8273a);
            local_7c = *(uint *)(iVar9 + 0x8273e);
            local_78 = *(uint *)(iVar9 + 0x82742);
            local_88 = uVar6;
            local_84 = uVar6;
            local_74 = local_80;
            local_70 = local_7c;
            local_6c = local_78;
            FUN_00081b78(&local_88,iVar5);
            FUN_00080f50(param_1);
            puVar10 = *(uint **)(param_1 + 8);
            *puVar10 = local_88;
            puVar10[1] = local_84;
            puVar10[2] = local_80;
            puVar10[3] = local_7c;
            puVar10[4] = local_78;
            puVar10[5] = local_74;
            puVar10[6] = local_70;
            puVar10[7] = local_6c;
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x20;
          }
          else {
            iVar8 = strcmp(pcVar7,__s2);
            if (iVar8 == 0) {
              local_78 = DAT_0008292c;
              local_6c = DAT_0008292c;
              local_74 = DAT_0008292c;
              local_68 = DAT_0008292c;
              local_70 = DAT_0008292c;
              local_64 = DAT_0008292c;
              local_88 = DAT_0008292c;
              local_84 = DAT_0008292c;
              local_80 = DAT_00082924;
              local_7c = DAT_0008292c;
              FUN_00081f84(&local_88,iVar5);
              FUN_00081008(param_1 + 0x20);
              puVar10 = *(uint **)(param_1 + 0x28);
              *puVar10 = local_88;
              puVar10[1] = local_84;
              puVar10[2] = local_80;
              puVar10[3] = local_7c;
              puVar10[4] = local_78;
              puVar10[5] = local_74;
              puVar10[6] = local_70;
              puVar10[7] = local_6c;
              puVar10[8] = local_68;
              puVar10[9] = local_64;
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x28;
            }
            else {
              uVar6 = strcmp(pcVar7,pcVar3);
              if (uVar6 == 0) {
                local_58 = local_58 & 0xffffff00;
                local_38 = DAT_00082924;
                local_34 = DAT_00082928;
                local_30 = uVar6;
                FUN_00081f20(&local_58,iVar5);
                FUN_00081a1c(param_1 + 0x30);
                puVar10 = *(uint **)(param_1 + 0x38);
                *puVar10 = local_58;
                puVar10[1] = uStack_54;
                puVar10[2] = uStack_50;
                puVar10[3] = uStack_4c;
                puVar10[4] = local_48;
                puVar10[5] = uStack_44;
                puVar10[6] = uStack_40;
                puVar10[7] = uStack_3c;
                puVar10[8] = local_38;
                puVar10[9] = local_34;
                puVar10[10] = local_30;
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x2c;
                FUN_000812b0(&local_58);
              }
            }
          }
        }
LAB_00082798:
        iVar5 = FUN_0009a110(iVar5);
        if (iVar5 == 0) goto LAB_000827d2;
      }
      iVar8 = strcmp(pcVar7,(char *)(DAT_0008295c + 0x827b8));
      if ((iVar8 != 0) || (iVar8 = FUN_0006e130(), iVar8 != 0)) {
        iVar8 = strcmp(pcVar7,(char *)(DAT_00082958 + 0x82704));
        if (iVar8 != 0) goto LAB_0008270a;
        iVar8 = FUN_0006e130();
        if (iVar8 == 0) {
          pcVar7 = (char *)(*(int *)(iVar5 + 0x20) + 8);
          iVar8 = strcmp(pcVar7,__s2_00);
          goto joined_r0x00082802;
        }
        goto LAB_00082798;
      }
      iVar5 = FUN_0009a110(iVar5);
    } while (iVar5 != 0);
  }
LAB_000827d2:
  if (local_2c != **(int **)(iVar11 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



