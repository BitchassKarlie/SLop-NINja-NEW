/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6b18 FUN_000b6b18 */

undefined4
FUN_000b6b18(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)*param_1)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 4))(param_1,param_3,param_5);
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



