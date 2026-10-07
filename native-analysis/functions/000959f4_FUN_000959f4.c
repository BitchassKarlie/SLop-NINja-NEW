/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000959f4 FUN_000959f4 */

void FUN_000959f4(int param_1,undefined4 param_2,char *param_3)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  undefined4 local_2c;
  undefined auStack_28 [4];
  void *local_24;
  int local_20;
  int local_1c;
  
  sVar8 = 0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_2c = param_2;
  sVar2 = strlen(param_3);
  FUN_00017cb8(auStack_28,sVar2);
  if (sVar2 != 0) {
    iVar4 = (local_20 + -1) - (int)local_24;
    if (iVar4 != 0) {
      do {
        iVar4 = iVar4 + -1;
        *(char *)((int)local_24 + sVar8) = param_3[sVar8];
        if (iVar4 == 0) break;
        sVar8 = sVar8 + 1;
      } while (sVar2 != sVar8);
    }
    local_1c = (int)local_24 + sVar2;
  }
  iVar4 = FUN_00095988(param_1 + 0x154,&local_2c);
  pvVar1 = local_24;
  iVar7 = local_1c - (int)local_24;
  FUN_00017cb8(iVar4,iVar7);
  if (iVar7 != 0) {
    iVar5 = *(int *)(iVar4 + 4);
    iVar3 = (*(int *)(iVar4 + 8) + -1) - iVar5;
    if (iVar3 != 0) {
      iVar6 = 0;
      do {
        iVar3 = iVar3 + -1;
        *(undefined *)(iVar5 + iVar6) = *(undefined *)((int)pvVar1 + iVar6);
        if (iVar3 == 0) break;
        iVar6 = iVar6 + 1;
      } while (iVar7 != iVar6);
      iVar5 = *(int *)(iVar4 + 4);
    }
    *(int *)(iVar4 + 0xc) = iVar5 + iVar7;
  }
  if (local_24 != (void *)0x0) {
    operator_delete(local_24);
  }
  return;
}



