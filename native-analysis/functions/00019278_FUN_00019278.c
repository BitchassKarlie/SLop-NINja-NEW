/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019278 FUN_00019278 */

undefined4 FUN_00019278(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  int local_28;
  int local_24;
  
  iVar2 = DAT_00019324;
  iVar5 = DAT_00019320 + 0x19286;
  local_28 = param_1 + 0x30;
  iVar4 = *(int *)(param_1 + 0x34);
  local_24 = *(int *)(param_1 + 0x34);
  while (iVar1 = iVar4, iVar1 != 0) {
    local_24 = iVar1;
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  uVar6 = 0;
joined_r0x000192a4:
  do {
    if (local_24 == 0) {
      return uVar6;
    }
    if (param_2 < *(int *)(*(int *)(local_24 + 4) + 0x188)) {
      iVar4 = *(int *)(local_24 + 0x10);
      iVar1 = local_24;
    }
    else {
      uVar7 = *(uint *)(*(int *)(local_24 + 4) + 0x194);
      uVar3 = FUN_0006c798(*(undefined4 *)(*(int *)(iVar5 + iVar2) + 4));
      if (((uVar3 & uVar7) != 0) &&
         (iVar4 = FUN_00018c64(param_1,*(undefined4 *)(local_24 + 4),&local_28), iVar4 != 0)) {
        uVar6 = 1;
        goto joined_r0x000192a4;
      }
      iVar4 = *(int *)(local_24 + 0x10);
      iVar1 = local_24;
    }
    if (iVar4 == 0) {
      local_24 = *(int *)(iVar1 + 0x14);
      if ((local_24 != 0) && (iVar4 = local_24, *(int *)(local_24 + 0x10) == iVar1)) {
        do {
          local_24 = *(int *)(iVar4 + 0x14);
          if (local_24 == 0) break;
          bVar8 = *(int *)(local_24 + 0x10) == iVar4;
          iVar4 = local_24;
        } while (bVar8);
      }
    }
    else {
      do {
        local_24 = iVar4;
        iVar4 = *(int *)(local_24 + 0xc);
      } while (*(int *)(local_24 + 0xc) != 0);
    }
  } while( true );
}



