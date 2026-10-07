/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000989fc FUN_000989fc */

void FUN_000989fc(int param_1,undefined4 param_2)

{
  FUN_000987fc(param_1 + 4);
  **(undefined **)(param_1 + 0xc) = (char)((uint)param_2 >> 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_000987fc(param_1 + 4);
  **(undefined **)(param_1 + 0xc) = (char)param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



