/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009aa48 FUN_0009aa48 */

undefined4 FUN_0009aa48(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2[5] == 0) {
    iVar1 = FUN_0009a138();
    if (iVar1 != 0) {
      uVar2 = FUN_0009a138(param_1);
      FUN_0009d4f8(uVar2,0x10,0,0,0);
      return 0;
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x40))(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0009a9fc(param_1,iVar1);
      return uVar2;
    }
  }
  return 0;
}



