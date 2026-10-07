/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008cf94 _INIT_87 */

void _INIT_87(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0008d050 + 0x8cfa2;
  if (-1 < *(int *)(DAT_0008d04c + 0x8cf9c) << 0x1f) {
    *(int *)(DAT_0008d04c + 0x8cf9c) = 1;
    iVar2 = DAT_0008d054;
    uVar6 = DAT_0008d048;
    uVar1 = DAT_0008d044;
    *(undefined4 *)(DAT_0008d054 + 0x8cfb6) = DAT_0008d048;
    *(undefined4 *)(iVar2 + 0x8cfba) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfbe) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfc2) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfc6) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfca) = uVar6;
    *(undefined4 *)(iVar2 + 0x8cfce) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfd2) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfd6) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfda) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfde) = uVar6;
    *(undefined4 *)(iVar2 + 0x8cfe2) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfe6) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfea) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cfee) = uVar1;
    *(undefined4 *)(iVar2 + 0x8cff2) = uVar6;
  }
  if (-1 < *(int *)(DAT_0008d058 + 0x8cffa) << 0x1f) {
    *(int *)(DAT_0008d058 + 0x8cffa) = 1;
    iVar3 = DAT_0008d064;
    iVar2 = DAT_0008d060;
    uVar1 = DAT_0008d044;
    puVar4 = (undefined4 *)(DAT_0008d060 + 0x8d010);
    uVar6 = *(undefined4 *)(iVar5 + DAT_0008d05c);
    *puVar4 = DAT_0008d044;
    *(undefined4 *)(iVar2 + 0x8d014) = uVar1;
    *(undefined4 *)(iVar2 + 0x8d018) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x8d020,uVar6);
  }
  if (-1 < *(int *)(DAT_0008d068 + 0x8d028) << 0x1f) {
    *(int *)(DAT_0008d068 + 0x8d028) = 1;
    iVar5 = *(int *)(DAT_0008d06c + 0x8d036) + 1;
    *(int *)(DAT_0008d06c + 0x8d036) = iVar5;
    *(int *)(DAT_0008d070 + 0x8d040) = iVar5;
  }
  return;
}



