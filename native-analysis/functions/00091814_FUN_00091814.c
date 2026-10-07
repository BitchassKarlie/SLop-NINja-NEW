/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00091814 FUN_00091814 */

int FUN_00091814(int param_1,int param_2)

{
  int iVar1;
  undefined auStack_20 [16];
  
  while ((iVar1 = *(int *)(param_2 + 0x18), iVar1 == 0xd || iVar1 == 9 ||
         (iVar1 == 0x3000 || iVar1 == 0x20))) {
    FUN_0009eaf4(param_2,1);
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (iVar1 == 10)) {
    FUN_0009eaf4(param_2,1);
    iVar1 = *(int *)(param_2 + 0x18);
  }
  if (iVar1 == 0) {
    FUN_0009eb8c(param_1,0);
    FUN_0009eb8c(auStack_20,0);
    FUN_0009eb24(param_1,auStack_20);
  }
  else {
    FUN_0009eabc(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  return param_1;
}



