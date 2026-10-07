/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093064 FUN_00093064 */

void FUN_00093064(int *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  
  if ((*param_1 == 0) && (ppvVar1 = (void **)param_1[2], ppvVar1 != (void **)0x0)) {
    ppvVar2 = (void **)*ppvVar1;
    operator_delete__(ppvVar1);
    param_1[2] = (int)ppvVar2;
    while (ppvVar2 != (void **)0x0) {
      pvVar3 = *ppvVar2;
      operator_delete__(ppvVar2);
      param_1[2] = (int)pvVar3;
      ppvVar2 = (void **)pvVar3;
    }
  }
  param_1[2] = 0;
  return;
}



