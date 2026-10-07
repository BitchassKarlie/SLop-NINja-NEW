/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00061204 FUN_00061204 */

void FUN_00061204(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + 0x278), iVar3 != 0)) {
    iVar5 = *(int *)(iVar3 + 0x10);
    if (*(int *)(iVar3 + 0xc) < 1) {
      iVar3 = FUN_0007832c();
      iVar2 = *(int *)(param_1 + 0x8c);
      iVar4 = *(int *)(iVar2 + 0x278);
      if ((iVar4 == 0) || (iVar4 != *(int *)(iVar3 + *(int *)(iVar4 + 0x10) * 4))) {
        iVar3 = *(int *)(param_1 + (iVar5 + 0x24) * 4);
        if (iVar3 != 0) {
          if (*(int *)(*(int *)(iVar3 + 0x278) + 0xc) == 0) {
            memcpy(*(void **)(iVar3 + 0x54),(void *)(DAT_000612f4 + 0x61274),5);
            iVar2 = *(int *)(param_1 + 0x8c);
          }
          else {
            memcpy(*(void **)(iVar3 + 0x54),(void *)(DAT_000612fc + 0x612ac),7);
            iVar2 = *(int *)(param_1 + 0x8c);
          }
        }
        *(int *)(param_1 + (iVar5 + 0x24) * 4) = iVar2;
        uVar1 = FUN_0007832c();
        FUN_00077d38(uVar1,iVar5,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x278));
        memcpy(*(void **)(*(int *)(param_1 + 0x8c) + 0x54),(void *)(DAT_000612f8 + 0x6129e),9);
      }
      else {
        uVar1 = FUN_0007832c();
        FUN_00077d38(uVar1,iVar5,0);
        iVar3 = *(int *)(param_1 + 0x8c);
        if (*(int *)(*(int *)(iVar3 + 0x278) + 0xc) == 0) {
          memcpy(*(void **)(iVar3 + 0x54),(void *)(DAT_00061300 + 0x612d6),5);
        }
        else {
          memcpy(*(void **)(iVar3 + 0x54),(void *)(DAT_00061304 + 0x612ec),7);
        }
        *(undefined4 *)(param_1 + (iVar5 + 0x24) * 4) = 0;
      }
    }
    else {
      uVar1 = FUN_0007832c();
      FUN_00077e50(uVar1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x278) + 8));
      memcpy(*(void **)(*(int *)(param_1 + 0x8c) + 0x54),(void *)(DAT_000612f0 + 0x6123c),7);
    }
  }
  return;
}



