/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093a24 _INIT_95 */

void _INIT_95(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = DAT_00093a70;
  iVar1 = DAT_00093a6c;
  iVar4 = DAT_00093a68;
  puVar3 = (undefined4 *)(DAT_00093a68 + 0x93a2e);
  *(undefined4 *)(DAT_00093a68 + 0x93a3a) = 0;
  *(undefined4 *)(iVar4 + 0x93a32) = 0;
  *(undefined4 *)(iVar4 + 0x93a36) = 0;
  *(undefined2 *)(iVar4 + 0x93a40) = 0;
  *(undefined2 *)(iVar4 + 0x93a3e) = 0;
  *puVar3 = 0;
  __aeabi_atexit(puVar3,iVar2 + 0x93a3c,*(undefined4 *)(iVar1 + 0x93a38 + DAT_00093a74));
  if (-1 < *(int *)(DAT_00093a78 + 0x93a4e) << 0x1f) {
    *(int *)(DAT_00093a78 + 0x93a4e) = 1;
    iVar4 = *(int *)(DAT_00093a7c + 0x93a5c) + 1;
    *(int *)(DAT_00093a7c + 0x93a5c) = iVar4;
    *(int *)(DAT_00093a80 + 0x93a66) = iVar4;
  }
  return;
}



