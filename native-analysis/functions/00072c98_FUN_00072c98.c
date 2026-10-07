/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072c98 FUN_00072c98 */

void FUN_00072c98(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined auStack_c0 [4];
  uint *local_bc;
  uint local_b8;
  undefined auStack_b4 [72];
  undefined auStack_6c [72];
  int local_24;
  
  iVar1 = DAT_00072d28;
  iVar4 = DAT_00072d24 + 0x72ca6;
  local_24 = **(int **)(iVar4 + DAT_00072d28);
  puVar5 = *(uint **)(param_1 + 4);
  if (puVar5 == (uint *)0x0) {
    uVar6 = *param_2;
  }
  else {
    uVar6 = *param_2;
    puVar2 = (uint *)0x0;
    do {
      if (*puVar5 < uVar6) {
        puVar3 = (uint *)puVar5[0x15];
      }
      else {
        puVar3 = (uint *)puVar5[0x14];
        puVar2 = puVar5;
      }
      puVar5 = puVar3;
    } while (puVar3 != (uint *)0x0);
    puVar5 = puVar2;
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= uVar6)) goto LAB_00072d08;
  }
  memset(auStack_6c,0,0x48);
  local_b8 = uVar6;
  memcpy(auStack_b4,auStack_6c,0x48);
  FUN_00072b74(auStack_c0,param_1,param_1,puVar5,&local_b8);
  puVar2 = local_bc;
LAB_00072d08:
  if (local_24 == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2 + 1);
}



