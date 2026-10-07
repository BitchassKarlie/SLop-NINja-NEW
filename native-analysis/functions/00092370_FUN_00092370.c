/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00092370 FUN_00092370 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00092370(undefined *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  void *pvVar11;
  uint *puVar12;
  undefined uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint unaff_r10;
  int iVar18;
  uint uVar19;
  uint extraout_s15;
  undefined8 uVar20;
  int local_1ac;
  uint local_1a8;
  uint local_1a0;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  byte abStack_17c [256];
  undefined auStack_7c [36];
  undefined auStack_58 [36];
  int local_34;
  
  iVar3 = DAT_00092658;
  iVar17 = DAT_00092654 + 0x92384;
  local_34 = **(int **)(iVar17 + DAT_00092658);
  *param_1 = 1;
  cVar1 = param_1[1];
  while (cVar1 != '\0') {
    FUN_00099050();
    FUN_0009903c();
    cVar1 = param_1[1];
  }
  iVar4 = FUN_0009fac8(param_2);
  if (iVar4 != 0) {
    uVar5 = FUN_0008f414(param_2);
    pvVar6 = operator_new(0x40);
    FUN_0009faf4(pvVar6,param_2,0);
    iVar4 = FUN_0009f4cc(pvVar6,0,0);
    if (iVar4 != 0) {
      iVar4 = FUN_000ab3d8(pvVar6);
      uVar14 = DAT_00092650;
      puVar16 = (uint *)0x0;
      iVar18 = 0;
      local_1ac = 0;
      iVar7 = FUN_000ab3d4(pvVar6);
      if (iVar7 != 0) {
        do {
          bVar2 = *(byte *)(iVar4 + (int)puVar16);
          switch(bVar2) {
          case 9:
          case 0x20:
            break;
          case 10:
            puVar8 = (uint *)0x0;
            abStack_17c[local_1ac] = 0;
            uVar10 = FUN_0008f414(abStack_17c);
            uVar13 = (undefined)local_1ac;
            uVar20 = FUN_00091950(param_1,uVar10);
            uVar9 = (uint)uVar20;
            unaff_r10 = unaff_r10 | uVar9;
            if (unaff_r10 < 0x10) {
              uVar15 = unaff_r10 | 0x10000;
              puVar12 = &local_190;
            }
            else {
              uVar15 = unaff_r10 | 0x20000;
              puVar12 = (uint *)((ulonglong)uVar20 >> 0x20);
            }
            if (unaff_r10 < 0x10) {
              puVar12[2] = uVar14;
              uVar9 = local_1a8;
            }
            else {
              uVar13 = (undefined)local_1a8;
              puVar8 = &local_190;
            }
            if (unaff_r10 < 0x10) {
              puVar12[1] = uVar9;
            }
            if (0xf < unaff_r10) {
              *(undefined *)(puVar8 + 1) = uVar13;
            }
            uVar9 = local_1a0;
            if (local_1a0 != 0) {
              uVar9 = 1;
            }
            if (local_1a8 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 & 1;
            }
            if ((uVar9 == 0) || (unaff_r10 == 0)) {
              local_1ac = 0;
              iVar18 = 0;
            }
            else {
              FUN_00091f54(auStack_58);
              pvVar11 = operator_new(0x44);
              local_190 = uVar15;
              FUN_000ad314(pvVar11,uVar15,uStack_18c,uStack_188,local_184,uStack_180,auStack_58,
                           local_1a0,uVar5);
              FUN_0002ee58(auStack_58);
              uVar10 = FUN_0002e348();
              FUN_000918ec(uVar10,pvVar11);
              iVar18 = 0;
              local_1ac = 0;
            }
            break;
          default:
            if ((byte)(bVar2 - 0x20) < 0x90) {
              abStack_17c[local_1ac] = bVar2;
              local_1ac = local_1ac + 1;
            }
            break;
          case 0x2c:
            abStack_17c[local_1ac] = 0;
            if (iVar18 == 1) {
              uVar10 = FUN_0008f414(abStack_17c);
              uVar9 = FUN_00091a04(param_1,uVar10);
              local_1ac = 0;
              local_1a8 = local_1a8 | uVar9;
            }
            else {
              uVar10 = FUN_0008f414(abStack_17c);
              uVar9 = FUN_00091950(param_1,uVar10);
              local_1ac = 0;
              unaff_r10 = unaff_r10 | uVar9;
            }
            break;
          case 0x3a:
            iVar18 = iVar18 + 1;
            abStack_17c[local_1ac] = 0;
            local_1a0 = FUN_0008f414(abStack_17c);
            local_1ac = 0;
            break;
          case 0x3b:
            iVar18 = iVar18 + 1;
            abStack_17c[local_1ac] = 0;
            uVar10 = FUN_0008f414(abStack_17c);
            local_1a8 = FUN_00091a04(param_1,uVar10);
            unaff_r10 = 0;
            local_1ac = 0;
          }
          puVar16 = (uint *)((int)puVar16 + 1);
          puVar8 = (uint *)FUN_000ab3d4(pvVar6);
        } while (puVar16 < puVar8);
      }
      if (iVar18 == 2) {
        uVar13 = 0;
        abStack_17c[local_1ac] = 0;
        uVar10 = FUN_0008f414();
        uVar20 = FUN_00091950(param_1,uVar10);
        uVar14 = (uint)((ulonglong)uVar20 >> 0x20);
        uVar15 = (uint)uVar20 | unaff_r10;
        uVar9 = extraout_s15;
        if (uVar15 < 0x10) {
          uVar9 = DAT_00092650;
        }
        if (uVar15 < 0x10) {
          puVar16 = &local_190;
        }
        puVar8 = &local_190;
        if (uVar15 < 0x10) {
          uVar19 = uVar15 | 0x10000;
          uVar14 = local_1a8;
          puVar8 = puVar16;
        }
        else {
          uVar13 = (undefined)local_1a8;
          uVar19 = 2;
        }
        if (uVar15 < 0x10) {
          puVar8[2] = uVar9;
        }
        else {
          uVar19 = uVar15 | 0x20000;
        }
        if (uVar15 < 0x10) {
          puVar8[1] = uVar14;
        }
        if (0xf < uVar15) {
          *(undefined *)(puVar8 + 1) = uVar13;
        }
        uVar14 = local_1a0;
        if (local_1a0 != 0) {
          uVar14 = 1;
        }
        if (local_1a8 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar14 & 1;
        }
        if ((uVar14 != 0) && (uVar15 != 0)) {
          FUN_00091f54(auStack_7c);
          pvVar11 = operator_new(0x44);
          *puVar8 = uVar19;
          FUN_000ad314(pvVar11,*puVar8,puVar8[1],puVar8[2],local_184,uStack_180,auStack_7c,local_1a0
                       ,uVar5);
          FUN_0002ee58(auStack_7c);
          uVar5 = FUN_0002e348();
          FUN_000918ec(uVar5,pvVar11);
        }
      }
      if (pvVar6 != (void *)0x0) {
        FUN_000ab448(pvVar6);
        operator_delete(pvVar6);
      }
      uVar5 = 1;
      *param_1 = 0;
      goto LAB_000923b0;
    }
    FUN_00099050();
    FUN_0009903c();
    if (pvVar6 != (void *)0x0) {
      FUN_000ab448(pvVar6);
      operator_delete(pvVar6);
    }
  }
  uVar5 = 0;
  *param_1 = 0;
LAB_000923b0:
  if (local_34 == **(int **)(iVar17 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



