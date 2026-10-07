/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008090c FUN_0008090c */

void FUN_0008090c(int param_1)

{
  int iVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar1 = DAT_00080988;
  iVar2 = DAT_00080984 + 0x80918;
  local_1c = **(int **)(iVar2 + DAT_00080988);
  FUN_0007b784();
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_00079304(*(undefined4 *)(param_1 + 0x1c),0);
    local_44 = 0;
    local_50 = DAT_0008098c + 0x80942;
    local_48 = DAT_00080990 + 0x8094a;
    local_40[0] = 0;
    local_20 = 1;
    local_4c = param_1;
    (**(code **)(DAT_0008098c + 0x8094a))(&local_50,local_40);
    FUN_0002f56c(local_40);
    FUN_0002f640(local_40);
    local_50 = DAT_00080994 + 0x80972;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (local_1c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



