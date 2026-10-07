/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030758 FUN_00030758 */

void FUN_00030758(void)

{
  int *piVar1;
  int iVar2;
  undefined auStack_2c [28];
  
  iVar2 = DAT_000307c8 + 0x30768;
  if (*(int **)(DAT_000307c4 + 0x30764) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_000307c4 + 0x30764) + 0x24))();
  }
  iVar2 = *(int *)(iVar2 + DAT_000307cc);
  *(undefined *)(iVar2 + 0x174) = 1;
  *(undefined *)(iVar2 + 0x19d) = 0;
  *(undefined *)(iVar2 + 0x19e) = 1;
  FUN_0006f3bc(auStack_2c,1);
  piVar1 = (int *)FUN_000a3a68();
  (**(code **)(*piVar1 + 0x10))(piVar1,auStack_2c,1);
  if (*(char *)(iVar2 + 0x19f) == '\0') {
    *(undefined4 *)(iVar2 + 0x1a4) = DAT_000307c0;
  }
  else {
    FUN_000a3a68();
    FUN_00094cc8();
    FUN_000a3a68();
    FUN_00094cc0();
  }
  return;
}



