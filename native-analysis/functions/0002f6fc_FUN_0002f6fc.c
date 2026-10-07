/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002f6fc FUN_0002f6fc */

void FUN_0002f6fc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined auStack_7c [36];
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_0002f880;
  iVar4 = DAT_0002f87c + 0x2f70a;
  local_2c = **(int **)(iVar4 + DAT_0002f880);
  iVar7 = *(int *)(DAT_0002f884 + 0x2f73a);
  if (*(char *)(DAT_0002f884 + 0x2fd46) == '\0') {
    piVar2 = (int *)(DAT_0002f884 + 0x2fd26);
LAB_0002f72c:
    piVar2 = (int *)(**(code **)(*piVar2 + 0xc))(piVar2,param_1);
  }
  else {
    piVar2 = *(int **)(DAT_0002f884 + 0x2fd26);
    if (piVar2 != (int *)0x0) goto LAB_0002f72c;
  }
  iVar3 = DAT_0002f888;
  iVar5 = (int)piVar2 + iVar7;
  *(int *)(DAT_0002f888 + 0x2f762) = iVar5;
  if (iVar5 < 0) {
    iVar5 = 0;
    *(undefined4 *)(iVar3 + 0x2f762) = 0;
  }
  uVar6 = **(undefined4 **)(iVar4 + DAT_0002f88c);
  iVar7 = __aeabi_idiv(iVar7,uVar6);
  iVar3 = __aeabi_idiv(iVar5,uVar6);
  if (iVar7 < iVar3) {
    if (*(char *)(DAT_0002f890 + 0x2f788) != '\0') {
      uVar6 = *(undefined4 *)(DAT_0002f890 + 0x2f8fc);
      *(char *)(DAT_0002f890 + 0x2f788) = *(char *)(DAT_0002f890 + 0x2f788) + -1;
      local_58 = DAT_0002f8a0 + 0x2f81c;
      local_54 = *(undefined4 *)(iVar4 + DAT_0002f8a4);
      local_30 = 1;
      local_50[0] = 0;
      (**(code **)(DAT_0002f8a0 + 0x2f824))(&local_58,local_50);
      FUN_00073a7c(uVar6,DAT_0002f8a8 + 0x2f838,0x3f800000,local_50);
      FUN_0001d388(local_50);
      local_58 = DAT_0002f8ac + 0x2f850;
    }
  }
  iVar7 = DAT_0002f894;
  if (-1 < *(int *)(DAT_0002f894 + 0x2fda8) << 0x1f) {
    iVar5 = DAT_0002f894 + 0x2fda8;
    iVar3 = __cxa_guard_acquire(iVar5);
    if (iVar3 != 0) {
      uVar6 = FUN_0008f414(DAT_0002f8b0 + 0x2f860);
      *(undefined4 *)(iVar7 + 0x2fdac) = uVar6;
      __cxa_guard_release(iVar5);
    }
  }
  iVar7 = DAT_0002f898;
  if ((0 < param_1) && (param_3 != 0)) {
    if (1 < param_2) goto LAB_0002f78c;
    uVar6 = FUN_00072d2c(*(undefined4 *)(DAT_0002f898 + 0x2f7fc),DAT_0002f89c + 0x2f7aa,
                         *(undefined4 *)((int)&DAT_0002fddc + DAT_0002f898),param_1,1,0);
    *(undefined4 *)(iVar7 + 0x2f924) = uVar6;
  }
  if ((param_2 == 1) && (param_4 != 0)) {
    iVar7 = FUN_00086780();
    FUN_0006efd8(auStack_7c,*(undefined4 *)(iVar7 + 0x250),param_1,0xfffffe0c,0xfffffe0c);
    piVar2 = (int *)FUN_000a3a68();
    (**(code **)(*piVar2 + 0x10))(piVar2,auStack_7c,0);
  }
LAB_0002f78c:
  if (local_2c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



