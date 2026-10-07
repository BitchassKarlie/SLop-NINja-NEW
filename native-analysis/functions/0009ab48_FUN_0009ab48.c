/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ab48 FUN_0009ab48 */

undefined4 * FUN_0009ab48(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar1 = DAT_0009ab90;
  iVar3 = DAT_0009ab88 + 0x9ab56;
  *param_1 = &UNK_0009abb0 + DAT_0009ab8c;
  pvVar2 = (void *)param_1[5];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[4];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  return param_1;
}



