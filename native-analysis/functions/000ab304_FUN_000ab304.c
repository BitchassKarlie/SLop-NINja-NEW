/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab304 FUN_000ab304 */

void FUN_000ab304(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_3 = 0;
  *param_4 = 0;
  iVar1 = FUN_000ab2b8();
  if (iVar1 != 0) {
    iVar2 = FUN_000ab3d8(*(undefined4 *)(param_1 + 8));
    *param_3 = iVar2 + *(int *)(iVar1 + 8);
    *param_4 = *(undefined4 *)(iVar1 + 4);
  }
  return;
}



