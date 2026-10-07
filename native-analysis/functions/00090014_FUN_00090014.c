/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00090014 FUN_00090014 */

void FUN_00090014(void **param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  void *pvVar13;
  void **ppvVar14;
  void **ppvVar15;
  void *pvVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  void *pvVar23;
  int local_a4;
  int local_8c;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74;
  void *local_70;
  undefined auStack_6c [64];
  int local_2c;
  
  iVar1 = DAT_00090440;
  iVar9 = DAT_0009043c + 0x90024;
  local_2c = **(int **)(iVar9 + DAT_00090440);
  while( true ) {
    FUN_0009faf4(auStack_6c,param_2,0);
    iVar2 = FUN_0009f718(auStack_6c);
    if (iVar2 != 0) break;
    FUN_00099050();
    FUN_0009903c();
    FUN_000ab448(auStack_6c);
  }
  uVar17 = 0;
  uVar3 = FUN_000ab3d4(auStack_6c);
  pvVar4 = operator_new__(uVar3 + 1);
  *(undefined *)((int)pvVar4 + uVar3) = 0;
  iVar2 = FUN_0009f2b4(auStack_6c,pvVar4,uVar3);
  if (iVar2 == 0) {
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    FUN_0009f378(auStack_6c);
    FUN_000ab448(auStack_6c);
    uVar6 = 0;
  }
  else {
    FUN_0009f378(auStack_6c);
    FUN_000ab448(auStack_6c);
    if (uVar3 != 0) {
      iVar2 = DAT_00090444 + 0x9008e;
      iVar10 = DAT_00090448 + 0x90094;
      iVar20 = DAT_0009044c + 0x9009a;
      iVar8 = DAT_00090450 + 0x900a0;
      iVar11 = DAT_00090454 + 0x900a4;
      local_a4 = 0;
      local_8c = 0;
      iVar19 = 0;
      do {
        while( true ) {
          iVar21 = (int)pvVar4 + uVar17;
          local_70 = (void *)0xffff5542;
          local_74 = (void *)0x0;
          iVar5 = FUN_0008f77c(iVar21,iVar20);
          if (iVar5 != 0) break;
          iVar5 = FUN_0008f77c(iVar21,iVar2);
          if (iVar5 == 0) {
            iVar5 = FUN_0008f77c(iVar21,iVar10);
            if (iVar5 != 0) {
              if (*param_1 == (void *)0x0) goto LAB_000901d4;
              iVar22 = local_8c * 9;
              iVar18 = local_8c * 0x24;
              iVar5 = FUN_0008fb30(iVar21,(void *)((int)*param_1 + iVar18),uVar3 - uVar17);
              *(float *)((int)*param_1 + iVar18 + 4) =
                   *(float *)((int)*param_1 + iVar18 + 4) / (float)(longlong)(int)param_1[0x107];
              ppvVar15 = param_1 + 0x109;
              *(float *)((int)*param_1 + iVar18 + 8) =
                   *(float *)((int)*param_1 + iVar18 + 8) / (float)(longlong)(int)param_1[0x108];
              *(float *)((int)*param_1 + iVar18 + 0xc) =
                   *(float *)((int)*param_1 + iVar18 + 0xc) / (float)*ppvVar15;
              *(float *)((int)*param_1 + iVar18 + 0x10) =
                   *(float *)((int)*param_1 + iVar18 + 0x10) / (float)*ppvVar15;
              *(float *)((int)*param_1 + iVar18 + 0x1c) =
                   *(float *)((int)*param_1 + iVar18 + 0x1c) / (float)*ppvVar15;
              *(float *)((int)*param_1 + iVar18 + 0x14) =
                   *(float *)((int)*param_1 + iVar18 + 0x14) / (float)*ppvVar15;
              *(float *)((int)*param_1 + iVar18 + 0x18) =
                   *(float *)((int)*param_1 + iVar18 + 0x18) / (float)*ppvVar15;
              ppvVar14 = (void **)(uint)*(ushort *)((int)*param_1 + iVar22 * 4);
              ppvVar15 = ppvVar14;
              if (ppvVar14 < (void **)0x100) {
                ppvVar15 = param_1 + (int)ppvVar14;
              }
              if (ppvVar14 < (void **)0x100) {
                ppvVar15[1] = (void *)((int)*param_1 + iVar18);
              }
              local_8c = local_8c + 1;
              goto LAB_000900ca;
            }
            iVar5 = FUN_0008f77c(iVar21,iVar8);
            if (iVar5 == 0) {
              pvVar13 = (void *)FUN_0008f77c(iVar21,iVar11);
              if (pvVar13 != (void *)0x0) {
                if (param_1[0x104] == (void *)0x0) goto LAB_000901d4;
                iVar5 = FUN_0008fa30(iVar21,(void *)((int)param_1[0x104] + local_a4 * 0xc),
                                     uVar3 - uVar17);
                local_a4 = local_a4 + 1;
                goto LAB_000900ca;
              }
              iVar5 = FUN_0008f7dc(iVar21,auStack_6c,&local_70,&local_74,0);
              if (local_74 == (void *)0x0) {
                if (local_70 != (void *)0xffff5542) {
                  pvVar23 = local_74;
                  iVar21 = FUN_0008f77c(auStack_6c,DAT_00090458 + 0x9039a);
                  pvVar13 = local_70;
                  if (iVar21 == 0) {
                    iVar21 = FUN_0008f77c(auStack_6c,DAT_0009045c + 0x903d6);
                    if (iVar21 == 0) {
                      iVar21 = FUN_0008f77c(auStack_6c,DAT_00090460 + 0x903ee);
                      if (iVar21 == 0) {
                        iVar21 = FUN_0008f77c(auStack_6c,DAT_00090464 + 0x90402);
                        if (iVar21 == 0) {
                          iVar21 = FUN_0008f77c(auStack_6c,DAT_00090468 + 0x90420);
                          if (iVar21 != 0) {
                            param_1[0x10a] = (void *)(float)(longlong)(int)local_70;
                          }
                        }
                        else {
                          param_1[0x109] = (void *)(float)(longlong)(int)local_70;
                        }
                      }
                      else {
                        param_1[0x108] = local_70;
                      }
                    }
                    else {
                      param_1[0x107] = local_70;
                    }
                  }
                  else {
                    param_1[0x103] = local_70;
                    puVar7 = (undefined4 *)operator_new__(((int)local_70 + 1) * 8);
                    puVar7[1] = pvVar13;
                    *puVar7 = 8;
                    puVar12 = puVar7 + 2;
                    pvVar16 = pvVar23;
                    if (pvVar13 != (void *)0x0) {
                      do {
                        pvVar16 = (void *)((int)pvVar16 + 1);
                        puVar12[1] = pvVar23;
                        puVar12 = puVar12 + 2;
                      } while (pvVar16 != pvVar13);
                    }
                    param_1[0x102] = puVar7 + 2;
                  }
                }
              }
              else {
                operator_delete__(local_74);
                local_74 = pvVar13;
              }
            }
            else {
              iVar5 = FUN_0008f7dc(iVar21,auStack_6c,&local_70,&local_74);
              if ((local_70 != (void *)0xffff5542) && (param_1[0x105] == (void *)0x0)) {
                param_1[0x105] = local_70;
                pvVar13 = operator_new__((int)local_70 * 0xc);
                param_1[0x104] = pvVar13;
              }
            }
          }
          else {
            iVar5 = FUN_0008f7dc(iVar21,auStack_6c,&local_70,&local_74);
            if ((local_70 != (void *)0xffff5542) && (param_1[0x101] == (void *)0x0)) {
              param_1[0x101] = local_70;
              pvVar13 = operator_new__((int)local_70 * 0x24);
              *param_1 = pvVar13;
            }
          }
          if (iVar5 < 0) {
            iVar5 = 2 - iVar5;
          }
          uVar17 = uVar17 + iVar5;
          if (uVar3 <= uVar17) goto LAB_00090128;
        }
        if (param_1[0x102] == (void *)0x0) {
LAB_000901d4:
          iVar5 = 0;
        }
        else {
          iVar5 = iVar19 * 8;
          iVar19 = iVar19 + 1;
          iVar5 = FUN_0008ff6c(iVar21,(void *)((int)param_1[0x102] + iVar5),uVar3 - uVar17);
        }
LAB_000900ca:
        uVar17 = uVar17 + iVar5;
      } while (uVar17 < uVar3);
    }
LAB_00090128:
    if (0 < (int)param_1[0x103]) {
      iVar2 = 0;
      do {
        pvVar13 = param_1[0x102];
        iVar8 = iVar2 * 8;
        uVar6 = FUN_000996c4();
        iVar10 = iVar2 * 8;
        iVar2 = iVar2 + 1;
        FUN_00099cd0(&local_78,uVar6,*(undefined4 *)((int)param_1[0x102] + iVar10));
        local_7c = 0;
        FUN_0008ff40(&local_7c,local_78);
        FUN_00022208((int)pvVar13 + iVar8 + 4,local_7c);
        FUN_000221ac(&local_7c);
        FUN_00017d90(&local_78);
      } while (iVar2 < (int)param_1[0x103]);
    }
    param_1[0x10a] = (void *)((float)param_1[0x10a] / (float)param_1[0x109]);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    uVar6 = 1;
  }
  if (local_2c != **(int **)(iVar9 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}



