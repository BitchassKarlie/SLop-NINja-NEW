/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a41bc FUN_000a41bc */

void FUN_000a41bc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_000a41f8;
  iVar3 = DAT_000a41f4 + 0xa41c8;
  puVar4 = *(undefined4 **)(iVar3 + DAT_000a41f8);
  *puVar4 = param_1;
  if (param_2 != 0) {
    local_20 = param_1;
    local_1c = param_2;
    piVar2 = (int *)FUN_000a412c(&local_20);
    (**(code **)(*piVar2 + 8))(piVar2,*puVar4,param_3);
  }
  **(undefined4 **)(iVar3 + iVar1) = 0;
  return;
}



