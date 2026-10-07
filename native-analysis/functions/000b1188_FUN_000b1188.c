/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1188 FUN_000b1188 */

undefined4 * FUN_000b1188(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_000b11cc;
  if ((*(int *)(param_2 + 0x68) == 0) ||
     (iVar3 = *(int *)(*(int *)(param_2 + 0x38) + param_3 * 0x44 + 0x40), iVar3 < 0)) {
    uVar2 = *(undefined4 *)(DAT_000b11cc + 0xb11bc);
    uVar4 = *(undefined4 *)(DAT_000b11cc + 0xb11c0);
    uVar5 = *(undefined4 *)(DAT_000b11cc + 0xb11c4);
    puVar6 = (undefined4 *)(DAT_000b11cc + 0xb11c8);
    *param_1 = *(undefined4 *)(DAT_000b11cc + 0xb11b8);
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    uVar2 = *(undefined4 *)((int)&DAT_000b11cc + iVar1);
    uVar4 = *(undefined4 *)(FUN_000b11d0 + iVar1);
    uVar5 = *(undefined4 *)(iVar1 + 0xb11d4);
    param_1[4] = *puVar6;
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    uVar2 = *(undefined4 *)(iVar1 + 0xb11dc);
    uVar4 = *(undefined4 *)(iVar1 + 0xb11e0);
    uVar5 = *(undefined4 *)(iVar1 + 0xb11e4);
    param_1[8] = *(undefined4 *)(iVar1 + 0xb11d8);
    param_1[9] = uVar2;
    param_1[10] = uVar4;
    param_1[0xb] = uVar5;
    uVar2 = *(undefined4 *)(iVar1 + 0xb11ec);
    uVar4 = *(undefined4 *)(iVar1 + 0xb11f0);
    uVar5 = *(undefined4 *)(iVar1 + 0xb11f4);
    param_1[0xc] = *(undefined4 *)(iVar1 + 0xb11e8);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
  }
  else {
    memmove(param_1,(void *)(*(int *)(*(int *)(param_2 + 0x68) + 0x14) + iVar3 * 0x40),0x40);
  }
  return param_1;
}



