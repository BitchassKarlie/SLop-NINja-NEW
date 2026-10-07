/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b815c FUN_000b815c */

void FUN_000b815c(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = param_2[2] + -1;
  param_2[2] = iVar1;
  if ((iVar1 < 0) && ((iVar1 < (int)param_2[6] || ((param_1 & 0xff) == 10)))) {
    __swbuf(param_1 & 0xff,param_2);
    iVar1 = param_2[2] + -1;
    param_2[2] = iVar1;
  }
  else {
    puVar2 = (undefined *)*param_2;
    *puVar2 = (char)param_1;
    *param_2 = puVar2 + 1;
    iVar1 = param_2[2] + -1;
    param_2[2] = iVar1;
  }
  if ((iVar1 < 0) && ((iVar1 < (int)param_2[6] || (param_1 >> 8 == 10)))) {
    __swbuf(param_1 >> 8,param_2);
  }
  else {
    puVar2 = (undefined *)*param_2;
    *puVar2 = (char)(param_1 >> 8);
    *param_2 = puVar2 + 1;
  }
  return;
}



