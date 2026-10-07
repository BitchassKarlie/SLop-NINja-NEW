/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00018d3c FUN_00018d3c */

undefined4 FUN_00018d3c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = DAT_00018e70;
  iVar6 = DAT_00018e6c + 0x18d4c;
  local_30 = param_1 + 0x80;
  iVar4 = *(int *)(param_1 + 0x84);
  local_2c = *(int *)(param_1 + 0x84);
  while (iVar5 = iVar4, iVar5 != 0) {
    local_2c = iVar5;
    iVar4 = *(int *)(iVar5 + 0xc);
  }
  uVar7 = 0;
joined_r0x00018d6e:
  do {
    if (local_2c == 0) {
      return uVar7;
    }
    if (param_2 < *(int *)(*(int *)(local_2c + 4) + 0x188)) {
LAB_00018d7a:
      iVar4 = *(int *)(local_2c + 0x10);
      iVar5 = local_2c;
    }
    else {
      uVar8 = *(uint *)(*(int *)(local_2c + 4) + 0x194);
      uVar2 = FUN_0006c798(*(undefined4 *)(*(int *)(iVar6 + iVar1) + 4));
      if ((uVar2 & uVar8) != 0) {
        iVar4 = *(int *)(local_2c + 4);
        if (*(int *)(iVar4 + 0x19c) != 0) {
          iVar5 = *(int *)(*(int *)(iVar4 + 0x19c) + 8);
          if (param_2 < 1) {
            local_34 = 0;
          }
          else {
            iVar4 = 0;
            local_34 = 0;
            do {
              while (iVar3 = FUN_000215e0(*(undefined4 *)(param_3 + iVar4 * 4)), iVar3 != iVar5) {
                iVar4 = iVar4 + 1;
                if (iVar4 == param_2) goto LAB_00018dec;
              }
              iVar4 = iVar4 + 1;
              local_34 = local_34 + 1;
            } while (iVar4 != param_2);
LAB_00018dec:
            iVar4 = *(int *)(local_2c + 4);
          }
          if (local_34 < *(int *)(iVar4 + 0x188)) goto LAB_00018d7a;
        }
        if (*(char *)(iVar4 + 0x198) != '\0') {
          uVar8 = *(uint *)(*(int *)(iVar6 + iVar1) + 0x184);
          uVar2 = uVar8;
          if (uVar8 != 0) {
            uVar2 = 1;
          }
          if (param_2 < 3) {
            uVar2 = 0;
          }
          else {
            uVar2 = uVar2 & 1;
          }
          if ((uVar2 == 0) || (0.0 < *(float *)(uVar8 + 0x70))) goto LAB_00018d7a;
        }
        iVar4 = FUN_00018c64(param_1,iVar4,&local_30);
        if (iVar4 != 0) {
          uVar7 = 1;
          goto joined_r0x00018d6e;
        }
      }
      iVar4 = *(int *)(local_2c + 0x10);
      iVar5 = local_2c;
    }
    if (iVar4 == 0) {
      local_2c = *(int *)(iVar5 + 0x14);
      if ((local_2c != 0) && (iVar4 = local_2c, iVar5 == *(int *)(local_2c + 0x10))) {
        do {
          local_2c = *(int *)(iVar4 + 0x14);
          if (local_2c == 0) break;
          bVar9 = *(int *)(local_2c + 0x10) == iVar4;
          iVar4 = local_2c;
        } while (bVar9);
      }
    }
    else {
      do {
        local_2c = iVar4;
        iVar4 = *(int *)(local_2c + 0xc);
      } while (*(int *)(local_2c + 0xc) != 0);
    }
  } while( true );
}



