/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084cd8 FUN_00084cd8 */

void FUN_00084cd8(int param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  
  FUN_00017d64(param_1,0);
  if (param_2 == (char *)0x0) {
    if (*(void **)(param_1 + 4) == (void *)0x0) {
      return;
    }
    operator_delete__(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  sVar1 = strlen(param_2);
  __s = *(char **)(param_1 + 4);
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    if (sVar2 == sVar1) goto LAB_00084d0e;
    operator_delete__(__s);
  }
  __s = (char *)operator_new__(sVar1 + 1);
  *(char **)(param_1 + 4) = __s;
LAB_00084d0e:
  strcpy(__s,param_2);
  return;
}



