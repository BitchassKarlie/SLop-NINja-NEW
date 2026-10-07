/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009046c FUN_0009046c */

undefined4
FUN_0009046c(undefined4 param_1,int param_2,float param_3,float param_4,float param_5,float param_6)

{
  char cVar1;
  char cVar2;
  short *psVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  float fVar15;
  float fVar16;
  int local_8c [4];
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined auStack_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  
  FUN_0009eabc(auStack_54);
  local_44 = *(undefined4 *)(param_2 + 0x10);
  iVar10 = DAT_00090698 + 0x904a0;
  local_40 = *(undefined4 *)(param_2 + 0x14);
  iVar8 = *(int *)(param_2 + 0x18);
  if (0.0 < param_4) {
    pbVar4 = (byte *)(DAT_000906a0 + 0x904c8);
    iVar11 = DAT_000906a4 + 0x904d2;
    pbVar5 = (byte *)(DAT_0009069c + 0x904d4);
    iVar6 = DAT_000906a8 + 0x904da;
    fVar16 = param_3;
    local_3c = iVar8;
    while (iVar8 != 0) {
      FUN_0009eabc(local_70,param_2);
      local_60 = *(undefined4 *)(param_2 + 0x10);
      local_5c = *(undefined4 *)(param_2 + 0x14);
      local_58 = *(undefined4 *)(param_2 + 0x18);
      FUN_0009eabc(local_8c,auStack_54);
      local_7c = local_44;
      local_78 = local_40;
      local_74 = local_3c;
      cVar1 = FUN_000915d0(local_70,local_8c);
      local_8c[0] = *(int *)(iVar10 + DAT_000906ac) + 8;
      if (cVar1 == '\x01') break;
      iVar8 = *(int *)(param_2 + 0x18);
      local_70[0] = local_8c[0];
      if (iVar8 == 0x3c) {
        pbVar7 = *(byte **)(param_2 + 0x10);
        if (pbVar7 == pbVar4) {
LAB_000905fe:
          do {
            FUN_0009eaf4(param_2,1);
            if (*(int *)(param_2 + 0x18) == 0x3e) break;
            FUN_0009eaf4(param_2,1);
          } while (*(int *)(param_2 + 0x18) != 0x3e);
        }
        else {
          pbVar12 = pbVar7 + 6;
          pbVar14 = pbVar4;
          pbVar13 = pbVar7;
          do {
            uVar9 = (uint)*pbVar13;
            if (uVar9 == 0) {
              cVar2 = *(char *)(DAT_000906b8 + 0x90626 + (uint)*pbVar14);
              cVar1 = '\0';
              goto LAB_000905c0;
            }
            if (*pbVar14 == 0) {
              cVar1 = *(char *)(DAT_000906b0 + 0x905be + uVar9);
              cVar2 = '\0';
              goto LAB_000905c0;
            }
            if (*(char *)(iVar11 + uVar9) != *(char *)(iVar11 + (uint)*pbVar14)) goto LAB_000905c4;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (pbVar13 != pbVar12);
          cVar1 = *(char *)(iVar11 + (uint)*pbVar12);
          cVar2 = *(char *)(iVar11 + (uint)*pbVar14);
LAB_000905c0:
          if (cVar2 == cVar1) goto LAB_000905fe;
LAB_000905c4:
          pbVar14 = pbVar5;
          if (pbVar7 != pbVar5) {
            do {
              uVar9 = (uint)*pbVar7;
              if (uVar9 == 0) {
                cVar2 = *(char *)(DAT_000906bc + 0x9065e + (uint)*pbVar14);
                cVar1 = '\0';
                goto LAB_000905e0;
              }
              if (*pbVar14 == 0) {
                cVar1 = *(char *)(DAT_000906b4 + 0x905e0 + uVar9);
                cVar2 = '\0';
                goto LAB_000905e0;
              }
              if (*(char *)(iVar6 + uVar9) != *(char *)(iVar6 + (uint)*pbVar14)) goto LAB_00090552;
              pbVar7 = pbVar7 + 1;
              pbVar14 = pbVar14 + 1;
            } while (pbVar7 != pbVar12);
            cVar1 = *(char *)(iVar6 + (uint)*pbVar7);
            cVar2 = *(char *)(iVar6 + (uint)*pbVar14);
LAB_000905e0:
            if (cVar1 != cVar2) goto LAB_00090552;
          }
          do {
            FUN_0009eaf4(param_2,1);
          } while (*(int *)(param_2 + 0x18) != 0x3e);
        }
        FUN_0009eaf4(param_2,1);
        iVar8 = *(int *)(param_2 + 0x18);
      }
LAB_00090552:
      psVar3 = (short *)FUN_0008f638(param_1,iVar8,0);
      FUN_0009eaf4(param_2,1);
      if (psVar3 != (short *)0x0) {
        fVar15 = DAT_00090690;
        if (*psVar3 == 0x20) {
          fVar15 = DAT_00090694;
        }
        fVar16 = fVar16 + (*(float *)(psVar3 + 0xe) + DAT_0009068c + fVar15 * param_6) * param_5;
      }
      iVar8 = *(int *)(param_2 + 0x18);
    }
    if ((fVar16 != param_4 && fVar16 < param_4 == (NAN(fVar16) || NAN(param_4))) &&
       (fVar16 - param_3 <= param_4)) {
      return local_44;
    }
  }
  return 0;
}



