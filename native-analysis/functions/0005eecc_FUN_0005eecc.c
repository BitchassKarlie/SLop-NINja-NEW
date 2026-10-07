/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005eecc FUN_0005eecc */

void FUN_0005eecc(int param_1)

{
  int iVar1;
  int iVar2;
  int local_48;
  int local_44;
  int local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar1 = DAT_0005ef58;
  iVar2 = DAT_0005ef54 + 0x5eeda;
  local_1c = **(int **)(iVar2 + DAT_0005ef58);
  if ((*(int *)(param_1 + 0x7c) == 0) && (0 < *(int *)(param_1 + 0x80))) {
    local_48 = DAT_0005ef5c + 0x5ef12;
    local_44 = DAT_0005ef60 + 0x5ef18;
    local_20 = 1;
    local_40[0] = *(int *)(param_1 + 0x7c);
    (**(code **)(DAT_0005ef5c + 0x5ef1a))(&local_48,local_40);
    FUN_0002f56c(local_40);
    FUN_0002f640(local_40);
    local_48 = DAT_0005ef64 + 0x5ef3e;
    FUN_0002f6fc(*(undefined4 *)(param_1 + 0x84),0,0,0);
    FUN_0007b72c();
    FUN_000796c4();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (local_1c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



