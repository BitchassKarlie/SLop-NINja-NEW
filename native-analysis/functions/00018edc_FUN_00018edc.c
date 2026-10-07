/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00018edc FUN_00018edc */

undefined4 FUN_00018edc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_20;
  int local_1c;
  
  local_20 = param_1 + 0xa0;
  iVar3 = *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xa4);
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  uVar4 = 0;
  do {
    do {
      while( true ) {
        while( true ) {
          local_1c = iVar2;
          if (local_1c == 0) {
            return uVar4;
          }
          iVar2 = *(int *)(*(int *)(local_1c + 4) + 0x19c);
          if (((iVar2 == 0) || (iVar2 = FUN_00017adc(iVar2,param_2), iVar2 == 0)) ||
             (iVar2 = FUN_00018c64(param_1,*(undefined4 *)(local_1c + 4),&local_20), iVar2 == 0))
          break;
          uVar4 = 1;
          iVar2 = local_1c;
        }
        iVar3 = *(int *)(local_1c + 0x10);
        if (*(int *)(local_1c + 0x10) == 0) break;
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 0xc);
        } while (iVar3 != 0);
      }
      iVar2 = *(int *)(local_1c + 0x14);
    } while ((iVar2 == 0) || (iVar3 = iVar2, *(int *)(iVar2 + 0x10) != local_1c));
    do {
      iVar2 = *(int *)(iVar3 + 0x14);
      if (iVar2 == 0) break;
      bVar5 = *(int *)(iVar2 + 0x10) == iVar3;
      iVar3 = iVar2;
    } while (bVar5);
  } while( true );
}



