/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7c90 _zip_dirent_torrent_normalize */

void _zip_dirent_torrent_normalize(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_000b7cf8;
  piVar3 = (int *)(DAT_000b7cf8 + 0xb7c9a);
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    *(undefined4 *)(DAT_000b7cf8 + 0xb7c9e) = 0;
    *(undefined4 *)(iVar1 + 0xb7cb6) = 0;
    *(undefined4 *)(iVar1 + 0xb7ca2) = 0x20;
    *(undefined4 *)(iVar1 + 0xb7cba) = 0;
    *(undefined4 *)(iVar1 + 0xb7ca6) = 0x17;
    *(undefined4 *)(iVar1 + 0xb7cbe) = 0;
    *(undefined4 *)(iVar1 + 0xb7caa) = 0x18;
    *(undefined4 *)(iVar1 + 0xb7cae) = 0xb;
    *(undefined4 *)(iVar1 + 0xb7cb2) = 0x60;
    iVar2 = mktime((tm *)(iVar1 + 0xb7c9e));
    *piVar3 = iVar2;
  }
  *(int *)(param_1 + 4) = iVar2;
  param_1[1] = 0x14;
  param_1[2] = 2;
  *param_1 = 0;
  param_1[3] = 8;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  free(*(void **)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  free(*(void **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  return;
}



