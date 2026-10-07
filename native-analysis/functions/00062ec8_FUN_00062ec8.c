/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00062ec8 FUN_00062ec8 */

void FUN_00062ec8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_48;
  undefined4 local_44;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar1 = DAT_00062f6c;
  iVar2 = DAT_00062f68 + 0x62ed6;
  local_1c = **(int **)(iVar2 + DAT_00062f6c);
  if ((*(int *)(param_2 + 0x278) == 0) || (0 < *(int *)(*(int *)(param_2 + 0x278) + 0xc))) {
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + DAT_00062f70) + 0x18c);
    local_48 = DAT_00062f74 + 0x62f04;
    local_44 = *(undefined4 *)(iVar2 + DAT_00062f78);
    local_20 = 1;
    local_40[0] = 0;
    (**(code **)(DAT_00062f74 + 0x62f0c))(&local_48,local_40);
    FUN_00073a7c(uVar3,DAT_00062f7c + 0x62f20,0x3f800000,local_40);
    FUN_0001d388(local_40);
    local_48 = DAT_00062f80 + 0x62f3c;
    *(undefined4 *)(param_2 + 0x264) = DAT_00062f64;
  }
  else if (*(int *)(param_1 + 0x80) != 0) {
    FUN_000670e8(*(undefined4 *)(*(int *)(iVar2 + DAT_00062f70) + 0x16c));
  }
  if (local_1c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



