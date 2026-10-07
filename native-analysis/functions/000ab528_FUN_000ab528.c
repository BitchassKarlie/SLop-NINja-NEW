/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab528 FUN_000ab528 */

undefined4 FUN_000ab528(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_0009e838(param_1,0);
  uVar1 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3) * -0x33333333;
  if ((param_3 < uVar1) && (param_4 != 0)) {
    uVar1 = uVar1 - param_3;
    if (param_4 < uVar1) {
      uVar1 = param_3 + param_4;
    }
    else {
      uVar1 = param_3 + uVar1;
    }
    iVar2 = param_3 * 0x28;
    if (param_3 < uVar1) {
      do {
        param_3 = param_3 + 1;
        FUN_0009e714(param_1,*(int *)(param_2 + 4) + iVar2);
        if (param_3 < uVar1) {
          FUN_0009e750(param_1,0x2f);
        }
        iVar2 = iVar2 + 0x28;
      } while (param_3 < uVar1);
    }
  }
  return param_1;
}



