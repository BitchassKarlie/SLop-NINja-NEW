/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac59c FUN_000ac59c */

int FUN_000ac59c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
    }
    iVar1 = zip_fopen_index(iVar1,*(undefined4 *)(param_2 + 0xc),8);
    *param_1 = iVar1;
  }
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



