/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000308ac FUN_000308ac */

void FUN_000308ac(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auStack_a4 [128];
  int local_24;
  
  iVar1 = DAT_00030940;
  iVar3 = DAT_0003093c + 0x308ba;
  local_24 = **(int **)(iVar3 + DAT_00030940);
  if (*(char *)(DAT_00030944 + 0x308ed) == '\0') {
    iVar4 = 1;
    *(undefined *)(DAT_00030944 + 0x308ed) = 1;
    puVar2 = (undefined4 *)FUN_000a5f28();
    iVar5 = DAT_0003094c + 0x308f6;
    iVar6 = DAT_00030950 + 0x308f8;
    (**(code **)*puVar2)(puVar2,DAT_00030948 + 0x308f0);
    (**(code **)*puVar2)(puVar2,DAT_00030954 + 0x30908);
    (**(code **)*puVar2)(puVar2,DAT_00030958 + 0x30914);
    do {
      FUN_0008f060(auStack_a4,0x80,iVar5,iVar6,iVar4);
      iVar4 = iVar4 + 1;
      (**(code **)*puVar2)(puVar2,auStack_a4);
    } while (iVar4 != 4);
  }
  if (local_24 != **(int **)(iVar3 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



