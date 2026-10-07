/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3ca8 FUN_000b3ca8 */

void FUN_000b3ca8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar1 = DAT_000b3d60;
  iVar4 = DAT_000b3d5c + 0xb3cb6;
  local_1c = **(int **)(iVar4 + DAT_000b3d60);
  if (*(int *)(param_1 + 0x2c) != *param_2) {
    local_44 = 0;
    local_50 = DAT_000b3d64 + 0xb3cda;
    local_40[0] = 0;
    local_48 = DAT_000b3d68 + 0xb3ce4;
    local_20 = 1;
    local_4c = param_1;
    (**(code **)(DAT_000b3d64 + 0xb3ce2))(&local_50,local_40);
    local_50 = DAT_000b3d6c + 0xb3cfc;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_000b3ac8(*(int *)(param_1 + 0x2c) + 0xc,local_40);
    }
    FUN_000b3c7c(param_1 + 0x2c,*param_2);
    *(undefined *)(param_1 + 0x28) = 1;
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar5 = *(int *)(iVar3 + 0x10);
      piVar2 = (int *)FUN_000b3b70(iVar3 + 0xc,local_40);
      *piVar2 = iVar5;
      piVar2[1] = *(int *)(iVar5 + 4);
      *(int **)(iVar5 + 4) = piVar2;
      *(int **)piVar2[1] = piVar2;
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    }
    FUN_0009fd54(local_40);
  }
  if (local_1c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



