/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000743c0 FUN_000743c0 */

void FUN_000743c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int **param_4,
                 uint param_5)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  uint uVar4;
  int **ppiVar5;
  uint uVar6;
  undefined4 local_28;
  int **local_24;
  
  if (1 < param_5) {
    local_28 = *param_2;
    local_24 = (int **)param_2[1];
    uVar6 = param_5 >> 1;
    uVar4 = uVar6;
    do {
      local_24 = (int **)*local_24;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    FUN_000743c0(param_1,param_2,local_28,local_24,uVar6,0);
    FUN_000743c0(param_1,&local_28,param_3,param_4,param_5 - uVar6,0);
    ppiVar5 = (int **)param_2[1];
    ppiVar2 = ppiVar5;
    ppiVar1 = local_24;
    if (local_24 != ppiVar5) {
      do {
        while( true ) {
          local_24 = ppiVar2;
          if (ppiVar1 == param_4) goto joined_r0x0007447a;
          if ((int)ppiVar5[0xd] < (int)ppiVar1[0xd]) break;
          if (ppiVar5 == local_24) {
            param_2[1] = ppiVar1;
            *param_2 = local_28;
          }
          ppiVar3 = (int **)*ppiVar1;
          ppiVar3[1] = ppiVar1[1];
          *ppiVar1[1] = (int)*ppiVar1;
          *ppiVar1 = (int *)ppiVar5;
          ppiVar1[1] = ppiVar5[1];
          ppiVar5[1] = (int *)ppiVar1;
          *ppiVar1[1] = (int)ppiVar1;
          local_24 = (int **)param_2[1];
          ppiVar2 = local_24;
          ppiVar1 = ppiVar3;
          if (ppiVar3 == ppiVar5) goto joined_r0x0007447a;
        }
        ppiVar5 = (int **)*ppiVar5;
        ppiVar2 = local_24;
      } while (ppiVar1 != ppiVar5);
    }
joined_r0x0007447a:
    for (; local_24 != param_4; local_24 = (int **)*local_24) {
    }
  }
  return;
}



