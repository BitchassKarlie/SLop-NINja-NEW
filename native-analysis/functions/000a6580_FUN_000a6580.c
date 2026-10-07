/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6580 FUN_000a6580 */

longlong FUN_000a6580(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                     undefined4 param_5,uint param_6,uint param_7)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2ac))(param_1,param_5);
  param_6 = param_6 & ~((int)param_6 >> 0x1f);
  uVar3 = iVar1 - param_6;
  if ((int)param_7 <= (int)uVar3) {
    uVar3 = param_7;
  }
  pvVar2 = operator_new__(uVar3);
  iVar1 = (**(code **)(*param_3 + 0x38))(param_3,pvVar2,uVar3);
  (**(code **)(*param_1 + 0x340))(param_1,param_5,param_6,iVar1,pvVar2);
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  return (longlong)iVar1;
}



