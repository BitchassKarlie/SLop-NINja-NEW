/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001d520 FUN_0001d520 */

void FUN_0001d520(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar8 = DAT_0001d600;
  iVar7 = DAT_0001d604 + 0x1d530;
  if (*(int *)(DAT_0001d600 + 0x1d53a) != 0) {
    FUN_000995e4(*(undefined4 *)(DAT_0001d600 + 0x1d53a));
    *(undefined4 *)(iVar8 + 0x1d53e) = 0;
    local_28 = 0;
    local_24 = 0;
    uVar3 = FUN_0001c940();
    piVar4 = (int *)FUN_0001bd8c(uVar3,4,&local_28);
    iVar1 = DAT_0001d608;
    iVar2 = DAT_0001d60c;
    while (DAT_0001d608 = iVar1, DAT_0001d60c = iVar2, piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x34))();
      *(int *)(iVar8 + 0x1d53e) = *(int *)(iVar8 + 0x1d53e) + 1;
      uVar3 = FUN_0001c940();
      piVar4 = (int *)FUN_0001bdb8(uVar3,4,&local_28);
      iVar1 = DAT_0001d608;
      iVar2 = DAT_0001d60c;
    }
    FUN_000995e0(*(undefined4 *)(iVar1 + 0x1d584));
    FUN_000995e4(*(undefined4 *)(iVar1 + 0x1d584));
    iVar8 = *(int *)(iVar7 + DAT_0001d610);
    *(undefined *)(iVar8 + 0x18d4) = 0;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d57e);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d582);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d586);
    *(undefined4 *)(iVar8 + 0x1094) = *(undefined4 *)(iVar2 + 0x1d57a);
    *(undefined4 *)(iVar8 + 0x1098) = uVar3;
    *(undefined4 *)(iVar8 + 0x109c) = uVar5;
    *(undefined4 *)(iVar8 + 0x10a0) = uVar6;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d58e);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d592);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d596);
    *(undefined4 *)(iVar8 + 0x10a4) = *(undefined4 *)(iVar2 + 0x1d58a);
    *(undefined4 *)(iVar8 + 0x10a8) = uVar3;
    *(undefined4 *)(iVar8 + 0x10ac) = uVar5;
    *(undefined4 *)(iVar8 + 0x10b0) = uVar6;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d59e);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d5a2);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d5a6);
    *(undefined4 *)(iVar8 + 0x10b4) = *(undefined4 *)(iVar2 + 0x1d59a);
    *(undefined4 *)(iVar8 + 0x10b8) = uVar3;
    *(undefined4 *)(iVar8 + 0x10bc) = uVar5;
    *(undefined4 *)(iVar8 + 0x10c0) = uVar6;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d5ae);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d5b2);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d5b6);
    *(undefined4 *)(iVar8 + 0x10c4) = *(undefined4 *)(iVar2 + 0x1d5aa);
    *(undefined4 *)(iVar8 + 0x10c8) = uVar3;
    *(undefined4 *)(iVar8 + 0x10cc) = uVar5;
    *(undefined4 *)(iVar8 + 0x10d0) = uVar6;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d57e);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d582);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d586);
    *(undefined4 *)(iVar8 + 0x1894) = *(undefined4 *)(iVar2 + 0x1d57a);
    *(undefined4 *)(iVar8 + 0x1898) = uVar3;
    *(undefined4 *)(iVar8 + 0x189c) = uVar5;
    *(undefined4 *)(iVar8 + 0x18a0) = uVar6;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d58e);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d592);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d596);
    *(undefined4 *)(iVar8 + 0x18a4) = *(undefined4 *)(iVar2 + 0x1d58a);
    *(undefined4 *)(iVar8 + 0x18a8) = uVar3;
    *(undefined4 *)(iVar8 + 0x18ac) = uVar5;
    *(undefined4 *)(iVar8 + 0x18b0) = uVar6;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d59e);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d5a2);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d5a6);
    *(undefined4 *)(iVar8 + 0x18b4) = *(undefined4 *)(iVar2 + 0x1d59a);
    *(undefined4 *)(iVar8 + 0x18b8) = uVar3;
    *(undefined4 *)(iVar8 + 0x18bc) = uVar5;
    *(undefined4 *)(iVar8 + 0x18c0) = uVar6;
    uVar3 = *(undefined4 *)(iVar2 + 0x1d5ae);
    uVar5 = *(undefined4 *)(iVar2 + 0x1d5b2);
    uVar6 = *(undefined4 *)(iVar2 + 0x1d5b6);
    *(undefined4 *)(iVar8 + 0x18c4) = *(undefined4 *)(iVar2 + 0x1d5aa);
    *(undefined4 *)(iVar8 + 0x18c8) = uVar3;
    *(undefined4 *)(iVar8 + 0x18cc) = uVar5;
    *(undefined4 *)(iVar8 + 0x18d0) = uVar6;
    *(int *)(iVar8 + 0x18d8) = *(int *)(iVar8 + 0x18d8) + 1;
    FUN_0008d434(iVar8,1);
    FUN_000a3440(iVar1 + 0x1d58c,*(int *)(iVar1 + 0x1d588) * 6,0);
    FUN_000995e0(*(undefined4 *)(iVar1 + 0x1d584));
  }
  return;
}



