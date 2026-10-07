/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af7cc FUN_000af7cc */

undefined4 * FUN_000af7cc(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 local_14 [2];
  
  if (*(char *)(param_2 + 0x24) == '\0') {
    piVar1 = (int *)(param_2 + 4);
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  if (piVar1 == (int *)0x0) {
    local_14[0] = 0;
  }
  else {
    (**(code **)(*piVar1 + 0xc))(local_14);
  }
  *param_1 = 0;
  FUN_000aea48(param_1,local_14[0]);
  FUN_00093b40(local_14);
  return param_1;
}



