/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009bf5c FUN_0009bf5c */

void FUN_0009bf5c(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  
  iVar1 = FUN_0009a438(param_1 + 0x2c);
  if (iVar1 == 0) {
    pvVar3 = operator_new(0x24);
    FUN_0009bd50(pvVar3,param_2,param_3);
    if (pvVar3 == (void *)0x0) {
      iVar1 = FUN_0009a138(param_1);
      if (iVar1 != 0) {
        FUN_0009d4f8(iVar1,3,0,0,0);
      }
    }
    else {
      *(int *)((int)pvVar3 + 0x20) = param_1 + 0x2c;
      *(undefined4 *)((int)pvVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x48);
      *(void **)(*(int *)(param_1 + 0x48) + 0x20) = pvVar3;
      *(void **)(param_1 + 0x48) = pvVar3;
    }
  }
  else {
    sVar2 = strlen(param_3);
    FUN_00099d70(iVar1 + 0x18,param_3,sVar2);
  }
  return;
}



