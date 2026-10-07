/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3b70 FUN_000b3b70 */

void FUN_000b3b70(undefined4 param_1,int **param_2)

{
  int iVar1;
  void *pvVar2;
  int ****ppppiVar3;
  int iVar4;
  undefined **local_48;
  undefined **local_44;
  int ****local_40 [8];
  char local_20;
  int local_1c;
  
  iVar1 = DAT_000b3bf8;
  iVar4 = DAT_000b3bf4 + 0xb3b7c;
  local_1c = **(int **)(iVar4 + DAT_000b3bf8);
  pvVar2 = operator_new(0x2c);
  local_20 = '\x01';
  local_40[0] = (int ****)0x0;
  if (*(char *)(param_2 + 8) != '\0') {
    param_2 = (int **)*param_2;
  }
  if (param_2 != (int **)0x0) {
    (**(code **)((int)*param_2 + 8))(param_2,local_40);
  }
  *(undefined ****)pvVar2 = &local_48;
  *(undefined ****)((int)pvVar2 + 4) = &local_48;
  *(undefined *)((int)pvVar2 + 0x28) = 1;
  *(undefined4 *)((int)pvVar2 + 8) = 0;
  ppppiVar3 = (int ****)local_40;
  if (local_20 != '\0') {
    ppppiVar3 = local_40[0];
  }
  local_48 = (undefined **)&local_48;
  local_44 = (undefined **)&local_48;
  if (ppppiVar3 != (int ****)0x0) {
    local_48 = (undefined **)&local_48;
    local_44 = (undefined **)&local_48;
    (*(code *)(*ppppiVar3)[2])(ppppiVar3,(int)pvVar2 + 8);
  }
  FUN_0009fd54(local_40);
  if (local_1c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar2);
}



