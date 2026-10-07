/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000683a0 _INIT_51 */

void _INIT_51(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar5 = DAT_00068668 + 0x683b0;
  if (-1 < *(int *)(DAT_00068664 + 0x683aa) << 0x1f) {
    *(int *)(DAT_00068664 + 0x683aa) = 1;
    iVar2 = DAT_0006866c;
    uVar1 = DAT_00068660;
    uVar7 = DAT_0006865c;
    *(undefined4 *)(DAT_0006866c + 0x683c4) = DAT_00068660;
    *(undefined4 *)(iVar2 + 0x683c8) = uVar7;
    *(undefined4 *)(iVar2 + 0x683cc) = uVar7;
    *(undefined4 *)(iVar2 + 0x683d0) = uVar7;
    *(undefined4 *)(iVar2 + 0x683d4) = uVar7;
    *(undefined4 *)(iVar2 + 0x683d8) = uVar1;
    *(undefined4 *)(iVar2 + 0x683dc) = uVar7;
    *(undefined4 *)(iVar2 + 0x683e0) = uVar7;
    *(undefined4 *)(iVar2 + 0x683e4) = uVar7;
    *(undefined4 *)(iVar2 + 0x683e8) = uVar7;
    *(undefined4 *)(iVar2 + 0x683ec) = uVar1;
    *(undefined4 *)(iVar2 + 0x683f0) = uVar7;
    *(undefined4 *)(iVar2 + 0x683f4) = uVar7;
    *(undefined4 *)(iVar2 + 0x683f8) = uVar7;
    *(undefined4 *)(iVar2 + 0x683fc) = uVar7;
    *(undefined4 *)(iVar2 + 0x68400) = uVar1;
  }
  iVar6 = DAT_00068804;
  iVar3 = DAT_00068800;
  iVar2 = DAT_000687fc;
  uVar7 = DAT_000687c4;
  iVar8 = DAT_00068674;
  if (-1 < *(int *)(DAT_00068670 + 0x68408) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_00068800 + 0x687ae);
    *(int *)(DAT_00068670 + 0x68408) = 1;
    *puVar4 = uVar7;
    *(undefined4 *)(iVar3 + 0x687b2) = uVar7;
    *(undefined4 *)(iVar3 + 0x687b6) = uVar7;
    __aeabi_atexit(puVar4,iVar6 + 0x687be,*(undefined4 *)(iVar5 + iVar2));
    iVar8 = iVar2;
  }
  iVar3 = DAT_00068680;
  iVar2 = DAT_0006867c;
  uVar7 = DAT_0006865c;
  if (-1 < *(int *)(DAT_00068678 + 0x68416) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0006867c + 0x68428);
    *(int *)(DAT_00068678 + 0x68416) = 1;
    *puVar4 = uVar7;
    *(undefined4 *)(iVar2 + 0x6842c) = uVar7;
    __aeabi_atexit(puVar4,iVar3 + 0x68434,*(undefined4 *)(iVar5 + iVar8));
  }
  iVar6 = DAT_0006868c;
  iVar3 = DAT_00068688;
  iVar2 = DAT_00068684;
  uVar7 = *(undefined4 *)(iVar5 + iVar8);
  iVar5 = DAT_00068684 + 0x68444;
  iVar8 = DAT_00068684 + 0x6844c;
  *(undefined *)(DAT_00068684 + 0x6844b) = 0xff;
  *(undefined *)(iVar2 + 0x6844a) = 0;
  *(undefined *)(iVar2 + 0x68449) = 0;
  iVar6 = iVar6 + 0x6845c;
  *(undefined *)(iVar2 + 0x68448) = 0;
  __aeabi_atexit((undefined *)(iVar2 + 0x68448),iVar3 + 0x68452,uVar7);
  FUN_00068398(iVar8);
  __aeabi_atexit(iVar8,iVar6,uVar7);
  FUN_00068398(iVar2 + 0x68450);
  __aeabi_atexit(iVar2 + 0x68450,iVar6,uVar7);
  FUN_00068398(iVar2 + 0x68454);
  __aeabi_atexit(iVar2 + 0x68454,iVar6,uVar7);
  FUN_00068398(iVar5);
  __aeabi_atexit(iVar5,iVar6,uVar7);
  FUN_00068398(iVar2 + 0x68458);
  __aeabi_atexit(iVar2 + 0x68458,iVar6,uVar7);
  FUN_00068398(iVar2 + 0x6845c);
  __aeabi_atexit(iVar2 + 0x6845c,iVar6,uVar7);
  FUN_00068398(iVar2 + 0x68460);
  __aeabi_atexit(iVar2 + 0x68460,iVar6,uVar7);
  FUN_00068398(iVar2 + 0x68464);
  __aeabi_atexit(iVar2 + 0x68464,iVar6,uVar7);
  if (-1 < *(int *)(DAT_00068690 + 0x684fe) << 0x1f) {
    *(int *)(DAT_00068690 + 0x684fe) = 1;
    iVar5 = *(int *)(DAT_00068694 + 0x6850c) + 1;
    *(int *)(DAT_00068694 + 0x6850c) = iVar5;
    *(int *)(DAT_00068698 + 0x68516) = iVar5;
  }
  if (-1 < *(int *)(DAT_0006869c + 0x6851c) << 0x1f) {
    *(int *)(DAT_0006869c + 0x6851c) = 1;
    iVar5 = *(int *)(DAT_000686a0 + 0x6852a) + 1;
    *(int *)(DAT_000686a0 + 0x6852a) = iVar5;
    *(int *)(DAT_000686a4 + 0x68534) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686a8 + 0x6853a) << 0x1f) {
    *(int *)(DAT_000686a8 + 0x6853a) = 1;
    iVar5 = *(int *)(DAT_000686ac + 0x68548) + 1;
    *(int *)(DAT_000686ac + 0x68548) = iVar5;
    *(int *)(DAT_000686b0 + 0x68552) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686b4 + 0x68558) << 0x1f) {
    *(int *)(DAT_000686b4 + 0x68558) = 1;
    iVar5 = *(int *)(DAT_000686b8 + 0x68566) + 1;
    *(int *)(DAT_000686b8 + 0x68566) = iVar5;
    *(int *)(DAT_000686bc + 0x68570) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686c0 + 0x68576) << 0x1f) {
    *(int *)(DAT_000686c0 + 0x68576) = 1;
    iVar5 = *(int *)(DAT_000686c4 + 0x68584) + 1;
    *(int *)(DAT_000686c4 + 0x68584) = iVar5;
    *(int *)(DAT_000686c8 + 0x6858e) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686cc + 0x68594) << 0x1f) {
    *(int *)(DAT_000686cc + 0x68594) = 1;
    iVar5 = *(int *)(DAT_000686d0 + 0x685a2) + 1;
    *(int *)(DAT_000686d0 + 0x685a2) = iVar5;
    *(int *)(DAT_000686d4 + 0x685ac) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686d8 + 0x685b2) << 0x1f) {
    *(int *)(DAT_000686d8 + 0x685b2) = 1;
    iVar5 = *(int *)(DAT_000686dc + 0x685c0) + 1;
    *(int *)(DAT_000686dc + 0x685c0) = iVar5;
    *(int *)(DAT_000686e0 + 0x685ca) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686e4 + 0x685d0) << 0x1f) {
    *(int *)(DAT_000686e4 + 0x685d0) = 1;
    iVar5 = *(int *)(DAT_000686e8 + 0x685de) + 1;
    *(int *)(DAT_000686e8 + 0x685de) = iVar5;
    *(int *)(DAT_000686ec + 0x685e8) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686f0 + 0x685ee) << 0x1f) {
    *(int *)(DAT_000686f0 + 0x685ee) = 1;
    iVar5 = *(int *)(DAT_000686f4 + 0x685fc) + 1;
    *(int *)(DAT_000686f4 + 0x685fc) = iVar5;
    *(int *)(DAT_000686f8 + 0x68606) = iVar5;
  }
  if (-1 < *(int *)(DAT_000686fc + 0x6860c) << 0x1f) {
    *(int *)(DAT_000686fc + 0x6860c) = 1;
    iVar5 = *(int *)(DAT_00068700 + 0x6861a) + 1;
    *(int *)(DAT_00068700 + 0x6861a) = iVar5;
    *(int *)(DAT_00068704 + 0x68624) = iVar5;
  }
  if (-1 < *(int *)(DAT_00068708 + 0x6862a) << 0x1f) {
    *(int *)(DAT_00068708 + 0x6862a) = 1;
    iVar5 = *(int *)(DAT_0006870c + 0x68638) + 1;
    *(int *)(DAT_0006870c + 0x68638) = iVar5;
    *(int *)(DAT_00068710 + 0x68642) = iVar5;
  }
  if (-1 < *(int *)(DAT_00068714 + 0x68648) << 0x1f) {
    *(int *)(DAT_00068714 + 0x68648) = 1;
    iVar5 = *(int *)(DAT_00068718 + 0x68656) + 1;
    *(int *)(DAT_00068718 + 0x68656) = iVar5;
    *(int *)(DAT_000687c8 + 0x68722) = iVar5;
  }
  if (-1 < *(int *)(DAT_000687cc + 0x68728) << 0x1f) {
    *(int *)(DAT_000687cc + 0x68728) = 1;
    iVar5 = *(int *)(DAT_000687d0 + 0x68736) + 1;
    *(int *)(DAT_000687d0 + 0x68736) = iVar5;
    *(int *)(DAT_000687d4 + 0x68740) = iVar5;
  }
  if (-1 < *(int *)(DAT_000687d8 + 0x68746) << 0x1f) {
    *(int *)(DAT_000687d8 + 0x68746) = 1;
    iVar5 = *(int *)(DAT_000687dc + 0x68754) + 1;
    *(int *)(DAT_000687dc + 0x68754) = iVar5;
    *(int *)(DAT_000687e0 + 0x6875e) = iVar5;
  }
  if (-1 < *(int *)(DAT_000687e4 + 0x68764) << 0x1f) {
    *(int *)(DAT_000687e4 + 0x68764) = 1;
    iVar5 = *(int *)(DAT_000687e8 + 0x68772) + 1;
    *(int *)(DAT_000687e8 + 0x68772) = iVar5;
    *(int *)(DAT_000687ec + 0x6877c) = iVar5;
  }
  if (-1 < *(int *)(DAT_000687f0 + 0x68782) << 0x1f) {
    *(int *)(DAT_000687f0 + 0x68782) = 1;
    iVar5 = *(int *)(DAT_000687f4 + 0x68790) + 1;
    *(int *)(DAT_000687f4 + 0x68790) = iVar5;
    *(int *)(DAT_000687f8 + 0x6879a) = iVar5;
  }
  return;
}



