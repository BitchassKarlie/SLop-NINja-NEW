/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004b2a0 FUN_0004b2a0 */

void FUN_0004b2a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  ushort local_14 [2];
  
  if (*(int *)(param_1 + 0x98) < *(int *)(param_1 + 0x94)) {
    local_14[0] = (ushort)(byte)param_2;
    strcat(*(char **)(param_1 + 0x9c),(char *)local_14);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x98) * 4) = param_3;
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    cVar1 = *(char *)(param_1 + 0x90);
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x98) + -1) = (byte)param_2;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + (*(int *)(param_1 + 0x98) + -1) * 4) = param_3;
    cVar1 = *(char *)(param_1 + 0x90);
  }
  if (cVar1 == '\0') {
    piVar2 = (int *)(param_1 + 0x70);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x70);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,param_2);
  }
  return;
}



