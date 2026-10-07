/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000862fc FUN_000862fc */

void FUN_000862fc(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  iVar2 = DAT_0008639c + 0x8630a;
  piVar3 = *(int **)(iVar2 + DAT_000863a0);
  iVar5 = DAT_000863a4 + 0x86314;
  local_24 = *piVar3;
  iVar4 = *(int *)(iVar2 + DAT_000863a8);
  uVar6 = *(undefined4 *)(iVar4 + 0x50);
  uVar1 = FUN_0008f414(iVar5);
  FUN_00072d2c(uVar6,iVar5,uVar1,1,1,1);
  local_28 = 1;
  uVar1 = *(undefined4 *)(iVar4 + 0x18c);
  local_50 = DAT_000863ac + 0x86348;
  local_4c = *(undefined4 *)(iVar2 + DAT_000863b0);
  local_48[0] = 0;
  (**(code **)(DAT_000863ac + 0x86350))(&local_50,local_48);
  FUN_00073a7c(uVar1,DAT_000863b4 + 0x86366,0x3f800000,local_48);
  FUN_0001d388(local_48);
  local_50 = DAT_000863b8 + 0x86388;
  FUN_000318fc(0xffffffff,0xbf800000,0xffffffff);
  if (local_24 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



