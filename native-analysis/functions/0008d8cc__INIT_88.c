/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d8cc _INIT_88 */

void _INIT_88(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0008d954 + 0x8d8da;
  if (-1 < *(int *)(DAT_0008d950 + 0x8d8d4) << 0x1f) {
    *(int *)(DAT_0008d950 + 0x8d8d4) = 1;
    iVar4 = DAT_0008d958;
    uVar2 = DAT_0008d94c;
    uVar1 = DAT_0008d948;
    *(undefined4 *)(DAT_0008d958 + 0x8d8ee) = DAT_0008d94c;
    *(undefined4 *)(iVar4 + 0x8d8f2) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d8f6) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d8fa) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d8fe) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d902) = uVar2;
    *(undefined4 *)(iVar4 + 0x8d906) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d90a) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d90e) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d912) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d916) = uVar2;
    *(undefined4 *)(iVar4 + 0x8d91a) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d91e) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d922) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d926) = uVar1;
    *(undefined4 *)(iVar4 + 0x8d92a) = uVar2;
  }
  iVar4 = DAT_0008d95c + 0x8d972;
  FUN_0008d82c(iVar4);
  __aeabi_atexit(iVar4,DAT_0008d964 + 0x8d942,*(undefined4 *)(iVar3 + DAT_0008d960));
  return;
}



