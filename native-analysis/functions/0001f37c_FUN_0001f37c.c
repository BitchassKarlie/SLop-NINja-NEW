/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001f37c FUN_0001f37c */

void FUN_0001f37c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined auStack_74 [40];
  undefined auStack_4c [40];
  int local_24;
  
  iVar2 = DAT_0001f488;
  iVar1 = DAT_0001f484;
  iVar4 = DAT_0001f480 + 0x1f38a;
  local_24 = **(int **)(iVar4 + DAT_0001f484);
  if (*(char *)(DAT_0001f488 + 0x1fba0) == '\0') {
    uVar3 = FUN_0001e818();
    FUN_0009e838(auStack_4c,DAT_0001f48c + 0x1f3ba);
    FUN_00093c60(&local_78,uVar3,auStack_4c);
    FUN_0001f2f8((int)&DAT_0001fb74 + iVar2,local_78);
    FUN_0001ed98(&local_78);
    FUN_0009e858(auStack_4c);
    uVar3 = FUN_0008f414(DAT_0001f490 + 0x1f3f2);
    *(undefined4 *)((int)&DAT_0001fb7c + iVar2) = uVar3;
    uVar3 = FUN_0001e818();
    FUN_0009e838(auStack_74,DAT_0001f494 + 0x1f402);
    FUN_00093c60(&local_7c,uVar3,auStack_74);
    FUN_0001f2f8((int)&DAT_0001fb78 + iVar2,local_7c);
    FUN_0001ed98(&local_7c);
    FUN_0009e858(auStack_74);
    FUN_0002fa48(&local_80,DAT_0001f498 + 0x1f430);
    FUN_00017d64((int)&DAT_0001fb94 + iVar2,local_80);
    FUN_00017d90(&local_80);
    uVar3 = FUN_0008f414(DAT_0001f49c + 0x1f44a);
    *(undefined4 *)((int)&DAT_0001fb80 + iVar2) = uVar3;
    if (*(int *)((int)&DAT_0001fb74 + iVar2) != 0) {
      FUN_00021db0((int)&DAT_0001fb74 + iVar2);
    }
    if (*(int *)(DAT_0001f4a0 + 0x1fc4a) != 0) {
      FUN_00021db0(DAT_0001f4a0 + 0x1fc4a);
    }
    *(undefined *)(DAT_0001f4a4 + 0x1fc86) = 1;
  }
  if (local_24 == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



