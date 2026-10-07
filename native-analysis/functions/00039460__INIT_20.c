/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00039460 _INIT_20 */

void _INIT_20(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar7 = DAT_00039780 + 0x39474;
  if (-1 < *(int *)(DAT_0003977c + 0x3946e) << 0x1f) {
    *(int *)(DAT_0003977c + 0x3946e) = 1;
    iVar9 = DAT_00039784;
    uVar5 = DAT_00039758;
    uVar1 = DAT_00039754;
    *(undefined4 *)(DAT_00039784 + 0x39488) = DAT_00039758;
    *(undefined4 *)(iVar9 + 0x3948c) = uVar1;
    *(undefined4 *)(iVar9 + 0x39490) = uVar1;
    *(undefined4 *)(iVar9 + 0x39494) = uVar1;
    *(undefined4 *)(iVar9 + 0x39498) = uVar1;
    *(undefined4 *)(iVar9 + 0x3949c) = uVar5;
    *(undefined4 *)(iVar9 + 0x394a0) = uVar1;
    *(undefined4 *)(iVar9 + 0x394a4) = uVar1;
    *(undefined4 *)(iVar9 + 0x394a8) = uVar1;
    *(undefined4 *)(iVar9 + 0x394ac) = uVar1;
    *(undefined4 *)(iVar9 + 0x394b0) = uVar5;
    *(undefined4 *)(iVar9 + 0x394b4) = uVar1;
    *(undefined4 *)(iVar9 + 0x394b8) = uVar1;
    *(undefined4 *)(iVar9 + 0x394bc) = uVar1;
    *(undefined4 *)(iVar9 + 0x394c0) = uVar1;
    *(undefined4 *)(iVar9 + 0x394c4) = uVar5;
  }
  iVar2 = DAT_00039988;
  iVar9 = DAT_00039980;
  uVar1 = DAT_0003992c;
  if (*(int *)(DAT_00039788 + 0x394cc) << 0x1f < 0) {
    iVar6 = DAT_0003978c + 0x394dc;
    iVar9 = DAT_00039790;
  }
  else {
    iVar6 = DAT_00039984 + 0x39912;
    *(int *)(DAT_00039788 + 0x394cc) = 1;
    uVar5 = *(undefined4 *)(iVar7 + iVar9);
    *(undefined4 *)(iVar2 + 0x39916) = uVar1;
    *(undefined4 *)(iVar2 + 0x3991a) = uVar1;
    *(undefined4 *)(iVar2 + 0x3991e) = uVar1;
    __aeabi_atexit((undefined4 *)(iVar2 + 0x39916),iVar6,uVar5);
  }
  iVar3 = DAT_0003979c;
  iVar2 = DAT_00039798;
  uVar1 = DAT_00039754;
  if (-1 < *(int *)(DAT_00039794 + 0x394e0) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_00039798 + 0x394f2);
    *(int *)(DAT_00039794 + 0x394e0) = 1;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar2 + 0x394f6) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x394fe,*(undefined4 *)(iVar7 + iVar9));
  }
  iVar3 = DAT_000397a4;
  iVar2 = DAT_000397a0;
  uVar8 = *(undefined4 *)(iVar7 + iVar9);
  puVar4 = (undefined4 *)(DAT_000397a0 + 0x39514);
  *(undefined *)(DAT_000397a0 + 0x39553) = 0xff;
  *(undefined *)(iVar2 + 0x39552) = 0;
  uVar1 = DAT_00039754;
  *(undefined *)(iVar2 + 0x39551) = 0;
  uVar5 = DAT_0003975c;
  *(undefined *)(iVar2 + 0x39550) = 0;
  __aeabi_atexit((undefined *)(iVar2 + 0x39550),iVar3 + 0x39520,uVar8);
  iVar7 = DAT_000397a8;
  *(undefined4 *)(iVar2 + 0x39554) = 0;
  __aeabi_atexit((undefined4 *)(iVar2 + 0x39554),iVar7 + 0x39544,uVar8);
  *(undefined4 *)(iVar2 + 0x39518) = DAT_00039760;
  *puVar4 = uVar1;
  *(undefined4 *)(iVar2 + 0x3951c) = uVar1;
  __aeabi_atexit(puVar4,iVar6,uVar8);
  *(undefined4 *)(iVar2 + 0x39524) = DAT_00039764;
  *(undefined4 *)(iVar2 + 0x39520) = uVar5;
  *(undefined4 *)(iVar2 + 0x39528) = uVar1;
  __aeabi_atexit(iVar2 + 0x39520,iVar6,uVar8);
  *(undefined4 *)(iVar2 + 0x3952c) = DAT_00039768;
  *(undefined4 *)(iVar2 + 0x39530) = uVar1;
  *(undefined4 *)(iVar2 + 0x39534) = uVar1;
  __aeabi_atexit(iVar2 + 0x3952c,iVar6,uVar8);
  *(undefined4 *)(iVar2 + 0x39538) = DAT_0003976c;
  *(undefined4 *)(iVar2 + 0x3953c) = uVar1;
  *(undefined4 *)(iVar2 + 0x39540) = uVar1;
  __aeabi_atexit(iVar2 + 0x39538,iVar6,uVar8);
  *(undefined4 *)(iVar2 + 0x39544) = DAT_00039770;
  *(undefined4 *)(iVar2 + 0x39548) = uVar5;
  *(undefined4 *)(iVar2 + 0x3954c) = uVar1;
  __aeabi_atexit(iVar2 + 0x39544,iVar6,uVar8);
  *(undefined4 *)(iVar2 + 0x39558) = DAT_00039774;
  *(undefined4 *)(iVar2 + 0x39560) = uVar1;
  *(undefined4 *)(iVar2 + 0x3955c) = DAT_00039778;
  __aeabi_atexit(iVar2 + 0x39558,iVar6,uVar8);
  iVar7 = DAT_000397b0;
  uVar5 = DAT_00039758;
  if (-1 < *(int *)(DAT_000397ac + 0x395f6) << 0x1f) {
    *(int *)(DAT_000397ac + 0x395f6) = 1;
    *(undefined4 *)(iVar7 + 0x39608) = uVar5;
    *(undefined4 *)(iVar7 + 0x3960c) = uVar1;
    *(undefined4 *)(iVar7 + 0x39610) = uVar1;
    __aeabi_atexit((undefined4 *)(iVar7 + 0x39608),iVar6,uVar8);
  }
  if (-1 < *(int *)(DAT_000397b4 + 0x39620) << 0x1f) {
    *(int *)(DAT_000397b4 + 0x39620) = 1;
    iVar7 = *(int *)(DAT_000397b8 + 0x3962e) + 1;
    *(int *)(DAT_000397b8 + 0x3962e) = iVar7;
    *(int *)(DAT_000397bc + 0x39638) = iVar7;
  }
  if (-1 < *(int *)(DAT_000397c0 + 0x3963e) << 0x1f) {
    *(int *)(DAT_000397c0 + 0x3963e) = 1;
    iVar7 = *(int *)(DAT_000397c4 + 0x3964c) + 1;
    *(int *)(DAT_000397c4 + 0x3964c) = iVar7;
    *(int *)(DAT_000397c8 + 0x39656) = iVar7;
  }
  if (-1 < *(int *)(DAT_000397cc + 0x3965c) << 0x1f) {
    *(int *)(DAT_000397cc + 0x3965c) = 1;
    iVar7 = *(int *)(DAT_000397d0 + 0x3966a) + 1;
    *(int *)(DAT_000397d0 + 0x3966a) = iVar7;
    *(int *)(DAT_000397d4 + 0x39674) = iVar7;
  }
  if (-1 < *(int *)(DAT_000397d8 + 0x3967a) << 0x1f) {
    *(int *)(DAT_000397d8 + 0x3967a) = 1;
    iVar7 = *(int *)(DAT_000397dc + 0x39688) + 1;
    *(int *)(DAT_000397dc + 0x39688) = iVar7;
    *(int *)(DAT_000397e0 + 0x39692) = iVar7;
  }
  if (-1 < *(int *)(DAT_000397e4 + 0x39698) << 0x1f) {
    *(int *)(DAT_000397e4 + 0x39698) = 1;
    iVar7 = *(int *)(DAT_000397e8 + 0x396a6) + 1;
    *(int *)(DAT_000397e8 + 0x396a6) = iVar7;
    *(int *)(DAT_000397ec + 0x396b0) = iVar7;
  }
  if (-1 < *(int *)(DAT_000397f0 + 0x396b6) << 0x1f) {
    *(int *)(DAT_000397f0 + 0x396b6) = 1;
    iVar7 = *(int *)(DAT_000397f4 + 0x396c4) + 1;
    *(int *)(DAT_000397f4 + 0x396c4) = iVar7;
    *(int *)(DAT_000397f8 + 0x396ce) = iVar7;
  }
  if (-1 < *(int *)(DAT_000397fc + 0x396d4) << 0x1f) {
    *(int *)(DAT_000397fc + 0x396d4) = 1;
    iVar7 = *(int *)(DAT_00039800 + 0x396e2) + 1;
    *(int *)(DAT_00039800 + 0x396e2) = iVar7;
    *(int *)(DAT_00039804 + 0x396ec) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039808 + 0x396f2) << 0x1f) {
    *(int *)(DAT_00039808 + 0x396f2) = 1;
    iVar7 = *(int *)(DAT_0003980c + 0x39700) + 1;
    *(int *)(DAT_0003980c + 0x39700) = iVar7;
    *(int *)(DAT_00039810 + 0x3970a) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039814 + 0x39710) << 0x1f) {
    *(int *)(DAT_00039814 + 0x39710) = 1;
    iVar7 = *(int *)(DAT_00039818 + 0x3971e) + 1;
    *(int *)(DAT_00039818 + 0x3971e) = iVar7;
    *(int *)(DAT_0003981c + 0x39728) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039820 + 0x3972e) << 0x1f) {
    *(int *)(DAT_00039820 + 0x3972e) = 1;
    iVar7 = *(int *)(DAT_00039824 + 0x3973c) + 1;
    *(int *)(DAT_00039824 + 0x3973c) = iVar7;
    *(int *)(DAT_00039828 + 0x39746) = iVar7;
  }
  if (-1 < *(int *)(DAT_0003982c + 0x3974c) << 0x1f) {
    *(int *)(DAT_0003982c + 0x3974c) = 1;
    iVar7 = *(int *)(DAT_00039930 + 0x3983a) + 1;
    *(int *)(DAT_00039930 + 0x3983a) = iVar7;
    *(int *)(DAT_00039934 + 0x39844) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039938 + 0x3984a) << 0x1f) {
    *(int *)(DAT_00039938 + 0x3984a) = 1;
    iVar7 = *(int *)(DAT_0003993c + 0x39858) + 1;
    *(int *)(DAT_0003993c + 0x39858) = iVar7;
    *(int *)(DAT_00039940 + 0x39862) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039944 + 0x39868) << 0x1f) {
    *(int *)(DAT_00039944 + 0x39868) = 1;
    iVar7 = *(int *)(DAT_00039948 + 0x39876) + 1;
    *(int *)(DAT_00039948 + 0x39876) = iVar7;
    *(int *)(DAT_0003994c + 0x39880) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039950 + 0x39886) << 0x1f) {
    *(int *)(DAT_00039950 + 0x39886) = 1;
    iVar7 = *(int *)(DAT_00039954 + 0x39894) + 1;
    *(int *)(DAT_00039954 + 0x39894) = iVar7;
    *(int *)(DAT_00039958 + 0x3989e) = iVar7;
  }
  if (-1 < *(int *)(DAT_0003995c + 0x398a4) << 0x1f) {
    *(int *)(DAT_0003995c + 0x398a4) = 1;
    iVar7 = *(int *)(DAT_00039960 + 0x398b2) + 1;
    *(int *)(DAT_00039960 + 0x398b2) = iVar7;
    *(int *)(DAT_00039964 + 0x398bc) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039968 + 0x398c2) << 0x1f) {
    *(int *)(DAT_00039968 + 0x398c2) = 1;
    iVar7 = *(int *)(DAT_0003996c + 0x398d0) + 1;
    *(int *)(DAT_0003996c + 0x398d0) = iVar7;
    *(int *)(DAT_00039970 + 0x398da) = iVar7;
  }
  if (-1 < *(int *)(DAT_00039974 + 0x398e0) << 0x1f) {
    *(int *)(DAT_00039974 + 0x398e0) = 1;
    iVar7 = *(int *)(DAT_00039978 + 0x398ee) + 1;
    *(int *)(DAT_00039978 + 0x398ee) = iVar7;
    *(int *)(DAT_0003997c + 0x398f8) = iVar7;
  }
  return;
}



