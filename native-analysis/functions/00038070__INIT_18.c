/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00038070 _INIT_18 */

void _INIT_18(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar7 = DAT_00038348 + 0x38080;
  if (-1 < *(int *)(DAT_00038344 + 0x3807a) << 0x1f) {
    *(int *)(DAT_00038344 + 0x3807a) = 1;
    iVar3 = DAT_0003834c;
    uVar8 = DAT_00038340;
    uVar1 = DAT_0003833c;
    *(undefined4 *)(DAT_0003834c + 0x38094) = DAT_00038340;
    *(undefined4 *)(iVar3 + 0x38098) = uVar1;
    *(undefined4 *)(iVar3 + 0x3809c) = uVar1;
    *(undefined4 *)(iVar3 + 0x380a0) = uVar1;
    *(undefined4 *)(iVar3 + 0x380a4) = uVar1;
    *(undefined4 *)(iVar3 + 0x380a8) = uVar8;
    *(undefined4 *)(iVar3 + 0x380ac) = uVar1;
    *(undefined4 *)(iVar3 + 0x380b0) = uVar1;
    *(undefined4 *)(iVar3 + 0x380b4) = uVar1;
    *(undefined4 *)(iVar3 + 0x380b8) = uVar1;
    *(undefined4 *)(iVar3 + 0x380bc) = uVar8;
    *(undefined4 *)(iVar3 + 0x380c0) = uVar1;
    *(undefined4 *)(iVar3 + 0x380c4) = uVar1;
    *(undefined4 *)(iVar3 + 0x380c8) = uVar1;
    *(undefined4 *)(iVar3 + 0x380cc) = uVar1;
    *(undefined4 *)(iVar3 + 0x380d0) = uVar8;
  }
  iVar5 = DAT_0003853c;
  iVar4 = DAT_00038538;
  iVar3 = DAT_00038534;
  uVar1 = DAT_000384f0;
  iVar9 = DAT_00038354;
  if (-1 < *(int *)(DAT_00038350 + 0x380d8) << 0x1f) {
    puVar6 = (undefined4 *)(DAT_00038538 + 0x384d8);
    *(int *)(DAT_00038350 + 0x380d8) = 1;
    *puVar6 = uVar1;
    *(undefined4 *)(iVar4 + 0x384dc) = uVar1;
    *(undefined4 *)(iVar4 + 0x384e0) = uVar1;
    __aeabi_atexit(puVar6,iVar5 + 0x384e8,*(undefined4 *)(iVar7 + iVar3));
    iVar9 = iVar3;
  }
  iVar4 = DAT_00038360;
  iVar3 = DAT_0003835c;
  uVar1 = DAT_0003833c;
  if (-1 < *(int *)(DAT_00038358 + 0x380e8) << 0x1f) {
    puVar6 = (undefined4 *)(DAT_0003835c + 0x380fa);
    *(int *)(DAT_00038358 + 0x380e8) = 1;
    *puVar6 = uVar1;
    *(undefined4 *)(iVar3 + 0x380fe) = uVar1;
    __aeabi_atexit(puVar6,iVar4 + 0x38106,*(undefined4 *)(iVar7 + iVar9));
  }
  iVar5 = DAT_0003836c;
  iVar4 = DAT_00038368;
  iVar3 = DAT_00038364;
  uVar8 = *(undefined4 *)(iVar7 + iVar9);
  *(undefined *)(DAT_00038364 + 0x38201) = 0xff;
  *(undefined *)(iVar3 + 0x38200) = 0;
  *(undefined *)(iVar3 + 0x381ff) = 0;
  *(undefined *)(iVar3 + 0x381fe) = 0;
  __aeabi_atexit((undefined *)(iVar3 + 0x381fe),iVar4 + 0x38126,uVar8);
  FUN_00038068(iVar3 + 0x381fa);
  __aeabi_atexit(iVar3 + 0x381fa,iVar5 + 0x38138,uVar8);
  FUN_00038068(iVar3 + 0x381f6);
  __aeabi_atexit(iVar3 + 0x381f6,iVar5 + 0x38138,uVar8);
  iVar4 = DAT_00038378;
  iVar3 = DAT_00038374;
  uVar1 = DAT_0003833c;
  if (-1 < *(int *)(DAT_00038370 + 0x38166) << 0x1f) {
    puVar6 = (undefined4 *)(DAT_00038374 + 0x38178);
    *(int *)(DAT_00038370 + 0x38166) = 1;
    uVar2 = DAT_00038340;
    *puVar6 = uVar1;
    *(undefined4 *)(iVar3 + 0x3817c) = uVar2;
    *(undefined4 *)(iVar3 + 0x38180) = uVar1;
    __aeabi_atexit(puVar6,iVar4 + 0x3818c,uVar8);
  }
  iVar4 = DAT_00038384;
  iVar3 = DAT_00038380;
  uVar1 = DAT_00038340;
  if (-1 < *(int *)(DAT_0003837c + 0x38196) << 0x1f) {
    puVar6 = (undefined4 *)(DAT_00038380 + 0x381a8);
    *(int *)(DAT_0003837c + 0x38196) = 1;
    *puVar6 = uVar1;
    *(undefined4 *)(iVar3 + 0x381ac) = uVar1;
    *(undefined4 *)(iVar3 + 0x381b0) = uVar1;
    __aeabi_atexit(puVar6,iVar4 + 0x381b8,*(undefined4 *)(iVar7 + iVar9));
  }
  if (-1 < *(int *)(DAT_00038388 + 0x381c4) << 0x1f) {
    *(int *)(DAT_00038388 + 0x381c4) = 1;
    iVar7 = *(int *)(DAT_0003838c + 0x381d2) + 1;
    *(int *)(DAT_0003838c + 0x381d2) = iVar7;
    *(int *)(DAT_00038390 + 0x381dc) = iVar7;
  }
  if (-1 < *(int *)(DAT_00038394 + 0x381e2) << 0x1f) {
    *(int *)(DAT_00038394 + 0x381e2) = 1;
    iVar7 = *(int *)(DAT_00038398 + 0x381f0) + 1;
    *(int *)(DAT_00038398 + 0x381f0) = iVar7;
    *(int *)(DAT_0003839c + 0x381fa) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383a0 + 0x38200) << 0x1f) {
    *(int *)(DAT_000383a0 + 0x38200) = 1;
    iVar7 = *(int *)(DAT_000383a4 + 0x3820e) + 1;
    *(int *)(DAT_000383a4 + 0x3820e) = iVar7;
    *(int *)(DAT_000383a8 + 0x38218) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383ac + 0x3821e) << 0x1f) {
    *(int *)(DAT_000383ac + 0x3821e) = 1;
    iVar7 = *(int *)(DAT_000383b0 + 0x3822c) + 1;
    *(int *)(DAT_000383b0 + 0x3822c) = iVar7;
    *(int *)(DAT_000383b4 + 0x38236) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383b8 + 0x3823c) << 0x1f) {
    *(int *)(DAT_000383b8 + 0x3823c) = 1;
    iVar7 = *(int *)(DAT_000383bc + 0x3824a) + 1;
    *(int *)(DAT_000383bc + 0x3824a) = iVar7;
    *(int *)(DAT_000383c0 + 0x38254) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383c4 + 0x3825a) << 0x1f) {
    *(int *)(DAT_000383c4 + 0x3825a) = 1;
    iVar7 = *(int *)(DAT_000383c8 + 0x38268) + 1;
    *(int *)(DAT_000383c8 + 0x38268) = iVar7;
    *(int *)(DAT_000383cc + 0x38272) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383d0 + 0x38278) << 0x1f) {
    *(int *)(DAT_000383d0 + 0x38278) = 1;
    iVar7 = *(int *)(DAT_000383d4 + 0x38286) + 1;
    *(int *)(DAT_000383d4 + 0x38286) = iVar7;
    *(int *)(DAT_000383d8 + 0x38290) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383dc + 0x38296) << 0x1f) {
    *(int *)(DAT_000383dc + 0x38296) = 1;
    iVar7 = *(int *)(DAT_000383e0 + 0x382a4) + 1;
    *(int *)(DAT_000383e0 + 0x382a4) = iVar7;
    *(int *)(DAT_000383e4 + 0x382ae) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383e8 + 0x382b4) << 0x1f) {
    *(int *)(DAT_000383e8 + 0x382b4) = 1;
    iVar7 = *(int *)(DAT_000383ec + 0x382c2) + 1;
    *(int *)(DAT_000383ec + 0x382c2) = iVar7;
    *(int *)(DAT_000383f0 + 0x382cc) = iVar7;
  }
  if (-1 < *(int *)(DAT_000383f4 + 0x382d2) << 0x1f) {
    *(int *)(DAT_000383f4 + 0x382d2) = 1;
    iVar7 = *(int *)(DAT_000383f8 + 0x382e0) + 1;
    *(int *)(DAT_000383f8 + 0x382e0) = iVar7;
    *(int *)(DAT_000383fc + 0x382ea) = iVar7;
  }
  if (-1 < *(int *)(DAT_00038400 + 0x382f0) << 0x1f) {
    *(int *)(DAT_00038400 + 0x382f0) = 1;
    iVar7 = *(int *)(DAT_00038404 + 0x382fe) + 1;
    *(int *)(DAT_00038404 + 0x382fe) = iVar7;
    *(int *)(DAT_00038408 + 0x38308) = iVar7;
  }
  if (-1 < *(int *)(DAT_0003840c + 0x3830e) << 0x1f) {
    *(int *)(DAT_0003840c + 0x3830e) = 1;
    iVar7 = *(int *)(DAT_00038410 + 0x3831c) + 1;
    *(int *)(DAT_00038410 + 0x3831c) = iVar7;
    *(int *)(DAT_00038414 + 0x38326) = iVar7;
  }
  if (-1 < *(int *)(DAT_00038418 + 0x3832c) << 0x1f) {
    *(int *)(DAT_00038418 + 0x3832c) = 1;
    iVar7 = *(int *)(&UNK_0003833a + DAT_0003841c) + 1;
    *(int *)(&UNK_0003833a + DAT_0003841c) = iVar7;
    *(int *)(DAT_000384f4 + 0x3842c) = iVar7;
  }
  if (-1 < *(int *)(DAT_000384f8 + 0x38432) << 0x1f) {
    *(int *)(DAT_000384f8 + 0x38432) = 1;
    iVar7 = *(int *)(DAT_000384fc + 0x38440) + 1;
    *(int *)(DAT_000384fc + 0x38440) = iVar7;
    *(int *)(DAT_00038500 + 0x3844a) = iVar7;
  }
  if (-1 < *(int *)(DAT_00038504 + 0x38450) << 0x1f) {
    *(int *)(DAT_00038504 + 0x38450) = 1;
    iVar7 = *(int *)(DAT_00038508 + 0x3845e) + 1;
    *(int *)(DAT_00038508 + 0x3845e) = iVar7;
    *(int *)(DAT_0003850c + 0x38468) = iVar7;
  }
  if (-1 < *(int *)(DAT_00038510 + 0x3846e) << 0x1f) {
    *(int *)(DAT_00038510 + 0x3846e) = 1;
    iVar7 = *(int *)(DAT_00038514 + 0x3847c) + 1;
    *(int *)(DAT_00038514 + 0x3847c) = iVar7;
    *(int *)(DAT_00038518 + 0x38486) = iVar7;
  }
  if (-1 < *(int *)(DAT_0003851c + 0x3848c) << 0x1f) {
    *(int *)(DAT_0003851c + 0x3848c) = 1;
    iVar7 = *(int *)(DAT_00038520 + 0x3849a) + 1;
    *(int *)(DAT_00038520 + 0x3849a) = iVar7;
    *(int *)(DAT_00038524 + 0x384a4) = iVar7;
  }
  if (-1 < *(int *)(DAT_00038528 + 0x384aa) << 0x1f) {
    *(int *)(DAT_00038528 + 0x384aa) = 1;
    iVar7 = *(int *)(DAT_0003852c + 0x384b8) + 1;
    *(int *)(DAT_0003852c + 0x384b8) = iVar7;
    *(int *)(DAT_00038530 + 0x384c2) = iVar7;
  }
  return;
}



