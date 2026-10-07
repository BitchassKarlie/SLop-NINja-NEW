/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00018c64 FUN_00018c64 */

undefined4 FUN_00018c64(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined auStack_28 [8];
  int local_20;
  int local_1c;
  
  if ((param_2 != 0) &&
     (iVar1 = FUN_00072374(*(undefined4 *)(*(int *)(DAT_00018d34 + 0x18c6c + DAT_00018d38) + 0x50),
                           param_2 + 0x40,*(undefined4 *)(param_2 + 0x80)), iVar1 != 0)) {
    iVar2 = *(int *)(param_2 + 400) + 1;
    iVar1 = *(int *)(param_1 + iVar2 * 0x10 + 4);
    if (iVar1 != 0) {
      for (iVar4 = *(int *)(iVar1 + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
        iVar1 = iVar4;
      }
      while( true ) {
        iVar4 = *(int *)(iVar1 + 4);
        local_1c = iVar1;
        while( true ) {
          if (param_2 == iVar4) {
            iVar1 = *(int *)(param_3 + 4);
            iVar4 = *(int *)(iVar1 + 0x10);
            if (*(int *)(iVar1 + 0x10) == 0) {
              for (iVar3 = *(int *)(iVar1 + 0x14); (iVar3 != 0 && (iVar1 == *(int *)(iVar3 + 0x10)))
                  ; iVar3 = *(int *)(iVar3 + 0x14)) {
                iVar1 = iVar3;
              }
            }
            else {
              do {
                iVar3 = iVar4;
                iVar4 = *(int *)(iVar3 + 0xc);
              } while (*(int *)(iVar3 + 0xc) != 0);
            }
            *(int *)(param_3 + 4) = iVar3;
            local_20 = param_1 + iVar2 * 0x10;
            FUN_00018b74(auStack_28,param_1 + (*(int *)(param_2 + 400) + 1) * 0x10,local_20,local_1c
                        );
            return 1;
          }
          iVar1 = *(int *)(local_1c + 0x10);
          if (*(int *)(local_1c + 0x10) == 0) break;
          do {
            local_1c = iVar1;
            iVar1 = *(int *)(local_1c + 0xc);
          } while (*(int *)(local_1c + 0xc) != 0);
          if (local_1c == 0) {
            return 0;
          }
          iVar4 = *(int *)(local_1c + 4);
        }
        iVar1 = *(int *)(local_1c + 0x14);
        if (iVar1 == 0) break;
        iVar4 = iVar1;
        if (local_1c == *(int *)(iVar1 + 0x10)) {
          do {
            iVar1 = *(int *)(iVar4 + 0x14);
            if (iVar1 == 0) {
              return 0;
            }
            bVar5 = *(int *)(iVar1 + 0x10) == iVar4;
            iVar4 = iVar1;
          } while (bVar5);
        }
      }
    }
  }
  return 0;
}



