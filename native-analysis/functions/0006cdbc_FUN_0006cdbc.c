/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006cdbc FUN_0006cdbc */

void FUN_0006cdbc(void)

{
  undefined uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  
  iVar4 = DAT_0006cf04;
  iVar5 = DAT_0006cf00 + 0x6cdca;
  FUN_000830e0();
  FUN_000832e0();
  iVar8 = DAT_0006cf08;
  iVar5 = *(int *)(iVar5 + iVar4);
  memset((void *)(iVar5 + 0x1a9),0,0x100);
  iVar8 = iVar8 + 0x6cdf8;
  memset((void *)(iVar5 + 0x2a9),0,0x100);
  memset((void *)(iVar5 + 0x3a9),0,0x100);
  memset((void *)(iVar5 + 0x4a9),0,0x100);
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined *)(iVar5 + 0x89) = 0;
  pvVar2 = operator_new(0x684);
  FUN_00073bc8();
  *(void **)(iVar5 + 0x18c) = pvVar2;
  pvVar2 = operator_new(0x1e0);
  FUN_0007173c();
  *(void **)(iVar5 + 0x50) = pvVar2;
  FUN_00073730(pvVar2);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(iVar5 + 0x50) + 0x50);
  FUN_0006cc28();
  uVar6 = *(undefined4 *)(iVar5 + 0x50);
  uVar3 = FUN_0008f414(iVar8);
  iVar4 = FUN_0006fbdc(uVar6,uVar3);
  uVar3 = *(undefined4 *)(iVar5 + 0x50);
  iVar7 = DAT_0006cf0c + 0x6ce66;
  bVar10 = iVar4 != 0;
  if (bVar10) {
    iVar4 = 0;
  }
  uVar1 = (undefined)iVar4;
  if (!bVar10) {
    uVar1 = 1;
  }
  *(undefined *)(iVar5 + 0x48) = uVar1;
  uVar6 = FUN_0008f414(iVar7);
  iVar4 = FUN_0006fbdc(uVar3,uVar6);
  bVar10 = iVar4 != 0;
  if (bVar10) {
    iVar4 = 0;
  }
  uVar1 = (undefined)iVar4;
  if (!bVar10) {
    uVar1 = 1;
  }
  *(undefined *)(iVar5 + 0x49) = uVar1;
  uVar3 = FUN_0008f414(iVar8);
  uVar9 = *(undefined4 *)(iVar5 + 0x50);
  uVar6 = FUN_0008f414(iVar8);
  iVar4 = FUN_0006fbdc(uVar9,uVar6);
  FUN_00072d2c(uVar9,iVar8,uVar3,-iVar4,0,1);
  uVar3 = FUN_0008f414(iVar7);
  uVar9 = *(undefined4 *)(iVar5 + 0x50);
  uVar6 = FUN_0008f414(iVar7);
  iVar4 = FUN_0006fbdc(uVar9,uVar6);
  FUN_00072d2c(uVar9,iVar7,uVar3,-iVar4,0,1);
  FUN_0002b06c();
  FUN_00017e38();
  FUN_00019550();
  FUN_0007832c();
  FUN_00078ae4();
  FUN_0007555c();
  FUN_00076010();
  return;
}



