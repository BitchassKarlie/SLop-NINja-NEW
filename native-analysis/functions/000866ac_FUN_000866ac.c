/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000866ac FUN_000866ac */

int FUN_000866ac(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_00092780(param_1 + 8);
  puVar5 = (undefined4 *)(param_1 + 0xac);
  do {
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    uVar4 = DAT_0008677c;
    uVar3 = DAT_00086778;
    uVar2 = DAT_00086774;
    uVar1 = DAT_00086770;
    puVar5 = puVar5 + 4;
  } while (puVar5 != (undefined4 *)(param_1 + 0xec));
  do {
    puVar5[0xc] = uVar1;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0xffffffff;
    puVar5[1] = uVar2;
    *puVar5 = 10;
    puVar5[2] = uVar3;
    puVar5[3] = uVar3;
    puVar5[4] = uVar1;
    puVar5[5] = uVar1;
    puVar5[8] = uVar1;
    puVar5[9] = uVar1;
    puVar5[10] = uVar1;
    puVar5[6] = uVar4;
    puVar5[7] = uVar1;
    puVar5[0xd] = 100;
    *(undefined *)(puVar5 + 0xb) = 1;
    *(undefined *)((int)puVar5 + 0x2d) = 1;
    puVar5 = puVar5 + 0x10;
  } while (puVar5 != (undefined4 *)(param_1 + 0x1ec));
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  iVar6 = param_1 + 0x20c;
  do {
    *(undefined4 *)(iVar6 + 4) = 0;
    *(undefined4 *)(iVar6 + 8) = 0;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    iVar6 = iVar6 + 0x10;
  } while (iVar6 != param_1 + 0x24c);
  return param_1;
}



