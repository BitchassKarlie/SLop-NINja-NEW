/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00068c14 FUN_00068c14 */

int * FUN_00068c14(int *param_1)

{
  int **ppiVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_20;
  undefined4 local_1c;
  
  iVar2 = param_1[0x1c];
  iVar3 = DAT_00068cc4 + 0x68c22;
  *param_1 = DAT_00068cc0 + 0x68c28;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x74) != 0) {
      FUN_00023b48(*(int *)(iVar2 + 0x74),0);
      *(undefined *)(param_1[0x1c] + 0x27) = 1;
      *(undefined4 *)(*(int *)(param_1[0x1c] + 0x74) + 0x108) = 0;
      iVar2 = param_1[0x1c];
    }
    local_20 = DAT_00068cc8 + 0x68c5a;
    local_1c = *(undefined4 *)(iVar3 + DAT_00068ccc);
    (**(code **)(DAT_00068cc8 + 0x68c62))(&local_20,iVar2 + 0x2c);
    local_20 = DAT_00068cd0 + 0x68c6e;
  }
  piVar5 = (int *)param_1[0x69];
  ppiVar1 = (int **)*piVar5;
  while( true ) {
    if ((int **)piVar5 == ppiVar1) {
      if (param_1[0x1d] != 0) {
        *(undefined *)(param_1[0x1d] + 0x27) = 1;
      }
      FUN_00068b14(param_1 + 0x68);
      FUN_0001d358(param_1 + 0x1e);
      FUN_0004a8a4(param_1);
      return param_1;
    }
    if ((int **)param_1[0x69] == ppiVar1) break;
    piVar4 = *ppiVar1;
    *ppiVar1[1] = (int)piVar4;
    *(int **)((int)*ppiVar1 + 4) = ppiVar1[1];
    FUN_00068af8(param_1 + 0x68);
    param_1[0x6a] = param_1[0x6a] + -1;
    ppiVar1 = (int **)piVar4;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



