/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00070090 _INIT_63 */

void _INIT_63(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = DAT_00070308 + 0x7009e;
  if (-1 < *(int *)(DAT_00070304 + 0x70098) << 0x1f) {
    *(int *)(DAT_00070304 + 0x70098) = 1;
    iVar2 = DAT_0007030c;
    uVar1 = DAT_00070300;
    uVar6 = DAT_000702fc;
    *(undefined4 *)(DAT_0007030c + 0x700b2) = DAT_00070300;
    *(undefined4 *)(iVar2 + 0x700b6) = uVar6;
    *(undefined4 *)(iVar2 + 0x700ba) = uVar6;
    *(undefined4 *)(iVar2 + 0x700be) = uVar6;
    *(undefined4 *)(iVar2 + 0x700c2) = uVar6;
    *(undefined4 *)(iVar2 + 0x700c6) = uVar1;
    *(undefined4 *)(iVar2 + 0x700ca) = uVar6;
    *(undefined4 *)(iVar2 + 0x700ce) = uVar6;
    *(undefined4 *)(iVar2 + 0x700d2) = uVar6;
    *(undefined4 *)(iVar2 + 0x700d6) = uVar6;
    *(undefined4 *)(iVar2 + 0x700da) = uVar1;
    *(undefined4 *)(iVar2 + 0x700de) = uVar6;
    *(undefined4 *)(iVar2 + 0x700e2) = uVar6;
    *(undefined4 *)(iVar2 + 0x700e6) = uVar6;
    *(undefined4 *)(iVar2 + 0x700ea) = uVar6;
    *(undefined4 *)(iVar2 + 0x700ee) = uVar1;
  }
  iVar4 = DAT_000703cc;
  iVar3 = DAT_000703c8;
  iVar2 = DAT_00070314;
  uVar6 = DAT_000702fc;
  if (-1 < *(int *)(DAT_00070310 + 0x700f6) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_000703c8 + 0x702e6);
    *(int *)(DAT_00070310 + 0x700f6) = 1;
    *puVar5 = uVar6;
    *(undefined4 *)(iVar3 + 0x702ea) = uVar6;
    *(undefined4 *)(iVar3 + 0x702ee) = uVar6;
    __aeabi_atexit(puVar5,iVar4 + 0x702f6,*(undefined4 *)(iVar7 + iVar2));
  }
  iVar4 = DAT_00070320;
  iVar3 = DAT_0007031c;
  uVar6 = DAT_000702fc;
  if (-1 < *(int *)(DAT_00070318 + 0x70104) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_0007031c + 0x70116);
    *(int *)(DAT_00070318 + 0x70104) = 1;
    *puVar5 = uVar6;
    *(undefined4 *)(iVar3 + 0x7011a) = uVar6;
    __aeabi_atexit(puVar5,iVar4 + 0x70122,*(undefined4 *)(iVar7 + iVar2));
  }
  iVar3 = DAT_00070324;
  uVar6 = *(undefined4 *)(iVar7 + iVar2);
  iVar7 = DAT_00070328 + 0x70136;
  *(undefined *)((int)&DAT_00070338 + DAT_00070324 + 1) = 0xff;
  *(undefined *)((int)&DAT_00070338 + iVar3) = 0;
  *(undefined *)((int)&DAT_00070334 + iVar3 + 3) = 0;
  *(undefined *)((int)&DAT_00070334 + iVar3 + 2) = 0;
  __aeabi_atexit(iVar3 + 0x70336,iVar7,uVar6);
  if (-1 < *(int *)(DAT_0007032c + 0x70154) << 0x1f) {
    *(int *)(DAT_0007032c + 0x70154) = 1;
    iVar7 = *(int *)(DAT_00070330 + 0x70162) + 1;
    *(int *)(DAT_00070330 + 0x70162) = iVar7;
    *(int *)(DAT_00070334 + 0x7016c) = iVar7;
  }
  if (-1 < *(int *)(DAT_00070338 + 0x70172) << 0x1f) {
    *(int *)(DAT_00070338 + 0x70172) = 1;
    iVar7 = *(int *)(DAT_0007033c + 0x70180) + 1;
    *(int *)(DAT_0007033c + 0x70180) = iVar7;
    *(int *)(DAT_00070340 + 0x7018a) = iVar7;
  }
  if (-1 < *(int *)(DAT_00070344 + 0x70190) << 0x1f) {
    *(int *)(DAT_00070344 + 0x70190) = 1;
    iVar7 = *(int *)(DAT_00070348 + 0x7019e) + 1;
    *(int *)(DAT_00070348 + 0x7019e) = iVar7;
    *(int *)(DAT_0007034c + 0x701a8) = iVar7;
  }
  if (-1 < *(int *)(DAT_00070350 + 0x701ae) << 0x1f) {
    *(int *)(DAT_00070350 + 0x701ae) = 1;
    iVar7 = *(int *)(DAT_00070354 + 0x701bc) + 1;
    *(int *)(DAT_00070354 + 0x701bc) = iVar7;
    *(int *)(DAT_00070358 + 0x701c6) = iVar7;
  }
  if (-1 < *(int *)(DAT_0007035c + 0x701cc) << 0x1f) {
    *(int *)(DAT_0007035c + 0x701cc) = 1;
    iVar7 = *(int *)(DAT_00070360 + 0x701da) + 1;
    *(int *)(DAT_00070360 + 0x701da) = iVar7;
    *(int *)(DAT_00070364 + 0x701e4) = iVar7;
  }
  if (-1 < *(int *)(DAT_00070368 + 0x701ea) << 0x1f) {
    *(int *)(DAT_00070368 + 0x701ea) = 1;
    iVar7 = *(int *)(DAT_0007036c + 0x701f8) + 1;
    *(int *)(DAT_0007036c + 0x701f8) = iVar7;
    *(int *)(DAT_00070370 + 0x70202) = iVar7;
  }
  if (-1 < *(int *)(DAT_00070374 + 0x70208) << 0x1f) {
    *(int *)(DAT_00070374 + 0x70208) = 1;
    iVar7 = *(int *)(DAT_00070378 + 0x70216) + 1;
    *(int *)(DAT_00070378 + 0x70216) = iVar7;
    *(int *)(DAT_0007037c + 0x70220) = iVar7;
  }
  if (-1 < *(int *)(DAT_00070380 + 0x70226) << 0x1f) {
    *(int *)(DAT_00070380 + 0x70226) = 1;
    iVar7 = *(int *)(DAT_00070384 + 0x70234) + 1;
    *(int *)(DAT_00070384 + 0x70234) = iVar7;
    *(int *)(DAT_00070388 + 0x7023e) = iVar7;
  }
  if (-1 < *(int *)(DAT_0007038c + 0x70244) << 0x1f) {
    *(int *)(DAT_0007038c + 0x70244) = 1;
    iVar7 = *(int *)(DAT_00070390 + 0x70252) + 1;
    *(int *)(DAT_00070390 + 0x70252) = iVar7;
    *(int *)(DAT_00070394 + 0x7025c) = iVar7;
  }
  if (-1 < *(int *)(DAT_00070398 + 0x70262) << 0x1f) {
    *(int *)(DAT_00070398 + 0x70262) = 1;
    iVar7 = *(int *)(DAT_0007039c + 0x70270) + 1;
    *(int *)(DAT_0007039c + 0x70270) = iVar7;
    *(int *)(DAT_000703a0 + 0x7027a) = iVar7;
  }
  if (-1 < *(int *)(DAT_000703a4 + 0x70280) << 0x1f) {
    *(int *)(DAT_000703a4 + 0x70280) = 1;
    iVar7 = *(int *)(DAT_000703a8 + 0x7028e) + 1;
    *(int *)(DAT_000703a8 + 0x7028e) = iVar7;
    *(int *)(DAT_000703ac + 0x70298) = iVar7;
  }
  if (-1 < *(int *)(DAT_000703b0 + 0x7029e) << 0x1f) {
    *(int *)(DAT_000703b0 + 0x7029e) = 1;
    iVar7 = *(int *)(DAT_000703b4 + 0x702ac) + 1;
    *(int *)(DAT_000703b4 + 0x702ac) = iVar7;
    *(int *)(DAT_000703b8 + 0x702b6) = iVar7;
  }
  if (-1 < *(int *)(DAT_000703bc + 0x702bc) << 0x1f) {
    *(int *)(DAT_000703bc + 0x702bc) = 1;
    iVar7 = *(int *)(DAT_000703c0 + 0x702ca) + 1;
    *(int *)(DAT_000703c0 + 0x702ca) = iVar7;
    *(int *)(DAT_000703c4 + 0x702d4) = iVar7;
  }
  return;
}



