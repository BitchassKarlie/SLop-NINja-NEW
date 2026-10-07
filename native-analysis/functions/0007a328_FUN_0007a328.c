/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a328 FUN_0007a328 */

undefined4 * FUN_0007a328(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  memcpy(param_1 + 2,param_2 + 2,0x80);
  uVar1 = param_2[0x23];
  uVar2 = param_2[0x24];
  uVar3 = param_2[0x25];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  uVar1 = param_2[0x27];
  uVar2 = param_2[0x28];
  uVar3 = param_2[0x29];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar1;
  param_1[0x28] = uVar2;
  param_1[0x29] = uVar3;
  FUN_00017d64(param_1 + 0x2a,param_2[0x2a]);
  param_1[0x2b] = param_2[0x2b];
  FUN_00017d64(param_1 + 0x2c,param_2[0x2c]);
  param_1[0x2d] = param_2[0x2d];
  FUN_00017d64(param_1 + 0x2e,param_2[0x2e]);
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  return param_1;
}



