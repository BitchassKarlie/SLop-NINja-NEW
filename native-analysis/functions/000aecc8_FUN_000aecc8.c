/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aecc8 FUN_000aecc8 */

undefined4 *
FUN_000aecc8(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_4;
  uVar2 = param_3;
  iVar4 = param_4;
  if (param_4 != param_6) {
    do {
      pvVar1 = *(void **)(iVar3 + 8);
      *(void **)(iVar3 + 0xc) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      iVar3 = iVar3 + 0x14;
    } while (iVar3 != param_6);
    uVar2 = FUN_000aec54(param_2,param_4,iVar3,*(undefined4 *)(param_2 + 8),uVar2,iVar4);
    *(undefined4 *)(param_2 + 8) = uVar2;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



