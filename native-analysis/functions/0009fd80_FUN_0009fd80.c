/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009fd80 FUN_0009fd80 */

undefined4 FUN_0009fd80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar1 == iVar2) {
    uVar3 = (**(code **)(*param_1 + 0x14))(param_1,param_2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



