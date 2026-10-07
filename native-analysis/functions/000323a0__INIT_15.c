/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000323a0 _INIT_15 */

void _INIT_15(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar10 = DAT_000326e4 + 0x323b6;
  if (-1 < *(int *)(DAT_000326e0 + 0x323ae) << 0x1f) {
    *(int *)(DAT_000326e0 + 0x323ae) = 1;
    iVar14 = DAT_000326e8;
    uVar6 = DAT_000326c4;
    uVar9 = DAT_000326c0;
    *(undefined4 *)(DAT_000326e8 + 0x323ca) = DAT_000326c4;
    *(undefined4 *)(iVar14 + 0x323ce) = uVar9;
    *(undefined4 *)(iVar14 + 0x323d2) = uVar9;
    *(undefined4 *)(iVar14 + 0x323d6) = uVar9;
    *(undefined4 *)(iVar14 + 0x323da) = uVar9;
    *(undefined4 *)(iVar14 + 0x323de) = uVar6;
    *(undefined4 *)(iVar14 + 0x323e2) = uVar9;
    *(undefined4 *)(iVar14 + 0x323e6) = uVar9;
    *(undefined4 *)(iVar14 + 0x323ea) = uVar9;
    *(undefined4 *)(iVar14 + 0x323ee) = uVar9;
    *(undefined4 *)(iVar14 + 0x323f2) = uVar6;
    *(undefined4 *)(iVar14 + 0x323f6) = uVar9;
    *(undefined4 *)(iVar14 + 0x323fa) = uVar9;
    *(undefined4 *)(iVar14 + 0x323fe) = uVar9;
    *(undefined4 *)(iVar14 + 0x32402) = uVar9;
    *(undefined4 *)(iVar14 + 0x32406) = uVar6;
  }
  iVar2 = DAT_000329b8;
  iVar14 = DAT_000329b0;
  uVar9 = DAT_00032918;
  if (*(int *)(DAT_000326ec + 0x3240e) << 0x1f < 0) {
    iVar12 = DAT_000326f0 + 0x32420;
    iVar14 = DAT_000326f4;
  }
  else {
    iVar12 = DAT_000329b4 + 0x328fe;
    *(int *)(DAT_000326ec + 0x3240e) = 1;
    uVar6 = *(undefined4 *)(iVar10 + iVar14);
    *(undefined4 *)(iVar2 + 0x32902) = uVar9;
    *(undefined4 *)(iVar2 + 0x32906) = uVar9;
    *(undefined4 *)(iVar2 + 0x3290a) = uVar9;
    __aeabi_atexit((undefined4 *)(iVar2 + 0x32902),iVar12,uVar6);
  }
  iVar11 = DAT_00032700;
  iVar2 = DAT_000326fc;
  uVar9 = DAT_000326c0;
  if (-1 < *(int *)(DAT_000326f8 + 0x32424) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_000326fc + 0x32436);
    *(int *)(DAT_000326f8 + 0x32424) = 1;
    *puVar5 = uVar9;
    *(undefined4 *)(iVar2 + 0x3243a) = uVar9;
    __aeabi_atexit(puVar5,iVar11 + 0x32442,*(undefined4 *)(iVar10 + iVar14));
  }
  iVar2 = DAT_00032704;
  uVar8 = *(undefined4 *)(iVar10 + iVar14);
  iVar13 = DAT_00032708 + 0x32460;
  *(undefined *)(DAT_00032704 + 0x32557) = 0xff;
  uVar9 = DAT_000326c4;
  *(undefined *)(iVar2 + 0x32556) = 0;
  *(undefined *)(iVar2 + 0x32555) = 0;
  *(undefined *)(iVar2 + 0x32554) = 0;
  __aeabi_atexit((undefined *)(iVar2 + 0x32554),iVar13,uVar8);
  iVar11 = DAT_0003270c;
  FUN_00032390(iVar2 + 0x32558);
  iVar11 = iVar11 + 0x32490;
  __aeabi_atexit(iVar2 + 0x32558,iVar11,uVar8);
  FUN_00032390(iVar2 + 0x3255c);
  __aeabi_atexit(iVar2 + 0x3255c,iVar11,uVar8);
  FUN_00032390(iVar2 + 0x32560);
  __aeabi_atexit(iVar2 + 0x32560,iVar11,uVar8);
  FUN_00032398(iVar2 + 0x324dc);
  FUN_00032398(iVar2 + 0x324e0);
  FUN_00032398(iVar2 + 0x324e4);
  __aeabi_atexit(0,DAT_00032710 + 0x324ea,uVar8);
  iVar4 = DAT_00032718;
  iVar3 = DAT_00032714;
  uVar6 = DAT_000326cc;
  *(undefined4 *)(iVar2 + 0x32494) = DAT_000326c8;
  *(undefined4 *)(iVar2 + 0x324ac) = uVar6;
  uVar6 = DAT_000326d4;
  *(undefined4 *)(iVar2 + 0x32498) = DAT_000326d0;
  *(undefined4 *)(iVar2 + 0x324b8) = uVar6;
  *(undefined4 *)(iVar2 + 0x324a0) = DAT_000326d8;
  uVar6 = DAT_000326dc;
  *(undefined4 *)(iVar2 + 0x32488) = uVar9;
  *(undefined4 *)(iVar2 + 0x324a4) = uVar6;
  *(undefined4 *)(iVar2 + 0x324b0) = uVar6;
  *(undefined4 *)(iVar2 + 0x324bc) = uVar6;
  *(undefined4 *)(iVar2 + 0x324c4) = uVar6;
  *(undefined4 *)(iVar2 + 0x324c8) = uVar6;
  *(undefined4 *)(iVar2 + 0x324cc) = uVar6;
  *(undefined4 *)(iVar2 + 0x324d0) = uVar6;
  *(undefined4 *)(iVar2 + 0x324d4) = uVar6;
  *(undefined4 *)(iVar2 + 0x324d8) = uVar6;
  *(undefined4 *)(iVar2 + 0x3248c) = uVar9;
  *(undefined4 *)(iVar2 + 0x32490) = uVar9;
  *(undefined4 *)(iVar2 + 0x3249c) = uVar9;
  *(undefined4 *)(iVar2 + 0x324a8) = uVar9;
  *(undefined4 *)(iVar2 + 0x324b4) = uVar9;
  *(undefined4 *)(iVar2 + 0x324c0) = uVar9;
  __aeabi_atexit(0,iVar3 + 0x3251a,uVar8);
  *(undefined4 *)(iVar2 + 0x32534) = *(undefined4 *)(iVar4 + 0x32566);
  *(undefined4 *)(iVar2 + 0x32538) = *(undefined4 *)(iVar4 + 0x3256a);
  *(undefined4 *)(iVar2 + 0x3253c) = *(undefined4 *)(iVar4 + 0x3256e);
  __aeabi_atexit(iVar2 + 0x32534,iVar12,uVar8);
  *(undefined4 *)(iVar2 + 0x32460) = *(undefined4 *)(iVar4 + 0x32566);
  *(undefined4 *)(iVar2 + 0x32464) = *(undefined4 *)(iVar4 + 0x3256a);
  *(undefined4 *)(iVar2 + 0x32468) = *(undefined4 *)(iVar4 + 0x3256e);
  __aeabi_atexit(iVar2 + 0x32460,iVar12,uVar8);
  iVar2 = DAT_00032720;
  if (-1 < *(int *)(DAT_0003271c + 0x325b6) << 0x1f) {
    *(int *)(DAT_0003271c + 0x325b6) = 1;
    *(undefined4 *)(iVar2 + 0x325c6) = uVar9;
    *(undefined4 *)(iVar2 + 0x325ca) = uVar9;
    *(undefined4 *)(iVar2 + 0x325ce) = uVar9;
    __aeabi_atexit((undefined4 *)(iVar2 + 0x325c6),iVar12,uVar8);
  }
  iVar2 = DAT_00032724;
  iVar12 = (int)&DAT_000326e8 + DAT_00032724;
  FUN_00032390(iVar12);
  uVar9 = *(undefined4 *)(iVar10 + iVar14);
  __aeabi_atexit(iVar12,iVar11,uVar9);
  puVar7 = *(undefined **)(iVar10 + DAT_00032728);
  *(undefined *)(iVar2 + 0x325f0) = *puVar7;
  *(undefined *)(iVar2 + 0x325f1) = puVar7[1];
  uVar1 = puVar7[3];
  *(undefined *)(iVar2 + 0x325f2) = puVar7[2];
  *(undefined *)(iVar2 + 0x325f3) = uVar1;
  __aeabi_atexit(iVar2 + 0x325f0,iVar13,uVar9);
  if (-1 < *(int *)(DAT_0003272c + 0x32618) << 0x1f) {
    *(int *)(DAT_0003272c + 0x32618) = 1;
    iVar10 = *(int *)(DAT_00032730 + 0x32626) + 1;
    *(int *)(DAT_00032730 + 0x32626) = iVar10;
    *(int *)(DAT_00032734 + 0x32630) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032738 + 0x32636) << 0x1f) {
    *(int *)(DAT_00032738 + 0x32636) = 1;
    iVar10 = *(int *)(DAT_0003273c + 0x32644) + 1;
    *(int *)(DAT_0003273c + 0x32644) = iVar10;
    *(int *)(DAT_00032740 + 0x3264e) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032744 + 0x32654) << 0x1f) {
    *(int *)(DAT_00032744 + 0x32654) = 1;
    iVar10 = *(int *)(DAT_00032748 + 0x32662) + 1;
    *(int *)(DAT_00032748 + 0x32662) = iVar10;
    *(int *)(DAT_0003274c + 0x3266c) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032750 + 0x32672) << 0x1f) {
    *(int *)(DAT_00032750 + 0x32672) = 1;
    iVar10 = *(int *)(DAT_00032754 + 0x32680) + 1;
    *(int *)(DAT_00032754 + 0x32680) = iVar10;
    *(int *)(DAT_00032758 + 0x3268a) = iVar10;
  }
  if (-1 < *(int *)(DAT_0003275c + 0x32690) << 0x1f) {
    *(int *)(DAT_0003275c + 0x32690) = 1;
    iVar10 = *(int *)(DAT_00032760 + 0x3269e) + 1;
    *(int *)(DAT_00032760 + 0x3269e) = iVar10;
    *(int *)(DAT_00032764 + 0x326a8) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032768 + 0x326ae) << 0x1f) {
    *(int *)(DAT_00032768 + 0x326ae) = 1;
    iVar10 = *(int *)(DAT_0003276c + 0x326bc) + 1;
    *(int *)(DAT_0003276c + 0x326bc) = iVar10;
    *(int *)(DAT_0003291c + 0x32778) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032920 + 0x3277e) << 0x1f) {
    *(int *)(DAT_00032920 + 0x3277e) = 1;
    iVar10 = *(int *)(DAT_00032924 + 0x3278c) + 1;
    *(int *)(DAT_00032924 + 0x3278c) = iVar10;
    *(int *)(DAT_00032928 + 0x32796) = iVar10;
  }
  if (-1 < *(int *)(DAT_0003292c + 0x3279c) << 0x1f) {
    *(int *)(DAT_0003292c + 0x3279c) = 1;
    iVar10 = *(int *)(DAT_00032930 + 0x327aa) + 1;
    *(int *)(DAT_00032930 + 0x327aa) = iVar10;
    *(int *)(DAT_00032934 + 0x327b4) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032938 + 0x327ba) << 0x1f) {
    *(int *)(DAT_00032938 + 0x327ba) = 1;
    iVar10 = *(int *)(DAT_0003293c + 0x327c8) + 1;
    *(int *)(DAT_0003293c + 0x327c8) = iVar10;
    *(int *)(DAT_00032940 + 0x327d2) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032944 + 0x327d8) << 0x1f) {
    *(int *)(DAT_00032944 + 0x327d8) = 1;
    iVar10 = *(int *)(DAT_00032948 + 0x327e6) + 1;
    *(int *)(DAT_00032948 + 0x327e6) = iVar10;
    *(int *)(DAT_0003294c + 0x327f0) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032950 + 0x327f6) << 0x1f) {
    *(int *)(DAT_00032950 + 0x327f6) = 1;
    iVar10 = *(int *)(DAT_00032954 + 0x32804) + 1;
    *(int *)(DAT_00032954 + 0x32804) = iVar10;
    *(int *)(DAT_00032958 + 0x3280e) = iVar10;
  }
  if (-1 < *(int *)(DAT_0003295c + 0x32814) << 0x1f) {
    *(int *)(DAT_0003295c + 0x32814) = 1;
    iVar10 = *(int *)(DAT_00032960 + 0x32822) + 1;
    *(int *)(DAT_00032960 + 0x32822) = iVar10;
    *(int *)(DAT_00032964 + 0x3282c) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032968 + 0x32832) << 0x1f) {
    *(int *)(DAT_00032968 + 0x32832) = 1;
    iVar10 = *(int *)(DAT_0003296c + 0x32840) + 1;
    *(int *)(DAT_0003296c + 0x32840) = iVar10;
    *(int *)(DAT_00032970 + 0x3284a) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032974 + 0x32850) << 0x1f) {
    *(int *)(DAT_00032974 + 0x32850) = 1;
    iVar10 = *(int *)(DAT_00032978 + 0x3285e) + 1;
    *(int *)(DAT_00032978 + 0x3285e) = iVar10;
    *(int *)(DAT_0003297c + 0x32868) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032980 + 0x3286e) << 0x1f) {
    *(int *)(DAT_00032980 + 0x3286e) = 1;
    iVar10 = *(int *)(DAT_00032984 + 0x3287c) + 1;
    *(int *)(DAT_00032984 + 0x3287c) = iVar10;
    *(int *)(DAT_00032988 + 0x32886) = iVar10;
  }
  if (-1 < *(int *)(DAT_0003298c + 0x3288c) << 0x1f) {
    *(int *)(DAT_0003298c + 0x3288c) = 1;
    iVar10 = *(int *)(DAT_00032990 + 0x3289a) + 1;
    *(int *)(DAT_00032990 + 0x3289a) = iVar10;
    *(int *)(DAT_00032994 + 0x328a4) = iVar10;
  }
  if (-1 < *(int *)(DAT_00032998 + 0x328aa) << 0x1f) {
    *(int *)(DAT_00032998 + 0x328aa) = 1;
    iVar10 = *(int *)(DAT_0003299c + 0x328b8) + 1;
    *(int *)(DAT_0003299c + 0x328b8) = iVar10;
    *(int *)(DAT_000329a0 + 0x328c2) = iVar10;
  }
  if (-1 < *(int *)(DAT_000329a4 + 0x328c8) << 0x1f) {
    *(int *)(DAT_000329a4 + 0x328c8) = 1;
    iVar10 = *(int *)(DAT_000329a8 + 0x328d6) + 1;
    *(int *)(DAT_000329a8 + 0x328d6) = iVar10;
    *(int *)(DAT_000329ac + 0x328e0) = iVar10;
  }
  return;
}



