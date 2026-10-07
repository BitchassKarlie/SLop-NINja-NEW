/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00073bc8 FUN_00073bc8 */

undefined4 * FUN_00073bc8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = param_1 + 1;
  do {
    iVar3 = iVar3 + 0x34;
    *(undefined *)(puVar4 + 0xc) = 1;
    puVar4[4] = 0;
    uVar1 = DAT_00073c20;
    puVar4 = puVar4 + 0xd;
  } while (iVar3 != 0x680);
  puVar4 = param_1;
  do {
    uVar2 = FUN_000a5e64();
    *(undefined *)(puVar4 + 3) = 1;
    *(undefined *)((int)puVar4 + 0xd) = 0;
    puVar4[4] = uVar1;
    *(undefined *)((int)puVar4 + 0xe) = 0;
    puVar4[2] = 0;
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 0xd;
  } while (puVar4 != param_1 + 0x1a0);
  *param_1 = uVar1;
  return param_1;
}



