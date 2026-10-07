/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007c2a4 FUN_0007c2a4 */

void FUN_0007c2a4(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  undefined auStack_f0 [4];
  uint *local_ec;
  uint local_e8;
  undefined auStack_e4 [96];
  undefined auStack_84 [96];
  int local_24;
  
  iVar1 = DAT_0007c354;
  iVar4 = DAT_0007c350 + 0x7c2b2;
  local_24 = **(int **)(iVar4 + DAT_0007c354);
  puVar5 = *(uint **)(param_1 + 4);
  puVar2 = puVar5;
  if (puVar5 != (uint *)0x0) {
    puVar2 = (uint *)0x0;
    do {
      if (*puVar5 < *param_2) {
        puVar3 = (uint *)puVar5[0x1b];
      }
      else {
        puVar3 = (uint *)puVar5[0x1a];
        puVar2 = puVar5;
      }
      puVar5 = puVar3;
    } while (puVar3 != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= *param_2)) goto LAB_0007c334;
  }
  FUN_00080ea8(auStack_84);
  local_e8 = *param_2;
  FUN_0007b468(auStack_e4,auStack_84);
  FUN_0007c168(auStack_f0,param_1,param_1,puVar2,&local_e8);
  FUN_00082438(auStack_e4);
  FUN_00082438(auStack_84);
  puVar2 = local_ec;
LAB_0007c334:
  if (local_24 == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2 + 1);
}



