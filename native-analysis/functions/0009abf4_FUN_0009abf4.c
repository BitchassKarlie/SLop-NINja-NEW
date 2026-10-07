/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009abf4 FUN_0009abf4 */

int * FUN_0009abf4(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  
  iVar1 = DAT_0009ac30;
  *param_1 = DAT_0009ac2c + 0x9ac04;
  piVar2 = (int *)param_1[6];
  while (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    piVar2 = (int *)piVar2[10];
    (**(code **)(iVar4 + 4))();
  }
  pvVar3 = (void *)param_1[8];
  if ((pvVar3 != *(void **)(iVar1 + 0x9ac08 + DAT_0009ac34)) && (pvVar3 != (void *)0x0)) {
    operator_delete__(pvVar3);
  }
  return param_1;
}



