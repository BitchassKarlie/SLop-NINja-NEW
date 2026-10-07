/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1424 FUN_000b1424 */

undefined4 * FUN_000b1424(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_000b1468;
  if ((*(int *)(param_2 + 0x68) == 0) ||
     (iVar3 = *(int *)(*(int *)(param_2 + 0x38) + param_3 * 0x44 + 0x40), iVar3 < 0)) {
    uVar2 = *(undefined4 *)(DAT_000b1468 + 0xb1458);
    uVar4 = *(undefined4 *)(DAT_000b1468 + 0xb145c);
    uVar5 = *(undefined4 *)(DAT_000b1468 + 0xb1460);
    puVar6 = (undefined4 *)(DAT_000b1468 + 0xb1464);
    *param_1 = *(undefined4 *)(DAT_000b1468 + 0xb1454);
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    uVar2 = *(undefined4 *)((int)&DAT_000b1468 + iVar1);
    uVar4 = *(undefined4 *)(_INIT_115 + iVar1);
    uVar5 = *(undefined4 *)(iVar1 + 0xb1470);
    param_1[4] = *puVar6;
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    uVar2 = *(undefined4 *)(iVar1 + 0xb1478);
    uVar4 = *(undefined4 *)(iVar1 + 0xb147c);
    uVar5 = *(undefined4 *)(iVar1 + 0xb1480);
    param_1[8] = *(undefined4 *)(iVar1 + 0xb1474);
    param_1[9] = uVar2;
    param_1[10] = uVar4;
    param_1[0xb] = uVar5;
    uVar2 = *(undefined4 *)(iVar1 + 0xb1488);
    uVar4 = *(undefined4 *)(iVar1 + 0xb148c);
    uVar5 = *(undefined4 *)(iVar1 + 0xb1490);
    param_1[0xc] = *(undefined4 *)(iVar1 + 0xb1484);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
  }
  else {
    memmove(param_1,(void *)(*(int *)(*(int *)(param_2 + 0x68) + 0x18) + iVar3 * 0x40),0x40);
  }
  return param_1;
}



