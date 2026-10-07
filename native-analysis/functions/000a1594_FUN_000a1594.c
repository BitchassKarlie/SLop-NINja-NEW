/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1594 FUN_000a1594 */

void FUN_000a1594(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc [8];
  undefined local_9c;
  undefined4 local_98 [8];
  undefined local_78;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_000a16f0;
  iVar3 = DAT_000a16ec + 0xa15a2;
  local_c4 = DAT_000a16f4 + 0xa15ac;
  local_2c = **(int **)(iVar3 + DAT_000a16f0);
  local_d4 = DAT_000a16f8 + 0xa15b6;
  local_c0 = 0;
  local_d0 = 0;
  local_dc = DAT_000a16fc + 0xa15ca;
  local_d8 = param_1;
  local_cc = local_dc;
  local_c8 = param_1;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    local_50[0] = 0;
    local_30 = 1;
    (**(code **)(DAT_000a16fc + 0xa15d2))(&local_dc,local_50);
    FUN_000a023c(iVar4 + 0x18,local_50);
    FUN_0009fc3c(local_50);
    local_74[0] = 0;
    local_54 = 1;
    iVar4 = *(int *)(param_1 + 0x38);
    (**(code **)(local_cc + 8))(&local_cc,local_74);
    FUN_000a023c(iVar4 + 0xc,local_74);
    FUN_0009fc3c(local_74);
  }
  FUN_000a09ec(param_1 + 0x38,*param_2);
  if (*(int *)(param_1 + 0x38) != 0) {
    local_78 = 1;
    local_98[0] = 0;
    iVar4 = *(int *)(param_1 + 0x38);
    (**(code **)(local_dc + 8))(&local_dc,local_98);
    iVar5 = *(int *)(iVar4 + 0x1c);
    piVar2 = (int *)FUN_000a051c(iVar4 + 0x18,local_98);
    *piVar2 = iVar5;
    piVar2[1] = *(int *)(iVar5 + 4);
    *(int **)(iVar5 + 4) = piVar2;
    *(int **)piVar2[1] = piVar2;
    *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
    FUN_0009fc3c(local_98);
    local_bc[0] = 0;
    local_9c = 1;
    iVar4 = *(int *)(param_1 + 0x38);
    (**(code **)(local_cc + 8))(&local_cc,local_bc);
    iVar5 = *(int *)(iVar4 + 0x10);
    piVar2 = (int *)FUN_000a051c(iVar4 + 0xc,local_bc);
    *piVar2 = iVar5;
    piVar2[1] = *(int *)(iVar5 + 4);
    *(int **)(iVar5 + 4) = piVar2;
    *(int **)piVar2[1] = piVar2;
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    FUN_0009fc3c(local_bc);
  }
  FUN_000b43f4(param_1,1);
  FUN_000b4264(param_1);
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



