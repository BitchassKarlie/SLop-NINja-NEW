/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac4cc FUN_000ac4cc */

int * FUN_000ac4cc(int param_1,int param_2)

{
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined auStack_10 [4];
  int *local_c;
  
  local_14 = *(undefined4 *)(param_1 + 4);
  local_1c = *(undefined4 *)(param_1 + 8);
  local_24 = param_2;
  local_20 = param_1;
  local_18 = param_1;
  FUN_000ac474(auStack_10,param_1,local_14,param_1,local_1c,&local_24,0);
  if ((*(int **)(param_1 + 8) == local_c) || (local_24 != *local_c)) {
    local_c = (int *)0x0;
  }
  return local_c;
}



