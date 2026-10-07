/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00070060 FUN_00070060 */

int FUN_00070060(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00070088;
  if (*(char *)(DAT_00070084 + 0x70068) == '\0') {
    iVar2 = DAT_00070084 + 0x7006c;
    *(char *)(DAT_00070084 + 0x70068) = '\x01';
    FUN_00070020(iVar2,iVar1 + 0x7007a,0x200);
  }
  return DAT_0007008c + 0x70086;
}



