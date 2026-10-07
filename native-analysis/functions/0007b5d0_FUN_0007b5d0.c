/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b5d0 FUN_0007b5d0 */

void FUN_0007b5d0(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined auStack_7c [96];
  int local_1c;
  
  iVar1 = DAT_0007b664;
  iVar7 = DAT_0007b660 + 0x7b5de;
  local_1c = **(int **)(iVar7 + DAT_0007b664);
  if (*(uint **)(param_1 + 0x30) != (uint *)0x0) {
    puVar2 = (uint *)0x0;
    puVar6 = *(uint **)(param_1 + 0x30);
    do {
      if (*puVar6 < param_2) {
        puVar5 = (uint *)puVar6[0x1b];
      }
      else {
        puVar5 = (uint *)puVar6[0x1a];
        puVar2 = puVar6;
      }
      puVar6 = puVar5;
    } while (puVar5 != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= param_2)) {
      FUN_0007b468(auStack_7c,puVar2 + 1);
      FUN_0008107c(auStack_7c);
      iVar8 = *(int *)(param_1 + 0x40);
      piVar4 = (int *)FUN_0007b570(param_1 + 0x3c,auStack_7c);
      *piVar4 = iVar8;
      piVar4[1] = *(int *)(iVar8 + 4);
      *(int **)(iVar8 + 4) = piVar4;
      *(int **)piVar4[1] = piVar4;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      FUN_00082438(auStack_7c);
      uVar3 = 1;
      goto LAB_0007b60a;
    }
  }
  uVar3 = 0;
LAB_0007b60a:
  if (local_1c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



