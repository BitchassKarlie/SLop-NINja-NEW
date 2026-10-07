/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005679c FUN_0005679c */

void FUN_0005679c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(DAT_000567e8 + 0x567a4);
  iVar4 = *piVar5;
  if (iVar4 != 0) {
    iVar2 = iVar4 + *(int *)(iVar4 + -4) * 0x88;
    iVar3 = iVar2;
    if (iVar4 != iVar2) {
      do {
        puVar1 = (undefined4 *)(iVar2 + -0x88);
        iVar2 = iVar2 + -0x88;
        (**(code **)*puVar1)(iVar2);
        iVar3 = *piVar5;
      } while (iVar3 != iVar2);
    }
    operator_delete__((void *)(iVar3 + -8));
    *(undefined4 *)(DAT_000567ec + 0x567dc) = 0;
  }
  *(undefined4 *)((int)&DAT_000567ec + DAT_000567f0) = 0;
  return;
}



