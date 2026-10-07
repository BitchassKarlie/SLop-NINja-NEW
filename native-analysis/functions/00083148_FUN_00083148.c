/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00083148 FUN_00083148 */

void FUN_00083148(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *__format;
  int iVar6;
  int iVar7;
  char acStack_12c [256];
  int local_2c;
  
  iVar2 = DAT_00083294;
  iVar1 = DAT_0008328c;
  iVar4 = DAT_00083288 + 0x83158;
  local_2c = **(int **)(iVar4 + DAT_0008328c);
  if (*(char *)(DAT_00083290 + 0x83166) != '\0') {
    FUN_000993f8(*(int *)(iVar4 + DAT_00083294) + param_1 * 0x50 + 0x5ac);
  }
  uVar3 = (uint)*(byte *)(*(int *)(iVar4 + iVar2) + 3);
  if (uVar3 - 1 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00083178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_00083178::switchdataD_0008317c + (uint)*(byte *)(uVar3 + 0x8317b) * 2))();
    return;
  }
  iVar7 = DAT_000832ac + 0x83224;
  iVar6 = 0;
  if (param_1 == 0) {
    iVar6 = DAT_0008329c + 0x831b8;
  }
  sprintf(acStack_12c,(char *)(DAT_000832a0 + 0x831c2),iVar6);
  __format = (char *)(DAT_000832a4 + 0x831d8);
  iVar5 = *(int *)(iVar4 + iVar2) + param_1 * 0x50 + 0x5ac;
  FUN_00099590(iVar5,acStack_12c);
  sprintf(acStack_12c,__format,iVar6,iVar7);
  iVar2 = FUN_000994e8(iVar5,acStack_12c);
  if (iVar2 == 0) {
    sprintf(acStack_12c,__format,iVar6,DAT_000832a8 + 0x83200);
    FUN_000994e8(iVar5,acStack_12c);
  }
  if (local_2c != **(int **)(iVar4 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



