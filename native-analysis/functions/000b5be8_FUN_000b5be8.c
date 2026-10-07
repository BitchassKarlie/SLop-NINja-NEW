/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5be8 FUN_000b5be8 */

void FUN_000b5be8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined auStack_204 [64];
  undefined auStack_1c4 [64];
  undefined auStack_184 [64];
  undefined auStack_144 [64];
  undefined auStack_104 [64];
  undefined auStack_c4 [64];
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  
  iVar8 = DAT_000b5f6c + 0xb5bf6;
  iVar1 = FUN_000b5bb8();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_000b5a58(*(undefined4 *)(param_1 + 0x10));
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  iVar7 = *(int *)(iVar1 + 4) + *(int *)(param_1 + 0xc) * 0x14;
  glMatrixMode(0x1701);
  glPushMatrix();
  FUN_000b527c(auStack_204,uVar6,DAT_000b5f70 + 0xb5c30);
  iVar1 = FUN_0008d120();
  FUN_0001d16c(auStack_204,iVar1 + 0x60,auStack_c4);
  glLoadMatrixf(auStack_c4);
  glMatrixMode(0x1700);
  glPushMatrix();
  FUN_000b527c(auStack_104,uVar6,DAT_000b5f74 + 0xb5c60);
  glLoadMatrixf(auStack_104);
  pcVar5 = *(char **)(iVar8 + DAT_000b5f78);
  if (*pcVar5 == '\0') {
    *pcVar5 = '\x01';
    glEnable(0xb44);
  }
  local_24 = 0;
  iVar1 = FUN_000a9330(uVar6,DAT_000b5f7c + 0xb5c80);
  if (((iVar1 != 0) &&
      (iVar1 = FUN_00022784(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 4),
                            *(undefined4 *)(iVar1 + 0x10),&local_24), iVar1 != 0)) &&
     (local_24 != 0)) {
    FUN_000a6ce8(local_24);
  }
  iVar8 = FUN_000a9330(uVar6,DAT_000b5f80 + 0xb5caa);
  iVar1 = DAT_000b5f90;
  if (iVar8 != 0) {
    if (*(int *)(iVar8 + 4) == 2) {
      if (*(uint *)(iVar8 + 0x10) < *(uint *)(*(int *)(iVar8 + 0xc) + 0x14)) {
        pcVar5 = (char *)(*(int *)(*(int *)(iVar8 + 0xc) + 0x10) + *(uint *)(iVar8 + 0x10));
      }
      else {
        pcVar5 = (char *)(DAT_000b5f8c + 0xb5e06);
      }
      if (*pcVar5 != '\0') {
        glEnable(0xb50);
        local_34 = *(undefined4 *)(iVar1 + 0xb5e1e);
        uStack_30 = *(undefined4 *)(iVar1 + 0xb5e22);
        uStack_2c = *(undefined4 *)(iVar1 + 0xb5e26);
        uStack_28 = *(undefined4 *)(iVar1 + 0xb5e2a);
        glLightModelfv(0xb53,&local_34);
        local_44 = DAT_000b5f64;
        local_54 = *(undefined4 *)(iVar1 + 0xb5e2e);
        uStack_50 = *(undefined4 *)(iVar1 + 0xb5e32);
        uStack_4c = *(undefined4 *)(iVar1 + 0xb5e36);
        uStack_48 = *(undefined4 *)(iVar1 + 0xb5e3a);
        local_40 = DAT_000b5f64;
        local_3c = DAT_000b5f64;
        local_38 = DAT_000b5f68;
        local_64 = *(undefined4 *)(iVar1 + 0xb5e3e);
        uStack_60 = *(undefined4 *)(iVar1 + 0xb5e42);
        uStack_5c = *(undefined4 *)(iVar1 + 0xb5e46);
        uStack_58 = *(undefined4 *)(iVar1 + 0xb5e4a);
        local_74 = *(undefined4 *)(iVar1 + 0xb5e4e);
        uStack_70 = *(undefined4 *)(iVar1 + 0xb5e52);
        uStack_6c = *(undefined4 *)(iVar1 + 0xb5e56);
        uStack_68 = *(undefined4 *)(iVar1 + 0xb5e5a);
        glEnable(0x4000);
        glLightfv(0x4000,0x1200,&local_44);
        glLightfv(0x4000,0x1201,&local_54);
        glLightfv(0x4000,0x1202,&local_64);
        glLightfv(0x4000,0x1203,&local_74);
        glEnable(0xba1);
        local_84 = *(undefined4 *)(iVar1 + 0xb5e5e);
        uStack_80 = *(undefined4 *)(iVar1 + 0xb5e62);
        uStack_7c = *(undefined4 *)(iVar1 + 0xb5e66);
        uStack_78 = *(undefined4 *)(iVar1 + 0xb5e6a);
        iVar1 = FUN_000b5230(uVar6,DAT_000b5f94 + 0xb5ece,&local_84);
        if (iVar1 != 0) {
          glMaterialfv(0x408,0x1200,&local_84);
        }
        iVar1 = FUN_000b5230(uVar6,DAT_000b5f98 + 0xb5eea,&local_84);
        if (iVar1 != 0) {
          glMaterialfv(0x408,0x1201,&local_84);
        }
        iVar1 = FUN_000b5230(uVar6,DAT_000b5f9c + 0xb5efa,&local_84);
        if (iVar1 != 0) {
          glMaterialfv(0x408,0x1202,&local_84);
        }
        iVar1 = FUN_000a9330(uVar6,DAT_000b5fa0 + 0xb5f06);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 4) == 1) {
            if (*(uint *)(iVar1 + 0x10) < *(uint *)(*(int *)(iVar1 + 0xc) + 0xc)) {
              puVar4 = (undefined4 *)
                       (*(int *)(*(int *)(iVar1 + 0xc) + 8) + *(uint *)(iVar1 + 0x10) * 4);
            }
            else {
              puVar4 = (undefined4 *)(DAT_000b5fa4 + 0xb5f26);
            }
            glMaterialf(0x408,0x1601,*puVar4);
          }
        }
        goto LAB_000b5cc2;
      }
    }
  }
  glDisable(0xb50);
LAB_000b5cc2:
  glMatrixMode(0x1700);
  FUN_000b527c(auStack_1c4,uVar6,DAT_000b5f84 + 0xb5cd8);
  FUN_000b527c(auStack_184,uVar6,DAT_000b5f88 + 0xb5ce6);
  FUN_0001d16c(auStack_1c4,auStack_184,auStack_144);
  glLoadMatrixf(auStack_144);
  FUN_000221ac(&local_24);
  iVar1 = *(int *)(iVar7 + 8);
  iVar8 = *(int *)(iVar7 + 0xc);
  do {
    while( true ) {
      if (iVar1 == iVar8) {
        glDisable(0xb50);
        glMatrixMode(0x1701);
        glPopMatrix();
        glMatrixMode(0x1700);
        glPopMatrix();
        glBindBuffer(0x8892,0);
        glBindBuffer(0x8893,0);
        return;
      }
      uVar6 = FUN_000b49b4(iVar1);
      (**(code **)(**(int **)(iVar1 + 100) + 0x24))();
      iVar7 = (**(code **)(**(int **)(iVar1 + 100) + 0x14))();
      if (iVar7 == 0) {
        uVar2 = FUN_000b668c(*(undefined4 *)(iVar1 + 100));
        glDrawArrays(uVar2,0,uVar6);
        iVar7 = FUN_000a6e14();
      }
      else {
        FUN_000b66bc(*(undefined4 *)(iVar1 + 100));
        uVar2 = FUN_000b668c(*(undefined4 *)(iVar1 + 100));
        uVar3 = (**(code **)(**(int **)(iVar1 + 100) + 0x14))();
        glDrawElements(uVar2,uVar3,0x1403,0);
        iVar7 = FUN_000a6e14();
      }
      if (iVar7 != 0) break;
LAB_000b5d20:
      iVar1 = iVar1 + 0x68;
    }
    FUN_000a6e28();
    iVar7 = (**(code **)(**(int **)(iVar1 + 100) + 0x14))();
    if (iVar7 != 0) {
      uVar6 = FUN_000b668c(*(undefined4 *)(iVar1 + 100));
      uVar2 = (**(code **)(**(int **)(iVar1 + 100) + 0x14))();
      glDrawElements(uVar6,uVar2,0x1403,0);
      goto LAB_000b5d20;
    }
    puVar4 = (undefined4 *)(iVar1 + 100);
    iVar1 = iVar1 + 0x68;
    uVar2 = FUN_000b668c(*puVar4);
    glDrawArrays(uVar2,0,uVar6);
  } while( true );
}



