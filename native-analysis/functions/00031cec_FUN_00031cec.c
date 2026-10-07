/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031cec FUN_00031cec */

void FUN_00031cec(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00031d60 + 0x31cfe;
  if (*(int *)(DAT_00031d5c + 0x31dde) != 0) {
    FUN_000a5ce0(*(int *)(DAT_00031d5c + 0x31dde),0);
  }
  iVar1 = DAT_00031d64;
  iVar4 = *(int *)(iVar3 + DAT_00031d64);
  *(undefined *)(iVar4 + 9) = 0;
  uVar2 = FUN_00086780();
  FUN_00087e10(uVar2,0x3f800000);
  *(undefined *)(iVar4 + 8) = 1;
  FUN_0002c8a4();
  if (*(char *)(iVar4 + 2) != '\0') {
    if (*(int *)(DAT_00031d68 + 0x31d2e) != 0) {
      *(undefined4 *)(*(int *)(DAT_00031d68 + 0x31d2e) + 200) = 0;
    }
    *(undefined *)(*(int *)(iVar3 + iVar1) + 2) = 0;
  }
  FUN_00031a38(1);
  FUN_000316b0();
  iVar3 = *(int *)(iVar3 + iVar1);
  *(undefined4 *)(iVar3 + 0x10) = DAT_00031d58;
  *(undefined *)(iVar3 + 8) = 1;
  *(undefined *)(iVar3 + 9) = 0;
  return;
}



