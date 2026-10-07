/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098da0 FUN_00098da0 */

void FUN_00098da0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = DAT_00098df8 + 0x98db2;
  iVar1 = 0;
  do {
    *(undefined *)((int)param_1 + iVar1 + 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  iVar1 = 0;
  do {
    *(undefined *)((int)param_1 + iVar1 + 0x44) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = 0;
  } while (iVar1 != 0x40);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  do {
    *(undefined *)((int)param_1 + iVar2 + 0xb4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x40);
  *(undefined *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  return;
}



