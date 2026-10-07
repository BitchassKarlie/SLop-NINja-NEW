/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085a70 FUN_00085a70 */

undefined FUN_00085a70(int param_1,int param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + param_2 + 0x25c) == '\0') {
    return 0;
  }
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x24c);
    if (iVar3 == 0) {
LAB_00085a94:
      uVar2 = FUN_0001c940();
      iVar3 = FUN_0001bb84(uVar2,0);
      if ((iVar3 != 0) ||
         ((iVar3 = FUN_0002f5ec(), iVar3 != 0 && (iVar3 = FUN_0001d404(0xffffffff,1), 0 < iVar3))))
      goto LAB_00085aa0;
      iVar3 = FUN_0002f5ec();
      if (iVar3 == 0) {
        uVar2 = FUN_0001c940();
        iVar3 = FUN_0001bb84(uVar2,1);
        if (iVar3 != 0) goto LAB_00085aa0;
      }
    }
    else if (*(char *)(iVar3 + 0x39) != '\0') {
      if (*(char *)(iVar3 + 0x38) != '\0') goto LAB_00085a94;
      iVar3 = FUN_00022444(0xffffffff,0);
      if (0 < iVar3) goto LAB_00085aa0;
      iVar3 = FUN_0001d404(0xffffffff,0);
      if (0 < iVar3) {
        return 1;
      }
    }
LAB_00085acc:
    uVar1 = 0;
    *(undefined *)(param_1 + param_2 + 0x25c) = 0;
  }
  else {
    iVar3 = FUN_00022444(param_2,1);
    if (iVar3 < 1) {
      iVar3 = FUN_0001d404(param_2,1);
      if (0 < iVar3) {
        return 1;
      }
      goto LAB_00085acc;
    }
LAB_00085aa0:
    uVar1 = 1;
  }
  return uVar1;
}



