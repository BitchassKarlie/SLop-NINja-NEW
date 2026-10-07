/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f1dc _INIT_103 */

void _INIT_103(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0009f204;
  iVar2 = DAT_0009f200;
  iVar1 = DAT_0009f1fc;
  iVar4 = DAT_0009f1fc + 0x9f1e6;
  *(undefined4 *)(DAT_0009f1fc + 0x9f1ea) = 0;
  *(undefined4 *)(iVar1 + 0x9f1ee) = 0;
  *(undefined4 *)(iVar1 + 0x9f1f2) = 0;
  __aeabi_atexit(iVar4,iVar3 + 0x9f1f4,*(undefined4 *)(iVar2 + 0x9f1f0 + DAT_0009f208));
  return;
}



