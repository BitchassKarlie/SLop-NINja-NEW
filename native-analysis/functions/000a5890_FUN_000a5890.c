/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5890 FUN_000a5890 */

undefined4 FUN_000a5890(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_34 [4];
  void *local_30;
  int local_28;
  char local_24;
  undefined auStack_20 [4];
  int local_1c;
  
  iVar1 = DAT_000a5930;
  iVar3 = DAT_000a5934 + 0xa589e;
  if ((*(uint *)(DAT_000a5930 + 0xa5b38) & 1) == 0) {
    iVar4 = DAT_000a5930 + 0xa5b38;
    iVar2 = __cxa_guard_acquire(iVar4);
    if (iVar2 != 0) {
      *(undefined *)(iVar1 + 0xa5b4c) = 1;
      *(undefined4 *)(iVar1 + 0xa5b40) = 0;
      *(undefined4 *)(iVar1 + 0xa5b44) = 0;
      *(undefined4 *)(iVar1 + 0xa5b48) = 0;
      __cxa_guard_release(iVar4);
      __aeabi_atexit(iVar1 + 0xa5b3c,DAT_000a5944 + 0xa591a,*(undefined4 *)(iVar3 + DAT_000a5940));
    }
  }
  FUN_000a4500(auStack_20);
  if (local_1c != 0) {
    FUN_000a5654(auStack_34,auStack_20);
    iVar1 = DAT_000a5938;
    *(char *)((int)&DAT_000a5b78 + DAT_000a5938 + 2) = local_24;
    if (local_24 == '\0') {
      FUN_000a3884(iVar1 + 0xa5b6a,local_30,local_28 - (int)local_30);
    }
    if (local_30 != (void *)0x0) {
      operator_delete(local_30);
    }
    if (*(char *)(DAT_000a593c + 0xa5b8c) == '\0') {
      return *(undefined4 *)(FUN_000a5b7c + DAT_000a593c + 4);
    }
  }
  return 0;
}



