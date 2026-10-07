/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00021610 FUN_00021610 */

void FUN_00021610(undefined *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00021650;
  if (*(int *)(DAT_00021650 + 0x2161a) == param_2) {
    *param_1 = *(undefined *)(DAT_00021650 + 0x2161e);
    param_1[1] = *(undefined *)(iVar1 + 0x2161f);
    param_1[2] = *(undefined *)(iVar1 + 0x21620);
    param_1[3] = *(undefined *)(iVar1 + 0x21621);
  }
  else {
    iVar1 = param_2 * 0x2ec + *(int *)(DAT_00021650 + 0x21616);
    *param_1 = *(undefined *)(iVar1 + 0x200);
    param_1[1] = *(undefined *)(iVar1 + 0x201);
    param_1[2] = *(undefined *)(iVar1 + 0x202);
    param_1[3] = *(undefined *)(iVar1 + 0x203);
  }
  return;
}



