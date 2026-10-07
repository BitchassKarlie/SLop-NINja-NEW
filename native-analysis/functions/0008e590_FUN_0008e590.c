/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e590 FUN_0008e590 */

void FUN_0008e590(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = DAT_0008e5b4;
  pvVar2 = *(void **)(DAT_0008e5b4 + 0x8e59c);
  if (pvVar2 != (void *)0x0) {
    FUN_0009372c(pvVar2);
    operator_delete(pvVar2);
    *(undefined4 *)(iVar1 + 0x8e59c) = 0;
  }
  *(undefined4 *)(DAT_0008e5b8 + 0x8e5b2) = 0;
  return;
}



