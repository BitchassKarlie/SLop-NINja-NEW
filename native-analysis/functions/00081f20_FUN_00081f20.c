/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00081f20 FUN_00081f20 */

void FUN_00081f20(char *param_1,undefined4 param_2)

{
  char *__src;
  int iVar1;
  double local_18;
  
  __src = (char *)FUN_0009a4a0(param_2,DAT_00081f78 + 0x81f30);
  if (__src != (char *)0x0) {
    strcpy(param_1,__src);
  }
  iVar1 = FUN_0009a884(param_2,DAT_00081f7c + 0x81f48,&local_18);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x20) = (float)local_18;
  }
  iVar1 = FUN_0009a884(param_2,DAT_00081f80 + 0x81f62,&local_18);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x24) = (float)local_18;
  }
  return;
}



