/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005cc00 FUN_0005cc00 */

void FUN_0005cc00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0002f60c(*(undefined4 *)(param_1 + 0xf0));
  iVar2 = *(int *)(DAT_0005cc2c + 0x5cc14 + DAT_0005cc30);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  if (*(char *)(*(int *)(iVar2 + 0x50) + 0x110) != '\0') {
    *(undefined4 *)(param_1 + 0x9c) = DAT_0005cc28;
  }
  return;
}



