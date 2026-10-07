/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000333d4 FUN_000333d4 */

void FUN_000333d4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  iVar1 = DAT_00033480;
  iVar5 = DAT_0003347c + 0x333e2;
  local_24 = **(int **)(iVar5 + DAT_00033480);
  iVar4 = *(int *)((int)&DAT_00033480 + DAT_00033484 + 2);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x11c) != 1)) {
    local_28 = 1;
    iVar4 = *(int *)(iVar5 + DAT_00033488);
    uVar7 = *(undefined4 *)(iVar4 + 0x18c);
    local_50 = DAT_0003348c + 0x3341a;
    local_4c = *(undefined4 *)(iVar5 + DAT_00033490);
    local_48[0] = 0;
    (**(code **)(DAT_0003348c + 0x33422))(&local_50,local_48);
    FUN_00073a7c(uVar7,DAT_00033494 + 0x33434,0x3f800000,local_48);
    FUN_0001d388(local_48);
    local_50 = DAT_00033498;
    *(undefined4 *)(iVar4 + 0x14) = DAT_00033478;
    iVar4 = DAT_0003349c;
    local_50 = local_50 + 0x33454;
    uVar7 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    puVar6 = (undefined4 *)(DAT_0003349c + 0x33534);
    *(undefined *)(DAT_0003349c + 0x334f0) = 1;
    *puVar6 = uVar7;
    *(undefined4 *)(iVar4 + 0x33538) = uVar2;
    *(undefined4 *)(iVar4 + 0x3353c) = uVar3;
  }
  if (local_24 == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



