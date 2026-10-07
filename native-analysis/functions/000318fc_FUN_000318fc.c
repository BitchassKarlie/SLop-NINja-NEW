/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000318fc FUN_000318fc */

void FUN_000318fc(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_00031988 + 0x31904 + DAT_0003198c);
  if (*(char *)(iVar3 + 8) == '\0') {
    *(undefined *)(iVar3 + 8) = 1;
    FUN_00086780();
    FUN_00085b10();
    pvVar1 = operator_new(0x134);
    iVar2 = *(int *)(iVar3 + 0x50);
    FUN_00047588(pvVar1,DAT_00031990 + 0x31934,param_1,param_2,*(undefined4 *)(iVar2 + 0x104),
                 *(undefined4 *)(iVar2 + 0x100),*(undefined4 *)(iVar2 + 0x108),
                 *(undefined4 *)(iVar2 + 0x10c));
    iVar2 = *(int *)(iVar3 + 0x50);
    *(void **)(iVar3 + 0x168) = pvVar1;
    *(undefined4 *)(iVar2 + 0x10c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x108) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x100) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x104) = 0xffffffff;
    (**(code **)(**(int **)(iVar3 + 0x168) + 8))();
    FUN_00049d7c(*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x168),0);
  }
  return;
}



