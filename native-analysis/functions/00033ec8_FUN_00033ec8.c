/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00033ec8 FUN_00033ec8 */

void FUN_00033ec8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  iVar3 = DAT_00033fe0;
  iVar2 = DAT_00033fdc;
  iVar1 = DAT_00033fd8;
  iVar6 = DAT_00033fd4 + 0x33ed8;
  local_24 = **(int **)(iVar6 + DAT_00033fd8);
  if (*(char *)(*(int *)(iVar6 + DAT_00033fdc) + 8) == '\0') {
    if (-1 < *(int *)(DAT_00033fe0 + 0x34014) << 0x1f) {
      iVar8 = DAT_00033fe0 + 0x34014;
      iVar7 = __cxa_guard_acquire(iVar8);
      if (iVar7 != 0) {
        uVar4 = FUN_0008f414(DAT_00033ff8 + 0x33fbe);
        *(undefined4 *)(iVar3 + 0x34018) = uVar4;
        __cxa_guard_release(iVar8);
      }
    }
    iVar3 = DAT_00033fe4;
    iVar7 = *(int *)(iVar6 + iVar2);
    FUN_00072d2c(*(undefined4 *)(iVar7 + 0x50),DAT_00033fe8 + 0x33f0c,
                 *(undefined4 *)(DAT_00033fe4 + 0x3402c),1,1,1);
    *(undefined4 *)(iVar7 + 0x14) = DAT_00033fd0;
    local_5c = *param_1;
    local_58 = param_1[1];
    local_54 = param_1[2];
    FUN_0001ae1c(*(undefined4 *)(iVar7 + 0x4c),&local_5c,0x3fcccccd,0x40000000);
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    local_28 = 1;
    *(undefined4 *)((int)&DAT_00033fe0 + iVar3) = *param_1;
    *(undefined4 *)((int)&DAT_00033fe4 + iVar3) = uVar4;
    *(undefined4 *)((int)&DAT_00033fe8 + iVar3) = uVar5;
    iVar2 = DAT_00033fec;
    *(undefined *)(iVar3 + 0x33f9c) = 0;
    local_50 = iVar2 + 0x33f70;
    local_48[0] = 0;
    local_4c = *(undefined4 *)(iVar6 + DAT_00033ff0);
    uVar4 = *(undefined4 *)(iVar7 + 0x18c);
    (**(code **)(iVar2 + 0x33f78))(&local_50,local_48);
    FUN_00073a7c(uVar4,DAT_00033ff4 + 0x33f8e,0x3f800000,local_48);
    FUN_0001d388(local_48);
  }
  if (local_24 == **(int **)(iVar6 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



