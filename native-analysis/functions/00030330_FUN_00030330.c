/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030330 FUN_00030330 */

char FUN_00030330(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = *(int *)(DAT_00030384 + 0x30344 + DAT_00030388);
  iVar3 = iVar4 + 0xc0;
  do {
    if ((*(float *)(iVar4 + 0xac) == DAT_0003037c) || (*(float *)(iVar4 + 0xac) == DAT_00030380)) {
      iVar2 = iVar2 + 1;
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 != iVar3);
  cVar1 = *(char *)(*(int *)(DAT_00030384 + 0x30344 + DAT_00030388) + 0xa0);
  if (cVar1 != '\0') {
    if (iVar2 == 1) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}



