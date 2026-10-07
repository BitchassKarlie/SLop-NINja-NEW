/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00039b78 FUN_00039b78 */

void FUN_00039b78(int param_1,undefined *param_2,undefined4 *param_3,char *param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  char local_8c [64];
  int local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined4 local_38;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  undefined4 local_30;
  int local_2c;
  
  iVar1 = DAT_00039c80;
  iVar3 = DAT_00039c7c + 0x39b88;
  local_2c = **(int **)(iVar3 + DAT_00039c80);
  local_34 = 0;
  local_33 = 0;
  local_31 = 0xff;
  local_48 = 1;
  local_32 = 0;
  local_30 = 0;
  puVar2 = *(undefined **)(iVar3 + DAT_00039c84);
  local_4c = 0;
  local_8c[0] = '\0';
  local_39 = puVar2[3];
  local_40 = 0;
  local_3a = puVar2[2];
  local_3b = puVar2[1];
  local_3c = *puVar2;
  FUN_00017d64(&local_30);
  if (param_4 != (char *)0x0) {
    strcpy(local_8c,param_4);
  }
  FUN_00017d64(&local_30,*param_3);
  local_38 = DAT_00039c78;
  local_4c = param_5;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + param_5;
  local_39 = param_2[3];
  local_3b = param_2[1];
  local_3a = param_2[2];
  local_40 = 0;
  local_3c = *param_2;
  local_34 = local_3c;
  local_33 = local_3b;
  local_32 = local_3a;
  local_31 = local_39;
  FUN_00039b24(param_1 + 0x78);
  FUN_0003998c(*(undefined4 *)(param_1 + 0x80),local_8c);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 0x60;
  FUN_00017d90(&local_30);
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



