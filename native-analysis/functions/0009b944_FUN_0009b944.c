/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b944 FUN_0009b944 */

undefined4 * FUN_0009b944(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0009b990;
  puVar2 = (undefined4 *)operator_new(0x38);
  uVar4 = *(undefined4 *)(iVar1 + 0x9b956 + DAT_0009b994);
  puVar3 = &UNK_0009bb30 + DAT_0009b998;
  puVar2[2] = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[8] = uVar4;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = puVar3;
  puVar2[5] = 5;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = uVar4;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = uVar4;
  FUN_0009b908(param_1,puVar2);
  return puVar2;
}



