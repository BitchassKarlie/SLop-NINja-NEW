/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e9c0 _INIT_101 */

void _INIT_101(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0009ea90;
  uVar4 = *(undefined4 *)(DAT_0009ea88 + 0x9e9cc + DAT_0009ea8c);
  iVar3 = DAT_0009ea94 + 0x9e9de;
  pcVar2 = FUN_0009ead8 + DAT_0009ea90;
  *(undefined *)(DAT_0009ea90 + 0x9eadb) = 0xff;
  *(undefined *)(iVar1 + 0x9eada) = 0;
  *(undefined *)(iVar1 + 0x9ead9) = 0;
  FUN_0009ead8[iVar1] = (code)0x0;
  __aeabi_atexit(pcVar2,iVar3,uVar4);
  *(undefined *)(iVar1 + 0x9eadf) = 0xff;
  *(undefined *)(iVar1 + 0x9eade) = 0xff;
  *(undefined *)(iVar1 + 0x9eadd) = 0xff;
  *(undefined *)(iVar1 + 0x9eadc) = 0xff;
  __aeabi_atexit(iVar1 + 0x9eadc,iVar3,uVar4);
  *(undefined *)(iVar1 + 0x9eae3) = 0xff;
  *(undefined *)(iVar1 + 0x9eae2) = 0xff;
  *(undefined *)(iVar1 + 0x9eae1) = 0;
  *(undefined *)(iVar1 + 0x9eae0) = 0;
  __aeabi_atexit(iVar1 + 0x9eae0,iVar3,uVar4);
  (&UNK_0009eae7)[iVar1] = 0xff;
  (&UNK_0009eae6)[iVar1] = 0;
  *(undefined *)(iVar1 + 0x9eae5) = 0xff;
  *(undefined *)(iVar1 + 0x9eae4) = 0;
  __aeabi_atexit(iVar1 + 0x9eae4,iVar3,uVar4);
  *(undefined *)(iVar1 + 0x9eaeb) = 0xff;
  *(undefined *)(iVar1 + 0x9eaea) = 0;
  *(undefined *)(iVar1 + 0x9eae9) = 0;
  FUN_0009eae8[iVar1] = (code)0xff;
  __aeabi_atexit(FUN_0009eae8 + iVar1,iVar3,uVar4);
  *(undefined *)(iVar1 + 0x9eaef) = 0xff;
  *(undefined *)(iVar1 + 0x9eaee) = 0xff;
  *(undefined *)(iVar1 + 0x9eaed) = 0xff;
  *(undefined *)(iVar1 + 0x9eaec) = 0;
  __aeabi_atexit(iVar1 + 0x9eaec,iVar3,uVar4);
  return;
}



