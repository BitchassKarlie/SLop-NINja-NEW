/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c244 FUN_0001c244 */

int FUN_0001c244(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined local_24 [16];
  
  if (((param_2 != 0) && (-1 < param_3)) && (param_3 < *(int *)(param_1 + 0x1020))) {
    iVar2 = *(int *)(param_1 + 0x1010) + param_3 * 0xc;
    iVar3 = *(int *)(iVar2 + 4);
    piVar1 = (int *)operator_new(0xc);
    *piVar1 = (int)local_24;
    piVar1[1] = (int)local_24;
    piVar1[2] = param_2;
    *piVar1 = iVar3;
    piVar1[1] = *(int *)(iVar3 + 4);
    *(int **)(iVar3 + 4) = piVar1;
    *(int **)piVar1[1] = piVar1;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    *(char *)(param_2 + 0x35) = (char)param_3;
    *(undefined *)(param_2 + 0x34) = 0;
  }
  return param_2;
}



