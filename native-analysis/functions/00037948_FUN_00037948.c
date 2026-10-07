/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00037948 FUN_00037948 */

void FUN_00037948(int param_1)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  int **ppiVar5;
  code *pcVar6;
  void **ppvVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int **ppiVar11;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  ppvVar4 = (void **)**(void ***)(param_1 + 0x80);
  iVar10 = DAT_00037a18 + 0x3795e;
  if (*(void ***)(param_1 + 0x80) != ppvVar4) {
    do {
      *(undefined *)((int)ppvVar4[2] + 0x27) = 1;
      ppvVar4 = (void **)*ppvVar4;
    } while (ppvVar4 != *(void ***)(param_1 + 0x80));
  }
  ppvVar1 = (void **)*ppvVar4;
  iVar2 = DAT_00037a20;
  iVar3 = DAT_00037a28;
  while( true ) {
    DAT_00037a20 = iVar2;
    DAT_00037a28 = iVar3;
    if (ppvVar1 == ppvVar4) {
      if (*(char *)(*(int *)(iVar10 + DAT_00037a1c) + 0x38) != '\0') {
        ppiVar11 = *(int ***)(param_1 + 0x74);
        ppiVar5 = (int **)*ppiVar11;
        if (ppiVar11 != ppiVar5) {
          iVar9 = DAT_00037a24 + 0x379d2;
          do {
            if (ppiVar5[3] != (int *)0x0) {
              *(undefined *)((int)ppiVar5[3] + 0x26) = 0;
              pcVar6 = *(code **)(iVar2 + 0x379d8);
              uVar8 = *(undefined4 *)(iVar10 + iVar3);
              local_30 = iVar2 + 0x379d0;
              local_2c = uVar8;
              (*pcVar6)(&local_30,ppiVar5[3] + 0xb);
              local_38 = iVar2 + 0x379d0;
              local_34 = uVar8;
              local_30 = iVar9;
              (*pcVar6)(&local_38,ppiVar5 + 0x20);
              local_38 = iVar9;
            }
            ppiVar5 = (int **)*ppiVar5;
          } while (ppiVar11 != ppiVar5);
        }
      }
      return;
    }
    if ((void **)*(void **)(param_1 + 0x80) == ppvVar1) break;
    ppvVar7 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar7;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    ppvVar1 = ppvVar7;
    iVar2 = DAT_00037a20;
    iVar3 = DAT_00037a28;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



