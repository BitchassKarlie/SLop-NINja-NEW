/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004cbb0 FUN_0004cbb0 */

void FUN_0004cbb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0005ff20();
  if (((*(char *)(param_1 + 0xf8) == '\0') && (*(int *)(param_1 + 0xfc) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0xfc) + 0xe) != '\0')) {
    FUN_0004ca94(param_1);
    iVar2 = param_1 + 0x100;
    if (*(char *)(param_1 + 0x120) != '\0') {
      iVar2 = *(int *)(param_1 + 0x100);
    }
    if (iVar2 != 0) {
      piVar1 = (int *)(param_1 + 0x100);
      if (*(char *)(param_1 + 0x120) != '\0') {
        piVar1 = *(int **)(param_1 + 0x100);
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))();
      }
    }
    *(undefined *)(param_1 + 0xf8) = 1;
  }
  return;
}



