/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a138 FUN_0009a138 */

undefined4 FUN_0009a138(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
        return uVar2;
      }
      param_1 = (int *)param_1[4];
    } while (param_1 != (int *)0x0);
  }
  return 0;
}



