/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031c5c FUN_00031c5c */

void FUN_00031c5c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_00031ce0 + 0x31cfc);
  *(undefined4 *)(iVar2 + 0x120) = DAT_00031cd8;
  iVar3 = DAT_00031ce4;
  *(undefined4 *)(iVar2 + 0x11c) = 0;
  FUN_0002f618(0,0xffffffff);
  iVar2 = *(int *)(iVar3 + 0x31c80 + DAT_00031ce8);
  iVar3 = *(int *)(iVar2 + 0x50);
  *(undefined4 *)(iVar3 + 0x10c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x108) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x100) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x104) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x24);
  FUN_00031a38(0);
  FUN_000316b0();
  uVar1 = FUN_00086780();
  FUN_0008b280(uVar1,1);
  uVar1 = DAT_00031cdc;
  *(undefined *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  *(undefined *)(iVar2 + 9) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 0x164) + 0x11c) = 0x11;
  if (*(char *)(iVar2 + 0x174) != '\0') {
    FUN_00030758();
  }
  return;
}



