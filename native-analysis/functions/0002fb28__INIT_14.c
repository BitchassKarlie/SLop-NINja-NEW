/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002fb28 _INIT_14 */

void _INIT_14(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_20;
  int local_1c;
  
  iVar6 = DAT_0002fdd8 + 0x2fb38;
  if (-1 < *(int *)(DAT_0002fdd4 + 0x2fb30) << 0x1f) {
    *(int *)(DAT_0002fdd4 + 0x2fb30) = 1;
    iVar2 = DAT_0002fddc;
    uVar1 = DAT_0002fdd0;
    uVar7 = DAT_0002fdcc;
    *(undefined4 *)(DAT_0002fddc + 0x2fb4c) = DAT_0002fdd0;
    *(undefined4 *)(iVar2 + 0x2fb50) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb54) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb58) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb5c) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb60) = uVar1;
    *(undefined4 *)(iVar2 + 0x2fb64) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb68) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb6c) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb70) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb74) = uVar1;
    *(undefined4 *)(iVar2 + 0x2fb78) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb7c) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb80) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb84) = uVar7;
    *(undefined4 *)(iVar2 + 0x2fb88) = uVar1;
  }
  iVar4 = DAT_0002fee0;
  iVar3 = DAT_0002fedc;
  iVar2 = DAT_0002fed8;
  uVar7 = DAT_0002fed4;
  iVar8 = DAT_0002fde4;
  if (-1 < *(int *)(DAT_0002fde0 + 0x2fb90) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_0002fedc + 0x2febc);
    *(int *)(DAT_0002fde0 + 0x2fb90) = 1;
    *puVar5 = uVar7;
    *(undefined4 *)(iVar3 + 0x2fec0) = uVar7;
    *(undefined4 *)(iVar3 + 0x2fec4) = uVar7;
    __aeabi_atexit(puVar5,iVar4 + 0x2fecc,*(undefined4 *)(iVar6 + iVar2));
    iVar8 = iVar2;
  }
  iVar3 = DAT_0002fdf0;
  iVar2 = DAT_0002fdec;
  uVar7 = DAT_0002fdcc;
  if (-1 < *(int *)(DAT_0002fde8 + 0x2fb9e) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_0002fdec + 0x2fbb0);
    *(int *)(DAT_0002fde8 + 0x2fb9e) = 1;
    *puVar5 = uVar7;
    *(undefined4 *)(iVar2 + 0x2fbb4) = uVar7;
    __aeabi_atexit(puVar5,iVar3 + 0x2fbbc,*(undefined4 *)(iVar6 + iVar8));
  }
  iVar3 = DAT_0002fdf8;
  iVar2 = DAT_0002fdf4;
  uVar7 = *(undefined4 *)(iVar6 + iVar8);
  iVar6 = DAT_0002fdf4 + 0x2fbd2;
  *(undefined *)(DAT_0002fdf4 + 0x30209) = 0xff;
  *(undefined *)(iVar2 + 0x30208) = 0;
  *(undefined *)(iVar2 + 0x30207) = 0;
  *(undefined *)(iVar2 + 0x30206) = 0;
  __aeabi_atexit(iVar2 + 0x30206,iVar3 + 0x2fbda,uVar7);
  *(undefined4 *)(iVar2 + 0x2fd52) = 0;
  FUN_00099424(iVar2 + 0x3017e);
  __aeabi_atexit(iVar6,DAT_0002fdfc + 0x2fc04,uVar7);
  iVar6 = DAT_0002fe00;
  *(undefined *)(iVar2 + 0x301fa) = 1;
  *(undefined4 *)(iVar2 + 0x301da) = 0;
  local_20 = iVar6 + 0x2fc1c;
  local_1c = DAT_0002fe04 + 0x2fc2c;
  (**(code **)(iVar6 + 0x2fc24))(&local_20,iVar2 + 0x301da);
  local_20 = DAT_0002fe08 + 0x2fc40;
  __aeabi_atexit(iVar2 + 0x301da,DAT_0002fe0c + 0x2fc3c,uVar7);
  if (-1 < *(int *)(DAT_0002fe10 + 0x2fc48) << 0x1f) {
    *(int *)(DAT_0002fe10 + 0x2fc48) = 1;
    iVar6 = *(int *)(DAT_0002fe14 + 0x2fc54) + 1;
    *(int *)(DAT_0002fe14 + 0x2fc54) = iVar6;
    *(int *)(DAT_0002fe18 + 0x2fc5e) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe1c + 0x2fc64) << 0x1f) {
    *(int *)(DAT_0002fe1c + 0x2fc64) = 1;
    iVar6 = *(int *)(DAT_0002fe20 + 0x2fc72) + 1;
    *(int *)(DAT_0002fe20 + 0x2fc72) = iVar6;
    *(int *)(DAT_0002fe24 + 0x2fc7c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe28 + 0x2fc82) << 0x1f) {
    *(int *)(DAT_0002fe28 + 0x2fc82) = 1;
    iVar6 = *(int *)(DAT_0002fe2c + 0x2fc90) + 1;
    *(int *)(DAT_0002fe2c + 0x2fc90) = iVar6;
    *(int *)(DAT_0002fe30 + 0x2fc9a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe34 + 0x2fca0) << 0x1f) {
    *(int *)(DAT_0002fe34 + 0x2fca0) = 1;
    iVar6 = *(int *)(DAT_0002fe38 + 0x2fcae) + 1;
    *(int *)(DAT_0002fe38 + 0x2fcae) = iVar6;
    *(int *)(DAT_0002fe3c + 0x2fcb8) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe40 + 0x2fcbe) << 0x1f) {
    *(int *)(DAT_0002fe40 + 0x2fcbe) = 1;
    iVar6 = *(int *)(DAT_0002fe44 + 0x2fccc) + 1;
    *(int *)(DAT_0002fe44 + 0x2fccc) = iVar6;
    *(int *)(DAT_0002fe48 + 0x2fcd6) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe4c + 0x2fcdc) << 0x1f) {
    *(int *)(DAT_0002fe4c + 0x2fcdc) = 1;
    iVar6 = *(int *)(DAT_0002fe50 + 0x2fcea) + 1;
    *(int *)(DAT_0002fe50 + 0x2fcea) = iVar6;
    *(int *)(DAT_0002fe54 + 0x2fcf4) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe58 + 0x2fcfa) << 0x1f) {
    *(int *)(DAT_0002fe58 + 0x2fcfa) = 1;
    iVar6 = *(int *)(DAT_0002fe5c + 0x2fd08) + 1;
    *(int *)(DAT_0002fe5c + 0x2fd08) = iVar6;
    *(int *)(DAT_0002fe60 + 0x2fd12) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe64 + 0x2fd18) << 0x1f) {
    *(int *)(DAT_0002fe64 + 0x2fd18) = 1;
    iVar6 = *(int *)(DAT_0002fe68 + 0x2fd26) + 1;
    *(int *)(DAT_0002fe68 + 0x2fd26) = iVar6;
    *(int *)(DAT_0002fe6c + 0x2fd30) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe70 + 0x2fd36) << 0x1f) {
    *(int *)(DAT_0002fe70 + 0x2fd36) = 1;
    iVar6 = *(int *)(DAT_0002fe74 + 0x2fd44) + 1;
    *(int *)(DAT_0002fe74 + 0x2fd44) = iVar6;
    *(int *)(DAT_0002fe78 + 0x2fd4e) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe7c + 0x2fd54) << 0x1f) {
    *(int *)(DAT_0002fe7c + 0x2fd54) = 1;
    iVar6 = *(int *)(DAT_0002fe80 + 0x2fd62) + 1;
    *(int *)(DAT_0002fe80 + 0x2fd62) = iVar6;
    *(int *)(DAT_0002fe84 + 0x2fd6c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe88 + 0x2fd72) << 0x1f) {
    *(int *)(DAT_0002fe88 + 0x2fd72) = 1;
    iVar6 = *(int *)(DAT_0002fe8c + 0x2fd80) + 1;
    *(int *)(DAT_0002fe8c + 0x2fd80) = iVar6;
    *(int *)(DAT_0002fe90 + 0x2fd8a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fe94 + 0x2fd90) << 0x1f) {
    *(int *)(DAT_0002fe94 + 0x2fd90) = 1;
    iVar6 = *(int *)(DAT_0002fe98 + 0x2fd9e) + 1;
    *(int *)(DAT_0002fe98 + 0x2fd9e) = iVar6;
    *(int *)(DAT_0002fe9c + 0x2fda8) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002fea0 + 0x2fdae) << 0x1f) {
    *(int *)(DAT_0002fea0 + 0x2fdae) = 1;
    iVar6 = *(int *)(DAT_0002fea4 + 0x2fdbc) + 1;
    *(int *)(DAT_0002fea4 + 0x2fdbc) = iVar6;
    *(int *)(DAT_0002fea8 + 0x2fdc6) = iVar6;
  }
  return;
}



