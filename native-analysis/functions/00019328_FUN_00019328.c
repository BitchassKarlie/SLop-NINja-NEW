/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019328 FUN_00019328 */

undefined4 FUN_00019328(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_20;
  int local_1c;
  
  local_20 = param_1 + 0x10;
  iVar2 = *(int *)(param_1 + 0x14);
  local_1c = *(int *)(param_1 + 0x14);
  while (iVar1 = iVar2, iVar1 != 0) {
    local_1c = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar3 = 0;
joined_r0x0001934a:
  do {
    if (local_1c == 0) {
      return uVar3;
    }
    if (param_2 < *(int *)(*(int *)(local_1c + 4) + 0x188)) {
      iVar2 = *(int *)(local_1c + 0x10);
      iVar1 = local_1c;
    }
    else {
      iVar2 = FUN_00018c64(param_1,*(int *)(local_1c + 4),&local_20);
      if (iVar2 != 0) {
        uVar3 = 1;
        goto joined_r0x0001934a;
      }
      iVar2 = *(int *)(local_1c + 0x10);
      iVar1 = local_1c;
    }
    if (iVar2 == 0) {
      local_1c = *(int *)(iVar1 + 0x14);
      if ((local_1c != 0) && (iVar2 = local_1c, *(int *)(local_1c + 0x10) == iVar1)) {
        do {
          local_1c = *(int *)(iVar2 + 0x14);
          if (local_1c == 0) break;
          bVar4 = *(int *)(local_1c + 0x10) == iVar2;
          iVar2 = local_1c;
        } while (bVar4);
      }
    }
    else {
      do {
        local_1c = iVar2;
        iVar2 = *(int *)(local_1c + 0xc);
      } while (*(int *)(local_1c + 0xc) != 0);
    }
  } while( true );
}



