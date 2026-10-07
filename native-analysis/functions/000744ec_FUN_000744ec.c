/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000744ec FUN_000744ec */

void FUN_000744ec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar4 = DAT_00074598;
  iVar7 = DAT_00074594 + 0x744fa;
  uVar8 = *(undefined4 *)(*(int *)(iVar7 + DAT_00074598) + 0x50);
  uVar2 = FUN_0008f414(DAT_0007459c + 0x74504);
  iVar1 = DAT_000745a0;
  if (param_2 < 4) {
    iVar6 = *(int *)(param_1 + 0x20);
    iVar3 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x20);
    uVar5 = (*(int *)(param_1 + 0x24) - iVar6 >> 2) - 1;
    if (param_2 - 3U <= uVar5) {
      uVar5 = param_2 - 3U;
    }
    iVar3 = uVar5 << 2;
  }
  FUN_00072d2c(uVar8,DAT_000745a4 + 0x74520,uVar2,*(undefined4 *)(iVar6 + iVar3),0,0);
  if (-1 < *(int *)(iVar1 + 0x74524) << 0x1f) {
    iVar6 = __cxa_guard_acquire(iVar1 + 0x74524);
    if (iVar6 != 0) {
      uVar2 = FUN_0008f414(DAT_000745b0 + 0x74588);
      *(undefined4 *)(iVar1 + 0x74528) = uVar2;
      __cxa_guard_release(iVar1 + 0x74524);
    }
  }
  iVar1 = DAT_000745a8;
  iVar7 = *(int *)(iVar7 + iVar4);
  iVar4 = FUN_0006fbdc(*(undefined4 *)(iVar7 + 0x50),*(undefined4 *)(DAT_000745a8 + 0x74544));
  FUN_00072d2c(*(undefined4 *)(iVar7 + 0x50),DAT_000745ac + 0x74548,*(undefined4 *)(iVar1 + 0x74544)
               ,param_2 - iVar4 & ~(param_2 - iVar4 >> 0x1f),0,0);
  return;
}



