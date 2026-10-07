/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000990b0 FUN_000990b0 */

void FUN_000990b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_000990fc;
  *(undefined *)(param_1 + 4) = 1;
  iVar3 = DAT_00099100;
  *(undefined4 *)(param_1 + 0xc) = DAT_000990f8;
  puVar4 = *(undefined4 **)(iVar2 + 0x990be + iVar3);
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar1 = DAT_000990ec;
  puVar4[2] = DAT_000990e8;
  puVar4[3] = uVar1;
  uVar1 = DAT_000990f4;
  puVar4[4] = DAT_000990f0;
  puVar4[5] = uVar1;
  return;
}



