/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00046dc8 FUN_00046dc8 */

void FUN_00046dc8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00046e98;
  iVar3 = 0;
  iVar2 = DAT_00046e98 + 0x46e1c;
  iVar4 = DAT_00046e98 + 0x46e34;
  *(undefined *)(DAT_00046e98 + 0x46e78) = 0;
  FUN_00017d64(iVar2,0);
  FUN_00017d64(iVar1 + 0x46e20,0);
  FUN_00017d64(iVar1 + 0x46e5c,0);
  FUN_00017d64(iVar1 + 0x46e60,0);
  FUN_00017d64(iVar1 + 0x46e64,0);
  FUN_00017d64(iVar1 + 0x46e74,0);
  FUN_00017d64(iVar1 + 0x46e6c,0);
  FUN_00017d64(iVar1 + 0x46e24,0);
  FUN_00017d64(iVar1 + 0x46e40,0);
  FUN_00017d64(iVar1 + 0x46e44,0);
  FUN_00017d64(iVar1 + 0x46e48,0);
  FUN_00017d64(iVar1 + 0x46e4c,0);
  FUN_00017d64(iVar1 + 0x46e50,0);
  FUN_00017d64(iVar1 + 0x46e54,0);
  FUN_00017d64(iVar1 + 0x46e68,0);
  FUN_00017d64(iVar1 + 0x46e70,0);
  do {
    iVar2 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    FUN_00017d64(iVar4 + iVar2,0);
    FUN_00017d64(iVar1 + 0x46e28 + iVar2,0);
  } while (iVar3 != 3);
  return;
}



