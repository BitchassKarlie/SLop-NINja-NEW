/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3ac8 FUN_000b3ac8 */

void FUN_000b3ac8(int param_1,undefined4 *param_2)

{
  int **ppiVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_20;
  int **local_1c;
  
  piVar5 = *(int **)(param_1 + 4);
  ppiVar1 = (int **)*piVar5;
  local_20 = param_1;
  while ((int **)piVar5 != ppiVar1) {
    puVar2 = ppiVar1 + 2;
    if (*(char *)(ppiVar1 + 10) != '\0') {
      puVar2 = ppiVar1[2];
    }
    puVar4 = param_2;
    if (*(char *)(param_2 + 8) != '\0') {
      puVar4 = (undefined4 *)*param_2;
    }
    if ((puVar2 == puVar4) ||
       ((puVar4 != (undefined4 *)0x0 && (iVar3 = FUN_000b39c0(), iVar3 != 0)))) {
      local_1c = ppiVar1;
      FUN_000a00dc(&local_20,param_1,local_20,ppiVar1);
      ppiVar1 = local_1c;
    }
    else {
      ppiVar1 = (int **)*ppiVar1;
    }
  }
  return;
}



