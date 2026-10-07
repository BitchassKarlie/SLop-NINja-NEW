/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00018f64 FUN_00018f64 */

undefined4 FUN_00018f64(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  int local_30;
  int local_2c;
  
  iVar2 = DAT_00019020;
  iVar5 = DAT_0001901c + 0x18f72;
  local_30 = param_1 + 0x40;
  iVar4 = *(int *)(param_1 + 0x44);
  local_2c = *(int *)(param_1 + 0x44);
  while (iVar1 = iVar4, iVar1 != 0) {
    local_2c = iVar1;
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  uVar6 = 0;
joined_r0x00018f94:
  do {
    if (local_2c == 0) {
      return uVar6;
    }
    iVar4 = *(int *)(*(int *)(local_2c + 4) + 0x188);
    if ((iVar4 == param_2) || ((iVar4 < 0 && (param_2 == param_3)))) {
      uVar7 = *(uint *)(*(int *)(local_2c + 4) + 0x194);
      uVar3 = FUN_0006c798(*(undefined4 *)(*(int *)(iVar5 + iVar2) + 4));
      if (((uVar3 & uVar7) != 0) &&
         (iVar4 = FUN_00018c64(param_1,*(undefined4 *)(local_2c + 4),&local_30), iVar4 != 0)) {
        uVar6 = 1;
        goto joined_r0x00018f94;
      }
      iVar4 = *(int *)(local_2c + 0x10);
      iVar1 = local_2c;
    }
    else {
      iVar4 = *(int *)(local_2c + 0x10);
      iVar1 = local_2c;
    }
    if (iVar4 == 0) {
      local_2c = *(int *)(iVar1 + 0x14);
      if ((local_2c != 0) && (iVar4 = local_2c, iVar1 == *(int *)(local_2c + 0x10))) {
        do {
          local_2c = *(int *)(iVar4 + 0x14);
          if (local_2c == 0) break;
          bVar8 = *(int *)(local_2c + 0x10) == iVar4;
          iVar4 = local_2c;
        } while (bVar8);
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



