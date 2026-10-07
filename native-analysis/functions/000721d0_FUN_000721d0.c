/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000721d0 FUN_000721d0 */

void FUN_000721d0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined auStack_138 [4];
  uint *local_134;
  uint uStack_130;
  undefined auStack_12c [132];
  undefined auStack_a8 [132];
  int local_24;
  
  iVar1 = DAT_0007226c;
  iVar4 = DAT_00072268 + 0x721de;
  local_24 = **(int **)(iVar4 + DAT_0007226c);
  puVar5 = *(uint **)(param_1 + 4);
  if (puVar5 == (uint *)0x0) {
    uVar6 = *param_2;
  }
  else {
    uVar6 = *param_2;
    puVar2 = (uint *)0x0;
    do {
      if (*puVar5 < uVar6) {
        puVar3 = (uint *)puVar5[0x24];
      }
      else {
        puVar3 = (uint *)puVar5[0x23];
        puVar2 = puVar5;
      }
      puVar5 = puVar3;
    } while (puVar3 != (uint *)0x0);
    puVar5 = puVar2;
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= uVar6)) goto LAB_0007224c;
  }
  memset(auStack_a8,0,0x84);
  uStack_130 = uVar6;
  memcpy(auStack_12c,auStack_a8,0x84);
  FUN_0007208c(auStack_138,param_1,param_1,puVar5,&uStack_130);
  puVar2 = local_134;
LAB_0007224c:
  if (local_24 == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2 + 1);
}



