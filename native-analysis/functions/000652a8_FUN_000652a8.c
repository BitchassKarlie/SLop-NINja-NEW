/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000652a8 FUN_000652a8 */

void FUN_000652a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  iVar1 = DAT_0006535c;
  iVar3 = DAT_00065358 + 0x652b6;
  local_24 = **(int **)(iVar3 + DAT_0006535c);
  if (*(int *)(param_1 + 0x90) == param_2) {
    iVar2 = FUN_00086780();
    if (*(int *)(iVar2 + 0x5c) < 6) {
      iVar2 = *(int *)(param_1 + 0x98);
    }
    else {
      iVar2 = 1;
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
    local_4c = 0;
    local_48[0] = 0;
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + DAT_00065360) + 0x18c);
    uVar4 = *(undefined4 *)(DAT_00065364 + 0x65308 + iVar2 * 4);
    local_58 = DAT_00065368 + 0x65318;
    local_50 = DAT_0006536c + 0x6531c;
    local_28 = 1;
    local_54 = param_1;
    (**(code **)(DAT_00065368 + 0x65320))(&local_58,local_48);
    uVar4 = FUN_00073a7c(uVar5,uVar4,0,local_48);
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    FUN_0001d388(local_48);
    local_58 = DAT_00065370 + 0x6534c;
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_000a5ce0(*(int *)(param_1 + 0x90),0);
    }
  }
  if (local_24 != **(int **)(iVar3 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



