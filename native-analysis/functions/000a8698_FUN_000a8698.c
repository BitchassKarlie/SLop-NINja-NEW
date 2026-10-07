/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8698 FUN_000a8698 */

void FUN_000a8698(int param_1,undefined *param_2)

{
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  
  memcpy(param_2,*(void **)(param_1 + 4),4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  if (*(int *)(param_1 + 0xc) != 0x4030201) {
    local_14 = param_2[3];
    local_13 = param_2[2];
    local_12 = param_2[1];
    local_11 = *param_2;
    memcpy(param_2,&local_14,4);
  }
  return;
}



