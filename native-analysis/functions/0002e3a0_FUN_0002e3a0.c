/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002e3a0 FUN_0002e3a0 */

void FUN_0002e3a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = DAT_0002e3c8;
  uVar2 = FUN_0002e348();
  FUN_0009191c(uVar2,0);
  piVar3 = *(int **)(iVar1 + 0x2e3ae);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
    *(int **)(iVar1 + 0x2e3ae) = (int *)0x0;
  }
  *(undefined *)((int)&DAT_0002e3c8 + DAT_0002e3cc + 2) = 0;
  return;
}



