/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008c9e8 _INIT_86 */

void _INIT_86(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar4 = DAT_0008ca9c + 0x8c9f8;
  if (-1 < *(int *)(DAT_0008ca98 + 0x8c9f2) << 0x1f) {
    *(int *)(DAT_0008ca98 + 0x8c9f2) = 1;
    iVar2 = DAT_0008caa0;
    uVar1 = DAT_0008ca94;
    uVar7 = DAT_0008ca90;
    *(undefined4 *)(DAT_0008caa0 + 0x8ca0c) = DAT_0008ca94;
    *(undefined4 *)(iVar2 + 0x8ca10) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca14) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca18) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca1c) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca20) = uVar1;
    *(undefined4 *)(iVar2 + 0x8ca24) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca28) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca2c) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca30) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca34) = uVar1;
    *(undefined4 *)(iVar2 + 0x8ca38) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca3c) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca40) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca44) = uVar7;
    *(undefined4 *)(iVar2 + 0x8ca48) = uVar1;
  }
  iVar2 = DAT_0008caa4;
  puVar5 = (undefined *)(DAT_0008caa4 + 0x8ca56);
  iVar6 = DAT_0008caa8 + 0x8ca5c;
  *(undefined *)(DAT_0008caa4 + 0x8ca57) = 0x7d;
  *puVar5 = 0x7d;
  iVar3 = DAT_0008caac;
  *(undefined *)(iVar2 + 0x8ca59) = 100;
  *(undefined *)(iVar2 + 0x8ca58) = 0;
  uVar7 = *(undefined4 *)(iVar4 + iVar3);
  __aeabi_atexit(puVar5,iVar6,uVar7);
  *(undefined *)(iVar2 + 0x8ca5d) = 100;
  *(undefined *)(iVar2 + 0x8ca5c) = 0xff;
  *(undefined *)(iVar2 + 0x8ca5b) = 0;
  *(undefined *)(iVar2 + 0x8ca5a) = 0;
  __aeabi_atexit((undefined *)(iVar2 + 0x8ca5a),iVar6,uVar7);
  return;
}



