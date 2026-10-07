/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004d8f4 _INIT_33 */

void _INIT_33(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar6 = DAT_0004dbb4 + 0x4d904;
  if (-1 < *(int *)(DAT_0004dbb0 + 0x4d8fe) << 0x1f) {
    *(int *)(DAT_0004dbb0 + 0x4d8fe) = 1;
    iVar2 = DAT_0004dbb8;
    uVar1 = DAT_0004dbac;
    uVar9 = DAT_0004dba8;
    *(undefined4 *)(DAT_0004dbb8 + 0x4d918) = DAT_0004dbac;
    *(undefined4 *)(iVar2 + 0x4d91c) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d920) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d924) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d928) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d92c) = uVar1;
    *(undefined4 *)(iVar2 + 0x4d930) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d934) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d938) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d93c) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d940) = uVar1;
    *(undefined4 *)(iVar2 + 0x4d944) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d948) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d94c) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d950) = uVar9;
    *(undefined4 *)(iVar2 + 0x4d954) = uVar1;
  }
  iVar7 = DAT_0004ddb0;
  iVar3 = DAT_0004ddac;
  iVar2 = DAT_0004dda8;
  uVar9 = DAT_0004dd58;
  iVar8 = DAT_0004dbc0;
  if (-1 < *(int *)(DAT_0004dbbc + 0x4d95c) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0004ddac + 0x4dd42);
    *(int *)(DAT_0004dbbc + 0x4d95c) = 1;
    *puVar4 = uVar9;
    *(undefined4 *)(iVar3 + 0x4dd46) = uVar9;
    *(undefined4 *)(iVar3 + 0x4dd4a) = uVar9;
    __aeabi_atexit(puVar4,iVar7 + 0x4dd52,*(undefined4 *)(iVar6 + iVar2));
    iVar8 = iVar2;
  }
  iVar3 = DAT_0004dbcc;
  iVar2 = DAT_0004dbc8;
  uVar9 = DAT_0004dba8;
  if (-1 < *(int *)(DAT_0004dbc4 + 0x4d96a) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0004dbc8 + 0x4d97c);
    *(int *)(DAT_0004dbc4 + 0x4d96a) = 1;
    *puVar4 = uVar9;
    *(undefined4 *)(iVar2 + 0x4d980) = uVar9;
    __aeabi_atexit(puVar4,iVar3 + 0x4d988,*(undefined4 *)(iVar6 + iVar8));
  }
  iVar7 = DAT_0004dbd8;
  iVar3 = DAT_0004dbd4;
  iVar2 = DAT_0004dbd0;
  uVar9 = *(undefined4 *)(iVar6 + iVar8);
  puVar5 = (undefined *)(DAT_0004dbd0 + 0x4d998);
  iVar6 = DAT_0004dbd0 + 0x4d99c;
  *(undefined *)(DAT_0004dbd0 + 0x4d99b) = 0xff;
  *(undefined *)(iVar2 + 0x4d99a) = 0;
  *(undefined *)(iVar2 + 0x4d999) = 0;
  iVar7 = iVar7 + 0x4d9ae;
  *puVar5 = 0;
  __aeabi_atexit(puVar5,iVar3 + 0x4d9a2,uVar9);
  FUN_0004d8ec(iVar6);
  __aeabi_atexit(iVar6,iVar7,uVar9);
  FUN_0004d8ec(iVar2 + 0x4d9a0);
  __aeabi_atexit(iVar2 + 0x4d9a0,iVar7,uVar9);
  FUN_0004d8ec(iVar2 + 0x4d9a4);
  __aeabi_atexit(iVar2 + 0x4d9a4,iVar7,uVar9);
  FUN_0004d8ec(iVar2 + 0x4d9a8);
  __aeabi_atexit(iVar2 + 0x4d9a8,iVar7,uVar9);
  FUN_0004d8ec(iVar2 + 0x4d9ac);
  __aeabi_atexit(iVar2 + 0x4d9ac,iVar7,uVar9);
  FUN_0004d8ec(iVar2 + 0x4d9b0);
  __aeabi_atexit(iVar2 + 0x4d9b0,iVar7,uVar9);
  if (-1 < *(int *)(DAT_0004dbdc + 0x4da2a) << 0x1f) {
    *(int *)(DAT_0004dbdc + 0x4da2a) = 1;
    iVar6 = *(int *)(DAT_0004dbe0 + 0x4da38) + 1;
    *(int *)(DAT_0004dbe0 + 0x4da38) = iVar6;
    *(int *)(DAT_0004dbe4 + 0x4da42) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dbe8 + 0x4da48) << 0x1f) {
    *(int *)(DAT_0004dbe8 + 0x4da48) = 1;
    iVar6 = *(int *)(DAT_0004dbec + 0x4da56) + 1;
    *(int *)(DAT_0004dbec + 0x4da56) = iVar6;
    *(int *)(DAT_0004dbf0 + 0x4da60) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dbf4 + 0x4da66) << 0x1f) {
    *(int *)(DAT_0004dbf4 + 0x4da66) = 1;
    iVar6 = *(int *)(DAT_0004dbf8 + 0x4da74) + 1;
    *(int *)(DAT_0004dbf8 + 0x4da74) = iVar6;
    *(int *)(DAT_0004dbfc + 0x4da7e) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc00 + 0x4da84) << 0x1f) {
    *(int *)(DAT_0004dc00 + 0x4da84) = 1;
    iVar6 = *(int *)(DAT_0004dc04 + 0x4da92) + 1;
    *(int *)(DAT_0004dc04 + 0x4da92) = iVar6;
    *(int *)(DAT_0004dc08 + 0x4da9c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc0c + 0x4daa2) << 0x1f) {
    *(int *)(DAT_0004dc0c + 0x4daa2) = 1;
    iVar6 = *(int *)(DAT_0004dc10 + 0x4dab0) + 1;
    *(int *)(DAT_0004dc10 + 0x4dab0) = iVar6;
    *(int *)(DAT_0004dc14 + 0x4daba) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc18 + 0x4dac0) << 0x1f) {
    *(int *)(DAT_0004dc18 + 0x4dac0) = 1;
    iVar6 = *(int *)(DAT_0004dc1c + 0x4dace) + 1;
    *(int *)(DAT_0004dc1c + 0x4dace) = iVar6;
    *(int *)(DAT_0004dc20 + 0x4dad8) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc24 + 0x4dade) << 0x1f) {
    *(int *)(DAT_0004dc24 + 0x4dade) = 1;
    iVar6 = *(int *)(DAT_0004dc28 + 0x4daec) + 1;
    *(int *)(DAT_0004dc28 + 0x4daec) = iVar6;
    *(int *)(DAT_0004dc2c + 0x4daf6) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc30 + 0x4dafc) << 0x1f) {
    *(int *)(DAT_0004dc30 + 0x4dafc) = 1;
    iVar6 = *(int *)(DAT_0004dc34 + 0x4db0a) + 1;
    *(int *)(DAT_0004dc34 + 0x4db0a) = iVar6;
    *(int *)(DAT_0004dc38 + 0x4db14) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc3c + 0x4db1a) << 0x1f) {
    *(int *)(DAT_0004dc3c + 0x4db1a) = 1;
    iVar6 = *(int *)(DAT_0004dc40 + 0x4db28) + 1;
    *(int *)(DAT_0004dc40 + 0x4db28) = iVar6;
    *(int *)(DAT_0004dc44 + 0x4db32) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc48 + 0x4db38) << 0x1f) {
    *(int *)(DAT_0004dc48 + 0x4db38) = 1;
    iVar6 = *(int *)(DAT_0004dc4c + 0x4db46) + 1;
    *(int *)(DAT_0004dc4c + 0x4db46) = iVar6;
    *(int *)(DAT_0004dc50 + 0x4db50) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc54 + 0x4db56) << 0x1f) {
    *(int *)(DAT_0004dc54 + 0x4db56) = 1;
    iVar6 = *(int *)(DAT_0004dc58 + 0x4db64) + 1;
    *(int *)(DAT_0004dc58 + 0x4db64) = iVar6;
    *(int *)(DAT_0004dc5c + 0x4db6e) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc60 + 0x4db74) << 0x1f) {
    *(int *)(DAT_0004dc60 + 0x4db74) = 1;
    iVar6 = *(int *)(DAT_0004dc64 + 0x4db82) + 1;
    *(int *)(DAT_0004dc64 + 0x4db82) = iVar6;
    *(int *)(DAT_0004dc68 + 0x4db8c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dc6c + 0x4db92) << 0x1f) {
    *(int *)(DAT_0004dc6c + 0x4db92) = 1;
    iVar6 = *(int *)(DAT_0004dc70 + 0x4dba0) + 1;
    *(int *)(DAT_0004dc70 + 0x4dba0) = iVar6;
    *(int *)(DAT_0004dd5c + 0x4dc7a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dd60 + 0x4dc80) << 0x1f) {
    *(int *)(DAT_0004dd60 + 0x4dc80) = 1;
    iVar6 = *(int *)(DAT_0004dd64 + 0x4dc8e) + 1;
    *(int *)(DAT_0004dd64 + 0x4dc8e) = iVar6;
    *(int *)(DAT_0004dd68 + 0x4dc98) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dd6c + 0x4dc9e) << 0x1f) {
    *(int *)(DAT_0004dd6c + 0x4dc9e) = 1;
    iVar6 = *(int *)(DAT_0004dd70 + 0x4dcac) + 1;
    *(int *)(DAT_0004dd70 + 0x4dcac) = iVar6;
    *(int *)(DAT_0004dd74 + 0x4dcb6) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dd78 + 0x4dcbc) << 0x1f) {
    *(int *)(DAT_0004dd78 + 0x4dcbc) = 1;
    iVar6 = *(int *)(DAT_0004dd7c + 0x4dcca) + 1;
    *(int *)(DAT_0004dd7c + 0x4dcca) = iVar6;
    *(int *)(DAT_0004dd80 + 0x4dcd4) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dd84 + 0x4dcda) << 0x1f) {
    *(int *)(DAT_0004dd84 + 0x4dcda) = 1;
    iVar6 = *(int *)(DAT_0004dd88 + 0x4dce8) + 1;
    *(int *)(DAT_0004dd88 + 0x4dce8) = iVar6;
    *(int *)(DAT_0004dd8c + 0x4dcf2) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dd90 + 0x4dcf8) << 0x1f) {
    *(int *)(DAT_0004dd90 + 0x4dcf8) = 1;
    iVar6 = *(int *)(DAT_0004dd94 + 0x4dd06) + 1;
    *(int *)(DAT_0004dd94 + 0x4dd06) = iVar6;
    *(int *)(DAT_0004dd98 + 0x4dd10) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004dd9c + 0x4dd16) << 0x1f) {
    *(int *)(DAT_0004dd9c + 0x4dd16) = 1;
    iVar6 = *(int *)(DAT_0004dda0 + 0x4dd24) + 1;
    *(int *)(DAT_0004dda0 + 0x4dd24) = iVar6;
    *(int *)(DAT_0004dda4 + 0x4dd2e) = iVar6;
  }
  return;
}



