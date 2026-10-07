/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00043da4 _INIT_26 */

void _INIT_26(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = DAT_000440b4 + 0x43db4;
  if (-1 < *(int *)(DAT_000440b0 + 0x43dae) << 0x1f) {
    *(int *)(DAT_000440b0 + 0x43dae) = 1;
    iVar9 = DAT_000440b8;
    uVar5 = DAT_000440ac;
    uVar1 = DAT_000440a8;
    *(undefined4 *)(DAT_000440b8 + 0x43dc8) = DAT_000440ac;
    *(undefined4 *)(iVar9 + 0x43dcc) = uVar1;
    *(undefined4 *)(iVar9 + 0x43dd0) = uVar1;
    *(undefined4 *)(iVar9 + 0x43dd4) = uVar1;
    *(undefined4 *)(iVar9 + 0x43dd8) = uVar1;
    *(undefined4 *)(iVar9 + 0x43ddc) = uVar5;
    *(undefined4 *)(iVar9 + 0x43de0) = uVar1;
    *(undefined4 *)(iVar9 + 0x43de4) = uVar1;
    *(undefined4 *)(iVar9 + 0x43de8) = uVar1;
    *(undefined4 *)(iVar9 + 0x43dec) = uVar1;
    *(undefined4 *)(iVar9 + 0x43df0) = uVar5;
    *(undefined4 *)(iVar9 + 0x43df4) = uVar1;
    *(undefined4 *)(iVar9 + 0x43df8) = uVar1;
    *(undefined4 *)(iVar9 + 0x43dfc) = uVar1;
    *(undefined4 *)(iVar9 + 0x43e00) = uVar1;
    *(undefined4 *)(iVar9 + 0x43e04) = uVar5;
  }
  iVar2 = DAT_000443e4;
  iVar9 = DAT_000443dc;
  uVar1 = DAT_00044320;
  if (*(int *)(DAT_000440bc + 0x43e0c) << 0x1f < 0) {
    iVar8 = DAT_000440c0 + 0x43e1e;
    iVar9 = DAT_000440c4;
  }
  else {
    iVar8 = DAT_000443e0 + 0x44306;
    *(int *)(DAT_000440bc + 0x43e0c) = 1;
    uVar5 = *(undefined4 *)(iVar7 + iVar9);
    *(undefined4 *)(iVar2 + 0x4430a) = uVar1;
    *(undefined4 *)(iVar2 + 0x4430e) = uVar1;
    *(undefined4 *)(iVar2 + 0x44312) = uVar1;
    __aeabi_atexit((undefined4 *)(iVar2 + 0x4430a),iVar8,uVar5);
  }
  iVar6 = DAT_000440d0;
  iVar2 = DAT_000440cc;
  uVar1 = DAT_000440a8;
  if (-1 < *(int *)(DAT_000440c8 + 0x43e22) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_000440cc + 0x43e34);
    *(int *)(DAT_000440c8 + 0x43e22) = 1;
    *puVar3 = uVar1;
    *(undefined4 *)(iVar2 + 0x43e38) = uVar1;
    __aeabi_atexit(puVar3,iVar6 + 0x43e40,*(undefined4 *)(iVar7 + iVar9));
  }
  iVar6 = DAT_000440dc;
  iVar2 = DAT_000440d4;
  uVar5 = *(undefined4 *)(iVar7 + iVar9);
  iVar4 = DAT_000440d8 + 0x43e5c;
  iVar10 = DAT_000440d4 + 0x43e78;
  *(undefined *)(DAT_000440d4 + 0x43e77) = 0xff;
  *(undefined *)(iVar2 + 0x43e76) = 0;
  *(undefined *)(iVar2 + 0x43e75) = 0;
  iVar6 = iVar6 + 0x43e72;
  *(undefined *)(iVar2 + 0x43e74) = 0;
  __aeabi_atexit((undefined *)(iVar2 + 0x43e74),iVar4,uVar5);
  FUN_00043d9c(iVar10);
  __aeabi_atexit(iVar10,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e7c);
  __aeabi_atexit(iVar2 + 0x43e7c,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e80);
  __aeabi_atexit(iVar2 + 0x43e80,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e84);
  __aeabi_atexit(iVar2 + 0x43e84,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e88);
  __aeabi_atexit(iVar2 + 0x43e88,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e8c);
  __aeabi_atexit(iVar2 + 0x43e8c,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e90);
  __aeabi_atexit(iVar2 + 0x43e90,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e94);
  __aeabi_atexit(iVar2 + 0x43e94,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e98);
  __aeabi_atexit(iVar2 + 0x43e98,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e9c);
  __aeabi_atexit(iVar2 + 0x43e9c,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43ea0);
  __aeabi_atexit(iVar2 + 0x43ea0,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43ea4);
  __aeabi_atexit(iVar2 + 0x43ea4,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e68);
  __aeabi_atexit(iVar2 + 0x43e68,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43e70);
  __aeabi_atexit(iVar2 + 0x43e70,iVar6,uVar5);
  FUN_00043d9c(iVar2 + 0x43ea8);
  __aeabi_atexit(iVar2 + 0x43ea8,iVar6,uVar5);
  __aeabi_atexit(iVar2 + 0x43eac,iVar8,uVar5);
  iVar2 = DAT_000440e4;
  uVar1 = DAT_000440ac;
  if (-1 < *(int *)(DAT_000440e0 + 0x43fb2) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_000440e4 + 0x43fc4);
    *(int *)(DAT_000440e0 + 0x43fb2) = 1;
    *puVar3 = uVar1;
    *(undefined4 *)(iVar2 + 0x43fc8) = uVar1;
    *(undefined4 *)(iVar2 + 0x43fcc) = uVar1;
    __aeabi_atexit(puVar3,iVar8,uVar5);
  }
  iVar2 = DAT_000440ec;
  uVar1 = DAT_000440a8;
  if (-1 < *(int *)(DAT_000440e8 + 0x43fdc) << 0x1f) {
    *(int *)(DAT_000440e8 + 0x43fdc) = 1;
    uVar5 = DAT_000440ac;
    *(undefined4 *)(iVar2 + 0x43fee) = uVar1;
    *(undefined4 *)(iVar2 + 0x43ff2) = uVar5;
    *(undefined4 *)(iVar2 + 0x43ff6) = uVar1;
    __aeabi_atexit((undefined4 *)(iVar2 + 0x43fee),iVar8,*(undefined4 *)(iVar7 + iVar9));
  }
  iVar2 = DAT_000440f4;
  uVar1 = DAT_000440ac;
  if (-1 < *(int *)(DAT_000440f0 + 0x4400c) << 0x1f) {
    *(int *)(DAT_000440f0 + 0x4400c) = 1;
    uVar5 = *(undefined4 *)(iVar7 + iVar9);
    *(undefined4 *)(iVar2 + 0x4401e) = uVar1;
    uVar1 = DAT_000440a8;
    *(undefined4 *)(iVar2 + 0x44022) = DAT_000440a8;
    *(undefined4 *)(iVar2 + 0x44026) = uVar1;
    __aeabi_atexit((undefined4 *)(iVar2 + 0x4401e),iVar8,uVar5);
  }
  if (-1 < *(int *)(DAT_000440f8 + 0x4403c) << 0x1f) {
    *(int *)(DAT_000440f8 + 0x4403c) = 1;
    iVar7 = *(int *)(DAT_000440fc + 0x4404a) + 1;
    *(int *)(DAT_000440fc + 0x4404a) = iVar7;
    *(int *)(DAT_00044100 + 0x44054) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044104 + 0x4405a) << 0x1f) {
    *(int *)(DAT_00044104 + 0x4405a) = 1;
    iVar7 = *(int *)(DAT_00044108 + 0x44068) + 1;
    *(int *)(DAT_00044108 + 0x44068) = iVar7;
    *(int *)(DAT_0004410c + 0x44072) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044110 + 0x44078) << 0x1f) {
    *(int *)(DAT_00044110 + 0x44078) = 1;
    iVar7 = *(int *)(DAT_00044114 + 0x44086) + 1;
    *(int *)(DAT_00044114 + 0x44086) = iVar7;
    *(int *)(DAT_00044118 + 0x44090) = iVar7;
  }
  if (-1 < *(int *)(DAT_0004411c + 0x44096) << 0x1f) {
    *(int *)(DAT_0004411c + 0x44096) = 1;
    iVar7 = *(int *)(DAT_00044120 + 0x440a4) + 1;
    *(int *)(DAT_00044120 + 0x440a4) = iVar7;
    *(int *)(DAT_00044324 + 0x4412c) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044328 + 0x44132) << 0x1f) {
    *(int *)(DAT_00044328 + 0x44132) = 1;
    iVar7 = *(int *)(DAT_0004432c + 0x44140) + 1;
    *(int *)(DAT_0004432c + 0x44140) = iVar7;
    *(int *)(DAT_00044330 + 0x4414a) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044334 + 0x44150) << 0x1f) {
    *(int *)(DAT_00044334 + 0x44150) = 1;
    iVar7 = *(int *)(DAT_00044338 + 0x4415e) + 1;
    *(int *)(DAT_00044338 + 0x4415e) = iVar7;
    *(int *)(DAT_0004433c + 0x44168) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044340 + 0x4416e) << 0x1f) {
    *(int *)(DAT_00044340 + 0x4416e) = 1;
    iVar7 = *(int *)(DAT_00044344 + 0x4417c) + 1;
    *(int *)(DAT_00044344 + 0x4417c) = iVar7;
    *(int *)(DAT_00044348 + 0x44186) = iVar7;
  }
  if (-1 < *(int *)(DAT_0004434c + 0x4418c) << 0x1f) {
    *(int *)(DAT_0004434c + 0x4418c) = 1;
    iVar7 = *(int *)(DAT_00044350 + 0x4419a) + 1;
    *(int *)(DAT_00044350 + 0x4419a) = iVar7;
    *(int *)(DAT_00044354 + 0x441a4) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044358 + 0x441aa) << 0x1f) {
    *(int *)(DAT_00044358 + 0x441aa) = 1;
    iVar7 = *(int *)(DAT_0004435c + 0x441b8) + 1;
    *(int *)(DAT_0004435c + 0x441b8) = iVar7;
    *(int *)(DAT_00044360 + 0x441c2) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044364 + 0x441c8) << 0x1f) {
    *(int *)(DAT_00044364 + 0x441c8) = 1;
    iVar7 = *(int *)(DAT_00044368 + 0x441d6) + 1;
    *(int *)(DAT_00044368 + 0x441d6) = iVar7;
    *(int *)(DAT_0004436c + 0x441e0) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044370 + 0x441e6) << 0x1f) {
    *(int *)(DAT_00044370 + 0x441e6) = 1;
    iVar7 = *(int *)(DAT_00044374 + 0x441f4) + 1;
    *(int *)(DAT_00044374 + 0x441f4) = iVar7;
    *(int *)(DAT_00044378 + 0x441fe) = iVar7;
  }
  if (-1 < *(int *)(DAT_0004437c + 0x44204) << 0x1f) {
    *(int *)(DAT_0004437c + 0x44204) = 1;
    iVar7 = *(int *)(DAT_00044380 + 0x44212) + 1;
    *(int *)(DAT_00044380 + 0x44212) = iVar7;
    *(int *)(DAT_00044384 + 0x4421c) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044388 + 0x44222) << 0x1f) {
    *(int *)(DAT_00044388 + 0x44222) = 1;
    iVar7 = *(int *)(DAT_0004438c + 0x44230) + 1;
    *(int *)(DAT_0004438c + 0x44230) = iVar7;
    *(int *)(DAT_00044390 + 0x4423a) = iVar7;
  }
  if (-1 < *(int *)(DAT_00044394 + 0x44240) << 0x1f) {
    *(int *)(DAT_00044394 + 0x44240) = 1;
    iVar7 = *(int *)(DAT_00044398 + 0x4424e) + 1;
    *(int *)(DAT_00044398 + 0x4424e) = iVar7;
    *(int *)(DAT_0004439c + 0x44258) = iVar7;
  }
  if (-1 < *(int *)(DAT_000443a0 + 0x4425e) << 0x1f) {
    *(int *)(DAT_000443a0 + 0x4425e) = 1;
    iVar7 = *(int *)(DAT_000443a4 + 0x4426c) + 1;
    *(int *)(DAT_000443a4 + 0x4426c) = iVar7;
    *(int *)(DAT_000443a8 + 0x44276) = iVar7;
  }
  if (-1 < *(int *)(DAT_000443ac + 0x4427c) << 0x1f) {
    *(int *)(DAT_000443ac + 0x4427c) = 1;
    iVar7 = *(int *)(DAT_000443b0 + 0x4428a) + 1;
    *(int *)(DAT_000443b0 + 0x4428a) = iVar7;
    *(int *)(DAT_000443b4 + 0x44294) = iVar7;
  }
  if (-1 < *(int *)(DAT_000443b8 + 0x4429a) << 0x1f) {
    *(int *)(DAT_000443b8 + 0x4429a) = 1;
    iVar7 = *(int *)(DAT_000443bc + 0x442a8) + 1;
    *(int *)(DAT_000443bc + 0x442a8) = iVar7;
    *(int *)(DAT_000443c0 + 0x442b2) = iVar7;
  }
  if (-1 < *(int *)(DAT_000443c4 + 0x442b8) << 0x1f) {
    *(int *)(DAT_000443c4 + 0x442b8) = 1;
    iVar7 = *(int *)(DAT_000443c8 + 0x442c6) + 1;
    *(int *)(DAT_000443c8 + 0x442c6) = iVar7;
    *(int *)(DAT_000443cc + 0x442d0) = iVar7;
  }
  if (-1 < *(int *)(DAT_000443d0 + 0x442d6) << 0x1f) {
    *(int *)(DAT_000443d0 + 0x442d6) = 1;
    iVar7 = *(int *)(DAT_000443d4 + 0x442e4) + 1;
    *(int *)(DAT_000443d4 + 0x442e4) = iVar7;
    *(int *)(DAT_000443d8 + 0x442ee) = iVar7;
  }
  return;
}



