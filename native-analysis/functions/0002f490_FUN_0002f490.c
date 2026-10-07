/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002f490 FUN_0002f490 */

void FUN_0002f490(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_0002f4cc;
  bVar1 = *(byte *)(DAT_0002f4cc + 0x2f49c);
  uVar4 = *(uint *)(DAT_0002f4cc + 0x2fa9c);
  uVar3 = *(undefined4 *)(DAT_0002f4cc + 0x2f498);
  *(undefined4 *)(FUN_0002f4d8 + DAT_0002f4cc) = uVar3;
  if ((bVar1 == uVar4) && (*(char *)(iVar2 + 0x2faa0) != '\0')) {
    (**(code **)(DAT_0002f4d4 + 0x2f4c2 + (uint)bVar1 * 4))(uVar3,1);
  }
  *(undefined4 *)(DAT_0002f4d0 + 0x2f4ae) = DAT_0002f4c8;
  return;
}



