/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000694a4 FUN_000694a4 */

void FUN_000694a4(int param_1)

{
  int iVar1;
  int *piVar2;
  int ****ppppiVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_44;
  int ****local_40 [8];
  char local_20;
  int local_1c;
  
  iVar1 = DAT_00069564;
  iVar4 = DAT_00069560 + 0x694b2;
  local_1c = **(int **)(iVar4 + DAT_00069564);
  if (*(int *)(param_1 + 0x9c) == 1) {
    *(undefined4 *)(param_1 + 0x9c) = 3;
    piVar2 = (int *)(param_1 + 0x78);
    if (*(char *)(param_1 + 0x98) != '\0') {
      piVar2 = *(int **)(param_1 + 0x78);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    iVar5 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1dc);
    if (iVar5 != 0) {
      local_48 = DAT_00069568 + 0x69510;
      local_44 = DAT_0006956c + 0x69514;
      local_20 = '\x01';
      local_40[0] = (int ****)0x0;
      (**(code **)(DAT_00069568 + 0x69518))(&local_48,local_40);
      ppppiVar3 = (int ****)local_40;
      if (local_20 != '\0') {
        ppppiVar3 = local_40[0];
      }
      if (ppppiVar3 != (int ****)0x0) {
        (*(code *)(*ppppiVar3)[2])(ppppiVar3,iVar5 + 0x7c);
      }
      FUN_0001d358(local_40);
      local_48 = DAT_00069570 + 0x69548;
      iVar5 = *(int *)(*(int *)(param_1 + 0x70) + 0x74);
      if (iVar5 != 0) {
        FUN_000231b4(iVar5,0);
      }
    }
  }
  if (local_1c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



