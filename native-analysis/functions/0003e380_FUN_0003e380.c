/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e380 FUN_0003e380 */

void FUN_0003e380(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auStack_424 [1024];
  int local_24;
  
  iVar1 = DAT_0003e408;
  iVar3 = DAT_0003e404 + 0x3e390;
  local_24 = **(int **)(iVar3 + DAT_0003e408);
  if ((*(char *)(param_1 + 0x61) != '\0') && (*(int *)(param_1 + 0x284) == 0)) {
    uVar4 = *(undefined4 *)(param_1 + 0x288);
    uVar5 = *(undefined4 *)(DAT_0003e40c + 0x3e3ca);
    uVar2 = FUN_0002f60c(0);
    FUN_0008f060(auStack_424,0x400,uVar5,param_1 + 100,uVar2);
    uVar2 = FUN_000a3a68();
    FUN_000a3720(uVar2,uVar4,auStack_424);
    *(undefined *)(param_1 + 0x62) = 0;
    *(undefined4 *)(param_1 + 0x284) = 0xf;
  }
  if (local_24 == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



