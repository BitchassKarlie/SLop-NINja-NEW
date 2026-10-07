/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008f684 FUN_0008f684 */

undefined4 * FUN_0008f684(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  param_1[0x101] = 0;
  *param_1 = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 4;
    *(undefined4 *)((int)param_1 + iVar5 + 4) = 0;
    iVar5 = iVar4;
  } while (iVar4 != 0x400);
  pvVar3 = operator_new__(0xd800);
  uVar2 = DAT_0008f6fc;
  uVar1 = DAT_0008f6f8;
  param_1[0x10b] = pvVar3;
  while( true ) {
    *(undefined4 *)((int)pvVar3 + iVar6 + 0xc) = uVar1;
    *(undefined4 *)(param_1[0x10b] + iVar6 + 0x10) = uVar1;
    *(undefined4 *)(param_1[0x10b] + iVar6 + 0x14) = uVar2;
    iVar5 = param_1[0x10b] + iVar6;
    iVar6 = iVar6 + 0x24;
    *(undefined4 *)(iVar5 + 8) = uVar1;
    if (iVar6 == 0xd800) break;
    pvVar3 = (void *)param_1[0x10b];
  }
  return param_1;
}



