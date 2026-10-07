/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000696e4 FUN_000696e4 */

void FUN_000696e4(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  undefined4 local_38;
  void *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  sVar4 = 0;
  local_28 = 0;
  local_24 = 0;
  local_38 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  sVar1 = strlen(param_2);
  FUN_00017cb8(&local_38,sVar1);
  if (sVar1 != 0) {
    iVar3 = (local_30 + -1) - (int)local_34;
    if (iVar3 != 0) {
      do {
        iVar3 = iVar3 + -1;
        *(char *)((int)local_34 + sVar4) = param_2[sVar4];
        if (iVar3 == 0) break;
        sVar4 = sVar4 + 1;
      } while (sVar1 != sVar4);
    }
    local_2c = (int)local_34 + sVar1;
  }
  iVar3 = *(int *)(param_1 + 0x154);
  local_28 = param_3;
  local_24 = param_4;
  piVar2 = (int *)FUN_00069574(param_1 + 0x150,&local_38);
  *piVar2 = iVar3;
  piVar2[1] = *(int *)(iVar3 + 4);
  *(int **)(iVar3 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  if (local_34 != (void *)0x0) {
    operator_delete(local_34);
  }
  return;
}



