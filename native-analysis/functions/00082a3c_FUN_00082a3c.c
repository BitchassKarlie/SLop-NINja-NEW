/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082a3c FUN_00082a3c */

undefined4 * FUN_00082a3c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)operator_new(0x40);
  FUN_000829c0();
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar2 = param_1[5];
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  puVar1[4] = param_1[4];
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  uVar2 = param_1[9];
  uVar3 = param_1[10];
  uVar4 = param_1[0xb];
  puVar1[8] = param_1[8];
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  uVar2 = param_1[0xd];
  uVar3 = param_1[0xe];
  uVar4 = param_1[0xf];
  puVar1[0xc] = param_1[0xc];
  puVar1[0xd] = uVar2;
  puVar1[0xe] = uVar3;
  puVar1[0xf] = uVar4;
  *(undefined *)(puVar1 + 4) = 0;
  return puVar1;
}



