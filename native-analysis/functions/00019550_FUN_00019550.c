/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019550 FUN_00019550 */

void FUN_00019550(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *__dest;
  char **ppcVar13;
  void *pvVar14;
  size_t sVar15;
  byte *__dest_00;
  byte *pbVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  byte *pbVar26;
  int iVar27;
  uint local_190;
  undefined4 local_18c;
  undefined auStack_188 [4];
  uint *local_184;
  int local_180;
  uint *local_17c;
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  int local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  char acStack_150 [256];
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar2 = DAT_00019af8;
  iVar24 = DAT_00019af4 + 0x19562;
  local_2c = **(int **)(iVar24 + DAT_00019af8);
  FUN_00017c4c();
  FUN_0002fa48(&local_154,DAT_00019afc + 0x1957e);
  FUN_00017d64(*(undefined4 *)(iVar24 + DAT_00019b00),local_154);
  FUN_00017d90(&local_154);
  FUN_0002fa48(&local_158,DAT_00019b04 + 0x1959e);
  FUN_00017d64(*(undefined4 *)(iVar24 + DAT_00019b08),local_158);
  FUN_00017d90(&local_158);
  uVar7 = FUN_000a3a68();
  local_50[0] = 0;
  local_178 = DAT_00019b0c + 0x195ce;
  local_174 = *(undefined4 *)(iVar24 + DAT_00019b10);
  local_30 = 1;
  (**(code **)(DAT_00019b0c + 0x195d6))(&local_178,local_50);
  FUN_00094a9c(uVar7,local_50);
  FUN_00017bcc(local_50);
  local_178 = DAT_00019b14 + 0x19600;
  piVar8 = (int *)operator_new(0x48);
  FUN_0009c1d4(piVar8,DAT_00019b18 + 0x19606);
  if (piVar8 != (int *)0x0) {
    iVar9 = FUN_0009b0e4(piVar8,0);
    if (iVar9 != 0) {
      uVar7 = FUN_0009a5d8(piVar8,DAT_00019b1c + 0x19642);
      iVar10 = FUN_0009a5d8(uVar7,DAT_00019b20 + 0x1964c);
      iVar6 = DAT_00019b38;
      iVar5 = DAT_00019b34;
      iVar4 = DAT_00019b2c;
      iVar3 = DAT_00019b28;
      iVar9 = DAT_00019b24;
      if (iVar10 != 0) {
        iVar18 = DAT_00019b30 + 0x1967e;
        iVar22 = DAT_00019b34 + 0x19752;
        iVar27 = DAT_00019b38 + 0x1975e;
        do {
          pcVar11 = (char *)FUN_0009a4a0(iVar10,iVar9 + 0x196b8);
          local_15c = FUN_0008f414();
          iVar12 = FUN_0006fca8(*(undefined4 *)(*(int *)(iVar24 + iVar3) + 0x50),local_15c);
          if (iVar12 == 0) {
            __dest = (char *)operator_new(0x1a0);
            puVar1 = (undefined4 *)(__dest + 0x84);
            *puVar1 = 0;
            FUN_00017d64(puVar1,0);
            *(undefined4 *)(__dest + 400) = 0xb;
            *(undefined4 *)(__dest + 0x19c) = 0;
            *(undefined4 *)(__dest + 0x188) = 0;
            *(undefined4 *)(__dest + 0x18c) = 0;
            __dest[0x198] = '\0';
            strcpy(__dest + 0x40,pcVar11);
            *(uint *)(__dest + 0x80) = local_15c;
            uVar7 = FUN_0009a4a0(iVar10,iVar18);
            pcVar11 = (char *)FUN_000832f8(uVar7,0);
            strcpy(__dest,pcVar11);
            puVar19 = *(uint **)(param_1 + 4);
            if (puVar19 == (uint *)0x0) {
LAB_000198d4:
              local_190 = local_15c;
              local_18c = 0;
              local_180 = param_1;
              local_17c = puVar19;
              FUN_00019424(auStack_188,param_1,param_1,puVar19,&local_190);
              puVar19 = local_184;
            }
            else {
              puVar20 = puVar19;
              puVar19 = (uint *)0x0;
              do {
                if (*puVar20 < local_15c) {
                  puVar17 = (uint *)puVar20[4];
                }
                else {
                  puVar17 = (uint *)puVar20[3];
                  puVar19 = puVar20;
                }
                puVar20 = puVar17;
              } while (puVar17 != (uint *)0x0);
              if ((puVar19 == (uint *)0x0) || (local_15c < *puVar19)) goto LAB_000198d4;
            }
            puVar19[1] = (uint)__dest;
            iVar25 = DAT_00019b3c + 0x1976c;
            iVar12 = FUN_0009a5d8(iVar10,iVar25);
            if (iVar12 == 0) {
              __dest[0x88] = '\0';
            }
            else {
              FUN_0009a5d8(iVar10,iVar25);
              pcVar11 = (char *)FUN_0009a1d4();
              strcpy(__dest + 0x88,pcVar11);
            }
            FUN_0009a8bc(iVar10,DAT_00019b40 + 0x1979a,__dest + 0x18c);
            FUN_0009a8bc(iVar10,DAT_00019b44 + 0x197ac,__dest + 0x188);
            local_160 = 0;
            FUN_0009a8bc(iVar10,DAT_00019b48 + 0x197ba,&local_160);
            iVar12 = DAT_00019b4c;
            __dest[0x198] = local_160 == 1;
            uVar7 = FUN_0009a4a0(iVar10,iVar12 + 0x197d4);
            sprintf(acStack_150,(char *)(DAT_00019b50 + 0x197e2),uVar7);
            FUN_0002fa48(&local_164,acStack_150);
            FUN_00017d64(puVar1,local_164);
            FUN_00017d90(&local_164);
            pcVar11 = (char *)FUN_0009a4a0(iVar10,DAT_00019b54 + 0x19808);
            *(undefined4 *)(__dest + 0x194) = 0;
            if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
              uVar7 = FUN_0006c798(0);
              *(undefined4 *)(__dest + 0x194) = uVar7;
            }
            else {
              sVar15 = strlen(pcVar11);
              __dest_00 = (byte *)operator_new__(sVar15 + 1);
              strcpy((char *)__dest_00,pcVar11);
              uVar23 = (uint)*__dest_00;
              if (uVar23 != 0) {
                pbVar16 = (byte *)0x0;
                pbVar26 = __dest_00;
                do {
                  while( true ) {
                    uVar21 = uVar23 - 0x20;
                    if (uVar21 != 0) {
                      uVar21 = 1;
                    }
                    if (pbVar16 == (byte *)0x0) {
                      uVar21 = uVar21 & 1;
                    }
                    else {
                      uVar21 = 0;
                    }
                    if (uVar21 != 0) {
                      pbVar16 = pbVar26;
                    }
                    if (pbVar16 == (byte *)0x0 || uVar23 != 0x2c) break;
                    *pbVar26 = 0;
                    FUN_0008f414();
                    FUN_0006cb38();
                    uVar21 = *(uint *)(__dest + 0x194);
                    uVar23 = FUN_0006c798();
                    *(uint *)(__dest + 0x194) = uVar23 | uVar21;
                    *pbVar26 = 0x2c;
                    pbVar16 = (byte *)0x0;
                    pbVar26 = pbVar26 + 1;
                    uVar23 = (uint)*pbVar26;
                    if (uVar23 == 0) goto LAB_00019a32;
                  }
                  pbVar26 = pbVar26 + 1;
                  uVar23 = (uint)*pbVar26;
                } while (uVar23 != 0);
LAB_00019a32:
                if (pbVar16 != (byte *)0x0) {
                  FUN_0008f414();
                  FUN_0006cb38();
                  uVar21 = *(uint *)(__dest + 0x194);
                  uVar23 = FUN_0006c798();
                  *(uint *)(__dest + 0x194) = uVar23 | uVar21;
                }
              }
              operator_delete__(__dest_00);
            }
            if ((-1 < *(int *)(iVar5 + 0x19752) << 0x1f) &&
               (iVar12 = __cxa_guard_acquire(iVar22), iVar12 != 0)) {
              uVar7 = FUN_0008f414(DAT_00019b60 + 0x19916);
              *(undefined4 *)(iVar5 + 0x19756) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b64 + 0x19924);
              *(undefined4 *)(iVar5 + 0x1975a) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b68 + 0x19932);
              *(undefined4 *)(iVar5 + 0x1975e) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b6c + 0x19940);
              *(undefined4 *)(iVar5 + 0x19762) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b70 + 0x1994e);
              *(undefined4 *)(iVar5 + 0x19766) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b74 + 0x1995c);
              *(undefined4 *)(iVar5 + 0x1976a) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b78 + 0x1996a);
              *(undefined4 *)(iVar5 + 0x1976e) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b7c + 0x19978);
              *(undefined4 *)(iVar5 + 0x19772) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b80 + 0x19986);
              *(undefined4 *)(iVar5 + 0x19776) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b84 + 0x19994);
              *(undefined4 *)(iVar5 + 0x1977a) = uVar7;
              uVar7 = FUN_0008f414(DAT_00019b88 + 0x199a2);
              *(undefined4 *)(iVar5 + 0x1977e) = uVar7;
              __cxa_guard_release(iVar22);
            }
            iVar12 = DAT_00019b58;
            *(undefined4 *)(__dest + 400) = 0xffffffff;
            iVar25 = 0;
            FUN_0009a4a0(iVar10,iVar12 + 0x1983e);
            iVar12 = FUN_0008f414();
            do {
              if (iVar12 == *(int *)(iVar27 + iVar25 * 4)) {
                *(int *)(__dest + 400) = iVar25;
                if (iVar25 == 9) {
                  ppcVar13 = (char **)FUN_000194f8(param_1 + 0xa0,&local_15c);
                  iVar12 = DAT_00019b8c + 0x19a60;
                  *ppcVar13 = __dest;
                  uVar7 = FUN_0009a4a0(iVar10,iVar12);
                  pvVar14 = operator_new(0x1c0);
                  FUN_000182d8(pvVar14,uVar7);
                  *(void **)(__dest + 0x19c) = pvVar14;
                }
                else if (iVar25 == 10) {
                  iVar12 = FUN_0009a4a0(iVar10,DAT_00019b94 + 0x19ace);
                  if (iVar12 == 0) {
                    FUN_0009a4a0(iVar10,DAT_00019b98 + 0x19aec);
                  }
                  local_170 = FUN_0008f414();
                  ppcVar13 = (char **)FUN_000194f8(param_1 + 0xb0);
                  *ppcVar13 = __dest;
                }
                else {
                  uVar23 = iVar25 - 8;
                  if (uVar23 != 0) {
                    uVar23 = 1;
                  }
                  if (iVar25 - 4U < 2) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = uVar23 & 1;
                  }
                  if (uVar23 == 0) {
                    FUN_0009a4a0(iVar10,DAT_00019b90 + 0x19a86);
                    local_170 = FUN_0008f414();
                    ppcVar13 = (char **)FUN_000194f8(param_1 + (iVar25 + 1) * 0x10);
                    *ppcVar13 = __dest;
                  }
                  else if (iVar25 - 1U < 2) {
                    local_168 = *(undefined4 *)(iVar6 + 0x1978a);
                    ppcVar13 = (char **)FUN_000194f8(param_1 + (iVar25 + 1) * 0x10);
                    *ppcVar13 = __dest;
                    *(int *)(iVar6 + 0x1978a) = *(int *)(iVar6 + 0x1978a) + 1;
                  }
                  else {
                    local_16c = *(undefined4 *)(__dest + 0x188);
                    ppcVar13 = (char **)FUN_000194f8(param_1 + (iVar25 + 1) * 0x10);
                    iVar12 = DAT_00019b5c + 0x198a4;
                    *ppcVar13 = __dest;
                    pcVar11 = (char *)FUN_0009a4a0(iVar10,iVar12);
                    if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
                      pvVar14 = operator_new(0x1c0);
                      FUN_000182d8(pvVar14,pcVar11);
                      *(void **)(__dest + 0x19c) = pvVar14;
                    }
                  }
                }
                break;
              }
              iVar25 = iVar25 + 1;
            } while (iVar25 != 0xb);
          }
          iVar10 = FUN_0009a4f0(iVar10,iVar4 + 0x196a6);
        } while (iVar10 != 0);
      }
    }
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if (local_2c != **(int **)(iVar24 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



