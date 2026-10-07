/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004016c FUN_0004016c */

void FUN_0004016c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  iVar5 = DAT_00040214;
  iVar1 = DAT_00040210;
  iVar6 = DAT_0004020c + 0x4017c;
  local_28 = 1;
  local_24 = **(int **)(iVar6 + DAT_00040210);
  uVar7 = *(undefined4 *)(*(int *)(iVar6 + DAT_00040214) + 0x18c);
  local_50 = DAT_00040218 + 0x401a8;
  local_4c = *(undefined4 *)(iVar6 + DAT_0004021c);
  local_48[0] = 0;
  (**(code **)(DAT_00040218 + 0x401b0))(&local_50,local_48);
  FUN_00073a7c(uVar7,DAT_00040220 + 0x401be,0x3f800000,local_48);
  FUN_0001d388(local_48);
  iVar2 = DAT_00040228;
  iVar3 = *(int *)(param_1 + 0xd8);
  local_50 = DAT_00040224 + 0x401da;
  iVar4 = iVar3 + -1;
  *(int *)(param_1 + 0xd8) = iVar4;
  iVar5 = *(int *)(iVar6 + iVar5);
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 1;
  }
  if (iVar4 < 0) {
    iVar3 = 2;
  }
  FUN_00073828(*(undefined4 *)(iVar5 + 0x50),iVar2 + 0x401ea,iVar3,1,1);
  if (local_24 == **(int **)(iVar6 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



