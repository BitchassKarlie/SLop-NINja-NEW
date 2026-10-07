/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00033038 FUN_00033038 */

void FUN_00033038(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  
  FUN_0001f6f8(1);
  iVar5 = DAT_000331b0;
  iVar4 = DAT_000331ac + 0x3304c;
  if (*(char *)(DAT_000331a8 + 0x33062) == '\0') {
    FUN_00049cc8(*(undefined4 *)(*(int *)(iVar4 + DAT_000331b0) + 0x40));
    FUN_000313d0(1);
  }
  iVar1 = DAT_000331b4;
  if (*(int *)(DAT_000331b4 + 0x33142) != 0) {
    FUN_00073984(*(undefined4 *)(*(int *)(iVar4 + iVar5) + 0x18c),*(int *)(DAT_000331b4 + 0x33142),
                 DAT_000331b8 + 0x3306a);
    *(undefined4 *)(iVar1 + 0x33142) = 0;
  }
  iVar1 = DAT_000331bc;
  iVar6 = 0;
  iVar2 = DAT_000331bc + 0x33100;
  *(undefined *)(DAT_000331bc + 0x33190) = 0;
  *(undefined *)(iVar1 + 0x3309c) = 0;
  *(undefined4 *)(iVar1 + 0x33194) = 0;
  *(undefined4 *)(iVar1 + 0x33198) = 0;
  FUN_0001f2f8(iVar2,0);
  FUN_0001f2f8(iVar1 + 0x33104,0);
  FUN_0001f2f8(iVar1 + 0x33108,0);
  do {
    *(undefined4 *)(iVar1 + 0x33118 + iVar6) = 0;
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x40);
  FUN_00030bcc(*(undefined4 *)(iVar1 + 0x330a8));
  pvVar7 = *(void **)(iVar1 + 0x330a8);
  if (pvVar7 != (void *)0x0) {
    FUN_00030c10(pvVar7);
    operator_delete(pvVar7);
    *(undefined4 *)(iVar1 + 0x330a8) = 0;
  }
  iVar1 = DAT_000331c0;
  pvVar7 = *(void **)(DAT_000331c0 + 0x3316a);
  if (pvVar7 != (void *)0x0) {
    FUN_00030c34(pvVar7);
    operator_delete(pvVar7);
    *(undefined4 *)(iVar1 + 0x3316a) = 0;
  }
  iVar1 = DAT_000331c4;
  FUN_00086780();
  FUN_00088a30();
  FUN_00017d64(iVar1 + 0x3320c,0);
  FUN_0007e454();
  FUN_0007d860();
  uVar3 = FUN_0002e348();
  FUN_0009191c(uVar3,0);
  FUN_0004a1cc(*(undefined4 *)(*(int *)(iVar4 + iVar5) + 0x40));
  if (*(int **)(iVar1 + 0x33194) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x33194) + 4))();
    *(undefined4 *)(iVar1 + 0x33194) = 0;
  }
  pvVar7 = *(void **)(*(int *)(iVar4 + iVar5) + 0x40);
  if (pvVar7 != (void *)0x0) {
    FUN_0004a36c(pvVar7);
    operator_delete(pvVar7);
  }
  iVar5 = *(int *)(iVar4 + iVar5);
  *(undefined4 *)(iVar5 + 0x40) = 0;
  FUN_0005679c();
  FUN_0001c940();
  FUN_0001c0f8();
  FUN_0001c940();
  FUN_0001c710();
  FUN_0001c940();
  FUN_0001c2d0();
  FUN_0008e590();
  *(undefined *)(iVar5 + 2) = 0;
  iVar5 = DAT_000331c8;
  iVar4 = DAT_000331c8 + 0x33274;
  *(undefined *)(DAT_000331c8 + 0x33294) = 0;
  FUN_00017d64(iVar4,0);
  FUN_00017d64(iVar5 + 0x3327c,0);
  FUN_00017d64(iVar5 + 0x33278,0);
  return;
}



