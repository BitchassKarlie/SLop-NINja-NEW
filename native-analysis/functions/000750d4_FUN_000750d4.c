/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000750d4 FUN_000750d4 */

undefined4 * FUN_000750d4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_2[3] == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_2[5];
    iVar3 = param_2[7];
  }
  else {
    iVar2 = FUN_000745b4(param_1 + 2);
    param_1[3] = iVar2;
    iVar3 = iVar2;
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar3 = iVar1;
      iVar2 = *(int *)(iVar1 + 0x10);
    }
    param_1[4] = iVar3;
    param_1[5] = param_2[5];
    iVar3 = param_2[7];
  }
  if (iVar3 == 0) {
    param_1[7] = 0;
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_000745b4(param_1 + 6);
    param_1[7] = iVar2;
    iVar3 = iVar2;
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar3 = iVar1;
      iVar2 = *(int *)(iVar1 + 0x10);
    }
  }
  param_1[8] = iVar3;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  uVar4 = param_2[0x11];
  uVar5 = param_2[0x12];
  uVar6 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar6;
  uVar4 = param_2[0x15];
  uVar5 = param_2[0x16];
  uVar6 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar4;
  param_1[0x16] = uVar5;
  param_1[0x17] = uVar6;
  uVar4 = param_2[0x19];
  uVar5 = param_2[0x1a];
  uVar6 = param_2[0x1b];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar4;
  param_1[0x1a] = uVar5;
  param_1[0x1b] = uVar6;
  uVar4 = param_2[0x1d];
  uVar5 = param_2[0x1e];
  uVar6 = param_2[0x1f];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar4;
  param_1[0x1e] = uVar5;
  param_1[0x1f] = uVar6;
  uVar4 = param_2[0x21];
  uVar5 = param_2[0x22];
  uVar6 = param_2[0x23];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar4;
  param_1[0x22] = uVar5;
  param_1[0x23] = uVar6;
  uVar4 = param_2[0x25];
  uVar5 = param_2[0x26];
  uVar6 = param_2[0x27];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar4;
  param_1[0x26] = uVar5;
  param_1[0x27] = uVar6;
  uVar4 = param_2[0x29];
  uVar5 = param_2[0x2a];
  uVar6 = param_2[0x2b];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar4;
  param_1[0x2a] = uVar5;
  param_1[0x2b] = uVar6;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_00074714(param_1 + 0x2c,param_1 + 0x2c,0,param_2 + 0x2c,param_2[0x2d],param_2 + 0x2c,
               param_2[0x2e]);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = 0;
  FUN_00017d64(param_1 + 0x31,param_2[0x31]);
  return param_1;
}



