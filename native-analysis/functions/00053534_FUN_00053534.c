/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00053534 FUN_00053534 */

void FUN_00053534(int param_1)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int local_30;
  undefined4 local_2c;
  
  iVar2 = DAT_000535d4;
  iVar1 = DAT_000535cc;
  ppvVar3 = *(void ***)(param_1 + 0x104);
  ppvVar4 = (void **)*ppvVar3;
  iVar5 = DAT_000535c8 + 0x53548;
  if (ppvVar3 != ppvVar4) {
    iVar7 = DAT_000535cc + 0x5355e;
    iVar8 = DAT_000535d0 + 0x53564;
    do {
      if (ppvVar4[2] != (void *)0x0) {
        local_2c = *(undefined4 *)(iVar5 + iVar2);
        local_30 = iVar7;
        (**(code **)(iVar1 + 0x53566))(&local_30,(int)ppvVar4[2] + 0x2c);
        *(undefined *)((int)ppvVar4[2] + 0x27) = 1;
        ppvVar3 = *(void ***)(param_1 + 0x104);
        local_30 = iVar8;
      }
      ppvVar4 = (void **)*ppvVar4;
    } while (ppvVar4 != ppvVar3);
  }
  ppvVar3 = (void **)*ppvVar4;
  while( true ) {
    if (ppvVar4 == ppvVar3) {
      return;
    }
    if ((void **)*(void **)(param_1 + 0x104) == ppvVar3) break;
    pvVar6 = *ppvVar3;
    *(void **)ppvVar3[1] = pvVar6;
    *(void **)((int)*ppvVar3 + 4) = ppvVar3[1];
    operator_delete(ppvVar3);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
    ppvVar3 = (void **)pvVar6;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



