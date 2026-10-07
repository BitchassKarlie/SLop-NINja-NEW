/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab108 _INIT_110 */

void _INIT_110(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = DAT_000ab1f0 + 0xab116;
  if (-1 < *(int *)(DAT_000ab1ec + 0xab110) << 0x1f) {
    *(int *)(DAT_000ab1ec + 0xab110) = 1;
    iVar2 = DAT_000ab1f4;
    uVar5 = DAT_000ab1e8;
    uVar1 = DAT_000ab1e4;
    *(undefined4 *)(DAT_000ab1f4 + 0xab12a) = DAT_000ab1e8;
    *(undefined4 *)(iVar2 + 0xab12e) = uVar1;
    *(undefined4 *)(iVar2 + 0xab132) = uVar1;
    *(undefined4 *)(iVar2 + 0xab136) = uVar1;
    *(undefined4 *)(iVar2 + 0xab13a) = uVar1;
    *(undefined4 *)(iVar2 + 0xab13e) = uVar5;
    *(undefined4 *)(iVar2 + 0xab142) = uVar1;
    *(undefined4 *)(iVar2 + 0xab146) = uVar1;
    *(undefined4 *)(iVar2 + 0xab14a) = uVar1;
    *(undefined4 *)(iVar2 + 0xab14e) = uVar1;
    *(undefined4 *)(iVar2 + 0xab152) = uVar5;
    *(undefined4 *)(iVar2 + 0xab156) = uVar1;
    *(undefined4 *)(iVar2 + 0xab15a) = uVar1;
    *(undefined4 *)(iVar2 + 0xab15e) = uVar1;
    *(undefined4 *)(iVar2 + 0xab162) = uVar1;
    *(undefined4 *)(iVar2 + 0xab166) = uVar5;
  }
  if (-1 < *(int *)(DAT_000ab1f8 + 0xab16e) << 0x1f) {
    *(int *)(DAT_000ab1f8 + 0xab16e) = 1;
    iVar3 = DAT_000ab204;
    iVar2 = DAT_000ab200;
    uVar1 = DAT_000ab1e4;
    puVar4 = (undefined4 *)(DAT_000ab200 + 0xab184);
    uVar5 = *(undefined4 *)(iVar6 + DAT_000ab1fc);
    *puVar4 = DAT_000ab1e4;
    *(undefined4 *)(iVar2 + 0xab188) = uVar1;
    *(undefined4 *)(iVar2 + 0xab18c) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0xab194,uVar5);
  }
  if (-1 < *(int *)(DAT_000ab208 + 0xab19c) << 0x1f) {
    *(int *)(DAT_000ab208 + 0xab19c) = 1;
    iVar3 = DAT_000ab210;
    iVar2 = DAT_000ab20c;
    uVar1 = DAT_000ab1e8;
    puVar4 = (undefined4 *)(DAT_000ab20c + 0xab1b2);
    uVar5 = *(undefined4 *)(iVar6 + DAT_000ab1fc);
    *puVar4 = DAT_000ab1e8;
    *(undefined4 *)(iVar2 + 0xab1b6) = uVar1;
    *(undefined4 *)(iVar2 + 0xab1ba) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0xab1c2,uVar5);
  }
  if (-1 < *(int *)(DAT_000ab214 + 0xab1ca) << 0x1f) {
    *(int *)(DAT_000ab214 + 0xab1ca) = 1;
    iVar6 = *(int *)(DAT_000ab218 + 0xab1d8) + 1;
    *(int *)(DAT_000ab218 + 0xab1d8) = iVar6;
    *(int *)(DAT_000ab21c + 0xab1e2) = iVar6;
  }
  return;
}



