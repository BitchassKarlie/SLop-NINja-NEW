/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031874 FUN_00031874 */

void FUN_00031874(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00086780();
  FUN_00087e10(uVar1,0x3f800000);
  iVar5 = DAT_000318f8;
  uVar1 = DAT_000318e8;
  iVar6 = DAT_000318f0 + 0x3188e;
  iVar4 = *(int *)(DAT_000318f4 + 0x31924);
  iVar3 = *(int *)(iVar6 + DAT_000318f8);
  *(undefined *)(iVar3 + 8) = 1;
  *(undefined4 *)(iVar4 + 0x120) = uVar1;
  *(undefined4 *)(iVar4 + 0x11c) = 0;
  iVar3 = *(int *)(iVar3 + 0x170);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0x27) = 1;
  }
  FUN_0002f618(0,0xffffffff);
  piVar2 = (int *)FUN_000a3a68();
  (**(code **)(*piVar2 + 0xc))(piVar2,0);
  iVar5 = *(int *)(iVar6 + iVar5);
  *(undefined4 *)(iVar5 + 0x1a4) = DAT_000318ec;
  *(undefined *)(iVar5 + 0x174) = 0;
  *(undefined *)(iVar5 + 0x19e) = 0;
  *(undefined *)(iVar5 + 0x19f) = 0;
  *(undefined *)(iVar5 + 0x1a0) = 0;
  *(undefined *)(iVar5 + 0x1a1) = 0;
  return;
}



