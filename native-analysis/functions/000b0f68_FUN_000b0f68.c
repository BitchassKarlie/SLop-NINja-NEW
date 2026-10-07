/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b0f68 FUN_000b0f68 */

void FUN_000b0f68(int **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int *piVar5;
  int ****ppppiVar6;
  int iVar7;
  undefined4 local_4c;
  int ****local_48 [8];
  char local_28;
  int local_24;
  
  iVar2 = DAT_000b102c;
  iVar1 = DAT_000b1028;
  iVar7 = DAT_000b1024 + 0xb0f78;
  local_24 = **(int **)(iVar7 + DAT_000b1028);
  FUN_000a7488(*(undefined4 *)(iVar7 + DAT_000b102c));
  uVar3 = FUN_000a05a8();
  local_4c = *(undefined4 *)(DAT_000b1030 + 0xb0f98);
  ppiVar4 = (int **)FUN_000a223c(uVar3,&local_4c);
  local_28 = '\x01';
  local_48[0] = (int ****)0x0;
  if (*(char *)(param_1 + 8) != '\0') {
    param_1 = (int **)*param_1;
  }
  if (param_1 != (int **)0x0) {
    (**(code **)((int)*param_1 + 8))(param_1,local_48);
  }
  piVar5 = (int *)operator_new(0x28);
  *piVar5 = DAT_000b1034 + 0xb0fd8;
  *(undefined *)(piVar5 + 9) = 1;
  piVar5[1] = 0;
  ppppiVar6 = (int ****)local_48;
  if (local_28 != '\0') {
    ppppiVar6 = local_48[0];
  }
  if (ppppiVar6 != (int ****)0x0) {
    (*(code *)(*ppppiVar6)[2])(ppppiVar6,piVar5 + 1);
  }
  if (*ppiVar4 != (int *)0x0) {
    operator_delete(*ppiVar4);
    *ppiVar4 = (int *)0x0;
  }
  *ppiVar4 = piVar5;
  FUN_000ae878(local_48);
  FUN_000a748c(*(undefined4 *)(iVar7 + iVar2));
  if (local_24 == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



