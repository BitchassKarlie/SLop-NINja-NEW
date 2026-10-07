/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007ce4c FUN_0007ce4c */

void FUN_0007ce4c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  float fVar17;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  double local_40;
  int local_38;
  undefined4 uStack_34;
  float local_2c [2];
  
  iVar4 = FUN_0009a5d8(param_2,DAT_0007cfd8 + 0x7ce56);
  iVar3 = DAT_0007cfec;
  iVar2 = DAT_0007cfe4;
  iVar1 = DAT_0007cfdc;
  if (iVar4 != 0) {
    iVar16 = DAT_0007cfe0 + 0x7ce7a;
    puVar15 = (undefined4 *)(DAT_0007cfe4 + 0x7ce7e);
    iVar10 = DAT_0007cfe8 + 0x7ce84;
    iVar11 = DAT_0007cff0 + 0x7ce8a;
    iVar12 = DAT_0007cff4 + 0x7ce90;
    do {
      local_2c[0] = DAT_0007cfd4;
      iVar5 = FUN_0009a884(iVar4,iVar16,&local_38);
      if (iVar5 == 0) {
        local_2c[0] = (float)(double)CONCAT44(uStack_34,local_38);
      }
      FUN_0009a4a0(iVar4,iVar3 + 0x7ceb8);
      uVar6 = FUN_0008f414();
      if (*(uint **)(param_1 + 4) != (uint *)0x0) {
        puVar7 = (uint *)0x0;
        puVar13 = *(uint **)(param_1 + 4);
        do {
          if (*puVar13 < uVar6) {
            puVar9 = (uint *)puVar13[4];
          }
          else {
            puVar9 = (uint *)puVar13[3];
            puVar7 = puVar13;
          }
          puVar13 = puVar9;
        } while (puVar9 != (uint *)0x0);
        if ((puVar7 != (uint *)0x0) && (*puVar7 <= uVar6)) {
          uVar14 = puVar7[1];
          fVar17 = *(float *)(uVar14 + 0xa4);
          if (fVar17 == 0.0 || fVar17 < 0.0 != NAN(fVar17)) {
            if (*(char *)(uVar14 + 0x95) != '\0') goto LAB_0007cfb8;
          }
          else if (((*(char *)(uVar14 + 0x95) != '\0') || (*(int *)(uVar14 + 0x98) == 0)) ||
                  (*(int *)(*(int *)(uVar14 + 0x98) + 4) == 0)) {
LAB_0007cfb8:
            if (param_3 != 2) goto LAB_0007cf98;
          }
          local_4c = *puVar15;
          local_48 = *(undefined4 *)(iVar2 + 0x7ce82);
          local_44 = *(undefined4 *)(iVar2 + 0x7ce86);
          iVar5 = FUN_0007cae4(param_1,uVar6,&local_4c,local_2c);
          *(float *)(iVar5 + 0xa0) = local_2c[0];
          iVar8 = FUN_0009a884(iVar4,iVar10,&local_40);
          if (iVar8 == 0) {
            local_2c[0] = (float)local_40;
          }
          FUN_0007a22c(iVar5,local_2c[0]);
          iVar8 = FUN_0009a884(iVar4,iVar11,&local_40);
          if (iVar8 == 0) {
            local_2c[0] = (float)local_40;
          }
          *(float *)(iVar5 + 0xac) = local_2c[0];
          local_38 = -1;
          FUN_0009a8bc(iVar4,iVar12,&local_38);
          if (-1 < local_38) {
            FUN_0002f6fc(local_38,0,0,0);
          }
        }
      }
LAB_0007cf98:
      iVar4 = FUN_0009a4f0(iVar4,iVar1 + 0x7cfa0);
    } while (iVar4 != 0);
  }
  return;
}



